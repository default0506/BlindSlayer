#include "IntroScene.h"

Scene* IntroScene::createScene()
{
	auto scene = Scene::create();

	auto layer = IntroScene::create();

	scene->addChild(layer);

	return scene;
}

bool IntroScene::init()
{
	if (!Layer::init())
	{
		return false;
	}
	winSize = Director::getInstance()->getWinSize();

	//GUI
	storyLine[0] = Sprite::create("tutorial\\story0.png");
	storyLine[0]->setScale(0.6);
	storyLine[0]->setAnchorPoint(Point(0, 0));
	storyLine[0]->setPosition(winSize.width / 10, winSize.height / 12 * 10);
	this->addChild(storyLine[0]);

	storyLine[1] = Sprite::create("tutorial\\story1.png");
	storyLine[1]->setAnchorPoint(Point(0, 0));
	storyLine[1]->setPosition(winSize.width/2 - 50, storyLine[0]->getPositionY() - 80);
	this->addChild(storyLine[1]);

	storyLine[2] = Sprite::create("tutorial\\story2.png");
	storyLine[2]->setScale(0.6);
	storyLine[2]->setAnchorPoint(Point(0.5, 0));
	storyLine[2]->setPosition(winSize.width/2, storyLine[1]->getPositionY() - 30);
	this->addChild(storyLine[2]);

	storyLine[3] = Sprite::create("tutorial\\story3.png");
	storyLine[3]->setAnchorPoint(Point(0, 0));
	storyLine[3]->setPosition(storyLine[0]->getPositionX() - 40, storyLine[2]->getPositionY() - 80);
	this->addChild(storyLine[3]);

	storyLine[4] = Sprite::create("tutorial\\story4.png");
	storyLine[4]->setScale(0.7);
	storyLine[4]->setAnchorPoint(Point(0, 0));
	storyLine[4]->setPosition(storyLine[3]->getPositionX()+70, storyLine[3]->getPositionY() - 60);
	this->addChild(storyLine[4]);

	storyLine[5] = Sprite::create("tutorial\\story5.png");
	storyLine[5]->setScale(0.6);
	storyLine[5]->setAnchorPoint(Point(0, 0));
	storyLine[5]->setPosition(storyLine[0]->getPositionX()- 60, storyLine[4]->getPositionY() - 80);
	this->addChild(storyLine[5]);

	storyLine[6] = Sprite::create("tutorial\\story6.png");
	storyLine[6]->setScale(0.8);
	storyLine[6]->setAnchorPoint(Point(0, 0));
	storyLine[6]->setPosition(storyLine[0]->getPositionX() - 100, storyLine[5]->getPositionY() - 90);
	this->addChild(storyLine[6]);

	for (int i = 0; i < 7; i++)
	{
		storyLine[i]->setOpacity(0);
	}

	//조작방법 설명
	auto tutorialSpr = Sprite::create("tutorial\\tutorial.png");
	tutorialSpr->setScale(0.35);
	tutorialSpr->setPosition(winSize.width / 2, winSize.height / 8 + 30);
	this->addChild(tutorialSpr);

	//skip button
	auto skipstoryLine = Label::createWithTTF("S K I P", "fonts\\Japanese Style.ttf", 40);

	auto item0 = MenuItemLabel::create(skipstoryLine, CC_CALLBACK_1(IntroScene::nextScene, this));

	auto menu = Menu::create(item0, NULL);
	menu->setPosition(winSize.width /10 * 9, winSize.height / 10 * 9);
	this->addChild(menu);

	this->scheduleUpdate();

	return true;
}

void IntroScene::nextScene(Ref *s)
{
	AudioEngine::stopAll();
	UserDefault::getInstance()->setIntegerForKey("inBGM",AudioEngine::play2d("sound\\inGameBGM.mp3", true,UserDefault::getInstance()->getFloatForKey("volume")));
	auto scene = TransitionFade::create(1.0, StageOne::createScene());
	Director::getInstance()->replaceScene(scene);
}

void IntroScene::update(float timeDelta)
{
	if (index < 7)
	{
		opt += timeDelta * 100;

		if (opt >= 255)
			opt = 255;

		storyLine[index]->setOpacity(opt);
		if (opt == 255 && index < 7)
		{
			if (index != 6)
				storyLine[index]->setOpacity(80);
			index++;
			opt = 0;
		}
	}
}