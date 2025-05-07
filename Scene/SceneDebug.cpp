#include "SceneDebug.h"
#include "DxLib.h"
#include "Pad.h"

#include "SceneSample000.h"
#include "SceneSample001.h"
#include "SceneSample002.h"
#include "SceneSample003.h"
#include "SceneSample004.h"
#include "SceneSample005.h"

namespace
{
	const char* const kDebugMenuItem[] =
	{
		"Sample 000",
		"Sample 001",
		"Sample 002",
		"Sample 003",
		"Sample 004",
		"Sample 005",
		"Sound Vol(0~  5) %d",
		"TestValue(0~100) %d",
	};
	constexpr int kDebugMenuItemNum = _countof(kDebugMenuItem);
	constexpr int kSoundVolItemNo = 6;
	constexpr int kTestValItemNo = 7;

	constexpr int kSoundVolMin = 0;
	constexpr int kSoundVolMax = 5;
	constexpr int kTestValueMin = 0;
	constexpr int kTestValueMax = 100;
}

SceneDebug::SceneDebug():
	m_selectItem(0),
	m_soundVol(2),
	m_testValue(64)
{
}

void SceneDebug::Init()
{
}

void SceneDebug::End()
{
}

SceneBase* SceneDebug::Update()
{
	if (Pad::isTrigger(PAD_INPUT_UP))
	{
		m_selectItem--;
		if (m_selectItem < 0)	m_selectItem = kDebugMenuItemNum - 1;
	}
	else if (Pad::isTrigger(PAD_INPUT_DOWN))
	{
		m_selectItem++;
		if (m_selectItem >= kDebugMenuItemNum)	m_selectItem = 0;
	}
//	constexpr int kSoundVolItemNo = 6;
//	constexpr int kTestValItemNo = 7;
//	constexpr int kSoundVolMin = 0;
//	constexpr int kSoundVolMax = 5;
//	constexpr int kTestValueMin = 0;
//	constexpr int kTestValueMax = 100;
	if (m_selectItem == kSoundVolItemNo)
	{
		if (Pad::isTrigger(PAD_INPUT_LEFT))
		{
			m_soundVol--;
			if (m_soundVol <= kSoundVolMin)
			{
				m_soundVol = kSoundVolMin;
			}
		}
		else if (Pad::isTrigger(PAD_INPUT_RIGHT))
		{
			m_soundVol++;
			if (m_soundVol >= kSoundVolMax)
			{
				m_soundVol = kSoundVolMax;
			}
		}
	}
	if (m_selectItem == kTestValItemNo)
	{
		if (Pad::isTrigger(PAD_INPUT_LEFT))
		{
			m_testValue--;
			if (m_testValue <= kTestValueMin)
			{
				m_testValue = kTestValueMin;
			}
		}
		else if (Pad::isTrigger(PAD_INPUT_RIGHT))
		{
			m_testValue++;
			if (m_testValue >= kTestValueMax)
			{
				m_testValue = kTestValueMax;
			}
		}
	}

	if (Pad::isTrigger(PAD_INPUT_1))
	{
		switch (m_selectItem)
		{
		case 0:	return new SceneSample000;
		case 1:	return new SceneSample001;
		case 2:	return new SceneSample002;
		case 3:	return new SceneSample003;
		case 4:	return new SceneSample004;
		case 5:	return new SceneSample005;
		}
	}

	return this;
}

void SceneDebug::Draw()
{
	DrawString(0,0,"DebugMenu", 0xffffff);
	for (int i = 0; i < kDebugMenuItemNum; i++)
	{
		if (m_selectItem == i)
		{
			DrawString(8, 16 + i * 16, "¨", 0xffffff);
		}
		if (i == kSoundVolItemNo)
		{
			DrawFormatString(32, 16 + i * 16, 0xffffff, kDebugMenuItem[i], m_soundVol);
		}
		else if (i == kTestValItemNo)
		{
			DrawFormatString(32, 16 + i * 16, 0xffffff, kDebugMenuItem[i], m_testValue);
		}
		else
		{
			DrawString(32, 16 + i * 16, kDebugMenuItem[i], 0xffffff);
		}
	}
}
