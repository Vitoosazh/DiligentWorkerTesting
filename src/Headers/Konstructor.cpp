#include "Konstructor.h"
#include "Client.h"

namespace konstruct {
	Client* client;
}

Konstructor::Konstructor(void* data) : Fl_Double_Window(1200, 800, "Конструктор")
{
	konstruct::client = (Client*)data;

	enterQustion = new Fl_Button(50, 50, 300, 50, "Задать вопрос");
	enterQustion->callback(enterText);
	newQustion = new Fl_Button(50, 150, 300, 50, "Добавить вопрос");

	enterAnsver = new Fl_Button(50, 250, 300, 50, "Выбрать ответ");

	saveTest = new Fl_Button(50, 350, 300, 50, "Сохранить тест");

	exitWithOutChange = new Fl_Button(50, 450, 300, 50, "Выход");

	prevQustion = new Fl_Button(50, 700, 150, 50, "Предыдущий вопрос");

	nextQustion = new Fl_Button(200, 700, 150, 50, "Следующий вопрос");

	output = new Fl_Multiline_Output(500, 100, 600, 300, "Display text: ");

	answerA = new Fl_Button(500, 450, 600, 50, "A");

	answerB = new Fl_Button(500, 534, 600, 50, "B");

	answerC = new Fl_Button(500, 617, 600, 50, "C");

	answerD = new Fl_Button(500, 700, 600, 50, "D");
		
	// Создаем вертикальную разделительную полоску
	divider = new Fl_Box(400, 0, 2, 1200);
	divider->box(FL_FLAT_BOX); // Убираем рамку
	divider->color(FL_DARK3); // Цвет разделителя

	
		
}

void enterText(Fl_Widget*, void*)
{
		
	Fl_Window* windowText = new Fl_Window(440, 150, "Задать вопрос");
	Fl_Multiline_Input* input = new Fl_Multiline_Input(100, 20, 200, 30, "");
	Fl_Button* buttonSaveText = new Fl_Button(100, 60, 100, 30, "Сохранить вопрос");
	Fl_Button* buttonCloseText = new Fl_Button(200, 60, 100, 30, "Закрыть");
	//Fl_Button* editButton = new Fl_Button(150, 150, 100, 30, "Изменить");
	windowText->end();
	windowText->show();
	//buttonSaveText->callback(saveAndDisplayText, static_cast<void*>(input));
	//buttonCloseText->callback(closeText, this);
}

