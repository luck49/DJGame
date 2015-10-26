#ifndef __AUDIOTEST_SCENE_H__
#define __AUDIOTEST_SCENE_H__

#include "cocos2d.h"

class AudioTestScene : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();

	virtual bool init();

	// a selector callback
	void menuCallbackBack(cocos2d::Ref* pSender);

	// implement the "static create()" method manually
	CREATE_FUNC(AudioTestScene);
};

#endif // __HELLOWORLD_SCENE_H__#pragma once