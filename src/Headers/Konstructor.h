#pragma once
#ifndef Konstructor_H
#define Konstructor_H

#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Multiline_Output.H>
#include <FL/Fl_Multiline_Input.H>
#include <FL/Fl_Box.H>
#include <FL/fl_ask.H>
#include <string>


class Konstructor : public Fl_Double_Window  {
public:

	
	Fl_Button* enterQustion;
	Fl_Button* newQustion;
	Fl_Button* prevQustion;
	Fl_Button* nextQustion;
	Fl_Button* saveTest;
	Fl_Button* enterAnsver;
	Fl_Button* exitWithOutChange;
	Fl_Button* answerA;
	Fl_Button* answerB;
	Fl_Button* answerC;
	Fl_Button* answerD;
	Fl_Multiline_Output* output;
	Fl_Box* divider;

	std::string quston;
	std::string andswer;
	std::string testName;
	
	


	Konstructor(void *);

	

	
};

void enterText(Fl_Widget* , void*);


#endif