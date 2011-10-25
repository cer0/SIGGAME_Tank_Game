/* =============================================================================
*
*			file name :			visual_window.h
*			\authors :				Armando Diaz T.
*			\brief :					
*
*			\details :				
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
	VisualWindow() ;
	~VisualWindow() { } ; 
	void createWindow() { window = new CL_DisplayWindow(  windowDescription ) ; } // maybe remove this line later
	void setWindowDescription( CL_DisplayWindowDescription& desc ) { windowDescription = desc ; }
	bool keepWindowAlive() { return  windowAliveBool ; } 
	void onWindowClose() { windowAliveBool = false ; } 
private:
	void setWindowCloseSignal() ;
};


#endif