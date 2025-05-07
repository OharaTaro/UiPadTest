#pragma once
#include "SceneBase.h"
class SceneSample001 : public SceneBase
{
public:
	SceneSample001();
	virtual ~SceneSample001() {}


	virtual void Init() override;
	virtual void End() override;

	virtual SceneBase* Update() override;
	virtual void Draw() override;

private:
};

