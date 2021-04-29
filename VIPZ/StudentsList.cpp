#include "StudentsList.h"
using namespace System;

using namespace System::Windows::Forms;



[STAThreadAttribute]

void main(array<String^>^ args) {//бажано з малої писати main

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	//Project5 your project name

	VIPZ::StudentsList form;

	Application::Run(% form);

}


