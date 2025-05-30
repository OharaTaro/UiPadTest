#pragma once
#include "SceneBase.h"

class SceneDebug : public SceneBase
{
public:
	SceneDebug();
	virtual ~SceneDebug() {}


	virtual void Init() override;
	virtual void End() override;

	virtual SceneBase* Update() override;
	virtual void Draw() override;

private:

	int m_selectItem;

	int m_soundVol;
	int m_testValue;
};

