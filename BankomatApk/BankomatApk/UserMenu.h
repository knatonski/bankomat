#pragma once
#include "MyForm.h"
#include "Klient.h"
#include "Bankomat.h"
#include "Wyplata.h"
namespace BankomatApk {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o UserMenu
	/// </summary>
	public ref class UserMenu : public System::Windows::Forms::Form
	{
	private: Bankomat* bankomat;
	
	public:
		UserMenu(Bankomat* k)
		{
			bankomat = k;
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~UserMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox2;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs³ugi projektanta — nie nale¿y modyfikowaæ 
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(UserMenu::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(904, 356);
			this->label3->Name = L"label3";
			this->label3->Padding = System::Windows::Forms::Padding(49, 18, 20, 18);
			this->label3->Size = System::Drawing::Size(165, 61);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Wyloguj";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(248, 69);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(827, 446);
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			// 
			// button8
			// 
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->Location = System::Drawing::Point(1080, 398);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(140, 70);
			this->button8->TabIndex = 22;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &UserMenu::button8_Click);
			// 
			// button7
			// 
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(1080, 303);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(140, 70);
			this->button7->TabIndex = 21;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &UserMenu::button7_Click);
			// 
			// button6
			// 
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(1080, 208);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(140, 70);
			this->button6->TabIndex = 20;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &UserMenu::button6_Click);
			// 
			// button5
			// 
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(1080, 112);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(140, 70);
			this->button5->TabIndex = 19;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &UserMenu::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(101, 398);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(140, 70);
			this->button4->TabIndex = 18;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &UserMenu::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(101, 303);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 70);
			this->button3->TabIndex = 17;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &UserMenu::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(101, 208);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 70);
			this->button2->TabIndex = 16;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &UserMenu::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(101, 112);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 70);
			this->button1->TabIndex = 15;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &UserMenu::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(904, 165);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(80, 18, 20, 18);
			this->label1->Size = System::Drawing::Size(167, 61);
			this->label1->TabIndex = 29;
			this->label1->Text = L"Saldo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(249, 166);
			this->label2->Name = L"label2";
			this->label2->Padding = System::Windows::Forms::Padding(20, 18, 51, 18);
			this->label2->Size = System::Drawing::Size(166, 61);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Wyp³ata";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(249, 356);
			this->label4->Name = L"label4";
			this->label4->Padding = System::Windows::Forms::Padding(20, 18, 7, 18);
			this->label4->Size = System::Drawing::Size(163, 61);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Zmiana PIN";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Control;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(563, 303);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 33);
			this->label5->TabIndex = 32;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->linkLabel1->Location = System::Drawing::Point(587, 352);
			this->linkLabel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(67, 29);
			this->linkLabel1->TabIndex = 33;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Ukryj";
			this->linkLabel1->Visible = false;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &UserMenu::linkLabel1_LinkClicked);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(635, 201);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->MaxLength = 4;
			this->textBox1->Name = L"textBox1";
			this->textBox1->PasswordChar = '*';
			this->textBox1->Size = System::Drawing::Size(132, 28);
			this->textBox1->TabIndex = 34;
			this->textBox1->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::Control;
			this->label6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(475, 199);
			this->label6->Name = L"label6";
			this->label6->Padding = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->label6->Size = System::Drawing::Size(130, 33);
			this->label6->TabIndex = 35;
			this->label6->Text = L"Podaj PIN *1";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::Control;
			this->label7->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(475, 245);
			this->label7->Name = L"label7";
			this->label7->Padding = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->label7->Size = System::Drawing::Size(130, 33);
			this->label7->TabIndex = 37;
			this->label7->Text = L"Podaj PIN *2";
			this->label7->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox2->Location = System::Drawing::Point(635, 247);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox2->MaxLength = 4;
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(132, 28);
			this->textBox2->TabIndex = 36;
			this->textBox2->Visible = false;
			// 
			// UserMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1303, 594);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1321, 641);
			this->MinimumSize = System::Drawing::Size(1321, 641);
			this->Name = L"UserMenu";
			this->ShowIcon = false;
			this->Text = L"Bankomat - Menu";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &UserMenu::UserMenu_FormClosed);
			this->Load += gcnew System::EventHandler(this, &UserMenu::UserMenu_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//SALDO
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e);
//SALDO
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e);
//Ukrywanie Salda
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e);
//WYLOGUJ
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e);
//WYLOGUJ
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e);
//Zmiana PIN
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e);
//Zmiana PIN
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e);
//Wyp³ata
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
//Wyp³ata
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e);
//Zamkniêcie
private: System::Void UserMenu_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e);

private: System::Void UserMenu_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
