
#include "precomp.h"
#include "program.h"
#include <ClanLib/application.h>

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
// Set the window
	CL_DisplayWindowDescription desc;
	desc.set_title("Tank Game");
	desc.set_size(CL_Size(640, 480), true);
	desc.set_allow_resize(true);

	CL_DisplayWindow window(desc);

	unsigned int last_time = CL_System::get_time(); 

	while (!quit)
	{
		unsigned int current_time = CL_System::get_time();
		float time_delta_ms = static_cast<float> (current_time - last_time);
		last_time = current_time;

		// This call processes user input and other events
		CL_KeepAlive::process(0);
	}
	return 0;
}
