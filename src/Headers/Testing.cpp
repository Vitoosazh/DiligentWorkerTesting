#include "Testing.h"
#include "Client.h"

namespace testing {
	Client* client;
}

Testing::Testing(void* data) : Fl_Double_Window(300, 200, "����") {

	testing::client = (Client*)data;

	
}

