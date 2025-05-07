#pragma once
#include "SceneBase.h"
class SceneSample002 : public SceneBase
{
public:
	SceneSample002();
	virtual ~SceneSample002() {}


	virtual void Init() override;
	virtual void End() override;

	virtual SceneBase* Update() override;
	virtual void Draw() override;

private:
};

