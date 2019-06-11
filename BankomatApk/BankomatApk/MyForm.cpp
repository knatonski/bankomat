#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BankomatApk::MyForm form;
	Application::Run(%form);
}

#pragma endregion
	System::Void BankomatApk::MyForm::button8_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^ s1 = textBox1->Text;
		String ^ s2 = textBox2->Text;
		int nr_konta = -1;
		int pin = -1;

		if (!s1->Equals("") && !s2->Equals("")) {
			nr_konta = Convert::ToInt32(s1);
			pin = Convert::ToInt32(s2);
		}
		
		if (b->zaloguj(nr_konta, pin)) {
			label4->Text = "";
			UserMenu^ okno = gcnew UserMenu(b);
			this->Hide();
			okno->ShowDialog();
			textBox1->Text = "";
			textBox2->Text = "";
			this->Show();
		}
		else
		{
			label4->Text = "B³¹d logowania!\nSpróbuj jeszcze raz!";
		}
	}


