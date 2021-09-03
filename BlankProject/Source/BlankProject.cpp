#include "BlankProject.h"
#include "Engine/Simulation.h"
#include "Platform/Win32/WinEntry.h"


class BlankProject : public Misli::Simulation {

	// Application

public:
	/* Application Constuctor */
	BlankProject() {}

	/* Application Deconstructor */
	~BlankProject() {}


public:

	VOID SetupPerGameSettings();

	/* Called to Initialize the Application  */
	VOID Initialize() {}



	/* Game Loop - Called on a loop while the Application is running */
	VOID Update() {}
};
ENTRYAPP(BlankProject)

VOID BlankProject::SetupPerGameSettings()
{
	/* Set the Per Game Settings */
	PerGameSettings::SetGameName(IDS_PERGAMENAME);
	PerGameSettings::SetShortName(IDS_SHORTNAME);
	PerGameSettings::SetMainIcon(IDI_MAINICON);
	//PerGameSettings::SetSplashURL(IDS_SPLASHURL);
}
