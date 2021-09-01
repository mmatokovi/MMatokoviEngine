#include "Misli.h"
#include "SubObject.h"

namespace Win32 {
	SubObject::SubObject(std::wstring className, std::wstring classTitle, HICON icon)
		: m_Class(className), m_Title(classTitle), m_hIcon(icon)
	{
	}

	SubObject::~SubObject()
	{
	}
}
