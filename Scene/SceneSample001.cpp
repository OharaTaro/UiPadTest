#include "SceneSample001.h"
#include "DxLib.h"

SceneSample001::SceneSample001()
{
}

void SceneSample001::Init()
{
}

void SceneSample001::End()
{
}

SceneBase* SceneSample001::Update()
{
	return this;
}

void SceneSample001::Draw()
{
	DrawString(0, 0, "Sample001", 0xffffff);
}
