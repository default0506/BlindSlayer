#ifndef __STARTSCENE_H__
#define __STARTSCENE_H__

#include "cocos2d.h"
#include "AudioEngine.h"
#include "MenuScene.h"

USING_NS_CC;

using namespace cocos2d;
using namespace experimental;

class StartScene : public Layer
{
private:
	Sprite *backgroundSpr;
	Sprite *backgroundSpr2;
	Size winSize;
	float flashTime;
private:
	Label *titleSpr;
	Label *pressKeySpr;
public:
	static Scene* createScene();

	virtual bool init();

	CREATE_FUNC(StartScene);

	void DataInit();

	void nextScene(Ref *s);

	virtual void update(float timeDelta);

	virtual void onKeyPressed(EventKeyboard::KeyCode keyCode, Event* event);

	virtual bool onTouchBegan(Touch *pTouch, Event *pEvent);
};

#endif