#include "MenuScene.h"

Scene* MenuScene::createScene()
{
	auto scene = Scene::create();

	auto layer = MenuScene::create();

	scene->addChild(layer);

	return scene;
}

bool MenuScene::init()
{
	if (!Layer::init())
	{
		return false;
	}

	AudioEngine::resume(bgmId);

	DataInit();

	auto menuLabel = Label::createWithTTF("M E N U", "fonts\\Japanese Style.ttf", 90);
	menuLabel->setPosition(winSize.width / 2, winSize.height / 10 * 8);
	this->addChild(menuLabel);

	newLabel = Label::createWithTTF("N E W", "fonts\\Japanese Style.ttf", 50);
	continueLabel = Label::createWithTTF("C O N T I N U E", "fonts\\Japanese Style.ttf", 50);
	optionLabel = Label::createWithTTF("O P T I O N", "fonts\\Japanese Style.ttf", 50);
	exitLabel = Label::createWithTTF("E X I T", "fonts\\Japanese Style.ttf", 50);

	item0 = MenuItemLabel::create(newLabel, CC_CALLBACK_1(MenuScene::newScene, this));
	item1 = MenuItemLabel::create(continueLabel, CC_CALLBACK_1(MenuScene::continueScene, this));
	item2 = MenuItemLabel::create(optionLabel, CC_CALLBACK_1(MenuScene::optionScene, this));
	item3 = MenuItemLabel::create(exitLabel, CC_CALLBACK_1(MenuScene::Exit, this));

	auto menu = Menu::create(item0, item1, item2, item3, NULL);
	menu->alignItemsVerticallyWithPadding(30.0);
	menu->setPosition(winSize.width / 2, winSize.height / 2);
	this->addChild(menu);

	backgroundSpr = Sprite::create("deco\\startImg.png");
	backgroundSpr->setPosition(winSize.width / 20 * 16, winSize.height / 10 * 2.5);
	backgroundSpr->setScale(1.3);
	this->addChild(backgroundSpr, 1);

	this->scheduleUpdate();

	return true;
}

void MenuScene::DataInit()
{
	winSize = Director::getInstance()->getWinSize();

	stageStored = UserDefault::getInstance()->getIntegerForKey("continue");
}

void MenuScene::newScene(Ref *s)
{
	auto scene = TransitionFade::create(1.0, IntroScene::createScene());
	Director::getInstance()->replaceScene(scene);
}

void MenuScene::continueScene(Ref *s)
{
	stageStored = UserDefault::getInstance()->getIntegerForKey("continue");

	TransitionFade* scene;
	switch (stageStored)
	{
	case 1:
		AudioEngine::stopAll();
		UserDefault::getInstance()->setIntegerForKey("inBGM", AudioEngine::play2d("sound\\inGameBGM.mp3", true, UserDefault::getInstance()->getFloatForKey("volume")));
		scene = TransitionFade::create(1.0, StageOne::createScene());
		Director::getInstance()->replaceScene(scene);
		break;
	case 2:
		AudioEngine::stopAll();
		UserDefault::getInstance()->setIntegerForKey("inBGM", AudioEngine::play2d("sound\\inGameBGM.mp3", true, UserDefault::getInstance()->getFloatForKey("volume")));
		scene = TransitionFade::create(1.0, StageTwo::createScene());
		Director::getInstance()->replaceScene(scene);
		break;
	case 3:
		AudioEngine::stopAll();
		UserDefault::getInstance()->setIntegerForKey("inBGM", AudioEngine::play2d("sound\\inGameBGM.mp3", true, UserDefault::getInstance()->getFloatForKey("volume")));
		scene = TransitionFade::create(1.0, StageThree::createScene());
		Director::getInstance()->replaceScene(scene);
		break;
	case 4:
		AudioEngine::stopAll();
		UserDefault::getInstance()->setIntegerForKey("inBGM", AudioEngine::play2d("sound\\inGameBGM.mp3", true, UserDefault::getInstance()->getFloatForKey("volume")));
		scene = TransitionFade::create(1.0, StageFour::createScene());
		Director::getInstance()->replaceScene(scene);
		break;
	case 5:
		AudioEngine::stopAll();
		UserDefault::getInstance()->setIntegerForKey("inBGM", AudioEngine::play2d("sound\\inGameBGM.mp3", true, UserDefault::getInstance()->getFloatForKey("volume")));
		scene = TransitionFade::create(1.0, StageFive::createScene());
		Director::getInstance()->replaceScene(scene);
		break;
	case 6:
		AudioEngine::stopAll();
		UserDefault::getInstance()->setIntegerForKey("inBGM", AudioEngine::play2d("sound\\inGameBGM.mp3", true, UserDefault::getInstance()->getFloatForKey("volume")));
		scene = TransitionFade::create(1.0, StageSix::createScene());
		Director::getInstance()->replaceScene(scene);
		break;
	case 7:
		AudioEngine::stopAll();
		UserDefault::getInstance()->setIntegerForKey("inBGM", AudioEngine::play2d("sound\\inGameBGM.mp3", true, UserDefault::getInstance()->getFloatForKey("volume")));
		scene = TransitionFade::create(1.0, StageSeven::createScene());
		Director::getInstance()->replaceScene(scene);
		break;
	default:
		break;
	}
	
}

void MenuScene::optionScene(Ref *s)
{
	UserDefault::getInstance()->setIntegerForKey("BGM", bgmId);
	UserDefault::getInstance()->setFloatForKey("volume", AudioEngine::getVolume(bgmId));

	auto scene = OptionScene::createScene();
	Director::getInstance()->pushScene(scene);
}

void MenuScene::Exit(Ref *s)
{
	Director::getInstance()->end();
}

void MenuScene::update(float timeDelta)
{
	timer += timeDelta;
	std::list<Sprite*>::iterator itr;

	if (timer >= 1.0f)
	{
		auto newFlower = Sprite::create("deco\\flower.png");
		newFlower->setPosition(random() % 900 + 50, winSize.height);
		newFlower->setRotation(random() % 40);
		newFlower->setScale((random() % 10 + 1)*0.1);
		this->addChild(newFlower,-1);

		flowerList.push_back(newFlower);

		timer = 0;
	}

	itr = flowerList.begin();

	while (itr != flowerList.end())
	{
		if ((*itr)->getPositionY() <= 0)
		{
			this->removeChild((*itr));
			flowerList.erase(itr++);
			continue;
		}
		(*itr)->setPosition((*itr)->getPositionX()-0.3,(*itr)->getPositionY() - 2);
		(*itr)->setRotation((*itr)->getRotation() + 1);
		itr++;
	}


}