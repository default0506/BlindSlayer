#ifndef __MENUSCENE_H__
#define __MENUSCENE_H__

#include "cocos2d.h"
#include "IntroScene.h"
#include "OptionScene.h"
#include "StageOne.h"
#include "StageTwo.h"
#include "StageThree.h"
#include "StageFour.h"
#include "StageFive.h"
#include "StageSix.h"
#include "StageSeven.h"
#include "AudioEngine.h"

USING_NS_CC;

using namespace cocos2d;
using namespace experimental;

class MenuScene : public Layer
{
private:
	Sprite *backgroundSpr;
	Sprite *backgroundSpr2;
	Size winSize;
	int stageStored;
private:
	Label *newLabel;
	Label *continueLabel;
	Label *optionLabel;
	Label *exitLabel;
private:
	MenuItemLabel *item0;
	MenuItemLabel *item1;
	MenuItemLabel *item2;
	MenuItemLabel *item3;
private:
	int bgmId = AudioEngine::play2d("sound\\bgm.mp3", true, UserDefault::getInstance()->getFloatForKey("volume"));
	float timer = 0.0;
	std::list<Sprite*> flowerList;
	
public:
	static Scene* createScene();

	virtual bool init();

	CREATE_FUNC(MenuScene);

	void DataInit();

	void newScene(Ref *s);
	void continueScene(Ref *s);
	void optionScene(Ref *s);
	void Exit(Ref *s);

	virtual void update(float timeDelta);
};

#endif