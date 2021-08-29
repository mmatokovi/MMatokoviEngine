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

	/* Print a line of '-' char's */
	static VOID PrintDebugSeperator();

	/* Check to see if MTail is already Running */
	static BOOL IsMTailRunning();

	/* Start MTail Application */
	static VOID StartMTail();


};