#ifndef __ENDINGSCENE_H__
#define __ENDINGSCENE_H__

#include "cocos2d.h"
#include "StartScene.h"

USING_NS_CC;

using namespace cocos2d;

class EndingScene : public Layer
{
private:
	Size winSize;
	float opt = 0;
private:
	Sprite *endingLine[6];
	Sprite *handSpr;
	Sprite *eyeStone;
	Sprite *flashSpr;
	Sprite *developerSpr;
	Menu *menu;
	int index = 0;
private:
	Animation *flashAnimation;
	Animate *flashAnimate;
	Action *flashAction;	
public:
	static Scene* createScene();

	virtual bool init();

	CREATE_FUNC(EndingScene);

	void nextScene(Ref *s);

	virtual void update(float timeDelta);
};

#endif