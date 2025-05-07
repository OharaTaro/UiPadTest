#pragma once
#include "SceneBase.h"
class SceneSample004 : public SceneBase
{
public:
	SceneSample004();
	virtual ~SceneSample004() {}


	virtual void Init() override;
	virtual void End() override;

	virtual SceneBase* Update() override;
	virtual void Draw() override;

private:
};

