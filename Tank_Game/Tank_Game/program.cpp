
#include "precomp.h"
#include "program.h"
#include <ClanLib/application.h>
#include "world.h"

CL_ClanApplication clanapp(&Program::main);

int Program::main(const std::vector<CL_String> &args)
{
	// components to setup all the provided subsystems. We'll use these a lot later on
	CL_SetupCore setup_core;
	CL_SetupDisplay setup_display;
	CL_SetupSWRender setup_swrender;
	CL_SetupGUI setup_gui;
	CL_SetupSound setup_sound;
	CL_SetupVorbis setup_vorbis;
	CL_SetupNetwork setup_network;

	//// simple console window just to verify that things work
	//CL_ConsoleWindow console_window( "Console", 80, 200 );
 //   CL_Console::write_line( "< Insert awesome Tank game here... >" );
 //   CL_Console::wait_for_key();


	bool quit = false ;

	World gameWorld ;
	gameWorld.run() ;
	return 0;
}
