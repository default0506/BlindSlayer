#include "OptionScene.h"

Scene* OptionScene::createScene()
{
	auto scene = Scene::create();

	auto layer = OptionScene::create();

	scene->addChild(layer);

	return scene;
}

bool OptionScene::init()
{
	if (!Layer::init())
	{
		return false;
	}
	winSize = Director::getInstance()->getWinSize();
	Size visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();

	stageNum = UserDefault::getInstance()->getIntegerForKey("continue");

	sprintf(tmp, "%d", stageNum);

	int index = 2;

	//배경 이미지
	auto backgroundSpr = Sprite::create("deco\\startImg.png");
	backgroundSpr->setPosition(winSize.width / 20 * 16, winSize.height / 10 * 2.5);
	backgroundSpr->setScale(1.3);
	this->addChild(backgroundSpr, 1);

	//back button
	auto backBtn = Label::createWithTTF("B A C K", "fonts\\Japanese Style.ttf", 40);

	auto item0 = MenuItemLabel::create(backBtn, CC_CALLBACK_1(OptionScene::returnScene, this));

	auto menu = Menu::create(item0, NULL);
	menu->setPosition(winSize.width / 10 * 9, winSize.height / 10 * 9);
	this->addChild(menu);

	// Label
	auto volumeLabel = Label::createWithTTF("V O L U M E", "fonts\\Japanese style.ttf", 50);
	volumeLabel->setColor(Color3B::YELLOW);
	volumeLabel->setPosition(Vec2(visibleSize.width / 2 + origin.x, visibleSize.height - (++index) * 70));
	this->addChild(volumeLabel);

	// slider
	auto slider = ui::Slider::create();
	slider->loadBarTexture("slider\\Slider_Back.png"); // what the slider looks like
	slider->loadSlidBallTextures("slider\\SliderNode_Normal.png", "slider\\SliderNode_Press.png", "slider\\SliderNode_Disable.png");
	slider->loadProgressBarTexture("slider\\Slider_PressBar.png");
	slider->setPosition(Vec2(visibleSize.width / 2 + origin.x, visibleSize.height - (++index) * 70));
	slider->setPercent(UserDefault::getInstance()->getFloatForKey("volume")*100);

	slider->addEventListener(CC_CALLBACK_2(OptionScene::sliderEvent, this));

	this->addChild(slider);

	//데이터 리셋 버튼
	auto btn_0 = MenuItemImage::create("button\\btn_normal.png", "button\\btn_selected.png",
		CC_CALLBACK_1(OptionScene::menuCallback, this));
	btn_0->setScale(0.4);

	auto btn_menu = Menu::create(btn_0, NULL);
	btn_menu->setPosition(Vec2(visibleSize.width / 2 + origin.x, visibleSize.height - (++index) * 75));
	this->addChild(btn_menu);


	//stage cheat 라벨
	auto stageLabel = Label::createWithTTF("S T A G E", "fonts\\Japanese style.ttf", 50);
	stageLabel->setColor(Color3B::YELLOW);
	stageLabel->setPosition(Vec2(visibleSize.width / 2 + origin.x, visibleSize.height - (++index) * 80));
	this->addChild(stageLabel);

	stageInfo = Label::createWithTTF(tmp, "fonts\\Japanese style.ttf", 40);
	stageInfo->setPosition(Vec2(visibleSize.width / 2 + origin.x, visibleSize.height - (++index)* 80));
	this->addChild(stageInfo);

	//stage cheat 버튼
	auto btn_c_0 = MenuItemImage::create("button\\btn_up_normal.png", "button\\btn_up_selected.png",
		CC_CALLBACK_1(OptionScene::stageCheatUp, this));
	btn_c_0->setScale(0.4);
	auto btn_c_1 = MenuItemImage::create("button\\btn_down_normal.png", "button\\btn_down_selected.png",
		CC_CALLBACK_1(OptionScene::stageCheatDown, this));
	btn_c_1->setScale(0.4);

	auto btn_menu2 = Menu::create(btn_c_0, btn_c_1, NULL);
	btn_menu2->setPosition(Vec2(visibleSize.width / 2 + origin.x, visibleSize.height - (index) * 80));
	btn_menu2->alignItemsHorizontallyWithPadding(30);
	this->addChild(btn_menu2,5);

	return true;
}

void OptionScene::menuCallback(Ref *s)
{
	UserDefault::getInstance()->setIntegerForKey("continue", 0);
	stageNum = UserDefault::getInstance()->getIntegerForKey("continue");

	sprintf(tmp, "%d", stageNum);
	stageInfo->setString(tmp);
}

void OptionScene::stageCheatUp(Ref *s)
{
	if (stageNum < 7)
		stageNum++;

	sprintf(tmp, "%d", stageNum);
	stageInfo->setString(tmp);
	UserDefault::getInstance()->setIntegerForKey("continue", stageNum);
}

void OptionScene::stageCheatDown(Ref *s)
{
	if (stageNum > 0)
		stageNum--;

	sprintf(tmp, "%d", stageNum);
	stageInfo->setString(tmp);
	UserDefault::getInstance()->setIntegerForKey("continue", stageNum);
}

void OptionScene::sliderEvent(Ref *sender, ui::Slider::EventType type)
{
	if (type == ui::Slider::EventType::ON_PERCENTAGE_CHANGED)
	{
		ui::Slider *slider = dynamic_cast<ui::Slider *> (sender);
		int percent = slider->getPercent();

		AudioEngine::setVolume(UserDefault::getInstance()->getIntegerForKey("BGM"), percent / 100.0);

		if (UserDefault::getInstance()->getIntegerForKey("inBGM") != 0)
			AudioEngine::setVolume(UserDefault::getInstance()->getIntegerForKey("inBGM"), percent / 100.0);

		UserDefault::getInstance()->setFloatForKey("volume", percent / 100.0);

	}
}

void OptionScene::returnScene(Ref *s)
{
	Director::getInstance()->popScene();
}