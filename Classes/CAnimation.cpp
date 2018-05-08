#include "CAnimation.h"

void CAnimation::Create(char* imgName, Layer *_parentLayer, int end, int ZOrder, float size)
{
	parentLayer = _parentLayer;
	int i = 0;

	for (int i = 0; i < end; i++)
	{
		char tmp[256] = { 0 };
		sprintf(tmp, "%s_%d.png", imgName, i);
		Sprite *newSprite = Sprite::createWithSpriteFrameName(tmp);
		if ((int)size >= 1.5)
			newSprite->setColor(Color3B::YELLOW);
		if (strcmp(imgName, "slayer") == 0 || strcmp(imgName, "slayer_walk") == 0 || strcmp(imgName, "slayer_attack") == 0)
			newSprite->setAnchorPoint(Point(0.5, 0.1));
		else
			newSprite->setAnchorPoint(Point(0.5, 0));
		newSprite->setPosition(0, 0);
		newSprite->setScale(size);
		newSprite->setVisible(false);
		parentLayer->addChild(newSprite, ZOrder);
		SpriteList.push_back(newSprite);
	}
	Play = true;
	Timer = 0.0f;
	Index = 0;
	AnimationInterval = 0.1f;
}

void CAnimation::Create_Custom(char* imgName, Layer *_parentLayer, int end, int ZOrder)
{
	parentLayer = _parentLayer;
	int i = 0;

	for (int i = 0; i < end; i++)
	{
		char tmp[256] = { 0 };
		sprintf(tmp, "%s_%d.png", imgName, i);
		Sprite *newSprite = Sprite::create(tmp);
		newSprite->setAnchorPoint(Point(0.5, 0.1));
		//if (newSprite == NULL) break;
		newSprite->setPosition(0, 0);
		newSprite->setScale(1.0);
		newSprite->setOpacity(0);
		newSprite->setVisible(false);
		parentLayer->addChild(newSprite, ZOrder);
		SpriteList.push_back(newSprite);
	}
	Play = true;
	Timer = 0.0f;
	Index = 0;
	AnimationInterval = 0.1f;
}

void CAnimation::Update(float timeDelta)
{

	if (Play == true)
	{
		Timer += timeDelta;
		if (Timer >= AnimationInterval)
		{
			if (Index >= SpriteList.size() - 1) Index = 0;
			else Index++;

			Timer = 0.0f;
		}		
	}

	//스프라이트 표현
	itr = SpriteList.begin();
	int i = 0;

	while (itr != SpriteList.end())
	{
		(*itr)->setFlippedX(flipped);
		(*itr)->setOpacity(opacity);

		if (i == Index)
		{
			(*itr)->setVisible(true);
			if (Play == false)
				(*itr)->setVisible(false);
		}
		else
			(*itr)->setVisible(false);

		
		itr++;
		i++;
	}

	
}

void CAnimation::setOpt(float opt)
{
	opacity = opt;
}

void CAnimation::setPosition(float x, float y)
{
	itr = SpriteList.begin();
	while (itr != SpriteList.end())
	{
		(*itr)->setPosition(x, y);
		itr++;
	}
}

void CAnimation::setFrameNumber(int FrameNumber)
{
	Index = FrameNumber;
}

int CAnimation::getFrameNumber()
{
	return Index;
}

void CAnimation::setPlay(bool Value)
{
	Play = Value;
}

void CAnimation::setAnimationInterval(float Value)
{
	AnimationInterval = Value;
}

void CAnimation::setFlipped(bool isFlipped)
{
	flipped = isFlipped;
}

void CAnimation::removeAllData()
{
	itr = SpriteList.begin();
	while (itr != SpriteList.end())
	{
		parentLayer->removeChild(*itr);
		SpriteList.erase(itr++);
	}
}