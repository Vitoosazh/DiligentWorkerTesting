#pragma once
#ifndef Menu_H
#define Menu_H
#include <FL/Fl_Button.H>
#include <FL/Fl_Double_Window.H>


class Menu : public Fl_Double_Window {
public:
	Menu(void*);

	
	Fl_Button* InKonstructor;
	Fl_Button* InListTests;
	Fl_Button* InListResults;

};

void toKonstructor(Fl_Widget*, void*);

void toListTests(Fl_Widget*, void*);

void toListResults(Fl_Widget*, void*);

#endif