#include "StageScene_ONE.h"

int StageScene_ONE::map[24][33] = {
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
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 },
	{ 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
};

Scene* StageScene_ONE::createScene()
{
	// 'scene' is an autorelease object
	auto scene = Scene::create();

	// 'layer' is an autorelease object
	auto layer = StageScene_ONE::create();

	// add layer as a child to scene
	scene->addChild(layer);

	// return the scene
	return scene;
}

// on "init" you need to initialize your instance
bool  StageScene_ONE::init()
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

	DrawMap();

	//GUI
	hpbar_bg0 = Sprite::createWithSpriteFrameName("hpbar_bg_0.png");
	hpbar_bg0->setAnchorPoint(Point(0, 0.5));
	hpbar_bg0->setPosition(winSize.width / 20, winSize.height / 10 * 9);
	hpbar_bg0->setScaleX(3.0);
	this->addChild(hpbar_bg0,3);

	hpbar_bg1 = Sprite::createWithSpriteFrameName("hpbar_bg_1.png");
	hpbar_bg1->setAnchorPoint(Point(0, 0.5));
	hpbar_bg1->setPosition(winSize.width / 20, winSize.height / 10 * 9);
	hpbar_bg1->setScaleX(3.0);
	this->addChild(hpbar_bg1,3);

	hpbar = Sprite::createWithSpriteFrameName("hpbar.png");
	hpbar->setAnchorPoint(Point(0, 0.5));
	hpbar->setPosition(winSize.width / 20, winSize.height / 10 * 9);
	hpbar->setScaleX(player.health/100*3.0);
	hpbar->setColor(Color3B::GREEN);
	this->addChild(hpbar, 4);

	for (int i = 0; i < player.life; i++)
	{
		auto lifeSpr = Sprite::createWithSpriteFrameName("life.png");
		lifeSpr->setAnchorPoint(Point(0, 0.5));
		lifeSpr->setPosition(hpbar->getPosition().x + 42 * (3-i), hpbar->getPosition().y - 48);
		this->addChild(lifeSpr, 3);
		lifeSprList.push_back(lifeSpr);
	}

	itr = lifeSprList.begin();

	//키보드입력
	auto keyboardListener = EventListenerKeyboard::create();

	keyboardListener->onKeyPressed = CC_CALLBACK_2(StageScene_ONE::onKeyPressed, this);
	keyboardListener->onKeyReleased = CC_CALLBACK_2(StageScene_ONE::onKeyReleased, this);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(keyboardListener, this);
	Director::getInstance()->getOpenGLView()->setIMEKeyboardState(true);
	
	this->scheduleUpdate();
	
	return true;
}

/*---------------------------------데이터 초기화 메서드-------------------------------------*/
void StageScene_ONE::InitData()
{
	winSize = Director::getInstance()->getWinSize();

	//'slayer' 데이터 초기화
	player.health = 100;
	player.attackPower = 10;
	player.life = 3;
	player.dir = 1;
	player.isReach = false;
	player.isJump = false;
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
	player.slayerWalk.setPlay(false);
	player.slayerWalk.setFrameNumber(0);
	//'slayer' attack
	player.slayerAttack.Create("slayer_attack", this, 9, 1);
	player.slayerAttack.setAnimationInterval(0.05f);
	player.slayerAttack.setPlay(true);
	player.slayerAttack.setFrameNumber(0);
}
/*----------------------------------------------------------------------------------------*/

void StageScene_ONE::DrawMap()
{
	for (int y = 0; y < 24; y++)
	{
		for (int x = 0; x < 33; x++)
		{
			if (StageScene_ONE::map[y][x] == 1)
			{
				auto mapSpr = Sprite::createWithSpriteFrameName("block.png");
				mapSpr->setAnchorPoint(Point(0, 0));
				mapSpr->setPosition(Vec2(x * 32, (23-y)*32));
				this->addChild(mapSpr);
				blockList.push_back(mapSpr);
			}
		}
	}
}

void StageScene_ONE::UpdateHP()
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

void StageScene_ONE::UpdateLife()
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
void StageScene_ONE::onKeyPressed(EventKeyboard::KeyCode keyCode, Event* event)
{ 	
	switch (keyCode)
	{
	case EventKeyboard::KeyCode::KEY_LEFT_ARROW:
		player.slayerState = SLAYER_WALK;
		player.slayerIdle.setFlipped(true);
		player.slayerWalk.setFlipped(true);
		player.slayerAttack.setFlipped(true);
		player.dir = -1;
		break;
	case EventKeyboard::KeyCode::KEY_RIGHT_ARROW:
		player.slayerState = SLAYER_WALK;
		player.slayerIdle.setFlipped(false);
		player.slayerWalk.setFlipped(false);
		player.slayerAttack.setFlipped(false);
		player.dir = 1;
		break;
	case EventKeyboard::KeyCode::KEY_X:
		player.slayerState = SLAYER_ATTACK;
		break;
	}

	if (keyCode == EventKeyboard::KeyCode::KEY_C)
		if (player.isGround == true)
		{
			onCKey = true;
			player.isReach = false;
			player.isJump = true;
			player.isAir = true;
			player.isGround = false;
			player.maxHeight.y = player.pos.y + 100;
		}
}

void StageScene_ONE::onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event)
{
	if (keyCode != EventKeyboard::KeyCode::KEY_C)
		player.slayerState = SLAYER_IDLE;
	else
		onCKey = false;
}

/*----------------------------------------------------------------------------------------*/

/*-------------------------------------업 데 이 트----------------------------------------*/
void StageScene_ONE::update(float timeDelta)
{	
	if (player.life == 0)
		player.isAlive = false;

	if (player.isAlive == true)
	{
		Vec2 origin = player.pos;

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
			player.pos.x += player.dir * 1;
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
		if (player.isJump == true && player.isReach == false)
		{
			player.pos.y += 5;
		}		
		else if (player.isAir == true && player.isGround == false)
		{
			
			player.pos.y -= 5;
		}

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
				//x축 충돌
				if ((*itr)->getPosition().x <= player.pos.x + 50)
				{
					player.pos.x = origin.x;
					if (player.isAir == true)
						player.slayerState = SLAYER_IDLE;
				}
				
				//y축 충돌
				if ((*itr)->getPosition().y + 32 >= player.pos.y)
				{
					player.pos.y = origin.y;
					player.isJump = false;
					player.isGround = true;
				}
			}
			itr++;
		}
	} 
}
/*----------------------------------------------------------------------------------------*/