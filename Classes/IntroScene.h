#ifndef __INTROSCENE_H__
#define __INTROSCENE_H__

#include "cocos2d.h"
#include "StageOne.h"

USING_NS_CC;

using namespace cocos2d;

class IntroScene : public Layer
{
private:
	Size winSize;
	float opt = 0;
private:
	Sprite *storyLine[7];
	int index = 0;
public:
	static Scene* createScene();

	virtual bool init();

	CREATE_FUNC(IntroScene);

	void nextScene(Ref *s);

	virtual void update(float timeDelta);
};

#endif