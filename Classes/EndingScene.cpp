#include "EndingScene.h"

Scene* EndingScene::createScene()
{
	auto scene = Scene::create();

	auto layer = EndingScene::create();

	scene->addChild(layer);

	return scene;
}

bool EndingScene::init()
{
	if (!Layer::init())
	{
		return false;
	}
	winSize = Director::getInstance()->getWinSize();

	//GUI
	handSpr = Sprite::create("deco\\hand.png");
	handSpr->setPosition(winSize.width / 2, winSize.height / 2);
	this->addChild(handSpr,2);

	eyeStone = Sprite::createWithSpriteFrameName("TheEyeOfRainbow_7.png");
	eyeStone->setPosition(winSize.width / 2 + 90, winSize.height / 2 + 40);
	eyeStone->setScale(2.0);
	this->addChild(eyeStone, 3);

	flashSpr = Sprite::create("flash\\flash_0.png");
	flashSpr->setPosition(winSize.width / 2 + 90, winSize.height / 2 + 40);
	flashSpr->setScale(2.0);
	this->addChild(flashSpr, 2);

	flashAnimation = Animation::create();
	flashAnimation->setDelayPerUnit(0.15);

	flashAnimation->addSpriteFrameWithFile("flash\\flash_0.png");
	flashAnimation->addSpriteFrameWithFile("flash\\flash_1.png");
	flashAnimation->addSpriteFrameWithFile("flash\\flash_2.png");

	flashAnimate = Animate::create(flashAnimation);
	flashAction = RepeatForever::create(flashAnimate);

	flashSpr->runAction(flashAction);

	endingLine[0] = Sprite::create("ending\\ending_0.png");
	endingLine[0]->setAnchorPoint(Point(0, 0));
	endingLine[0]->setPosition(winSize.width / 10, winSize.height / 12 * 10);
	this->addChild(endingLine[0]);

	endingLine[1] = Sprite::create("ending\\ending_1.png");
	endingLine[1]->setAnchorPoint(Point(0, 0));
	endingLine[1]->setPosition(winSize.width / 10 + 300, winSize.height / 12 * 9);
	this->addChild(endingLine[1]);

	endingLine[2] = Sprite::create("ending\\ending_2.png");
	endingLine[2]->setScale(0.8);
	endingLine[2]->setAnchorPoint(Point(0, 0));
	endingLine[2]->setPosition(winSize.width / 10, winSize.height / 12 * 8);
	this->addChild(endingLine[2]);

	endingLine[3] = Sprite::create("ending\\ending_3.png");
	endingLine[3]->setScale(0.8);
	endingLine[3]->setAnchorPoint(Point(0, 0));
	endingLine[3]->setPosition(winSize.width / 3, winSize.height / 12 * 3);
	this->addChild(endingLine[3]);

	endingLine[4] = Sprite::create("ending\\ending_4.png");
	endingLine[4]->setScale(0.7);
	endingLine[4]->setAnchorPoint(Point(0, 0));
	endingLine[4]->setPosition(winSize.width / 10, winSize.height / 12 * 2);
	this->addChild(endingLine[4]);

	endingLine[5] = Sprite::create("ending\\ending_5.png");
	endingLine[5]->setAnchorPoint(Point(0.5, 0));
	endingLine[5]->setPosition(winSize.width / 2, winSize.height / 12 * 7);
	this->addChild(endingLine[5]);

	for (int i = 0; i < 6; i++)
		endingLine[i]->setOpacity(0);

	developerSpr = Sprite::create("ending\\developer.png");
	developerSpr->setScale(0.6);
	developerSpr->setOpacity(0);
	developerSpr->setPosition(winSize.width / 2, winSize.height / 7);
	this->addChild(developerSpr);

	//return button
	auto returnLine = Label::createWithTTF("R E T U R N", "fonts\\Japanese Style.ttf", 40);
	returnLine->setColor(Color3B::RED);
	auto item0 = MenuItemLabel::create(returnLine, CC_CALLBACK_1(EndingScene::nextScene, this));

	menu = Menu::create(item0, NULL);
	menu->setPosition(winSize.width / 2, winSize.height / 10 * 3);
	menu->setVisible(false);
	menu->setOpacity(0);
	this->addChild(menu);

	this->scheduleUpdate();

	return true;
}

void EndingScene::nextScene(Ref *s)
{
	AudioEngine::stopAll();
	auto scene = TransitionCrossFade::create(1.0, StartScene::createScene());
	Director::getInstance()->replaceScene(scene);
}

void EndingScene::update(float timeDelta)
{
	if (index < 5)
	{
		opt += timeDelta * 70;

		if (opt >= 255)
			opt = 255;

		endingLine[index]->setOpacity(opt);
		if (opt == 255 && index < 5)
		{
			if (index != 4)
				endingLine[index]->setOpacity(80);
			index++;
			opt = 0;
		}
	}
	else if (opt <= 255)
	{
		opt += timeDelta * 50;

		if (opt >= 255)
			opt = 255;

		for (int i = 0; i < 5; i++)
		{
			endingLine[i]->setOpacity(0);
		}		
		endingLine[5]->setOpacity(opt);
		developerSpr->setOpacity(opt);
		menu->setVisible(true);
		menu->setOpacity(opt);
	}
}