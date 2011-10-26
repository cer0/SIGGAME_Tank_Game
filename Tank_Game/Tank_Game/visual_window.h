/* =============================================================================
*
*			file name :			visual_window.h
*			\authors :				Armando Diaz T.
*			\brief :					A component encapsulating the creation and 
*										use of the main program window.
*
*			\details :				VisualWindow is a component intended for use by
*										an instance of the World class. There should only be
*										one instance of this component in use during runtime.
*										Future edits to this file will ensure this is true. This
*										component is the only subclass of GraphicsComponent
*										which will not need a graphics context since the main
*										window provides the graphics context for things to be rendered.
*
===============================================================================
*/ 
#ifndef VISUAL_WINDOW_H
#define VISUAL_WINDOW_H

#include "precomp.h"
#include "graphics_component.h"

class VisualWindow : GraphicsComponent
{
private:
	CL_DisplayWindowDescription windowDescription ;
	CL_DisplayWindow* window ;
	bool windowAliveBool ;

public:
	VisualWindow()  ;
	~VisualWindow() { if( window != NULL ) delete window ; } ; 
	void createWindow() { window = new CL_DisplayWindow(  windowDescription ) ; }	// may remove this line later, depending on how window creation is done 
	void setWindowDescription( CL_DisplayWindowDescription& desc ) { windowDescription = desc ; }
	bool keepWindowAlive() { return  windowAliveBool ; } 
	void onWindowClose() { windowAliveBool = false ; } 
private:
	void setWindowCloseSignal() ;
};


#endif