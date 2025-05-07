#include "SceneSample004.h"
#include "DxLib.h"

SceneSample004::SceneSample004()
{
}

void SceneSample004::Init()
{
}

void SceneSample004::End()
{
}

SceneBase* SceneSample004::Update()
{
	return this;
}

void SceneSample004::Draw()
{
	DrawString(0, 0, "Sample004", 0xffffff);
}
