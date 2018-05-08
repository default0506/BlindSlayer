#include "StartScene.h"

Scene* StartScene::createScene()
{
	auto scene = Scene::create();

	auto layer = StartScene::create();

	scene->addChild(layer);

	return scene;
}

bool StartScene::init()
{
	if (!Layer::init())
	{
		return false;
	}

	int volumeSize = UserDefault::getInstance()->getFloatForKey("volume") * 100;

	if (volumeSize == 0)
	{
		AudioEngine::play2d("sound\\bgm.mp3", true, 0.5);
		UserDefault::getInstance()->setFloatForKey("volume", 0.5);
	}
	else
		AudioEngine::play2d("sound\\bgm.mp3", true, UserDefault::getInstance()->getFloatForKey("volume"));

	DataInit();

	//키보드입력
	auto keyboardListener = EventListenerKeyboard::create();
	keyboardListener->onKeyPressed = CC_CALLBACK_2(StartScene::onKeyPressed, this);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(keyboardListener, this);
	Director::getInstance()->getOpenGLView()->setIMEKeyboardState(true);
	
	//터치
	//터치 이벤트 켜기
	this->setTouchEnabled(true);
	//디스패처 가져오기 - 리스너와 오브젝트를 연결해주는 역할
	auto dispatcher = Director::sharedDirector()->getEventDispatcher();
	//리스터 - 터치 위치를 알려주는 역할
	auto listener = EventListenerTouchOneByOne::create();
	listener->onTouchBegan = CC_CALLBACK_2(StartScene::onTouchBegan, this);
	dispatcher->addEventListenerWithSceneGraphPriority(listener, this);

	//GUI
	titleSpr = Label::createWithTTF("B L I N D  S L A Y E R", "fonts\\Japanese Style.ttf", 90);
	titleSpr->setPosition(winSize.width/2, winSize.height/10*7);
	this->addChild(titleSpr, 2);

	backgroundSpr = Sprite::create("deco\\startImg.png");
	backgroundSpr->setPosition(winSize.width / 20 * 16, winSize.height / 10 * 2.5);
	backgroundSpr->setScale(1.3);
	this->addChild(backgroundSpr, 1);

	backgroundSpr2 = Sprite::create("deco\\sword.png");
	backgroundSpr2->setPosition(winSize.width / 20 * 4, winSize.height / 10 * 6);
	backgroundSpr2->setScale(0.5);
	this->addChild(backgroundSpr2, 1);

	pressKeySpr = Label::createWithTTF("p r e s s   a n y   k e y   t o   s t a r t", "fonts\\Japanese Style.ttf", 30);
	pressKeySpr->setPosition(winSize.width / 2, winSize.height / 10 * 6 - 50);
	this->addChild(pressKeySpr, 2);

	this->scheduleUpdate();

	return true;
}

void StartScene::DataInit()
{
	winSize = Director::getInstance()->getWinSize();

	flashTime = 0;
}

void StartScene::nextScene(Ref *s)
{
	AudioEngine::stopAll();	
	auto scene = TransitionFade::create(0.5, MenuScene::createScene());
	Director::getInstance()->replaceScene(scene);
}

void StartScene::onKeyPressed(EventKeyboard::KeyCode keyCode, Event* event)
{
	nextScene(this);
}

bool StartScene::onTouchBegan(Touch *pTouch, Event *pEvent)
{
	nextScene(this);
	return true;
}

void StartScene::update(float timeDelta)
{
	flashTime += timeDelta;
	if (flashTime > 0.8f)
	{
		pressKeySpr->setVisible(false);
		flashTime = 0;
	}
	else if (flashTime > 0.2f)
		pressKeySpr->setVisible(true);
}