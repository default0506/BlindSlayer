#include "Stage_test.h"
#include <cmath>

int Stage_test::map[24][33] = {
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 },
	{ 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
};

Scene* Stage_test::createScene()
{
	// 'scene' is an autorelease object
	auto scene = Scene::create();

	// 'layer' is an autorelease object
	auto layer = Stage_test::create();

	// add layer as a child to scene
	scene->addChild(layer);

	// return the scene
	return scene;
}

// on "init" you need to initialize your instance
bool  Stage_test::init()
{
	SpriteFrameCache::getInstance()->
		addSpriteFramesWithFile("BlindSlayer_atlas\\BlindSlayer_atlas.plist",
		"BlindSlayer_atlas\\BlindSlayer_atlas.png");

	// 1. super init first
	if (!Layer::init())
	{
		return false;
	}

	InitData();

	CreateMonster("dog_walk_0.png");

	DrawMap();

	//GUI
	hpbar_bg0 = Sprite::createWithSpriteFrameName("hpbar_bg_0.png");
	hpbar_bg0->setAnchorPoint(Point(0, 0.5));
	hpbar_bg0->setPosition(winSize.width / 20, winSize.height / 10 * 9);
	hpbar_bg0->setScaleX(3.0);
	this->addChild(hpbar_bg0, 3);

	hpbar_bg1 = Sprite::createWithSpriteFrameName("hpbar_bg_1.png");
	hpbar_bg1->setAnchorPoint(Point(0, 0.5));
	hpbar_bg1->setPosition(winSize.width / 20, winSize.height / 10 * 9);
	hpbar_bg1->setScaleX(3.0);
	this->addChild(hpbar_bg1, 3);

	hpbar = Sprite::createWithSpriteFrameName("hpbar.png");
	hpbar->setAnchorPoint(Point(0, 0.5));
	hpbar->setPosition(winSize.width / 20, winSize.height / 10 * 9);
	hpbar->setScaleX(player.health / 100 * 3.0);
	hpbar->setColor(Color3B::GREEN);
	this->addChild(hpbar, 4);

	eyeStone = Sprite::createWithSpriteFrameName("TheEyeOfRainbow_0.png");
	eyeStone->setPosition(winSize.width / 2, winSize.height / 10 * 9);
	eyeStone->setScale(2.0);
	this->addChild(eyeStone,4);

	for (int i = 0; i < player.life; i++)
	{
		auto lifeSpr = Sprite::createWithSpriteFrameName("life.png");
		lifeSpr->setAnchorPoint(Point(0, 0.5));
		lifeSpr->setPosition(hpbar->getPosition().x + 42 * (3 - i), hpbar->getPosition().y - 48);
		this->addChild(lifeSpr, 3);
		lifeSprList.push_back(lifeSpr);
	}

	itr = lifeSprList.begin();

	//키보드입력
	auto keyboardListener = EventListenerKeyboard::create();

	keyboardListener->onKeyPressed = CC_CALLBACK_2(Stage_test::onKeyPressed, this);
	keyboardListener->onKeyReleased = CC_CALLBACK_2(Stage_test::onKeyReleased, this);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(keyboardListener, this);
	Director::getInstance()->getOpenGLView()->setIMEKeyboardState(true);

	this->scheduleUpdate();

	return true;
}

/*---------------------------------데이터 초기화 메서드-------------------------------------*/
void Stage_test::InitData()
{
	winSize = Director::getInstance()->getWinSize();

	//'slayer' 데이터 초기화
	player.health = 100;
	player.attackPower = 10;
	player.life = 3;
	player.dir = 1;
	player.isReach = false;
	player.isAir = true;
	player.isAlive = true;
	player.isGround = false;
	player.pos = Vec2(100, 40);
	player.slayerState = SLAYER_IDLE;

	player.slayerSpr = Sprite::createWithSpriteFrameName("slayer_0.png");
	player.slayerSpr->setAnchorPoint(Point(0.5, 0));
	player.slayerSpr->setPosition(player.pos);
	player.slayerSpr->setVisible(false);
	player.slayerSpr->setScaleX(0.5);
	this->addChild(player.slayerSpr);

	//애니메이션 데이터 초기화
	//'slayer' idle
	player.slayerIdle.Create("slayer", this, 8, 1);
	player.slayerIdle.setAnimationInterval(0.2f);
	player.slayerIdle.setPosition(player.pos.x, player.pos.y);
	player.slayerIdle.setFlipped(false);
	player.slayerIdle.setPlay(true);
	player.slayerIdle.setFrameNumber(0);
	//'slayer' walk
	player.slayerWalk.Create("slayer_walk", this, 8, 1);
	player.slayerWalk.setAnimationInterval(0.1f);
	player.slayerWalk.setFlipped(false);
	player.slayerWalk.setPlay(false);
	player.slayerWalk.setFrameNumber(0);
	//'slayer' attack
	player.slayerAttack.Create("slayer_attack", this, 9, 1);
	player.slayerAttack.setAnimationInterval(0.05f);
	player.slayerAttack.setFlipped(false);
	player.slayerAttack.setPlay(false);
	player.slayerAttack.setFrameNumber(0);
}
/*----------------------------------------------------------------------------------------*/

