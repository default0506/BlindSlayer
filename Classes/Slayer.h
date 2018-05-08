#ifndef __SLAYER_H__
#define __SLAYER_H__

#include "cocos2d.h"
#include "CAnimation.h"
USING_NS_CC;

class slayer
{
public:
	Sprite *slayerSpr;
	int health;
	int attackPower;
	int life;
	int slayerState;
	int dir;
	bool isJump;
	bool isAir; //공중에 떠있는 상태
	bool isReach;
	bool isAlive;
	bool isGround;
	Vec2 pos;
	Vec2 maxHeight;
public:
	CAnimation slayerIdle;
	CAnimation slayerWalk;
	CAnimation slayerAttack;
};

#endif