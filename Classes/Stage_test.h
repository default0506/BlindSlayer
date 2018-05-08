#ifndef __STAGE_TEST_H__
#define __STAGE_TEST_H__

#include "cocos2d.h"
#include "CAnimation.h"
#include "Slayer.h"
#include "Monster.h"

#define SLAYER_IDLE 0
#define SLAYER_ATTACK 1
#define SLAYER_WALK 2
#define SLAYER_JUMP 3

using namespace cocos2d;
USING_NS_CC;

class Stage_test : public Layer
{
	//'BlindSlayer'(플레이어)
private:
	slayer player;
	Monster dog[5];
private:
	Size winSize;
	static int map[24][32];
	std::list<Sprite*> blockList;
	//키보드 키 누름 여부
private:
	bool onLeftArrowKey = false;
	bool onRightArrowKey = false;
	bool onXbuttonKey = false;
	bool onCbuttonKey = false;
private:
	Sprite *hpbar_bg0;
	Sprite *hpbar_bg1;
	Sprite *hpbar;
	Sprite *eyeStone;
	Sprite *attackEffect;
	std::list<Sprite*> lifeSprList;
	std::list<Sprite*>::iterator itr;
private:
	std::list<Monster> monsterList;
	std::list<Monster>::iterator monItr;
private:
	float delayTime = 0.0;
public:
	static cocos2d::Scene* createScene();

	virtual bool init();

	//인스턴스 초기화
	void InitData();

	// implement the "static create()" method manually
	CREATE_FUNC(Stage_test);

	void DrawMap();

	void UpdateHP();

	void UpdateLife();

	virtual void onKeyPressed(EventKeyboard::KeyCode keyCode, Event* event);

	virtual void onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event);

	virtual void update(float timeDelta);
public:
	void CreateMonster(char* fileName);
	void ResetEffect(Ref *s);
};

#endif