void Stage_test::CreateMonster(char *fileName)
{
	dog[0].pos = Vec2(400, 32);
	dog[1].pos = Vec2(200, 32);
	dog[2].pos = Vec2(400, 5*32);
	dog[3].pos = Vec2(300, 11*32);
	dog[4].pos = Vec2(100, 11*32);

	for (int i = 0; i < 5; i++)
	{
		dog[i].monSpr = Sprite::createWithSpriteFrameName(fileName);
		dog[i].monSpr->setAnchorPoint(Point(0.5, 0));
		dog[i].monSpr->setScale(1.0);
		dog[i].monSpr->setPosition(dog[i].pos);
		dog[i].monSpr->setVisible(false);
		dog[i].monSpr->setScaleX(0.5);
		if (random()%100 > 70)
			dog[i].Right = true;
		else
			dog[i].Right = false;
		dog[i].health = 10;
		dog[i].power = 5;
		dog[i].stdPos = dog[i].pos;
		this->addChild(dog[i].monSpr);

		dog[i].monsterAnim.Create_Custom("dog\\dog_walk", this, 4, 1);
		dog[i].monsterAnim.setAnimationInterval(0.1f);
		dog[i].monsterAnim.setPlay(true);
		dog[i].monsterAnim.setFrameNumber(0);

		monsterList.push_back(dog[i]);
	}
}


void Stage_test::DrawMap()
{
	for (int y = 0; y < 24; y++)
	{
		for (int x = 0; x < 33; x++)
		{
			if (Stage_test::map[y][x] == 1)
			{
				auto mapSpr = Sprite::createWithSpriteFrameName("block.png");
				mapSpr->setAnchorPoint(Point(0, 0));
				mapSpr->setPosition(Vec2(x * 32, (23 - y) * 32));
				this->addChild(mapSpr);
				blockList.push_back(mapSpr);
			}
		}
	}
}

void Stage_test::UpdateHP()
{
	if (player.health < 0)
		player.health = 0;

	if (player.health > 60)
		hpbar->setColor(Color3B::GREEN);
	else if (player.health <= 60 && player.health >20)
		hpbar->setColor(Color3B::YELLOW);
	else
		hpbar->setColor(Color3B::RED);

	hpbar->setScaleX((float)player.health / 100 * 3.0);
}

void Stage_test::UpdateLife()
{
	if (player.health == 0)
	{
		player.life--;
		this->removeChild(*itr);
		itr++;
		player.health = 100;
	}
}

/*--------------------------------키보드입력관련 메서드-------------------------------------*/
void Stage_test::onKeyPressed(EventKeyboard::KeyCode keyCode, Event* event)
{
	switch (keyCode)
	{
	case EventKeyboard::KeyCode::KEY_LEFT_ARROW:
		onLeftArrowKey = true;
		break;
	case EventKeyboard::KeyCode::KEY_RIGHT_ARROW:
		onRightArrowKey = true;
		break;
	}

	if (keyCode == EventKeyboard::KeyCode::KEY_X)
		onXbuttonKey = true;

	if (keyCode == EventKeyboard::KeyCode::KEY_C)
		if (player.isGround == true)
			onCbuttonKey = true;
}

void Stage_test::onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event)
{
	switch (keyCode)
	{
	case EventKeyboard::KeyCode::KEY_LEFT_ARROW:
		onLeftArrowKey = false;
		break;
	case EventKeyboard::KeyCode::KEY_RIGHT_ARROW:
		onRightArrowKey = false;
		break;
	case EventKeyboard::KeyCode::KEY_X:
		onXbuttonKey = false;
		break;
	}

	if (keyCode == EventKeyboard::KeyCode::KEY_C)
		onCbuttonKey = false;
}

/*----------------------------------------------------------------------------------------*/

