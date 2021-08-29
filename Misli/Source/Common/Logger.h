#pragma once
#include <string>

class MISLI_API Logger {

private:
	static Logger* inst;
public:
	static Logger* Instance() { return inst; }

	//Constructor
public:
	~Logger();
	Logger();

	static VOID PrintLog(const WCHAR* fmt, ...);

	static std::wstring LogDirectory();

	static std::wstring LogFile();

};