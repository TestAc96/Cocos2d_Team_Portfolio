#ifndef __INTRO_SCENE_H__
#define __INTRO_SCENE_H__

#include "cocos2d.h"

class IntroScene : public cocos2d::Scene
{
public:
	static cocos2d::Scene* createScene();
	virtual bool init();
	CREATE_FUNC(IntroScene);
	void onEnter();
	void onExit();
	bool onTouchBegan(cocos2d::Touch* touch, cocos2d::Event* event);
	void onTouchCancelled(cocos2d::Touch* touch, cocos2d::Event* event);
private:
	cocos2d::Layer* _bgLayer;
	cocos2d::Layer* _uiLayer;
	cocos2d::EventListenerTouchOneByOne* _listener;
};

#endif // __INTRO_SCENE_H__
