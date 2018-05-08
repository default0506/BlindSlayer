#ifndef __STAGESCENE_ONE_H__
#define __STAGESCENE_ONE_H__

#include "cocos2d.h"
#include "CAnimation.h"
#include "Slayer.h"
#include "CMap.h"

#define SLAYER_IDLE 0
#define SLAYER_ATTACK 1
#define SLAYER_WALK 2
#define SLAYER_JUMP 3

#define PTM_RATIO 32

using namespace cocos2d;
USING_NS_CC;

class StageScene_ONE : public Layer
{
	//'BlindSlayer'(플레이어)
private:
	slayer player;
private:
	Size winSize;
	static int map[24][33];
	std::list<Sprite*> blockList;
	//키보드 키 누름 여부
private:
	bool onLeftArrowKey = false;
	bool ontRightArrowKey = false;
	bool onXKey = false;
	bool onCKey = false;
private:
	Sprite *hpbar_bg0;
	Sprite *hpbar_bg1;
	Sprite *hpbar;
	std::list<Sprite*> lifeSprList;
	std::list<Sprite*>::iterator itr;
public:
	static cocos2d::Scene* createScene();

	virtual bool init();

	//인스턴스 초기화
	void InitData();

	// implement the "static create()" method manually
	CREATE_FUNC(StageScene_ONE);

	void DrawMap();

	void UpdateHP();

	void UpdateLife();

	virtual void onKeyPressed(EventKeyboard::KeyCode keyCode, Event* event);

	virtual void onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event);

	virtual void update(float timeDelta);
};

#endif