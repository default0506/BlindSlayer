#include "StageOne.h"

int StageOne::map[24][32] = {
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
};

Scene* StageOne::createScene()
{
	// 'scene' is an autorelease object
	auto scene = Scene::create();

	// 'layer' is an autorelease object
	auto layer = StageOne::create();

	// add layer as a child to scene
	scene->addChild(layer);

	// return the scene
	return scene;
}

// on "init" you need to initialize your instance
bool  StageOne::init()
{
	// 1. super init first
	if (!Layer::init())
	{
		return false;
	}

	UserDefault::getInstance()->setIntegerForKey("continue", 1);

	InitData();

	CreateMonster();

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
	this->addChild(eyeStone, 4);

	for (int i = 0; i < player.life; i++)
	{
		auto lifeSpr = Sprite::createWithSpriteFrameName("life.png");
		lifeSpr->setAnchorPoint(Point(0, 0.5));
		lifeSpr->setPosition(hpbar->getPosition().x + 42 * (3 - i), hpbar->getPosition().y - 48);
		this->addChild(lifeSpr, 3);
		lifeSprList.push_back(lifeSpr);
	}

	itr = lifeSprList.begin();

	//일시정지 버튼
	auto pauseBtn = Label::createWithTTF("P A U S E", "fonts\\Japanese Style.ttf", 40);

	auto item0 = MenuItemLabel::create(pauseBtn, CC_CALLBACK_1(StageOne::pauseMenu, this));

	auto menu = Menu::create(item0, NULL);
	menu->setPosition(winSize.width / 10 * 9, winSize.height / 10 * 9);
	this->addChild(menu);

	//일시정지 메뉴
	auto mainmenuLabel = Label::createWithTTF("M A I N M E N U", "fonts\\Japanese Style.ttf", 35);
	auto optionLabel = Label::createWithTTF("O P T I O N", "fonts\\Japanese Style.ttf", 35);
	auto exitLabel = Label::createWithTTF("E X I T", "fonts\\Japanese Style.ttf", 35);

	auto pauseItem_0 = MenuItemLabel::create(mainmenuLabel, CC_CALLBACK_1(StageOne::backToMenu, this));
	auto pauseItem_1 = MenuItemLabel::create(optionLabel, CC_CALLBACK_1(StageOne::Option, this));
	auto pauseItem_2 = MenuItemLabel::create(exitLabel, CC_CALLBACK_1(StageOne::nextStage, this));//게임 시연을 위한 치트

	pause = Menu::create(pauseItem_0, pauseItem_1, pauseItem_2, NULL);
	pause->alignItemsVerticallyWithPadding(20.0);
	pause->setPosition(winSize.width / 2, winSize.height / 2);
	pause->setVisible(false);
	this->addChild(pause, 4);


	//키보드입력
	auto keyboardListener = EventListenerKeyboard::create();

	keyboardListener->onKeyPressed = CC_CALLBACK_2(StageOne::onKeyPressed, this);
	keyboardListener->onKeyReleased = CC_CALLBACK_2(StageOne::onKeyReleased, this);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(keyboardListener, this);
	Director::getInstance()->getOpenGLView()->setIMEKeyboardState(true);

	this->scheduleUpdate();

	return true;
}

/*---------------------------------데이터 초기화 메서드-------------------------------------*/
void StageOne::InitData()
{
	winSize = Director::getInstance()->getWinSize();

	//'slayer' 데이터 초기화
	player.health = 100;
	player.attackPower = 10;
	player.life = 3;
	player.dir = 1;
	player.isReach = true;
	player.isAir = true;
	player.isAlive = true;
	player.isGround = false;
	player.pos = Vec2(100, 32 * 2);
	player.slayerState = SLAYER_IDLE;

	player.slayerSpr = Sprite::createWithSpriteFrameName("slayer_0.png");
	player.slayerSpr->setAnchorPoint(Point(0.5, -0.1));
	player.slayerSpr->setPosition(player.pos);
	player.slayerSpr->setVisible(false);
	player.slayerSpr->setScaleY(0.6);
	player.slayerSpr->setScaleX(0.3);
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
	player.slayerAttack.setAnimationInterval(0.03f);
	player.slayerAttack.setFlipped(false);
	player.slayerAttack.setPlay(false);
	player.slayerAttack.setFrameNumber(0);
}
/*----------------------------------------------------------------------------------------*/

