#include "EnterScene.h"

Scene* EnterScene::createScene()
{
	auto scene = Scene::create();

	auto layer = EnterScene::create();

	scene->addChild(layer);

	return scene;
}

bool EnterScene::init()
{
	if (!Layer::init())
	{
		return false;
	}
	winSize = Director::getInstance()->getWinSize();

	whoMadeSpr = Sprite::create("deco\\made.png");
	whoMadeSpr->setPosition(winSize.width / 2, winSize.height / 2 - 100);
	whoMadeSpr->setScale(0.7);
	this->addChild(whoMadeSpr,1);
	
	this->scheduleOnce(schedule_selector(EnterScene::nextScene), 1.5f);

	return true;
}

void EnterScene::nextScene(float timeDelta)
{
	auto scene = TransitionFade::create(1.0, StartScene::createScene());
	Director::getInstance()->replaceScene(scene);
}