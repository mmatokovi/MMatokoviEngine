#include "Misli.h"

PerGameSettings* PerGameSettings::inst;

PerGameSettings::PerGameSettings()
{

	inst = this;

	wcscpy_s(inst->m_GameName, L"undefined");
	wcscpy_s(inst->m_ShortName, L"undefined");
	wcscpy_s(inst->m_BootTime, L"undefined");

}

PerGameSettings::~PerGameSettings()
{
}