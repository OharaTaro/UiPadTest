#include "SceneSample002.h"
#include "DxLib.h"

SceneSample002::SceneSample002()
{
}

void SceneSample002::Init()
{
}

void SceneSample002::End()
{
}

SceneBase* SceneSample002::Update()
{
	return this;
}

void SceneSample002::Draw()
{
	DrawString(0, 0, "Sample002", 0xffffff);
}
