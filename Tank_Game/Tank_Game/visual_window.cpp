/* =============================================================================
*
*			file name :			visual_window.cpp	
*			\authors :				Armando Diaz T.
*			\brief :					implementation file for the VisualWindow class
*										methods found in visual_window.h
*
===============================================================================
*/

#include "precomp.h"
#include "visual_window.h"


/*** VisualWindow() *******************************************************************
*		Creates a window with default values. These defaults will probably be changed in the future	
***********************************************************************************/
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

/*** setWindowCloseSignal() *******************************************************************
*		Creates a slot that will allowing the onWindowClose() method to run when the user 
*		decides to exit
***********************************************************************************/
void VisualWindow::setWindowCloseSignal()
{
	CL_Slot slot_quit = window->sig_window_close().connect(this, &VisualWindow::onWindowClose );
}