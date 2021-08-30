#pragma once

#include "Engine/Simulation.h"


class Application : public Misli::Simulation {

	// Application

public:
	/* Application Constuctor */
	Application();

	/* Application Deconstructor */
	~Application();


public:

	VOID SetupPerGameSettings();

	/* Called to Initialize the Application  */
	VOID Initialize();



	/* Game Loop - Called on a loop while the Application is running */
	VOID Update();
};