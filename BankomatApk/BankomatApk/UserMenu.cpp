#include "UserMenu.h"
//SALDO
System::Void BankomatApk::UserMenu::button5_Click(System::Object^  sender, System::EventArgs^  e) {
	label5->Text = Convert::ToString(bankomat->saldo()) + " z³";
	linkLabel1->Visible = true;
}
//SALDO
System::Void BankomatApk::UserMenu::button6_Click(System::Object^  sender, System::EventArgs^  e) {
	label5->Text = Convert::ToString(bankomat->saldo()) + " z³";
	linkLabel1->Visible = true;
}
//Ukrywanie salda
System::Void BankomatApk::UserMenu::linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	label5->Text = "";
	linkLabel1->Visible = false;
}
//WYLOGUJ
System::Void  BankomatApk::UserMenu::button7_Click(System::Object^  sender, System::EventArgs^  e) {
	bankomat->wyloguj();
	this->Close();
}
//WYLOGUJ
System::Void BankomatApk::UserMenu::button8_Click(System::Object^  sender, System::EventArgs^  e) {
	cout << endl << "Wylogowuje" << endl;
	bankomat->wyloguj();
	this->Close();
}

//Zmiana PIN
System::Void BankomatApk::UserMenu::button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (label7->Visible == false) {
		label7->Visible = true;
		label6->Visible = true;
		textBox1->Visible = true;
		textBox2->Visible = true;
		label4->Text = "ZatwierdŸ zmianê PIN";

		label1->Visible = false;
		label2->Visible = false;
		label3->Visible = false;

		button1->Visible = false;
		button2->Visible = false;
		button5->Visible = false;
		button6->Visible = false;
		button7->Visible = false;
		button8->Visible = false;
	}
	else {
		if (textBox1->Text != "" && textBox2->Text != "") {
			bankomat->zmienPIN(Convert::ToInt32(textBox1->Text), Convert::ToInt32(textBox2->Text));
		}
		label7->Visible = false;
		label6->Visible = false;
		textBox1->Visible = false;
		textBox2->Visible = false;
		label4->Text = "Zmiana PIN";

		label1->Visible = true;
		label2->Visible = true;
		label3->Visible = true;

		button1->Visible = true;
		button2->Visible = true;
		button5->Visible = true;
		button6->Visible = true;
		button7->Visible = true;
		button8->Visible = true;
	}
}
//Zmiana PIN
System::Void BankomatApk::UserMenu::button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (label7->Visible == false) {
		label7->Visible = true;
		label6->Visible = true;
		textBox1->Visible = true;
		textBox2->Visible = true;
		label4->Text = "ZatwierdŸ zmianê PIN";

		label1->Visible = false;
		label2->Visible = false;
		label3->Visible = false;

		button1->Visible = false;
		button2->Visible = false;
		button5->Visible = false;
		button6->Visible = false;
		button7->Visible = false;
		button8->Visible = false;
	}
	else {
		if (textBox1->Text != "" && textBox2->Text != "") {
			bankomat->zmienPIN(Convert::ToInt32(textBox1->Text), Convert::ToInt32(textBox2->Text));
		}
		label7->Visible = false;
		label6->Visible = false;
		textBox1->Visible = false;
		textBox2->Visible = false;
		label4->Text = "Zmiana PIN";

		label1->Visible = true;
		label2->Visible = true;
		label3->Visible = true;

		button1->Visible = true;
		button2->Visible = true;
		button5->Visible = true;
		button6->Visible = true;
		button7->Visible = true;
		button8->Visible = true;
	}
}
//Wyp³ata
System::Void BankomatApk::UserMenu::button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//Nowe Okno
	Wyplata^ oknoW = gcnew Wyplata(bankomat);
	this->Hide();
	oknoW->ShowDialog();
	this->Show();
}
//Wyp³ata
System::Void BankomatApk::UserMenu::button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//Nowe Okno
	Wyplata^ oknoW = gcnew Wyplata(bankomat);
	this->Hide();
	oknoW->ShowDialog();
	this->Show();
}

//Zamkniêcie
System::Void  BankomatApk::UserMenu::UserMenu_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	cout << endl << "Bezpiecznie wylogowuje" << endl;
	bankomat->wyloguj();
	this->Close();
}