void Stage_test::ResetEffect(Ref *s)
{
	auto reset = (Sprite*)s;
	this->removeChild(reset);
}

/*-------------------------------------업 데 이 트----------------------------------------*/
void Stage_test::update(float timeDelta)
{
	if (player.life == 0)
		player.isAlive = false;

	if (player.isAlive == true)
	{
		Vec2 origin = player.pos;

		//키보드 키 활성 상태에 따른 조건문들
		if (onLeftArrowKey == true)
		{
			onRightArrowKey = false;
			player.slayerIdle.setFlipped(true);
			player.slayerWalk.setFlipped(true);
			player.slayerAttack.setFlipped(true);
			player.dir = -1;
			player.slayerState = SLAYER_WALK; 
		}else if (onRightArrowKey == true)
		{
			onLeftArrowKey = false;
			player.slayerIdle.setFlipped(false);
			player.slayerWalk.setFlipped(false);
			player.slayerAttack.setFlipped(false);
			player.dir = 1;
			player.slayerState = SLAYER_WALK;
		}
		else{
			player.slayerState = SLAYER_IDLE;
		}
		
		//공격은 나중에 별도로 애니메이션을 반복문 안에 넣어서 X한번에 모든 공격모션보여주게 하기
		if (onXbuttonKey == true)
		{
			onLeftArrowKey = false;
			onRightArrowKey = false;
			player.slayerState = SLAYER_ATTACK;
		}
		
		if (onCbuttonKey == true)
		{
			onXbuttonKey = false;
			player.isAir = true;
			player.isGround = false;
			
		}

		//플레이어 상태에 따른 설정
		switch (player.slayerState)
		{
		case SLAYER_IDLE:
			player.slayerIdle.setPlay(true);
			player.slayerWalk.setPlay(false);
			player.slayerAttack.setPlay(false);
			player.slayerAttack.setFrameNumber(0);
			break;
		case SLAYER_WALK:
			player.slayerIdle.setPlay(false);
			player.slayerWalk.setPlay(true);
			player.slayerAttack.setPlay(false);
			player.pos.x += player.dir * 100*timeDelta;
			break;
		case SLAYER_ATTACK:
			player.slayerIdle.setPlay(false);
			player.slayerWalk.setPlay(false);
			player.slayerAttack.setPlay(true);
			break;
		}

		player.slayerIdle.Update(timeDelta);
		player.slayerWalk.Update(timeDelta);
		player.slayerAttack.Update(timeDelta);

		//체력 업데이트
		UpdateHP();

		//생명력 업데이트
		UpdateLife();

		//점프
		if (player.isAir == true && player.isReach == false)
			player.pos.y += 10;
		else
			player.pos.y -= 10;
		
		if (player.pos.y >= player.maxHeight.y)
		{
			player.isReach = true;
		}		

		//플레이어 위치 업데이트
		player.slayerSpr->setPosition(player.pos);
		player.slayerIdle.setPosition(player.pos.x, player.pos.y);
		player.slayerAttack.setPosition(player.pos.x, player.pos.y);
		player.slayerWalk.setPosition(player.pos.x, player.pos.y);

		//플레이어와 블럭과의 충돌
		std::list<Sprite*>::iterator itr = blockList.begin();
		while (itr != blockList.end())
		{
			if ((*itr)->getBoundingBox().intersectsRect(player.slayerSpr->getBoundingBox()))
			{
				Vec2 blockPos = Vec2((*itr)->getBoundingBox().getMidX(), (*itr)->getBoundingBox().getMidY());
				Vec2 playerPos = Vec2(player.slayerSpr->getBoundingBox().getMidX(), player.slayerSpr->getBoundingBox().getMidY());
				Vec2 direction = blockPos - playerPos;
				direction.normalize();
				 
				//x축 충돌(바닥에 있을 때)
				if ((*itr)->getBoundingBox().getMinX() <= player.slayerSpr->getBoundingBox().getMaxX() &&
					direction.x < direction.y)
				{
					player.pos.x = origin.x;
					//onLeftArrowKey = false;
					//onRightArrowKey = false;
				}				

				//y축 충돌
				//바닥에 부딪힐 때
				if ((int)abs((*itr)->getBoundingBox().getMidY() - player.slayerSpr->getBoundingBox().getMaxY()) >
					(int)abs(player.slayerSpr->getBoundingBox().getMinY() - (*itr)->getBoundingBox().getMidY()))
				{
					player.pos.y = origin.y;
					player.isAir = false;
					player.isGround = true;
					onCbuttonKey = false;
					player.isReach = false;
					player.maxHeight.y = player.pos.y + 100;
				}
				//천장에 부딪힐 때				
				if ((int)abs((*itr)->getBoundingBox().getMidY() - player.slayerSpr->getBoundingBox().getMaxY()) <
					(int)abs(player.slayerSpr->getBoundingBox().getMinY() - (*itr)->getBoundingBox().getMidY()))
				{
					player.pos.y = origin.y;
					player.isAir = false;
					player.isReach = true;
				}
			}
			itr++;
		}

		/*----------------------------------------몬스터--------------------------------------------------*/
		monItr = monsterList.begin();		

		while (monItr != monsterList.end())
		{
			if ((int)abs((*monItr).pos.x - player.pos.x) < 100 && (int)abs((*monItr).pos.y - player.pos.y) < 30)
			{
				(*monItr).des = player.pos;
				Vec2 dir = (*monItr).des - (*monItr).pos;
				dir.normalize();
				
				if (dir.x > 0)
				{
					(*monItr).monsterAnim.setFlipped(true);
				}
				else
				{
					(*monItr).monsterAnim.setFlipped(false);
				}

				(*monItr).pos.x += dir.x * 50 * timeDelta;

				(*monItr).stdPos = (*monItr).pos;
			}
			else
			{ 
				Vec2 dir;

				if ((*monItr).pos.x <= (*monItr).stdPos.x + 50 && (*monItr).Right == true)
				{
					(*monItr).des = (*monItr).stdPos + Vec2(100, 0);
					dir = (*monItr).des - (*monItr).pos;
					dir.normalize();
				}
				else
				{
					(*monItr).des = (*monItr).stdPos - Vec2(100, 0);
					dir = (*monItr).des - (*monItr).pos;
					dir.normalize();
				}

				if (dir.x > 0)
				{
					(*monItr).monsterAnim.setFlipped(true);
				}
				else
				{
					(*monItr).monsterAnim.setFlipped(false);
				}

				(*monItr).pos.x += dir.x * 30 * timeDelta;

				if ((*monItr).pos.x >= (*monItr).stdPos.x + 50)
					(*monItr).Right = false;
				else if ((*monItr).pos.x <= (*monItr).stdPos.x - 50)
					(*monItr).Right = true;

			}					

			(*monItr).monSpr->setPosition((*monItr).pos);
			(*monItr).monsterAnim.setPosition((*monItr).pos.x, (*monItr).pos.y);
			(*monItr).monsterAnim.Update(timeDelta);
			monItr++;
		}

		//몬스터와의 충돌
		monItr = monsterList.begin();
		while (monItr != monsterList.end())
		{
			//몬스터 중력
			Vec2 monOrigin = (*monItr).pos;
			(*monItr).pos.y -= 3;

			std::list<Sprite*>::iterator itr = blockList.begin();
			while (itr != blockList.end())
			{								
				if ((*itr)->getBoundingBox().intersectsRect((*monItr).monSpr->getBoundingBox()))
				{
					(*monItr).pos.y = monOrigin.y;
				}
				itr++;
			}

			//플레이어와 몬스터간의 단순충돌
			if ((*monItr).monSpr->getBoundingBox().intersectsRect(player.slayerSpr->getBoundingBox()))
			{
				delayTime += timeDelta;
				while (delayTime >= 0.3)
				{
					player.health -= (*monItr).power;
					delayTime = 0;
				}

				//플레이어 공격
				if (player.slayerState == SLAYER_ATTACK && player.slayerAttack.getFrameNumber() == 8)
				{
					attackEffect = Sprite::create("atkEffect.png");
					attackEffect->setScaleX(1.3);
					attackEffect->setPosition((*monItr).monSpr->getBoundingBox().getMidX(), (*monItr).monSpr->getBoundingBox().getMidY());
					this->addChild(attackEffect, 2);

					auto action = Sequence::create(DelayTime::create(0.1f), CallFuncN::create(CC_CALLBACK_1(Stage_test::ResetEffect, this)), NULL);
					attackEffect->runAction(action);

					(*monItr).health -= player.attackPower;
				}
			}
			
			//몬스터 소멸
			if ((*monItr).health <= 0)
			{
				(*monItr).monsterAnim.removeAllData();
				this->removeChild((*monItr).monSpr);				
				monsterList.erase(monItr++);
				continue;
			}

			monItr++;
		}

	}
}
/*----------------------------------------------------------------------------------------*/