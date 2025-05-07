#pragma once
#include "SceneBase.h"
class SceneSample000 : public SceneBase
{
public:
	SceneSample000();
	virtual ~SceneSample000() {}


	virtual void Init() override;
	virtual void End() override;

	virtual SceneBase* Update() override;
	virtual void Draw() override;

private:
};

