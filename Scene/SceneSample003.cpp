#include "SceneSample003.h"
#include "DxLib.h"

SceneSample003::SceneSample003()
{
}

void SceneSample003::Init()
{
}

void SceneSample003::End()
{
}

SceneBase* SceneSample003::Update()
{
	return this;
}

void SceneSample003::Draw()
{
	DrawString(0, 0, "Sample003", 0xffffff);
}
