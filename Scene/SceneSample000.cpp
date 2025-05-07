#include "SceneSample000.h"
#include "DxLib.h"

SceneSample000::SceneSample000()
{
}

void SceneSample000::Init()
{
}

void SceneSample000::End()
{
}

SceneBase* SceneSample000::Update()
{
	return this;
}

void SceneSample000::Draw()
{
	DrawString(0, 0, "Sample000", 0xffffff);
}
