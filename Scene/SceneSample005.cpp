#include "SceneSample005.h"
#include "DxLib.h"

SceneSample005::SceneSample005()
{
}

void SceneSample005::Init()
{
}

void SceneSample005::End()
{
}

SceneBase* SceneSample005::Update()
{
	return this;
}

void SceneSample005::Draw()
{
	DrawString(0, 0, "Sample005", 0xffffff);
}
