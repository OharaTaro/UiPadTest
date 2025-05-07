#pragma once
#include "SceneBase.h"
class SceneSample005 : public SceneBase
{
public:
	SceneSample005();
	virtual ~SceneSample005() {}


	virtual void Init() override;
	virtual void End() override;

	virtual SceneBase* Update() override;
	virtual void Draw() override;

private:
};

