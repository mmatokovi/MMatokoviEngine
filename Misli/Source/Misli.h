#pragma once


#ifdef WIN32

#include <Windows.h>

#endif

#ifdef BUILD_DLL
	#define MISLI_API __declspec(dllexport)
#else
	#define MISLI_API __declspec(dllimport)
#endif
