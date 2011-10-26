/* =============================================================================
*
*			file name :			visual_window.cpp	
*			\authors :				Armando Diaz T.
*			created :				
*			\brief :					
*
*			\details :				
*
===============================================================================
*/

#include "precomp.h"
#include "visual_window.h"

VisualWindow::VisualWindow() : GraphicsComponent()
{
	CL_DisplayWindowDescription desc;
	desc.set_title("Tank Game");
	desc.set_size(CL_Size(640, 480), true);
	desc.set_allow_resize(true);

	CL_DisplayWindow window(desc);
	windowAliveBool = true ;
	setWindowCloseSignal() ; 
	// this->typeName = "VisualWindow" ;

}

void VisualWindow::setWindowCloseSignal()
{
	// Connect the Window close event
	CL_Slot slot_quit = window->sig_window_close().connect(this, &VisualWindow::onWindowClose );
}