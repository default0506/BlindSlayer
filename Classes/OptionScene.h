#ifndef __OPTIONSCENE_H__
#define __OPTIONSCENE_H__

#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "AudioEngine.h"

USING_NS_CC;

using namespace cocos2d;
using namespace experimental;

class OptionScene : public Layer
{
private:
	Size winSize;
	float opt = 0;
private:
	int stageNum;
	Label *stageInfo;
	char tmp[256];
public:
	static Scene* createScene();

	virtual bool init();

	CREATE_FUNC(OptionScene);

	void returnScene(Ref *s);

	void menuCallback(Ref *s);

	void stageCheatUp(Ref *s);

	void stageCheatDown(Ref *s);

	void sliderEvent(Ref *sender, ui::Slider::EventType type);
};

#endif