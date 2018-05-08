#ifndef __STAGESIX_H__
#define __STAGESIX_H__

#include "cocos2d.h"
#include "CAnimation.h"
#include "Slayer.h"
#include "Monster.h"
#include "MenuScene.h"
#include "StageSeven.h"
#include <cmath>

#define SLAYER_IDLE 0
#define SLAYER_ATTACK 1
#define SLAYER_WALK 2
#define SLAYER_JUMP 3

#define PI 180

using namespace cocos2d;
USING_NS_CC;

class StageSix : public Layer
{
public:
	enum K_BTN
	{
		K_BTN_DEFAULT,
		K_LEFT,
		K_RIGHT,
		K_X,
		K_C,
		K_BTN_MAX
	};
private:
	bool gamePlay = true;
	//플레이어 및 몬스터
private:
	slayer player;
	Monster golem[8];
private:
	Size winSize;
	static int map[24][32];
	std::vector<Sprite*> blockList;
	//키보드 키 누름 여부
private:
	bool is_kBTN[K_BTN_MAX];
private:
	Sprite *hpbar_bg0;
	Sprite *hpbar_bg1;
	Sprite *hpbar;
	Sprite *eyeStone;
	Sprite *attackEffect;
	Sprite *playerHit;
	std::list<Sprite*> lifeSprList;
	std::list<Sprite*>::iterator itr;
private:
	std::list<Monster> monsterList;
	std::list<Monster>::iterator monItr;
private:
	float delayTime = 0.0;
	float rot = 100;
	//사운드
private:
	float sndVol = UserDefault::getInstance()->getFloatForKey("volume");
	//pause관련 인스턴스
private:
	Menu *pause;
	bool onPause = false;
public:
	static cocos2d::Scene* createScene();

	virtual bool init();

	//인스턴스 초기화
	void InitData();

	// implement the "static create()" method manually
	CREATE_FUNC(StageSix);

	void DrawMap();

	void UpdateHP();

	void UpdateLife();

	virtual void onKeyPressed(EventKeyboard::KeyCode keyCode, Event* event);

	virtual void onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event);

	virtual void update(float timeDelta);
public:
	void CreateMonster();

	void ResetEffect(Ref *s);

	void nextStage(Ref *s);

	void reStage(Ref *s);

	void backToMenu(Ref *s);

	void pauseMenu(Ref *s);

	void Option(Ref *s);
};

#endif