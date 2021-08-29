#pragma once
#define ENTRYAPP(x) IApplication* EntryApplication() { return new x; }

class MISLI_API IApplication {

public:

	IApplication();

	virtual ~IApplication() {};

public:

	virtual VOID Initialize() = 0;

	virtual VOID Update() = 0;
};

IApplication* EntryApplication();