#include "Konstructor.h"
#include "Client.h"

namespace konstruct {
	Client* client;
}

Konstructor::Konstructor(void* data) : Fl_Double_Window(1200, 800, "�����������")
{
	konstruct::client = (Client*)data;

	enterQustion = new Fl_Button(50, 50, 300, 50, "������ ������");
	enterQustion->callback(enterText);
	newQustion = new Fl_Button(50, 150, 300, 50, "�������� ������");

	enterAnsver = new Fl_Button(50, 250, 300, 50, "������� �����");

	saveTest = new Fl_Button(50, 350, 300, 50, "��������� ����");

	exitWithOutChange = new Fl_Button(50, 450, 300, 50, "�����");

	prevQustion = new Fl_Button(50, 700, 150, 50, "���������� ������");

	nextQustion = new Fl_Button(200, 700, 150, 50, "��������� ������");

	output = new Fl_Multiline_Output(500, 100, 600, 300, "Display text: ");

	answerA = new Fl_Button(500, 450, 600, 50, "A");

	answerB = new Fl_Button(500, 534, 600, 50, "B");

	answerC = new Fl_Button(500, 617, 600, 50, "C");

	answerD = new Fl_Button(500, 700, 600, 50, "D");
		
	// ������� ������������ �������������� �������
	divider = new Fl_Box(400, 0, 2, 1200);
	divider->box(FL_FLAT_BOX); // ������� �����
	divider->color(FL_DARK3); // ���� �����������

	
		
}

void enterText(Fl_Widget*, void*)
{
		
	Fl_Window* windowText = new Fl_Window(440, 150, "������ ������");
	Fl_Multiline_Input* input = new Fl_Multiline_Input(100, 20, 200, 30, "");
	Fl_Button* buttonSaveText = new Fl_Button(100, 60, 100, 30, "��������� ������");
	Fl_Button* buttonCloseText = new Fl_Button(200, 60, 100, 30, "�������");
	//Fl_Button* editButton = new Fl_Button(150, 150, 100, 30, "��������");
	windowText->end();
	windowText->show();
	//buttonSaveText->callback(saveAndDisplayText, static_cast<void*>(input));
	//buttonCloseText->callback(closeText, this);
}

