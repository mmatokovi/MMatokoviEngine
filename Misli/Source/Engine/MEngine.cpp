#include "Misli.h"

namespace Engine {

	MEngine g_MisliEngine;

	VOID SetMode(EngineMode mode)
	{
		g_MisliEngine.SetEngineMode(mode);
	}


	EngineMode GetMode()
	{
		return g_MisliEngine.GetEngineMode();
	}

	std::wstring MISLI_API EngineModeToString()
	{
		switch (Engine::GetMode())
		{
		case EngineMode::DEBUG:		return L"Debug";
		case EngineMode::RELEASE:	return L"Release";
		case EngineMode::SERVER:	return L"Server";
		case EngineMode::EDITOR:	return L"Editor";
		default:					return L"None";
		}
	}

}

MEngine::MEngine()
{
#ifdef _DEBUG
	m_EngineMode = EngineMode::DEBUG;
#else
	m_EngineMode = EngineMode::RELEASE;
#endif
}

MEngine::~MEngine()
{
}

EngineMode MEngine::GetEngineMode()
{
	return m_EngineMode;
}

VOID MEngine::SetEngineMode(EngineMode mode)
{
	m_EngineMode = mode;
}
