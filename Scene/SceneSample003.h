#pragma once
#include "SceneBase.h"
class SceneSample003 : public SceneBase
{
public:
	SceneSample003();
	virtual ~SceneSample003() {}


	virtual void Init() override;
	virtual void End() override;

	virtual SceneBase* Update() override;
	virtual void Draw() override;

private:
};

