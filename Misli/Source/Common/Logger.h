#pragma once

class MISLI_API Logger {

private:
	static Logger* inst;
public:
	static Logger* Instance() { return inst; }
public:
	~Logger();
	Logger();

};