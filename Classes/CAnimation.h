//싱글톤??이거 뭐지
#ifndef __CANIMATION_H__
#define __CANIMATION_H__

#include "cocos2d.h"
using namespace cocos2d;

class CAnimation
{
	//화면에 표현될 오브젝트
private:
	Layer *parentLayer;
	std::list<Sprite*> SpriteList;
	std::list<Sprite*>::iterator itr;
private:
	bool Play;
	float AnimationInterval;
	float Timer;
	int Index;
	bool flipped;
	float opacity = 255;
public:
	void Create(char* imgName, Layer *_parentLayer, int end, int ZOrder, float size = 1.3);
	void Create_Custom(char* imgName, Layer *_parentLayer, int end, int ZOrder = 0);
	void Update(float timeDelta);
public:
	void setPosition(float x, float y);
	void setFrameNumber(int FrameNumber);
	int getFrameNumber();
	void setPlay(bool Value);
	void setAnimationInterval(float Value);
	void setFlipped(bool isFlipped);
	void setOpt(float opt);//투명도값 설정메서드
	void removeAllData();
};

#endif