#ifndef __MONSTER_H__
#define __MONSTER_H__

#include "cocos2d.h"
#include "CAnimation.h"

USING_NS_CC;

class Monster
{
private:
	Animation *soundAnimation;
	Animate *soundAnimate;
public:
	Sprite *monSpr;
	Sprite *monSoundSpr;
	RepeatForever *soundAction;
	int health;
	int power;
	bool Right;//몬스터 이동시 방향 결정에 관여
	Vec2 des;
	Vec2 pos;
	Vec2 monOrigin;
	Vec2 stdPos;
public:
	CAnimation monsterAnim;
public:
	Monster()
	{
		monSoundSpr = Sprite::create();
		monSoundSpr->setScale(0.2);
		//monSoundSpr->setAnchorPoint(Point(0.5, 0));
		monSoundSpr->setColor(Color3B::RED);

		soundAnimation = Animation::create();
		soundAnimation->setDelayPerUnit(0.15);

		soundAnimation->addSpriteFrameWithFile("soundImg\\sound_0.png");
		soundAnimation->addSpriteFrameWithFile("soundImg\\sound_1.png");
		soundAnimation->addSpriteFrameWithFile("soundImg\\sound_2.png");
		soundAnimation->addSpriteFrameWithFile("soundImg\\sound_3.png");
		soundAnimation->addSpriteFrameWithFile("soundImg\\sound_2.png");
		soundAnimation->addSpriteFrameWithFile("soundImg\\sound_1.png");

		soundAnimate = Animate::create(soundAnimation);
		soundAction = RepeatForever::create(soundAnimate);
	}
};


#endif