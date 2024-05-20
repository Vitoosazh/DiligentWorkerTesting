#pragma execution_character_set("utf-8")
#ifndef Client_H
#define Client_H
#include "UX_UI.h"
#include <iostream>
class Client {
public:
	Interface* interface;

	Client();

	void Run();
};


#endif 
