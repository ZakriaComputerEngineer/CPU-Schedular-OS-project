#include "main window.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void onFormClosing(Object^ sender, FormClosingEventArgs^ e) {
	if (e->CloseReason == CloseReason::UserClosing) {
		Application::Exit();
	}
}

void main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	//GUIOSProject::First_Window frm;
	OSProject::MyForm frm;
	frm.FormClosing += gcnew FormClosingEventHandler(&onFormClosing); // add event handler
	Application::Run(% frm);
}


