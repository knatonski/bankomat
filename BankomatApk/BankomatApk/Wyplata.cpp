#include "Wyplata.h"

void BankomatApk::Wyplata::wyplacKase(const double kwota) {
	int* banknoty = bankomat->wyplac(kwota);
	int i = 0;
	while (banknoty[i]>0) {
		cout << banknoty[i++] << " zl, ";
	}
	cout << endl;
	if (i == 0) {
		cout << "Nie mozna wyplacic pieniedzy";
	}
	this->Close();
}

//50 z³
System::Void BankomatApk::Wyplata::button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->wyplacKase(50.0);
}
//100z³
System::Void BankomatApk::Wyplata::button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->wyplacKase(100.0);
}
//150z³
System::Void BankomatApk::Wyplata::button3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->wyplacKase(150.0);
}
//200z³
System::Void BankomatApk::Wyplata::button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->wyplacKase(200.0);
}
//300z³
System::Void BankomatApk::Wyplata::button5_Click(System::Object^  sender, System::EventArgs^  e) {
	this->wyplacKase(300.0);
}
//400z³
System::Void BankomatApk::Wyplata::button6_Click(System::Object^  sender, System::EventArgs^  e) {
	this->wyplacKase(400.0);
}
//500z³
System::Void BankomatApk::Wyplata::button7_Click(System::Object^  sender, System::EventArgs^  e) {
	this->wyplacKase(500.0);
}
//Inna Kwota
System::Void  BankomatApk::Wyplata::button8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (label6->Visible == false) {
		label6->Visible = true;
		textBox1->Visible = true;
		textBox1->Text = "";
		this->label10->Location = System::Drawing::Point(613, 316);
		label10->Text = "ZatwierdŸ";
		

		label2->Visible = false;
		label7->Visible = false;
		label1->Visible = false;
		label3->Visible = false;
		label4->Visible = false;
		label8->Visible = false;
		label9->Visible = false;

		button1->Visible = false;
		button2->Visible = false;
		button3->Visible = false;
		button4->Visible = false;
		button5->Visible = false;
		button6->Visible = false;
		button7->Visible = false;
	}
	else {
		label6->Visible = false;
		textBox1->Visible = false;
		this->label10->Location = System::Drawing::Point(652, 316);
		label10->Text = "Inna";
		

		label2->Visible = true;
		label7->Visible = true;
		label1->Visible = true;
		label3->Visible = true;
		label4->Visible = true;
		label8->Visible = true;
		label9->Visible = true;

		button1->Visible = true;
		button2->Visible = true;
		button3->Visible = true;
		button4->Visible = true;
		button5->Visible = true;
		button6->Visible = true;
		button7->Visible = true;
		if (textBox1->Text != "") {
			this->wyplacKase(Convert::ToDouble(textBox1->Text));
		}
	}
}
