#pragma once
#ifndef StartScreen_H
#define StartScreen_H

#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Button.H>

class StartScreen : public Fl_Double_Window {
public:
		
	StartScreen(void *);

	Fl_Button* LogWorker;
	Fl_Button* LogAdmin;

};

void LogAdminButton(Fl_Widget*, void*);




#endif 
