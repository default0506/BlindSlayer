#ifndef __ENTERSECENE_H__
#define __ENTERSECENE_H__

#include "cocos2d.h"
#include "StartScene.h"

USING_NS_CC;

using namespace cocos2d;

class EnterScene : public Layer
{
private:
	Size winSize;
	float opt = 0;
private:
	Sprite *whoMadeSpr;
public:
	static Scene* createScene();

	virtual bool init();

	CREATE_FUNC(EnterScene);

	void nextScene(float timeDelta);
};

#endif