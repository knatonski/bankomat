#pragma once
#include "Bankomat.h"

namespace BankomatApk {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Wyplata
	/// </summary>
	public ref class Wyplata : public System::Windows::Forms::Form
	{
	private: Bankomat* bankomat;
	public:
		Wyplata(Bankomat* k)
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
		~Wyplata()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Label^  label2;


	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	protected: System::Windows::Forms::Label^  label10;
	private:

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Wyplata::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(181, 105);
			this->label2->Name = L"label2";
			this->label2->Padding = System::Windows::Forms::Padding(40, 18, 40, 18);
			this->label2->Size = System::Drawing::Size(139, 61);
			this->label2->TabIndex = 49;
			this->label2->Text = L"50 z³";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(180, 57);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(827, 446);
			this->pictureBox1->TabIndex = 46;
			this->pictureBox1->TabStop = false;
			// 
			// button8
			// 
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->Location = System::Drawing::Point(1012, 385);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(140, 70);
			this->button8->TabIndex = 45;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Wyplata::button8_Click);
			// 
			// button7
			// 
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(1012, 290);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(140, 70);
			this->button7->TabIndex = 44;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Wyplata::button7_Click);
			// 
			// button6
			// 
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(1012, 196);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(140, 70);
			this->button6->TabIndex = 43;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Wyplata::button6_Click);
			// 
			// button5
			// 
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(1012, 100);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(140, 70);
			this->button5->TabIndex = 42;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Wyplata::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(33, 385);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(140, 70);
			this->button4->TabIndex = 41;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Wyplata::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(33, 290);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 70);
			this->button3->TabIndex = 40;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Wyplata::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(33, 196);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 70);
			this->button2->TabIndex = 39;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Wyplata::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(33, 100);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 70);
			this->button1->TabIndex = 38;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Wyplata::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::Control;
			this->label7->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(181, 199);
			this->label7->Name = L"label7";
			this->label7->Padding = System::Windows::Forms::Padding(33, 18, 33, 18);
			this->label7->Size = System::Drawing::Size(136, 61);
			this->label7->TabIndex = 55;
			this->label7->Text = L"100 z³";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(183, 298);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(33, 18, 33, 18);
			this->label1->Size = System::Drawing::Size(136, 61);
			this->label1->TabIndex = 56;
			this->label1->Text = L"150 z³";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(183, 390);
			this->label3->Name = L"label3";
			this->label3->Padding = System::Windows::Forms::Padding(33, 18, 33, 18);
			this->label3->Size = System::Drawing::Size(136, 61);
			this->label3->TabIndex = 57;
			this->label3->Text = L"200 z³";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(869, 103);
			this->label4->Name = L"label4";
			this->label4->Padding = System::Windows::Forms::Padding(33, 18, 33, 18);
			this->label4->Size = System::Drawing::Size(136, 61);
			this->label4->TabIndex = 58;
			this->label4->Text = L"300 z³";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::Control;
			this->label8->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(869, 199);
			this->label8->Name = L"label8";
			this->label8->Padding = System::Windows::Forms::Padding(33, 18, 33, 18);
			this->label8->Size = System::Drawing::Size(136, 61);
			this->label8->TabIndex = 59;
			this->label8->Text = L"400 z³";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::Control;
			this->label9->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(869, 294);
			this->label9->Name = L"label9";
			this->label9->Padding = System::Windows::Forms::Padding(33, 18, 33, 18);
			this->label9->Size = System::Drawing::Size(136, 61);
			this->label9->TabIndex = 60;
			this->label9->Text = L"500 z³";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::Control;
			this->label10->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(869, 389);
			this->label10->Name = L"label10";
			this->label10->Padding = System::Windows::Forms::Padding(37, 18, 37, 18);
			this->label10->Size = System::Drawing::Size(133, 61);
			this->label10->TabIndex = 61;
			this->label10->Text = L"Inna";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::Control;
			this->label6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(452, 266);
			this->label6->Name = L"label6";
			this->label6->Padding = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->label6->Size = System::Drawing::Size(123, 33);
			this->label6->TabIndex = 63;
			this->label6->Text = L"Podaj kwotê:";
			this->label6->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(604, 268);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->MaxLength = 5;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 28);
			this->textBox1->TabIndex = 62;
			this->textBox1->Visible = false;
			// 
			// Wyplata
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1303, 594);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label2);
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
			this->Name = L"Wyplata";
			this->Text = L"Wyplata";
			this->Load += gcnew System::EventHandler(this, &Wyplata::Wyplata_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void wyplacKase(const double kwota);
	//50 z³
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
	//100z³
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e);
	 //150z³
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e);
	//200z³
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e);
	//300z³
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e);
	 //400z³
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e);
	 //500z³
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e);
	//INNA kwota
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void Wyplata_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