void StageOne::CreateMonster()
{
	dog[0].pos = Vec2(400, 32 * 2);
	dog[1].pos = Vec2(700, 32 * 2);
	dog[2].pos = Vec2(400, 10 * 32);
	dog[3].pos = Vec2(300, 11 * 32);
	dog[4].pos = Vec2(100, 11 * 32);

	for (int i = 0; i < 5; i++)
	{
		dog[i].monSpr = Sprite::createWithSpriteFrameName("dog_walk_0.png");
		dog[i].monSpr->setAnchorPoint(Point(0.5, 0));
		dog[i].monSpr->setPosition(dog[i].pos);
		dog[i].monSpr->setVisible(false);
		dog[i].monSpr->setScaleY(0.5);
		dog[i].monSpr->setScaleX(0.3);
		dog[i].monSoundSpr->setPosition(dog[i].pos);
		this->addChild(dog[i].monSoundSpr);
		dog[i].monSoundSpr->runAction(dog[i].soundAction);
		if (random() % 100 > 70)
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


void StageOne::DrawMap()
{
	for (int y = 0; y < 24; y++)
	{
		for (int x = 0; x < 33; x++)
		{
			if (StageOne::map[y][x] == 1)
			{
				auto mapSpr = Sprite::createWithSpriteFrameName("block.png");
				mapSpr->setAnchorPoint(Point(0, 0));
				mapSpr->setPosition(Vec2(x * 32, (23 - y) * 32));
				mapSpr->setOpacity(0);
				this->addChild(mapSpr);
				blockList.push_back(mapSpr);
			}
		}
	}
}

void StageOne::UpdateHP()
{
	if (player.health < 0)
		player.health = 0;

	if (player.health > 60)
		hpbar->setColor(Color3B::GREEN);
	else if (player.health <= 60 && player.health > 20)
		hpbar->setColor(Color3B::YELLOW);
	else
		hpbar->setColor(Color3B::RED);

	hpbar->setScaleX((float)player.health / 100 * 3.0);
}

void StageOne::UpdateLife()
{
	if (player.health == 0)
	{
		player.life--;
		this->removeChild(*itr);

		player.health = 100;
		itr++;
	}		
}

/*--------------------------------키보드입력관련 메서드-------------------------------------*/
void StageOne::onKeyPressed(EventKeyboard::KeyCode keyCode, Event* event)
{
	switch (keyCode)
	{
	case EventKeyboard::KeyCode::KEY_LEFT_ARROW:
		is_kBTN[K_LEFT] = true;
		is_kBTN[K_RIGHT] = false;
		is_kBTN[K_X] = false;
		break;
	case EventKeyboard::KeyCode::KEY_RIGHT_ARROW:
		is_kBTN[K_RIGHT] = true;
		is_kBTN[K_LEFT] = false;
		is_kBTN[K_X] = false;
		break;
	case EventKeyboard::KeyCode::KEY_X:
		is_kBTN[K_X] = true;
		is_kBTN[K_LEFT] = false;
		is_kBTN[K_RIGHT] = false;
		break;
	case EventKeyboard::KeyCode::KEY_ESCAPE:
		pauseMenu(this);
		break;
	}

	if (keyCode == EventKeyboard::KeyCode::KEY_C)
		if (player.isGround == true)
			is_kBTN[K_C] = true;
}

void StageOne::onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event)
{
	switch (keyCode)
	{
	case EventKeyboard::KeyCode::KEY_LEFT_ARROW:
		is_kBTN[K_LEFT] = false;
		break;
	case EventKeyboard::KeyCode::KEY_RIGHT_ARROW:
		is_kBTN[K_RIGHT] = false;
		break;
	}

	if (keyCode == EventKeyboard::KeyCode::KEY_C)
		is_kBTN[K_C] = false;
}

/*----------------------------------------------------------------------------------------*/

void StageOne::ResetEffect(Ref *s)
{
	auto reset = (Sprite*)s;
	this->removeChild(reset);
}

void StageOne::backToMenu(Ref *s)
{
	AudioEngine::stopAll();
	auto scene = TransitionFade::create(2.0, MenuScene::createScene());
	Director::getInstance()->replaceScene(scene);
}

void StageOne::nextStage(Ref *s)
{
	auto scene = TransitionFade::create(2.0, StageTwo::createScene());
	Director::getInstance()->replaceScene(scene);
}

void StageOne::reStage(Ref *s)
{
	auto scene = TransitionFade::create(2.0, StageOne::createScene());
	Director::getInstance()->replaceScene(scene);
}

void StageOne::Option(Ref *s)
{
	auto scene = OptionScene::createScene();
	Director::getInstance()->pushScene(scene);
}

void StageOne::pauseMenu(Ref *s)
{
	if (onPause == true)
	{
		gamePlay = true;
		pause->setVisible(false);
		onPause = false;
	}
	else
	{
		gamePlay = false;
		pause->setVisible(true);
		onPause = true;
	}
}

/*-------------------------------------업 데 이 트----------------------------------------*/
void StageOne::update(float timeDelta)
{
	sndVol = UserDefault::getInstance()->getFloatForKey("volume");
	AudioEngine::setVolume(UserDefault::getInstance()->getIntegerForKey("inBGM"), sndVol);

	if (player.life == 0)
		player.isAlive = false;
	
	if (gamePlay == true)
	{
		if (player.isAlive == true)
		{
			Vec2 origin = player.pos;

			//키보드 키 활성 상태에 따른 조건문들
			if (is_kBTN[K_LEFT] == true)
			{
				player.slayerIdle.setFlipped(true);
				player.slayerWalk.setFlipped(true);
				player.slayerAttack.setFlipped(true);
				player.dir = -1;
				player.slayerState = SLAYER_WALK;
			}

			if (is_kBTN[K_RIGHT] == true)
			{
				player.slayerIdle.setFlipped(false);
				player.slayerWalk.setFlipped(false);
				player.slayerAttack.setFlipped(false);
				player.dir = 1;
				player.slayerState = SLAYER_WALK;
			}

			if (is_kBTN[K_X] == true)
			{
				player.slayerState = SLAYER_ATTACK;
			}

			if (is_kBTN[K_LEFT] == false && is_kBTN[K_RIGHT] == false && is_kBTN[K_X] == false)
			{
				player.slayerState = SLAYER_IDLE;
			}

			if (is_kBTN[K_C] == true)
			{
				is_kBTN[K_X] = false;
				player.isAir = true;
				player.isGround = false;
			}

			//점프		
			if (player.isAir == true && player.isReach == false)
				player.pos.y += 8;
			else
				player.pos.y -= 8;

			if (player.pos.y >= player.maxHeight.y)
			{
				player.isReach = true;
			}

			//플레이어 상태에 따른 설정
			switch (player.slayerState)
			{
			case SLAYER_IDLE:
				player.slayerIdle.setPlay(true);
				player.slayerWalk.setPlay(false);
				player.slayerAttack.setPlay(false);
				player.slayerAttack.setFrameNumber(0);
				player.slayerSpr->setScaleX(0.3);
				break;
			case SLAYER_WALK:
				player.slayerIdle.setPlay(false);
				player.slayerWalk.setPlay(true);
				player.slayerAttack.setPlay(false);
				player.pos.x += player.dir * 2.5;
				break;
			case SLAYER_ATTACK:
				player.slayerIdle.setPlay(false);
				player.slayerWalk.setPlay(false);
				player.slayerAttack.setPlay(true);
				player.slayerSpr->setScaleX(1.3);
				break;
			}

			player.slayerIdle.Update(timeDelta);
			player.slayerWalk.Update(timeDelta);
			player.slayerAttack.Update(timeDelta);

			//체력 업데이트
			UpdateHP();

			//생명력 업데이트
			UpdateLife();

			//플레이어 위치 업데이트
			player.slayerSpr->setPosition(player.pos);

			//플레이어와 블럭과의 충돌
			std::vector<Sprite*>::iterator itr = blockList.begin();
			while (itr != blockList.end())
			{
				if ((*itr)->getBoundingBox().intersectsRect(player.slayerSpr->getBoundingBox()))
				{
					Vec2 blockPos = Vec2((*itr)->getBoundingBox().getMidX(), (*itr)->getBoundingBox().getMidY());
					Vec2 playerPos = Vec2(player.slayerSpr->getBoundingBox().getMidX(), player.slayerSpr->getBoundingBox().getMidY());
					Vec2 direction = blockPos - playerPos;
					direction.normalize();


					//y축 충돌
					if ((int)(*itr)->getBoundingBox().getMaxY() >= (int)player.slayerSpr->getBoundingBox().getMinY())
					{
						player.pos.y = origin.y;
						player.isAir = false;
						player.isGround = true;
						is_kBTN[K_C] = false;
						player.isReach = false;
						player.maxHeight.y = player.pos.y + 135;
					}

					//천장에 부딪힐 때				
					if ((int)abs((*itr)->getBoundingBox().getMidY() - player.slayerSpr->getBoundingBox().getMaxY()) <
						(int)abs(player.slayerSpr->getBoundingBox().getMinY() - (*itr)->getBoundingBox().getMidY()))
					{
						player.isAir = false;
						player.isReach = true;
					}


					//x축 충돌
					if (((int)(*itr)->getBoundingBox().getMinX() <= (int)player.slayerSpr->getBoundingBox().getMaxX()) &&
						((int)(*itr)->getBoundingBox().getMinY() >= (int)player.slayerSpr->getBoundingBox().getMinY()))
					{
						player.pos.x = origin.x;
					}

					//공중에서의 x축 충돌
					if (((int)(*itr)->getBoundingBox().getMinX() <= (int)player.slayerSpr->getBoundingBox().getMaxX()) &&
						((int)(*itr)->getBoundingBox().getMaxY() >= (int)player.slayerSpr->getBoundingBox().getMinY()) &&
						((int)(*itr)->getBoundingBox().getMinY() <= (int)player.slayerSpr->getBoundingBox().getMinY()) &&
						((direction.x >= 0.7 && (direction.x <= 1))) || ((direction.x <= -0.7 && (direction.x >= -1))))
					{
						player.pos.x = origin.x;
						is_kBTN[K_LEFT] = false;
						is_kBTN[K_RIGHT] = false;
					}
				}
				itr++;
			}

			player.slayerIdle.setPosition(player.pos.x, player.pos.y);
			player.slayerAttack.setPosition(player.pos.x, player.pos.y);
			player.slayerWalk.setPosition(player.pos.x, player.pos.y);

			/*----------------------------------------몬스터--------------------------------------------------*/
			monItr = monsterList.begin();

			while (monItr != monsterList.end())
			{
				(*monItr).monOrigin = (*monItr).pos;

				//몬스터 중력
				(*monItr).pos.y -= 8;

				if (player.pos.distance((*monItr).pos) < 100 && player.pos.distance((*monItr).pos) > 10)
				{
					(*monItr).des = player.pos;
					Vec2 dir = (*monItr).des - (*monItr).pos;
					dir.normalize();

					if (dir.x > 0)
					{
						(*monItr).monsterAnim.setFlipped(true);
						(*monItr).Right = true;
					}
					else
					{
						(*monItr).monsterAnim.setFlipped(false);
						(*monItr).Right = false;
					}

					(*monItr).pos.x += dir.x * 50 * timeDelta;

					(*monItr).stdPos = (*monItr).pos;
				}
				else
				{
					Vec2 dir;

					if ((*monItr).Right == true)
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

					if ((*monItr).pos.x >= (*monItr).stdPos.x + 70)
						(*monItr).Right = false;
					else if ((*monItr).pos.x <= (*monItr).stdPos.x - 70)
						(*monItr).Right = true;
				}

				(*monItr).monSpr->setPosition((*monItr).pos);
				(*monItr).monSoundSpr->setPosition((*monItr).pos);
				(*monItr).monsterAnim.setPosition((*monItr).pos.x, (*monItr).pos.y);
				(*monItr).monsterAnim.Update(timeDelta);
				monItr++;
			}

			//몬스터충돌
			monItr = monsterList.begin();
			while (monItr != monsterList.end())
			{
				//몬스터와 블럭간의 충돌
				std::vector<Sprite*>::iterator itr = blockList.begin();
				while (itr != blockList.end())
				{
					Vec2 blockPos = Vec2((*itr)->getBoundingBox().getMidX(), (*itr)->getBoundingBox().getMidY());
					Vec2 monPos = Vec2((*monItr).monSpr->getBoundingBox().getMidX(), (*monItr).monSpr->getBoundingBox().getMidY());
					Vec2 direction = blockPos - monPos;
					direction.normalize();

					if ((*itr)->getBoundingBox().intersectsRect((*monItr).monSpr->getBoundingBox()))
					{
						//y축 충돌
						if ((int)(*itr)->getBoundingBox().getMaxY() >= (int)(*monItr).monSpr->getBoundingBox().getMinY())
						{
							(*monItr).pos.y = (*monItr).monOrigin.y;
						}

						//x축 충돌
						if (((int)(*itr)->getBoundingBox().getMinX() <= (int)(*monItr).monSpr->getBoundingBox().getMaxX()) &&
							((int)(*itr)->getBoundingBox().getMinY() >= (int)(*monItr).monSpr->getBoundingBox().getMinY()))
						{
							(*monItr).pos.x = (*monItr).monOrigin.x;
							(*monItr).pos.y -= 8;
							(*monItr).stdPos = (*monItr).pos;
						}

						//x축 충돌
						if ((*itr)->getBoundingBox().getMinX() <= (*monItr).monSpr->getBoundingBox().getMaxX() &&
							(*itr)->getBoundingBox().getMaxX() >= (*monItr).monSpr->getBoundingBox().getMinX() &&
							((direction.x >= 0.7 && (direction.x <= 1))) || ((direction.x <= -0.7 && (direction.x >= -1))))
						{
							(*monItr).pos.x = (*monItr).monOrigin.x;
							(*monItr).pos.y -= 8;
							if ((*monItr).Right == true)
								(*monItr).Right = false;
							else
								(*monItr).Right = true;
							(*monItr).stdPos = (*monItr).pos;
						}
					}
					itr++;
				}

				//플레이어와 몬스터간의 단순충돌
				if ((*monItr).monSpr->getBoundingBox().intersectsRect(player.slayerSpr->getBoundingBox()))
				{
					Vec2 playerPos = Vec2(player.slayerSpr->getBoundingBox().getMidX(), player.slayerSpr->getBoundingBox().getMidY());
					Vec2 monPos = Vec2((*monItr).monSpr->getBoundingBox().getMidX(), (*monItr).monSpr->getBoundingBox().getMidY());
					Vec2 direction = playerPos - monPos;
					direction.normalize();

					if (player.slayerState == SLAYER_ATTACK)
					{

						if (player.dir == -1)//왼쪽을 향할 때
						{
							if (direction.x >= 0 && direction.getLength() <= 20 && player.slayerAttack.getFrameNumber() == 8)
							{
								attackEffect = Sprite::create("hit\\atkEffect.png");
								attackEffect->setScaleX(3.0);
								attackEffect->setPosition((*monItr).monSpr->getBoundingBox().getMidX(), (*monItr).monSpr->getBoundingBox().getMidY());
								attackEffect->setRotation(random() % 180);
								this->addChild(attackEffect, 2);

								AudioEngine::play2d("sound\\sword.mp3", false, sndVol);

								auto action = Sequence::create(DelayTime::create(0.1f), CallFuncN::create(CC_CALLBACK_1(StageOne::ResetEffect, this)), NULL);
								attackEffect->runAction(action);

								(*monItr).health -= player.attackPower;
							}

							if (direction.getLength() < 0.6)
							{
								delayTime += timeDelta;
								if (delayTime >= 0.2)
								{
									AudioEngine::play2d("sound\\hit.mp3", false, sndVol);

									playerHit = Sprite::create("hit\\playerHit.png");
									playerHit->setScale(1.0 + timeDelta);
									playerHit->setPosition(player.slayerSpr->getPositionX() + random() % 30 - 20, player.slayerSpr->getPositionY() + random() % 30 + 20);
									this->addChild(playerHit, 2);

									auto action = Sequence::create(DelayTime::create(0.1f), CallFuncN::create(CC_CALLBACK_1(StageOne::ResetEffect, this)), NULL);
									playerHit->runAction(action);

									player.health -= (*monItr).power;
									delayTime = 0;
								}
							}
						}
						else//오른쪽을 향할 때
						{
							if (direction.x <= 0 && direction.getLength() <= 20 && player.slayerAttack.getFrameNumber() == 8)
							{
								attackEffect = Sprite::create("hit\\atkEffect.png");
								attackEffect->setScaleX(3.0);
								attackEffect->setPosition((*monItr).monSpr->getBoundingBox().getMidX(), (*monItr).monSpr->getBoundingBox().getMidY());
								attackEffect->setRotationY(random() % 180);
								this->addChild(attackEffect, 2);

								AudioEngine::play2d("sound\\sword.mp3", false, sndVol);

								auto action = Sequence::create(DelayTime::create(0.1f), CallFuncN::create(CC_CALLBACK_1(StageOne::ResetEffect, this)), NULL);
								attackEffect->runAction(action);

								(*monItr).health -= player.attackPower;
							}

							if (direction.getLength() < 0.7)
							{
								delayTime += timeDelta;
								if (delayTime >= 0.2)
								{
									AudioEngine::play2d("sound\\hit.mp3", false, sndVol);

									playerHit = Sprite::create("hit\\playerHit.png");
									playerHit->setScale(1.0 + timeDelta);
									playerHit->setPosition(player.slayerSpr->getPositionX() + random() % 30 - 20, player.slayerSpr->getPositionY() + random() % 30 + 20);
									this->addChild(playerHit, 2);

									auto action = Sequence::create(DelayTime::create(0.1f), CallFuncN::create(CC_CALLBACK_1(StageOne::ResetEffect, this)), NULL);
									playerHit->runAction(action);

									player.health -= (*monItr).power;
									delayTime = 0;
								}
							}
						}
					}
					else
					{
						delayTime += timeDelta;
						if (delayTime >= 0.2)
						{
							AudioEngine::play2d("sound\\hit.mp3", false, sndVol);

							playerHit = Sprite::create("hit\\playerHit.png");
							playerHit->setScale(1.0 + timeDelta);
							playerHit->setPosition(player.slayerSpr->getPositionX() + random() % 30 - 20, player.slayerSpr->getPositionY() + random() % 30 + 20);
							this->addChild(playerHit, 2);

							auto action = Sequence::create(DelayTime::create(0.1f), CallFuncN::create(CC_CALLBACK_1(StageOne::ResetEffect, this)), NULL);
							playerHit->runAction(action);

							player.health -= (*monItr).power;
							delayTime = 0;
						}
					}
				}

				//몬스터 소멸
				if ((*monItr).health <= 0)
				{
					(*monItr).monsterAnim.removeAllData();
					this->removeChild((*monItr).monSoundSpr);
					this->removeChild((*monItr).monSpr);
					monsterList.erase(monItr++);
					continue;
				}

				monItr++;
			}
			//공격키 한번 누르면 공격애니메이션이 모두 실행되도록 함
			if (player.slayerState == SLAYER_ATTACK && player.slayerAttack.getFrameNumber() == 8)
			{

				is_kBTN[K_X] = false;
				player.slayerAttack.setFrameNumber(0);
			}

			//플레이어와의 거리에 따른 투명도 조절
			//블럭
			itr = blockList.begin();
			while (itr != blockList.end())
			{
				float distance = player.pos.distance((*itr)->getPosition());
				int color = 255 - ((distance / 100) * 255);

				if (color >= 255) color = 255;
				if (color <= 0) color = 0;

				(*itr)->setOpacity(color);
				itr++;
			}

			//몬스터
			//플레이어와의 거리가 일정 거리 이상이면 몬스터의 본래의 이미지가 아닌 
			//다른 이미지로 표현!
			monItr = monsterList.begin();
			while (monItr != monsterList.end())
			{
				float distance = player.pos.distance((*monItr).monSpr->getPosition());
				int color = 255 - ((distance / 100) * 255);

				if (color >= 255) color = 255;
				if (color <= 0) color = 0;

				if (rot >= 360)
					rot = 100;

				rot += timeDelta * 100;
				(*monItr).monSoundSpr->setRotation(rot);
				(*monItr).monSoundSpr->setScale(rot*0.05 / distance);

				if (color != 0)
				{
					(*monItr).monSoundSpr->setVisible(false);
				}
				else
				{
					(*monItr).monSoundSpr->setVisible(true);
				}

				(*monItr).monsterAnim.setOpt(color);
				monItr++;
			}

			//모든 몬스터들이 소멸 시에 게임 종료 및 UI 생성
			if (monsterList.empty())
			{
				auto ClearMsg = Label::createWithTTF("S t a g e  C l e a r", "fonts\\Japanese Style.ttf", 80);
				ClearMsg->setPosition(winSize.width / 2, winSize.height / 2 + 60);
				this->addChild(ClearMsg, 4);

				auto StoneSpr = Sprite::createWithSpriteFrameName("redstone.png");
				StoneSpr->setScale(1.3);
				StoneSpr->setPosition(winSize.width / 2, winSize.height / 2);
				this->addChild(StoneSpr, 4);

				auto nextLabel = Label::createWithTTF("N E X T", "fonts\\Japanese Style.ttf", 35);
				auto backLabel = Label::createWithTTF("B A C K  T O  M E N U", "fonts\\Japanese Style.ttf", 35);

				auto item_0 = MenuItemLabel::create(nextLabel, CC_CALLBACK_1(StageOne::nextStage, this));
				auto item_1 = MenuItemLabel::create(backLabel, CC_CALLBACK_1(StageOne::backToMenu, this));

				auto menu = Menu::create(item_0, item_1, NULL);
				menu->alignItemsVerticallyWithPadding(20.0);
				menu->setPosition(winSize.width / 2, winSize.height / 2 - 80);
				this->addChild(menu, 4);

				UserDefault::getInstance()->setIntegerForKey("continue", 2);

				gamePlay = false;
			}
		}
		else
		{
			gamePlay = false;

			player.slayerIdle.removeAllData();
			player.slayerAttack.removeAllData();
			player.slayerWalk.removeAllData();
			this->removeChild(player.slayerSpr);

			AudioEngine::play2d("sound\\death.mp3", false, sndVol);

			auto deadSign = Label::createWithTTF("Y O U  D E A D", "fonts/japanese style.ttf", 80);
			deadSign->setPosition(winSize.width / 2, winSize.height / 2 + 60);
			deadSign->setColor(Color3B::RED);
			this->addChild(deadSign, 4);

			auto restartLabel = Label::createWithTTF("R E S T A R T", "fonts\\Japanese Style.ttf", 35);
			auto backLabel = Label::createWithTTF("B A C K  T O  M E N U", "fonts\\Japanese Style.ttf", 35);

			auto item_0 = MenuItemLabel::create(restartLabel, CC_CALLBACK_1(StageOne::reStage, this));
			auto item_1 = MenuItemLabel::create(backLabel, CC_CALLBACK_1(StageOne::backToMenu, this));

			auto menu = Menu::create(item_0, item_1, NULL);
			menu->alignItemsVerticallyWithPadding(20.0);
			menu->setPosition(winSize.width / 2, winSize.height / 2 - 80);
			this->addChild(menu, 4);
		}
	}
}
/*----------------------------------------------------------------------------------------*/