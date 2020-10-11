#pragma once

namespace Minesweeper {
#include <time.h>
#include <stdlib.h>
	int fr[40];
	int bomb = 0;
	int buttonspressed=0;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ RestartB;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->RestartB = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(193, 96);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 30);
			this->button1->TabIndex = 0;
			this->button1->TabStop = false;
			this->button1->Text = L"Play";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(112, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(263, 34);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Minesweeper Game";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(132, 148);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(30, 30);
			this->button2->TabIndex = 2;
			this->button2->TabStop = false;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Control;
			this->button3->Cursor = System::Windows::Forms::Cursors::Default;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->ForeColor = System::Drawing::Color::Red;
			this->button3->Location = System::Drawing::Point(168, 148);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(30, 30);
			this->button3->TabIndex = 3;
			this->button3->TabStop = false;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Control;
			this->button4->ForeColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(204, 148);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(30, 30);
			this->button4->TabIndex = 4;
			this->button4->TabStop = false;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Control;
			this->button5->ForeColor = System::Drawing::Color::Red;
			this->button5->Location = System::Drawing::Point(241, 148);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(30, 30);
			this->button5->TabIndex = 5;
			this->button5->TabStop = false;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Control;
			this->button6->ForeColor = System::Drawing::Color::Red;
			this->button6->Location = System::Drawing::Point(278, 148);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(30, 30);
			this->button6->TabIndex = 6;
			this->button6->TabStop = false;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Control;
			this->button7->ForeColor = System::Drawing::Color::Red;
			this->button7->Location = System::Drawing::Point(315, 148);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(30, 30);
			this->button7->TabIndex = 7;
			this->button7->TabStop = false;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::Control;
			this->button8->ForeColor = System::Drawing::Color::Red;
			this->button8->Location = System::Drawing::Point(132, 184);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(30, 30);
			this->button8->TabIndex = 8;
			this->button8->TabStop = false;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::Control;
			this->button9->ForeColor = System::Drawing::Color::Red;
			this->button9->Location = System::Drawing::Point(168, 184);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(30, 30);
			this->button9->TabIndex = 9;
			this->button9->TabStop = false;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::Control;
			this->button10->ForeColor = System::Drawing::Color::Red;
			this->button10->Location = System::Drawing::Point(204, 184);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(30, 30);
			this->button10->TabIndex = 10;
			this->button10->TabStop = false;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Visible = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::Control;
			this->button11->ForeColor = System::Drawing::Color::Red;
			this->button11->Location = System::Drawing::Point(240, 184);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(30, 30);
			this->button11->TabIndex = 11;
			this->button11->TabStop = false;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Visible = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::Control;
			this->button12->ForeColor = System::Drawing::Color::Red;
			this->button12->Location = System::Drawing::Point(278, 184);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(30, 30);
			this->button12->TabIndex = 12;
			this->button12->TabStop = false;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Visible = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::Control;
			this->button13->ForeColor = System::Drawing::Color::Red;
			this->button13->Location = System::Drawing::Point(315, 184);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(30, 30);
			this->button13->TabIndex = 13;
			this->button13->TabStop = false;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Visible = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::Control;
			this->button14->ForeColor = System::Drawing::Color::Red;
			this->button14->Location = System::Drawing::Point(132, 220);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(30, 30);
			this->button14->TabIndex = 14;
			this->button14->TabStop = false;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Visible = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::Control;
			this->button15->ForeColor = System::Drawing::Color::Red;
			this->button15->Location = System::Drawing::Point(168, 220);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(30, 30);
			this->button15->TabIndex = 15;
			this->button15->TabStop = false;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Visible = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::Control;
			this->button16->ForeColor = System::Drawing::Color::Red;
			this->button16->Location = System::Drawing::Point(204, 220);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(30, 30);
			this->button16->TabIndex = 16;
			this->button16->TabStop = false;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Visible = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::Control;
			this->button17->ForeColor = System::Drawing::Color::Red;
			this->button17->Location = System::Drawing::Point(241, 220);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(30, 30);
			this->button17->TabIndex = 17;
			this->button17->TabStop = false;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Visible = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::Control;
			this->button18->ForeColor = System::Drawing::Color::Red;
			this->button18->Location = System::Drawing::Point(278, 220);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(30, 30);
			this->button18->TabIndex = 18;
			this->button18->TabStop = false;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Visible = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::Control;
			this->button19->ForeColor = System::Drawing::Color::Red;
			this->button19->Location = System::Drawing::Point(315, 220);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(30, 30);
			this->button19->TabIndex = 19;
			this->button19->TabStop = false;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Visible = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::Control;
			this->button20->ForeColor = System::Drawing::Color::Red;
			this->button20->Location = System::Drawing::Point(132, 256);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(30, 30);
			this->button20->TabIndex = 20;
			this->button20->TabStop = false;
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Visible = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::Control;
			this->button21->ForeColor = System::Drawing::Color::Red;
			this->button21->Location = System::Drawing::Point(168, 256);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(30, 30);
			this->button21->TabIndex = 21;
			this->button21->TabStop = false;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Visible = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::Control;
			this->button22->ForeColor = System::Drawing::Color::Red;
			this->button22->Location = System::Drawing::Point(204, 256);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(30, 30);
			this->button22->TabIndex = 22;
			this->button22->TabStop = false;
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Visible = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::SystemColors::Control;
			this->button23->ForeColor = System::Drawing::Color::Red;
			this->button23->Location = System::Drawing::Point(241, 256);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(30, 30);
			this->button23->TabIndex = 23;
			this->button23->TabStop = false;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Visible = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::SystemColors::Control;
			this->button24->ForeColor = System::Drawing::Color::Red;
			this->button24->Location = System::Drawing::Point(278, 256);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(30, 30);
			this->button24->TabIndex = 24;
			this->button24->TabStop = false;
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Visible = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::SystemColors::Control;
			this->button25->ForeColor = System::Drawing::Color::Red;
			this->button25->Location = System::Drawing::Point(315, 256);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(30, 30);
			this->button25->TabIndex = 25;
			this->button25->TabStop = false;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Visible = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::SystemColors::Control;
			this->button26->ForeColor = System::Drawing::Color::Red;
			this->button26->Location = System::Drawing::Point(132, 292);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(30, 30);
			this->button26->TabIndex = 26;
			this->button26->TabStop = false;
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Visible = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::SystemColors::Control;
			this->button27->ForeColor = System::Drawing::Color::Red;
			this->button27->Location = System::Drawing::Point(168, 292);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(30, 30);
			this->button27->TabIndex = 27;
			this->button27->TabStop = false;
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Visible = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::SystemColors::Control;
			this->button28->ForeColor = System::Drawing::Color::Red;
			this->button28->Location = System::Drawing::Point(204, 292);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(30, 30);
			this->button28->TabIndex = 28;
			this->button28->TabStop = false;
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Visible = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::SystemColors::Control;
			this->button29->ForeColor = System::Drawing::Color::Red;
			this->button29->Location = System::Drawing::Point(241, 292);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(30, 30);
			this->button29->TabIndex = 29;
			this->button29->TabStop = false;
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Visible = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::SystemColors::Control;
			this->button30->ForeColor = System::Drawing::Color::Red;
			this->button30->Location = System::Drawing::Point(278, 292);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(30, 30);
			this->button30->TabIndex = 30;
			this->button30->TabStop = false;
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Visible = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::SystemColors::Control;
			this->button31->ForeColor = System::Drawing::Color::Red;
			this->button31->Location = System::Drawing::Point(315, 292);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(30, 30);
			this->button31->TabIndex = 31;
			this->button31->TabStop = false;
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Visible = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::SystemColors::Control;
			this->button32->ForeColor = System::Drawing::Color::Red;
			this->button32->Location = System::Drawing::Point(132, 328);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(30, 30);
			this->button32->TabIndex = 32;
			this->button32->TabStop = false;
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Visible = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::SystemColors::Control;
			this->button33->ForeColor = System::Drawing::Color::Red;
			this->button33->Location = System::Drawing::Point(168, 328);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(30, 30);
			this->button33->TabIndex = 33;
			this->button33->TabStop = false;
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Visible = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::SystemColors::Control;
			this->button34->ForeColor = System::Drawing::Color::Red;
			this->button34->Location = System::Drawing::Point(204, 328);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(30, 30);
			this->button34->TabIndex = 34;
			this->button34->TabStop = false;
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Visible = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::SystemColors::Control;
			this->button35->ForeColor = System::Drawing::Color::Red;
			this->button35->Location = System::Drawing::Point(241, 328);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(30, 30);
			this->button35->TabIndex = 35;
			this->button35->TabStop = false;
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Visible = false;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::SystemColors::Control;
			this->button36->ForeColor = System::Drawing::Color::Red;
			this->button36->Location = System::Drawing::Point(278, 328);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(30, 30);
			this->button36->TabIndex = 36;
			this->button36->TabStop = false;
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Visible = false;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::SystemColors::Control;
			this->button37->ForeColor = System::Drawing::Color::Red;
			this->button37->Location = System::Drawing::Point(315, 328);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(30, 30);
			this->button37->TabIndex = 37;
			this->button37->TabStop = false;
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Visible = false;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(198, 106);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 20);
			this->label2->TabIndex = 38;
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(380, 228);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(79, 17);
			this->checkBox1->TabIndex = 39;
			this->checkBox1->Text = L"Mark bomb";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Visible = false;
			// 
			// RestartB
			// 
			this->RestartB->Location = System::Drawing::Point(380, 260);
			this->RestartB->Name = L"RestartB";
			this->RestartB->Size = System::Drawing::Size(75, 26);
			this->RestartB->TabIndex = 40;
			this->RestartB->Text = L"Restart";
			this->RestartB->UseVisualStyleBackColor = true;
			this->RestartB->Visible = false;
			this->RestartB->Click += gcnew System::EventHandler(this, &MyForm::RestartB_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(489, 393);
			this->Controls->Add(this->RestartB);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Minesweeper Game";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: Void Lose()
		{
			RestartB->Visible = true;
			if (button2->Enabled == true)
			{
				button2->Enabled = false;
				button2->Text = "";
				if(fr[2]==1)
					button2->BackColor = System::Drawing::Color::Red;
			}
			if (button3->Enabled == true)
			{
				button3->Enabled = false;
				button3->Text = "";
				if (fr[3] == 1)
					button3->BackColor = System::Drawing::Color::Red;
			}
			if (button4->Enabled == true)
			{
				button4->Enabled = false;
				button4->Text = "";
				if (fr[4] == 1)
					button4->BackColor = System::Drawing::Color::Red;
			}
			if (button5->Enabled == true)
			{
				button5->Enabled = false;
				button5->Text = "";
				if (fr[5] == 1)
					button5->BackColor = System::Drawing::Color::Red;
			}
			if (button6->Enabled == true)
			{
				button6->Enabled = false;
				button6->Text = "";
				if (fr[6] == 1)
					button6->BackColor = System::Drawing::Color::Red;
			}
			if (button7->Enabled == true)
			{
				button7->Enabled = false;
				button7->Text = "";
				if (fr[7] == 1)
					button7->BackColor = System::Drawing::Color::Red;
			}
			if (button8->Enabled == true)
			{
				button8->Enabled = false;
				button8->Text = "";
				if (fr[8] == 1)
					button8->BackColor = System::Drawing::Color::Red;
			}
			if (button9->Enabled == true)
			{
				button9->Enabled = false;
				button9->Text = "";
				if (fr[9] == 1)
					button9->BackColor = System::Drawing::Color::Red;
			}
			if (button10->Enabled == true)
			{
				button10->Enabled = false;
				button10->Text = "";
				if (fr[10] == 1)
					button10->BackColor = System::Drawing::Color::Red;
			}
			if (button11->Enabled == true)
			{
				button11->Enabled = false;
				button11->Text = "";
				if (fr[11] == 1)
					button11->BackColor = System::Drawing::Color::Red;
			}
			if (button12->Enabled == true)
			{
				button12->Enabled = false;
				button12->Text = "";
				if (fr[12] == 1)
					button12->BackColor = System::Drawing::Color::Red;
			}
			if (button13->Enabled == true)
			{
				button13->Enabled = false;
				button13->Text = "";
				if (fr[13] == 1)
					button13->BackColor = System::Drawing::Color::Red;
			}
			if (button14->Enabled == true)
			{
				button14->Enabled = false;
				button14->Text = "";
				if (fr[14] == 1)
					button14->BackColor = System::Drawing::Color::Red;
			}
			if (button15->Enabled == true)
			{
				button15->Enabled = false;
				button15->Text = "";
				if (fr[15] == 1)
					button15->BackColor = System::Drawing::Color::Red;
			}
			if (button16->Enabled == true)
			{
				button16->Enabled = false;
				button16->Text = "";
				if (fr[16] == 1)
					button16->BackColor = System::Drawing::Color::Red;
			}
			if (button17->Enabled == true)
			{
				button17->Enabled = false;
				button17->Text = "";
				if (fr[17] == 1)
					button17->BackColor = System::Drawing::Color::Red;
			}
			if (button18->Enabled == true)
			{
				button18->Enabled = false;
				button18->Text = "";
				if (fr[18] == 1)
					button18->BackColor = System::Drawing::Color::Red;
			}
			if (button19->Enabled == true)
			{
				button19->Enabled = false;
				button19->Text = "";
				if (fr[19] == 1)
					button19->BackColor = System::Drawing::Color::Red;
			}
			if (button20->Enabled == true)
			{
				button20->Enabled = false;
				button20->Text = "";
				if (fr[20] == 1)
					button20->BackColor = System::Drawing::Color::Red;
			}
			if (button21->Enabled == true)
			{
				button21->Enabled = false;
				button21->Text = "";
				if (fr[21] == 1)
					button21->BackColor = System::Drawing::Color::Red;
			}
			if (button22->Enabled == true)
			{
				button22->Enabled = false;
				button22->Text = "";
				if (fr[22] == 1)
					button22->BackColor = System::Drawing::Color::Red;
			}
			if (button23->Enabled == true)
			{
				button23->Enabled = false;
				button23->Text = "";
				if (fr[23] == 1)
					button23->BackColor = System::Drawing::Color::Red;
			}
			if (button24->Enabled == true)
			{
				button24->Enabled = false;
				button24->Text = "";
				if (fr[24] == 1)
					button24->BackColor = System::Drawing::Color::Red;
			}
			if (button25->Enabled == true)
			{
				button25->Enabled = false;
				button25->Text = "";
				if (fr[25] == 1)
					button25->BackColor = System::Drawing::Color::Red;
			}
			if (button26->Enabled == true)
			{
				button26->Enabled = false;
				button26->Text = "";
				if (fr[26] == 1)
					button26->BackColor = System::Drawing::Color::Red;
			}
			if (button27->Enabled == true)
			{
				button27->Enabled = false;
				button27->Text = "";
				if (fr[27] == 1)
					button27->BackColor = System::Drawing::Color::Red;
			}
			if (button28->Enabled == true)
			{
				button28->Enabled = false;
				button28->Text = "";
				if (fr[28] == 1)
					button28->BackColor = System::Drawing::Color::Red;
			}
			if (button29->Enabled == true)
			{
				button29->Enabled = false;
				button29->Text = "";
				if (fr[29] == 1)
					button29->BackColor = System::Drawing::Color::Red;
			}
			if (button30->Enabled == true)
			{
				button30->Enabled = false;
				button30->Text = "";
				if (fr[30] == 1)
					button30->BackColor = System::Drawing::Color::Red;
			}
			if (button31->Enabled == true)
			{
				button31->Enabled = false;
				button31->Text = "";
				if (fr[31] == 1)
					button31->BackColor = System::Drawing::Color::Red;
			}
			if (button32->Enabled == true)
			{
				button32->Enabled = false;
				button32->Text = "";
				if (fr[32] == 1)
					button32->BackColor = System::Drawing::Color::Red;
			}
			if (button33->Enabled == true)
			{
				button33->Enabled = false;
				button33->Text = "";
				if (fr[33] == 1)
					button33->BackColor = System::Drawing::Color::Red;
			}
			if (button34->Enabled == true)
			{
				button34->Enabled = false;
				button34->Text = "";
				if (fr[34] == 1)
					button34->BackColor = System::Drawing::Color::Red;
			}
			if (button35->Enabled == true)
			{
				button35->Enabled = false;
				button35->Text = "";
				if (fr[35] == 1)
					button35->BackColor = System::Drawing::Color::Red;
			}
			if (button36->Enabled == true)
			{
				button36->Enabled = false;
				button36->Text = "";
				if (fr[36] == 1)
					button36->BackColor = System::Drawing::Color::Red;
			}
			if (button37->Enabled == true)
			{
				button37->Enabled = false;
				button37->Text = "";
				if (fr[37] == 1)
					button37->BackColor = System::Drawing::Color::Red;
			}
		}
		public: Void Win()
		{
			RestartB->Visible = true;
			if (fr[2] == 1)
			{
				button2->Enabled = false;
				button2->BackColor = System::Drawing::Color::Red;
				button2->Text = "";
			}
			if (fr[3] == 1)
			{
				button3->Enabled = false;
				button3->BackColor = System::Drawing::Color::Red;
				button3->Text = "";
			}
			if (fr[4] == 1)
			{
				button4->Enabled = false;
				button4->BackColor = System::Drawing::Color::Red;
				button4->Text = "";
			}
			if (fr[5] == 1)
			{
				button5->Enabled = false;
				button5->BackColor = System::Drawing::Color::Red;
				button5->Text = "";
			}
			if (fr[6] == 1)
			{
				button6->Enabled = false;
				button6->BackColor = System::Drawing::Color::Red;
				button6->Text = "";
			}
			if (fr[7] == 1)
			{
				button7->Enabled = false;
				button7->BackColor = System::Drawing::Color::Red;
				button7->Text = "";
			}
			if (fr[8] == 1)
			{
				button8->Enabled = false;
				button8->BackColor = System::Drawing::Color::Red;
				button8->Text = "";
			}
			if (fr[9] == 1)
			{
				button9->Enabled = false;
				button9->BackColor = System::Drawing::Color::Red;
				button9->Text = "";
			}
			if (fr[10] == 1)
			{
				button10->Enabled = false;
				button10->BackColor = System::Drawing::Color::Red;
				button10->Text = "";
			}
			if (fr[11] == 1)
			{
				button11->Enabled = false;
				button11->BackColor = System::Drawing::Color::Red;
				button11->Text = "";
			}
			if (fr[12] == 1)
			{
				button12->Enabled = false;
				button12->BackColor = System::Drawing::Color::Red;
				button12->Text = "";
			}
			if (fr[13] == 1)
			{
				button13->Enabled = false;
				button13->BackColor = System::Drawing::Color::Red;
				button13->Text = "";
			}
			if (fr[14] == 1)
			{
				button14->Enabled = false;
				button14->BackColor = System::Drawing::Color::Red;
				button14->Text = "";
			}
			if (fr[15] == 1)
			{
				button15->Enabled = false;
				button15->BackColor = System::Drawing::Color::Red;
				button15->Text = "";
			}
			if (fr[16] == 1)
			{
				button16->Enabled = false;
				button16->BackColor = System::Drawing::Color::Red;
				button16->Text = "";
			}
			if (fr[17] == 1)
			{
				button17->Enabled = false;
				button17->BackColor = System::Drawing::Color::Red;
				button17->Text = "";
			}
			if (fr[18] == 1)
			{
				button18->Enabled = false;
				button18->BackColor = System::Drawing::Color::Red;
				button18->Text = "";
			}
			if (fr[19] == 1)
			{
				button19->Enabled = false;
				button19->BackColor = System::Drawing::Color::Red;
				button19->Text = "";
			}
			if (fr[20] == 1)
			{
				button20->Enabled = false;
				button20->BackColor = System::Drawing::Color::Red;
				button20->Text = "";
			}
			if (fr[21] == 1)
			{
				button21->Enabled = false;
				button21->BackColor = System::Drawing::Color::Red;
				button21->Text = "";
			}
			if (fr[22] == 1)
			{
				button22->Enabled = false;
				button22->BackColor = System::Drawing::Color::Red;
				button22->Text = "";
			}
			if (fr[23] == 1)
			{
				button23->Enabled = false;
				button23->BackColor = System::Drawing::Color::Red;
				button23->Text = "";
			}
			if (fr[24] == 1)
			{
				button24->Enabled = false;
				button24->BackColor = System::Drawing::Color::Red;
				button24->Text = "";
			}
			if (fr[25] == 1)
			{
				button25->Enabled = false;
				button25->BackColor = System::Drawing::Color::Red;
				button25->Text = "";
			}
			if (fr[26] == 1)
			{
				button26->Enabled = false;
				button26->BackColor = System::Drawing::Color::Red;
				button26->Text = "";
			}
			if (fr[27] == 1)
			{
				button27->Enabled = false;
				button27->BackColor = System::Drawing::Color::Red;
				button27->Text = "";
			}
			if (fr[28] == 1)
			{
				button28->Enabled = false;
				button28->BackColor = System::Drawing::Color::Red;
				button28->Text = "";
			}
			if (fr[29] == 1)
			{
				button29->Enabled = false;
				button29->BackColor = System::Drawing::Color::Red;
				button29->Text = "";
			}
			if (fr[30] == 1)
			{
				button30->Enabled = false;
				button30->BackColor = System::Drawing::Color::Red;
				button30->Text = "";
			}
			if (fr[31] == 1)
			{
				button31->Enabled = false;
				button31->BackColor = System::Drawing::Color::Red;
				button31->Text = "";
			}
			if (fr[32] == 1)
			{
				button32->Enabled = false;
				button32->BackColor = System::Drawing::Color::Red;
				button32->Text = "";
			}
			if (fr[33] == 1)
			{
				button33->Enabled = false;
				button33->BackColor = System::Drawing::Color::Red;
				button33->Text = "";
			}
			if (fr[34] == 1)
			{
				button34->Enabled = false;
				button34->BackColor = System::Drawing::Color::Red;
				button34->Text = "";
			}
			if (fr[35] == 1)
			{
				button35->Enabled = false;
				button35->BackColor = System::Drawing::Color::Red;
				button35->Text = "";
			}
			if (fr[36] == 1)
			{
				button36->Enabled = false;
				button36->BackColor = System::Drawing::Color::Red;
				button36->Text = "";
			}
			if (fr[37] == 1)
			{
				button37->Enabled = false;
				button37->BackColor = System::Drawing::Color::Red;
				button37->Text = "";
			}
		}
		public: Void Press(int x)
		{
			buttonspressed++;
			int k = 0;
			if (x == 2)
			{
				button2->Enabled = false;
				button2->Text = "";
				if (fr[2] == 1)
				{
					button2->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button2->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[3] == 1)
						k++;
					if (fr[8] == 1)
						k++;
					if (fr[9] == 1)
						k++;
					if (k == 0)
					{
						if (button3->Enabled == true)
							Press(3);
						if (button8->Enabled == true)
							Press(8);
						if (button9->Enabled == true)
							Press(9);
					}
					
				}
				if (k != 0)
				{
					button2->Text = System::Convert::ToString(k);
				}
			}
			if (x == 3)
			{
				button3->Enabled = false;
				button3->Text = "";
				if (fr[3] == 1)
				{
					button3->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button3->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[2] == 1)
						k++;
					if (fr[4] == 1)
						k++;
					if (fr[8] == 1)
						k++;
					if (fr[9] == 1)
						k++;
					if (fr[10] == 1)
						k++;
					if (k == 0)
					{
						if (button2->Enabled == true)
							Press(2);
						if (button4->Enabled == true)
							Press(4);
						if (button8->Enabled == true)
							Press(8);
						if (button9->Enabled == true)
							Press(9);
						if (button10->Enabled == true)
							Press(10);
					}
					
				}
				if (k != 0)
				{
					button3->Text = System::Convert::ToString(k);
				}
			}
			if (x == 4)
			{
				button4->Enabled = false;
				button4->Text = "";
				if (fr[4] == 1)
				{
					button4->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button4->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[3] == 1)
						k++;
					if (fr[9] == 1)
						k++;
					if (fr[10] == 1)
						k++;
					if (fr[11] == 1)
						k++;
					if (fr[5] == 1)
						k++;
					if (k == 0)
					{
						if (button3->Enabled == true)
							Press(3);
						if (button9->Enabled == true)
							Press(9);
						if (button10->Enabled == true)
							Press(10);
						if (button11->Enabled == true)
							Press(11);
						if (button5->Enabled == true)
							Press(5);
					}
					
				}
				if (k != 0)
				{
					button4->Text = System::Convert::ToString(k);
				}
			}
			if (x == 5)
			{
				button5->Enabled = false;
				button5->Text = "";
				if (fr[5] == 1)
				{
					button5->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button5->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[4] == 1)
						k++;
					if (fr[10] == 1)
						k++;
					if (fr[11] == 1)
						k++;
					if (fr[12] == 1)
						k++;
					if (fr[6] == 1)
						k++;
					if (k == 0)
					{
						if (button4->Enabled == true)
							Press(4);
						if (button10->Enabled == true)
							Press(10);
						if (button11->Enabled == true)
							Press(11);
						if (button12->Enabled == true)
							Press(12);
						if (button6->Enabled == true)
							Press(6);
					}
					
				}
				if (k != 0)
				{
					button5->Text = System::Convert::ToString(k);
				}
			}
			if (x == 6)
			{
				button6->Enabled = false;
				button6->Text = "";
				if (fr[6] == 1)
				{
					button6->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button6->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[5] == 1)
						k++;
					if (fr[11] == 1)
						k++;
					if (fr[12] == 1)
						k++;
					if (fr[13] == 1)
						k++;
					if (fr[7] == 1)
						k++;
					if (k == 0)
					{
						if (button5->Enabled == true)
							Press(5);
						if (button11->Enabled == true)
							Press(11);
						if (button12->Enabled == true)
							Press(12);
						if (button13->Enabled == true)
							Press(13);
						if (button7->Enabled == true)
							Press(7);
					}
					
				}
				if (k != 0)
				{
					button6->Text = System::Convert::ToString(k);
				}
			}
			if (x == 7)
			{
				button7->Enabled = false;
				button7->Text = "";
				if (fr[7] == 1)
				{
					button7->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button7->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[6] == 1)
						k++;
					if (fr[12] == 1)
						k++;
					if (fr[13] == 1)
						k++;
					if (k == 0)
					{
						if (button6->Enabled == true)
							Press(6);
						if (button12->Enabled == true)
							Press(12);
						if (button13->Enabled == true)
							Press(13);
					}
					
				}
				if (k != 0)
				{
					button7->Text = System::Convert::ToString(k);
				}
			}
			if (x == 8)
			{
				button8->Enabled = false;
				button8->Text = "";
				if (fr[8] == 1)
				{
					button8->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button8->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[2] == 1)
						k++;
					if (fr[3] == 1)
						k++;
					if (fr[9] == 1)
						k++;
					if (fr[15] == 1)
						k++;
					if (fr[14] == 1)
						k++;
					if (k == 0)
					{
						if (button2->Enabled == true)
							Press(2);
						if (button3->Enabled == true)
							Press(3);
						if (button9->Enabled == true)
							Press(9);
						if (button15->Enabled == true)
							Press(15);
						if (button14->Enabled == true)
							Press(14);
					}
					
				}
				if (k != 0)
				{
					button8->Text = System::Convert::ToString(k);
				}
				
			}
			if (x == 9)
			{
				button9->Enabled = false;
				button9->Text = "";
				if (fr[9] == 1)
				{
					button9->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button9->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[2] == 1)
						k++;
					if (fr[3] == 1)
						k++;
					if (fr[4] == 1)
						k++;
					if (fr[8] == 1)
						k++;
					if (fr[10] == 1)
						k++;
					if (fr[14] == 1)
						k++;
					if (fr[15] == 1)
						k++;
					if (fr[16] == 1)
						k++;
					if (k == 0)
					{
						if (button2->Enabled == true)
							Press(2);
						if (button3->Enabled == true)
							Press(3);
						if (button4->Enabled == true)
							Press(4);
						if (button8->Enabled == true)
							Press(8);
						if (button10->Enabled == true)
							Press(10);
						if (button14->Enabled == true)
							Press(14);
						if (button15->Enabled == true)
							Press(15);
						if (button16->Enabled == true)
							Press(16);
					}
				}
				if (k != 0)
				{
					button9->Text = System::Convert::ToString(k);
				}
			}
			if (x == 10)
			{
				button10->Enabled = false;
				button10->Text = "";
				if (fr[10] == 1)
				{
					button10->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button10->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[3] == 1)
						k++;
					if (fr[4] == 1)
						k++;
					if (fr[5] == 1)
						k++;
					if (fr[9] == 1)
						k++;
					if (fr[11] == 1)
						k++;
					if (fr[15] == 1)
						k++;
					if (fr[16] == 1)
						k++;
					if (fr[17] == 1)
						k++;
					if (k == 0)
					{
						if (button3->Enabled == true)
							Press(3);
						if (button4->Enabled == true)
							Press(4);
						if (button5->Enabled == true)
							Press(5);
						if (button9->Enabled == true)
							Press(9);
						if (button11->Enabled == true)
							Press(11);
						if (button15->Enabled == true)
							Press(15);
						if (button16->Enabled == true)
							Press(16);
						if (button17->Enabled == true)
							Press(17);
					}
					
				}
				if (k != 0)
				{
					button10->Text = System::Convert::ToString(k);
				}
				
			}
			if (x == 11)
			{
				button11->Enabled = false;
				button11->Text = "";
				if (fr[11] == 1)
				{
					button11->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button11->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[4] == 1)
						k++;
					if (fr[5] == 1)
						k++;
					if (fr[6] == 1)
						k++;
					if (fr[10] == 1)
						k++;
					if (fr[12] == 1)
						k++;
					if (fr[16] == 1)
						k++;
					if (fr[17] == 1)
						k++;
					if (fr[18] == 1)
						k++;
					if (k == 0)
					{
						if (button4->Enabled == true)
							Press(4);
						if (button5->Enabled == true)
							Press(5);
						if (button6->Enabled == true)
							Press(6);
						if (button10->Enabled == true)
							Press(10);
						if (button12->Enabled == true)
							Press(12);
						if (button16->Enabled == true)
							Press(16);
						if (button17->Enabled == true)
							Press(17);
						if (button18->Enabled == true)
							Press(18);
					}
				}
				if (k != 0)
				{
					button11->Text = System::Convert::ToString(k);
				}
			}
			if (x == 12)
			{
				button12->Enabled = false;
				button12->Text = "";
				if (fr[12] == 1)
				{
					button12->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button12->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[5] == 1)
						k++;
					if (fr[6] == 1)
						k++;
					if (fr[7] == 1)
						k++;
					if (fr[11] == 1)
						k++;
					if (fr[13] == 1)
						k++;
					if (fr[17] == 1)
						k++;
					if (fr[18] == 1)
						k++;
					if (fr[19] == 1)
						k++;
					if (k == 0)
					{
						if (button5->Enabled == true)
							Press(5);
						if (button6->Enabled == true)
							Press(6);
						if (button7->Enabled == true)
							Press(7);
						if (button11->Enabled == true)
							Press(11);
						if (button13->Enabled == true)
							Press(13);
						if (button17->Enabled == true)
							Press(17);
						if (button18->Enabled == true)
							Press(18);
						if (button19->Enabled == true)
							Press(19);
					}
				}
				if (k != 0)
				{
					button12->Text = System::Convert::ToString(k);
				}
			}
			if (x == 13)
			{
				button13->Enabled = false;
				button13->Text = "";
				if (fr[13] == 1)
				{
					button13->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button13->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[6] == 1)
						k++;
					if (fr[7] == 1)
						k++;
					if (fr[12] == 1)
						k++;
					if (fr[18] == 1)
						k++;
					if (fr[19] == 1)
						k++;
					if (k == 0)
					{
						if (button6->Enabled == true)
							Press(6);
						if (button7->Enabled == true)
							Press(7);
						if (button12->Enabled == true)
							Press(12);
						if (button18->Enabled == true)
							Press(18);
						if (button19->Enabled == true)
							Press(19);
					}
				}
				if (k != 0)
				{
					button13->Text = System::Convert::ToString(k);
				}
			}
			if (x == 14)
			{
				button14->Enabled = false;
				button14->Text = "";
				if (fr[14] == 1)
				{
					button14->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button14->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[8] == 1)
						k++;
					if (fr[9] == 1)
						k++;
					if (fr[15] == 1)
						k++;
					if (fr[21] == 1)
						k++;
					if (fr[20] == 1)
						k++;
					if (k == 0)
					{
						if (button8->Enabled == true)
							Press(8);
						if (button9->Enabled == true)
							Press(9);
						if (button15->Enabled == true)
							Press(15);
						if (button21->Enabled == true)
							Press(21);
						if (button20->Enabled == true)
							Press(20);
					}
				}
				if (k != 0)
				{
					button14->Text = System::Convert::ToString(k);
				}
			}
			if (x == 15)
			{
				button15->Enabled = false;
				button15->Text = "";
				if (fr[15] == 1)
				{
					button15->BackColor = System::Drawing::SystemColors::GrayText;

					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button15->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[8] == 1)
						k++;
					if (fr[9] == 1)
						k++;
					if (fr[10] == 1)
						k++;
					if (fr[14] == 1)
						k++;
					if (fr[16] == 1)
						k++;
					if (fr[20] == 1)
						k++;
					if (fr[21] == 1)
						k++;
					if (fr[22] == 1)
						k++;
					if (k == 0)
					{
						if (button8->Enabled == true)
							Press(8);
						if (button9->Enabled == true)
							Press(9);
						if (button10->Enabled == true)
							Press(10);
						if (button14->Enabled == true)
							Press(14);
						if (button16->Enabled == true)
							Press(16);
						if (button20->Enabled == true)
							Press(20);
						if (button21->Enabled == true)
							Press(21);
						if (button22->Enabled == true)
							Press(22);
					}
				}
				if (k != 0)
				{
					button15->Text = System::Convert::ToString(k);
				}
			}
			if (x == 16)
			{
				button16->Enabled = false;
				button16->Text = "";
				if (fr[16] == 1)
				{
					button16->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button16->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[9] == 1)
						k++;
					if (fr[10] == 1)
						k++;
					if (fr[11] == 1)
						k++;
					if (fr[15] == 1)
						k++;
					if (fr[17] == 1)
						k++;
					if (fr[21] == 1)
						k++;
					if (fr[22] == 1)
						k++;
					if (fr[23] == 1)
						k++;
					if (k == 0)
					{
						if (button9->Enabled == true)
							Press(9);
						if (button10->Enabled == true)
							Press(10);
						if (button11->Enabled == true)
							Press(11);
						if (button15->Enabled == true)
							Press(15);
						if (button17->Enabled == true)
							Press(17);
						if (button21->Enabled == true)
							Press(21);
						if (button22->Enabled == true)
							Press(22);
						if (button23->Enabled == true)
							Press(23);
					}
				}
				if (k != 0)
				{
					button16->Text = System::Convert::ToString(k);
				}
			}
			if (x == 17)
			{
				button17->Enabled = false;
				button17->Text = "";
				if (fr[17] == 1)
				{
					button17->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button17->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[10] == 1)
						k++;
					if (fr[11] == 1)
						k++;
					if (fr[12] == 1)
						k++;
					if (fr[16] == 1)
						k++;
					if (fr[18] == 1)
						k++;
					if (fr[22] == 1)
						k++;
					if (fr[23] == 1)
						k++;
					if (fr[24] == 1)
						k++;
					if (k == 0)
					{
						if (button10->Enabled == true)
							Press(10);
						if (button11->Enabled == true)
							Press(11);
						if (button12->Enabled == true)
							Press(12);
						if (button16->Enabled == true)
							Press(16);
						if (button18->Enabled == true)
							Press(18);
						if (button22->Enabled == true)
							Press(22);
						if (button23->Enabled == true)
							Press(23);
						if (button24->Enabled == true)
							Press(24);
					}
				}
				if (k != 0)
				{
					button17->Text = System::Convert::ToString(k);
				}
			
			}
			if (x == 18)
			{
				button18->Enabled = false;
				button18->Text = "";
				if (fr[18] == 1)
				{
					button18->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button18->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[11] == 1)
						k++;
					if (fr[12] == 1)
						k++;
					if (fr[13] == 1)
						k++;
					if (fr[17] == 1)
						k++;
					if (fr[19] == 1)
						k++;
					if (fr[23] == 1)
						k++;
					if (fr[24] == 1)
						k++;
					if (fr[25] == 1)
						k++;
					if (k == 0)
					{
						if (button11->Enabled == true)
							Press(11);
						if (button12->Enabled == true)
							Press(12);
						if (button13->Enabled == true)
							Press(13);
						if (button17->Enabled == true)
							Press(17);
						if (button19->Enabled == true)
							Press(19);
						if (button23->Enabled == true)
							Press(23);
						if (button24->Enabled == true)
							Press(24);
						if (button25->Enabled == true)
							Press(25);
					}
				}
				if (k != 0)
				{
					button18->Text = System::Convert::ToString(k);
				}
			}
			if (x == 19)
			{
				button19->Enabled = false;
				button19->Text = "";
				if (fr[19] == 1)
				{
					button19->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button19->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[12] == 1)
						k++;
					if (fr[13] == 1)
						k++;
					if (fr[18] == 1)
						k++;
					if (fr[24] == 1)
						k++;
					if (fr[25] == 1)
						k++;
					if (k == 0)
					{
						if (button12->Enabled == true)
							Press(12);
						if (button13->Enabled == true)
							Press(13);
						if (button18->Enabled == true)
							Press(18);
						if (button24->Enabled == true)
							Press(24);
						if (button25->Enabled == true)
							Press(25);
					}
				}
				if (k != 0)
				{
					button19->Text = System::Convert::ToString(k);
				}
			}
			if (x == 20)
			{
				button20->Enabled = false;
				button20->Text = "";
				if (fr[20] == 1)
				{
					button20->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button20->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[14] == 1)
						k++;
					if (fr[15] == 1)
						k++;
					if (fr[21] == 1)
						k++;
					if (fr[27] == 1)
						k++;
					if (fr[26] == 1)
						k++;
					if (k == 0)
					{
						if (button14->Enabled == true)
							Press(14);
						if (button15->Enabled == true)
							Press(15);
						if (button21->Enabled == true)
							Press(21);
						if (button27->Enabled == true)
							Press(27);
						if (button26->Enabled == true)
							Press(26);
					}
				}
				if (k != 0)
				{
					button20->Text = System::Convert::ToString(k);
				}
			}
			if (x == 21)
			{
				button21->Enabled = false;
				button21->Text = "";
				if (fr[21] == 1)
				{
					button21->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button21->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[14] == 1)
						k++;
					if (fr[15] == 1)
						k++;
					if (fr[16] == 1)
						k++;
					if (fr[20] == 1)
						k++;
					if (fr[22] == 1)
						k++;
					if (fr[26] == 1)
						k++;
					if (fr[27] == 1)
						k++;
					if (fr[28] == 1)
						k++;
					if (k == 0)
					{
						if (button14->Enabled == true)
							Press(14);
						if (button15->Enabled == true)
							Press(15);
						if (button16->Enabled == true)
							Press(16);
						if (button20->Enabled == true)
							Press(20);
						if (button22->Enabled == true)
							Press(22);
						if (button26->Enabled == true)
							Press(26);
						if (button27->Enabled == true)
							Press(27);
						if (button28->Enabled == true)
							Press(28);
					}
				}
				if (k != 0)
				{
					button21->Text = System::Convert::ToString(k);
				}
			}
			if (x == 22)
			{
				button22->Enabled = false;
				button22->Text = "";
				if (fr[22] == 1)
				{
					button22->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button22->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[15] == 1)
						k++;
					if (fr[16] == 1)
						k++;
					if (fr[17] == 1)
						k++;
					if (fr[21] == 1)
						k++;
					if (fr[23] == 1)
						k++;
					if (fr[27] == 1)
						k++;
					if (fr[28] == 1)
						k++;
					if (fr[29] == 1)
						k++;
					if (k == 0)
					{
						if (button15->Enabled == true)
							Press(15);
						if (button16->Enabled == true)
							Press(16);
						if (button17->Enabled == true)
							Press(17);
						if (button21->Enabled == true)
							Press(21);
						if (button23->Enabled == true)
							Press(23);
						if (button27->Enabled == true)
							Press(27);
						if (button28->Enabled == true)
							Press(28);
						if (button29->Enabled == true)
							Press(29);
					}
				}
				if (k != 0)
				{
					button22->Text = System::Convert::ToString(k);
				}
			}
			if (x == 23)
			{
				button23->Enabled = false;
				button23->Text = "";
				if (fr[23] == 1)
				{
					button23->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button23->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[16] == 1)
						k++;
					if (fr[17] == 1)
						k++;
					if (fr[18] == 1)
						k++;
					if (fr[22] == 1)
						k++;
					if (fr[24] == 1)
						k++;
					if (fr[28] == 1)
						k++;
					if (fr[29] == 1)
						k++;
					if (fr[30] == 1)
						k++;
					if (k == 0)
					{
						if (button16->Enabled == true)
							Press(16);
						if (button17->Enabled == true)
							Press(17);
						if (button18->Enabled == true)
							Press(18);
						if (button22->Enabled == true)
							Press(22);
						if (button24->Enabled == true)
							Press(24);
						if (button28->Enabled == true)
							Press(28);
						if (button29->Enabled == true)
							Press(29);
						if (button30->Enabled == true)
							Press(30);
					}
				}
				if (k != 0)
				{
					button23->Text = System::Convert::ToString(k);
				}
			}
			if (x == 24)
			{
				button24->Enabled = false;
				button24->Text = "";
				if (fr[24] == 1)
				{
					button24->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button24->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[17] == 1)
						k++;
					if (fr[18] == 1)
						k++;
					if (fr[19] == 1)
						k++;
					if (fr[23] == 1)
						k++;
					if (fr[25] == 1)
						k++;
					if (fr[29] == 1)
						k++;
					if (fr[30] == 1)
						k++;
					if (fr[31] == 1)
						k++;
					if (k == 0)
					{
						if (button17->Enabled == true)
							Press(17);
						if (button18->Enabled == true)
							Press(18);
						if (button19->Enabled == true)
							Press(19);
						if (button23->Enabled == true)
							Press(23);
						if (button25->Enabled == true)
							Press(25);
						if (button29->Enabled == true)
							Press(29);
						if (button30->Enabled == true)
							Press(30);
						if (button31->Enabled == true)
							Press(31);
					}
				}
				if (k != 0)
				{
					button24->Text = System::Convert::ToString(k);
				}
			}
			if (x == 25)
			{
				button25->Enabled = false;
				button25->Text = "";
				if (fr[25] == 1)
				{
					button25->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button25->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[18] == 1)
						k++;
					if (fr[19] == 1)
						k++;
					if (fr[24] == 1)
						k++;
					if (fr[30] == 1)
						k++;
					if (fr[31] == 1)
						k++;
					if (k == 0)
					{
						if (button18->Enabled == true)
							Press(18);
						if (button19->Enabled == true)
							Press(19);
						if (button24->Enabled == true)
							Press(24);
						if (button30->Enabled == true)
							Press(30);
						if (button31->Enabled == true)
							Press(31);
					}
				}
				if (k != 0)
				{
					button25->Text = System::Convert::ToString(k);
				}
			}
			if (x == 26)
			{
				button26->Enabled = false;
				button26->Text = "";
				if (fr[26] == 1)
				{
					button26->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button26->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[20] == 1)
						k++;
					if (fr[21] == 1)
						k++;
					if (fr[27] == 1)
						k++;
					if (fr[32] == 1)
						k++;
					if (fr[33] == 1)
						k++;
					if (k == 0)
					{
						if (button20->Enabled == true)
							Press(20);
						if (button21->Enabled == true)
							Press(21);
						if (button27->Enabled == true)
							Press(27);
						if (button32->Enabled == true)
							Press(32);
						if (button33->Enabled == true)
							Press(33);
					}
				}
				if (k != 0)
				{
					button26->Text = System::Convert::ToString(k);
				}
			}
			if (x == 27)
			{
				button27->Enabled = false;
				button27->Text = "";
				if (fr[27] == 1)
				{
					button27->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button27->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[20] == 1)
						k++;
					if (fr[21] == 1)
						k++;
					if (fr[22] == 1)
						k++;
					if (fr[26] == 1)
						k++;
					if (fr[28] == 1)
						k++;
					if (fr[32] == 1)
						k++;
					if (fr[33] == 1)
						k++;
					if (fr[34] == 1)
						k++;
					if (k == 0)
					{
						if (button20->Enabled == true)
							Press(20);
						if (button21->Enabled == true)
							Press(21);
						if (button22->Enabled == true)
							Press(22);
						if (button26->Enabled == true)
							Press(26);
						if (button28->Enabled == true)
							Press(28);
						if (button32->Enabled == true)
							Press(32);
						if (button33->Enabled == true)
							Press(33);
						if (button34->Enabled == true)
							Press(34);
					}
				}
				if (k != 0)
				{
					button27->Text = System::Convert::ToString(k);
				}
			}
			if (x == 28)
			{
				button28->Enabled = false;
				button28->Text = "";
				if (fr[28] == 1)
				{
					button28->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button28->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[21] == 1)
						k++;
					if (fr[22] == 1)
						k++;
					if (fr[23] == 1)
						k++;
					if (fr[27] == 1)
						k++;
					if (fr[29] == 1)
						k++;
					if (fr[33] == 1)
						k++;
					if (fr[34] == 1)
						k++;
					if (fr[35] == 1)
						k++;
					if (k == 0)
					{
						if (button21->Enabled == true)
							Press(21);
						if (button22->Enabled == true)
							Press(22);
						if (button23->Enabled == true)
							Press(23);
						if (button27->Enabled == true)
							Press(27);
						if (button29->Enabled == true)
							Press(29);
						if (button33->Enabled == true)
							Press(33);
						if (button34->Enabled == true)
							Press(34);
						if (button35->Enabled == true)
							Press(35);
					}
				}
				if (k != 0)
				{
					button28->Text = System::Convert::ToString(k);
				}
			
			}
			if (x == 29)
			{
				button29->Enabled = false;
				button29->Text = "";
				if (fr[29] == 1)
				{
					button29->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button29->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[22] == 1)
						k++;
					if (fr[23] == 1)
						k++;
					if (fr[24] == 1)
						k++;
					if (fr[28] == 1)
						k++;
					if (fr[30] == 1)
						k++;
					if (fr[34] == 1)
						k++;
					if (fr[35] == 1)
						k++;
					if (fr[36] == 1)
						k++;
					if (k == 0)
					{
						if (button22->Enabled == true)
							Press(22);
						if (button23->Enabled == true)
							Press(23);
						if (button24->Enabled == true)
							Press(24);
						if (button28->Enabled == true)
							Press(28);
						if (button30->Enabled == true)
							Press(30);
						if (button34->Enabled == true)
							Press(34);
						if (button35->Enabled == true)
							Press(35);
						if (button36->Enabled == true)
							Press(36);
					}
				}
				if (k != 0)
				{
					button29->Text = System::Convert::ToString(k);
				}
				
			}
			if (x == 30)
			{
				button30->Enabled = false;
				button30->Text = "";
				if (fr[30] == 1)
				{
					button30->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button30->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[23] == 1)
						k++;
					if (fr[24] == 1)
						k++;
					if (fr[25] == 1)
						k++;
					if (fr[29] == 1)
						k++;
					if (fr[31] == 1)
						k++;
					if (fr[35] == 1)
						k++;
					if (fr[36] == 1)
						k++;
					if (fr[37] == 1)
						k++;
					if (k == 0)
					{
						if (button23->Enabled == true)
							Press(23);
						if (button24->Enabled == true)
							Press(24);
						if (button25->Enabled == true)
							Press(25);
						if (button29->Enabled == true)
							Press(29);
						if (button31->Enabled == true)
							Press(31);
						if (button35->Enabled == true)
							Press(35);
						if (button36->Enabled == true)
							Press(36);
						if (button37->Enabled == true)
							Press(37);
					}
				}
				if (k != 0)
				{
					button30->Text = System::Convert::ToString(k);
				}
				
			}
			if (x == 31)
			{
				button31->Enabled = false;
				button31->Text = "";
				if (fr[31] == 1)
				{
					button31->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button31->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[24] == 1)
						k++;
					if (fr[25] == 1)
						k++;
					if (fr[30] == 1)
						k++;
					if (fr[36] == 1)
						k++;
					if (fr[37] == 1)
						k++;
					if (k == 0)
					{
						if (button24->Enabled == true)
							Press(24);
						if (button25->Enabled == true)
							Press(25);
						if (button30->Enabled == true)
							Press(30);
						if (button36->Enabled == true)
							Press(36);
						if (button37->Enabled == true)
							Press(37);
					}
				}
				if (k != 0)
				{
					button31->Text = System::Convert::ToString(k);
				}
				
			}
			if (x == 32)
			{
				button32->Enabled = false;
				button32->Text = "";
				if (fr[32] == 1)
				{
					button32->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button32->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[26] == 1)
						k++;
					if (fr[27] == 1)
						k++;
					if (fr[33] == 1)
						k++;
					if (k == 0)
					{
						if (button26->Enabled == true)
							Press(26);
						if (button27->Enabled == true)
							Press(27);
						if (button33->Enabled == true)
							Press(33);
					}
				}
				if (k != 0)
				{
					button32->Text = System::Convert::ToString(k);
				}
				
			}
			if (x == 33)
			{
				button33->Enabled = false;
				button33->Text = "";
				if (fr[33] == 1)
				{
					button33->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button33->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[32] == 1)
						k++;
					if (fr[26] == 1)
						k++;
					if (fr[27] == 1)
						k++;
					if (fr[28] == 1)
						k++;
					if (fr[34] == 1)
						k++;
					if (k == 0)
					{
						if (button32->Enabled == true)
							Press(32);
						if (button26->Enabled == true)
							Press(26);
						if (button27->Enabled == true)
							Press(27);
						if (button28->Enabled == true)
							Press(28);
						if (button34->Enabled == true)
							Press(34);
					}
				}
				if (k != 0)
				{
					button33->Text = System::Convert::ToString(k);
				}
			}
			if (x == 34)
			{
				button34->Enabled = false;
				button34->Text = "";
				if (fr[34] == 1)
				{
					button34->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button34->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[33] == 1)
						k++;
					if (fr[27] == 1)
						k++;
					if (fr[28] == 1)
						k++;
					if (fr[29] == 1)
						k++;
					if (fr[35] == 1)
						k++;
					if (k == 0)
					{
						if (button33->Enabled == true)
							Press(33);
						if (button27->Enabled == true)
							Press(27);
						if (button28->Enabled == true)
							Press(28);
						if (button29->Enabled == true)
							Press(29);
						if (button35->Enabled == true)
							Press(35);
					}
				}
				if (k != 0)
				{
					button34->Text = System::Convert::ToString(k);
				}
			}
			if (x == 35)
			{
				button35->Enabled = false;
				button35->Text = "";
				if (fr[35] == 1)
				{
					button35->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button35->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[34] == 1)
						k++;
					if (fr[28] == 1)
						k++;
					if (fr[29] == 1)
						k++;
					if (fr[30] == 1)
						k++;
					if (fr[36] == 1)
						k++;
					if (k == 0)
					{
						if (button34->Enabled == true)
							Press(34);
						if (button28->Enabled == true)
							Press(28);
						if (button29->Enabled == true)
							Press(29);
						if (button30->Enabled == true)
							Press(30);
						if (button36->Enabled == true)
							Press(36);
					}
				}
				if (k != 0)
				{
					button35->Text = System::Convert::ToString(k);
				}
			}
			if (x == 36)
			{
				button36->Enabled = false;
				button36->Text = "";
				if (fr[36] == 1)
				{
					button36->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button36->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[35] == 1)
						k++;
					if (fr[29] == 1)
						k++;
					if (fr[30] == 1)
						k++;
					if (fr[31] == 1)
						k++;
					if (fr[37] == 1)
						k++;
					if (k == 0)
					{
						if (button35->Enabled == true)
							Press(35);
						if (button29->Enabled == true)
							Press(29);
						if (button30->Enabled == true)
							Press(30);
						if (button31->Enabled == true)
							Press(31);
						if (button37->Enabled == true)
							Press(37);
					}
				}
				if (k != 0)
				{
					button36->Text = System::Convert::ToString(k);
				}
			}
			if (x == 37)
			{
				button37->Enabled = false;
				button37->Text = "";
				if (fr[37] == 1)
				{
					button37->BackColor = System::Drawing::SystemColors::GrayText;
					label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button37->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (fr[36] == 1)
						k++;
					if (fr[30] == 1)
						k++;
					if (fr[31] == 1)
						k++;
					if (k == 0)
					{
						if (button36->Enabled == true)
							Press(36);
						if (button30->Enabled == true)
							Press(30);
						if (button31->Enabled == true)
							Press(31);
					}
				}
				if (k != 0)
				{
					button37->Text = System::Convert::ToString(k);
				}
			}
			if (buttonspressed == 29 && bomb == 0)
			{
				label2->Text = "You Win!";
				label2->ForeColor = System::Drawing::SystemColors::MenuHighlight;
				Win();
			}
			if (bomb != 0)
				Lose();
				
		}
		public: Void Bombs()
		{

			for (int i = 0; i < 40; i++)
			{
				fr[i] = 0;
			}
			int k = 1;
			srand(time(NULL));
			while (k <= 7)
			{

				int c = rand() % 36 + 1;
				if (fr[c + 1] == 0)
				{
					fr[c + 1] = 1;
					k++;
				}
			}
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		Bombs();
		button2->Visible = true;
		button3->Visible = true;
		button4->Visible = true;
		button5->Visible = true;
		button6->Visible = true;
		button7->Visible = true;
		button8->Visible = true;
		button9->Visible = true;
		button10->Visible = true;
		button11->Visible = true;
		button12->Visible = true;
		button13->Visible = true;
		button14->Visible = true;
		button15->Visible = true;
		button16->Visible = true;
		button17->Visible = true;
		button18->Visible = true;
		button19->Visible = true;
		button20->Visible = true;
		button21->Visible = true;
		button22->Visible = true;
		button23->Visible = true;
		button24->Visible = true;
		button25->Visible = true;
		button26->Visible = true;
		button27->Visible = true;
		button28->Visible = true;
		button29->Visible = true;
		button30->Visible = true;
		button31->Visible = true;
		button32->Visible = true;
		button33->Visible = true;
		button34->Visible = true;
		button35->Visible = true;
		button36->Visible = true;
		button37->Visible = true;
		checkBox1->Visible = true;

		button1->Enabled = false;
		button1->Visible = false;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked == true)
		{
			if (button2->Text == "?")
				button2->Text = "";
			else
				button2->Text = "?";
		}
		else
		Press(2);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked == true)
		{
			if (button3->Text == "?")
				button3->Text = "";
			else
				button3->Text = "?";
		}
		else
		Press(3);
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button4->Text == "?")
			button4->Text = "";
		else
			button4->Text = "?";
	}
	else
	Press(4);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button5->Text == "?")
			button5->Text = "";
		else
			button5->Text = "?";
	}
	else
	Press(5);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button6->Text == "?")
			button6->Text = "";
		else
			button6->Text = "?";
	}
	else
	Press(6);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button7->Text == "?")
			button7->Text = "";
		else
			button7->Text = "?";
	}
	else
	Press(7);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button8->Text == "?")
			button8->Text = "";
		else
			button8->Text = "?";
	}
	else
	Press(8);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button9->Text == "?")
			button9->Text = "";
		else
			button9->Text = "?";
	}
	else
	Press(9);
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button10->Text == "?")
			button10->Text = "";
		else
			button10->Text = "?";
	}
	else
	Press(10);
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button11->Text == "?")
			button11->Text = "";
		else
			button11->Text = "?";
	}
	else
	Press(11);
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button12->Text == "?")
			button12->Text = "";
		else
			button12->Text = "?";
	}
	else
	Press(12);
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button13->Text == "?")
			button13->Text = "";
		else
			button13->Text = "?";
	}
	else
	Press(13);
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button14->Text == "?")
			button14->Text = "";
		else
			button14->Text = "?";
	}
	else
	Press(14);
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button15->Text == "?")
			button15->Text = "";
		else
			button15->Text = "?";
	}
	else
	Press(15);
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button16->Text == "?")
			button16->Text = "";
		else
			button16->Text = "?";
	}
	else
	Press(16);
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button17->Text == "?")
			button17->Text = "";
		else
			button17->Text = "?";
	}
	else
	Press(17);
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button18->Text == "?")
			button18->Text = "";
		else
			button18->Text = "?";
	}
	else
	Press(18);
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button19->Text == "?")
			button19->Text = "";
		else
			button19->Text = "?";
	}
	else
	Press(19);
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button20->Text == "?")
			button20->Text = "";
		else
			button20->Text = "?";
	}
	else
	Press(20);
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button21->Text == "?")
			button21->Text = "";
		else
			button21->Text = "?";
	}
	else
	Press(21);
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button22->Text == "?")
			button22->Text = "";
		else
			button22->Text = "?";
	}
	else
	Press(22);
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button23->Text == "?")
			button23->Text = "";
		else
			button23->Text = "?";
	}
	else
	Press(23);
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button24->Text == "?")
			button24->Text = "";
		else
			button24->Text = "?";
	}
	else
	Press(24);
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button25->Text == "?")
			button25->Text = "";
		else
			button25->Text = "?";
	}
	else
	Press(25);
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button26->Text == "?")
			button26->Text = "";
		else
			button26->Text = "?";
	}
	else
	Press(26);
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button27->Text == "?")
			button27->Text = "";
		else
			button27->Text = "?";
	}
	else
	Press(27);
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button28->Text == "?")
			button28->Text = "";
		else
			button28->Text = "?";
	}
	else
	Press(28);
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button29->Text == "?")
			button29->Text = "";
		else
			button29->Text = "?";
	}
	else
	Press(29);
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button30->Text == "?")
			button30->Text = "";
		else
			button30->Text = "?";
	}
	else
	Press(30);
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button31->Text == "?")
			button31->Text = "";
		else
			button31->Text = "?";
	}
	else
	Press(31);
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button32->Text == "?")
			button32->Text = "";
		else
			button32->Text = "?";
	}
	else
	Press(32);
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button33->Text == "?")
			button33->Text = "";
		else
			button33->Text = "?";
	}
	else
	Press(33);
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button34->Text == "?")
			button34->Text = "";
		else
			button34->Text = "?";
	}
	else
	Press(34);
}
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button35->Text == "?")
			button35->Text = "";
		else
			button35->Text = "?";
	}
	else
	Press(35);
}
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button36->Text == "?")
			button36->Text = "";
		else
			button36->Text = "?";
	}
	else
	Press(36);
}
private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		if (button37->Text == "?")
			button37->Text = "";
		else
			button37->Text = "?";
	}
	else
	Press(37);
}
private: System::Void RestartB_Click(System::Object^ sender, System::EventArgs^ e) {
	RestartB->Visible = false;
	button2->Enabled = true; button2->Text = ""; button2->BackColor = System::Drawing::SystemColors::Control;
	button3->Enabled = true; button3->Text = ""; button3->BackColor = System::Drawing::SystemColors::Control;
	button4->Enabled = true; button4->Text = ""; button4->BackColor = System::Drawing::SystemColors::Control;
	button5->Enabled = true; button5->Text = ""; button5->BackColor = System::Drawing::SystemColors::Control;
	button6->Enabled = true; button6->Text = ""; button6->BackColor = System::Drawing::SystemColors::Control;
	button7->Enabled = true; button7->Text = ""; button7->BackColor = System::Drawing::SystemColors::Control;
	button8->Enabled = true; button8->Text = ""; button8->BackColor = System::Drawing::SystemColors::Control;
	button9->Enabled = true; button9->Text = ""; button9->BackColor = System::Drawing::SystemColors::Control;
	button10->Enabled = true; button10->Text = ""; button10->BackColor = System::Drawing::SystemColors::Control;
	button11->Enabled = true; button11->Text = ""; button11->BackColor = System::Drawing::SystemColors::Control;
	button12->Enabled = true; button12->Text = ""; button12->BackColor = System::Drawing::SystemColors::Control;
	button13->Enabled = true; button13->Text = ""; button13->BackColor = System::Drawing::SystemColors::Control;
	button14->Enabled = true; button14->Text = ""; button14->BackColor = System::Drawing::SystemColors::Control;
	button15->Enabled = true; button15->Text = ""; button15->BackColor = System::Drawing::SystemColors::Control;
	button16->Enabled = true; button16->Text = ""; button16->BackColor = System::Drawing::SystemColors::Control;
	button17->Enabled = true; button17->Text = ""; button17->BackColor = System::Drawing::SystemColors::Control;
	button18->Enabled = true; button18->Text = ""; button18->BackColor = System::Drawing::SystemColors::Control;
	button19->Enabled = true; button19->Text = ""; button19->BackColor = System::Drawing::SystemColors::Control;
	button20->Enabled = true; button20->Text = ""; button20->BackColor = System::Drawing::SystemColors::Control;
	button21->Enabled = true; button21->Text = ""; button21->BackColor = System::Drawing::SystemColors::Control;
	button22->Enabled = true; button22->Text = ""; button22->BackColor = System::Drawing::SystemColors::Control;
	button23->Enabled = true; button23->Text = ""; button23->BackColor = System::Drawing::SystemColors::Control;
	button24->Enabled = true; button24->Text = ""; button24->BackColor = System::Drawing::SystemColors::Control;
	button25->Enabled = true; button25->Text = ""; button25->BackColor = System::Drawing::SystemColors::Control;
	button26->Enabled = true; button26->Text = ""; button26->BackColor = System::Drawing::SystemColors::Control;
	button27->Enabled = true; button27->Text = ""; button27->BackColor = System::Drawing::SystemColors::Control;
	button28->Enabled = true; button28->Text = ""; button28->BackColor = System::Drawing::SystemColors::Control;
	button29->Enabled = true; button29->Text = ""; button29->BackColor = System::Drawing::SystemColors::Control;
	button30->Enabled = true; button30->Text = ""; button30->BackColor = System::Drawing::SystemColors::Control;
	button31->Enabled = true; button31->Text = ""; button31->BackColor = System::Drawing::SystemColors::Control;
	button32->Enabled = true; button32->Text = ""; button32->BackColor = System::Drawing::SystemColors::Control;
	button33->Enabled = true; button33->Text = ""; button33->BackColor = System::Drawing::SystemColors::Control;
	button34->Enabled = true; button34->Text = ""; button34->BackColor = System::Drawing::SystemColors::Control;
	button35->Enabled = true; button35->Text = ""; button35->BackColor = System::Drawing::SystemColors::Control;
	button36->Enabled = true; button36->Text = ""; button36->BackColor = System::Drawing::SystemColors::Control;
	button37->Enabled = true; button37->Text = ""; button37->BackColor = System::Drawing::SystemColors::Control;
	bomb = 0;
	buttonspressed = 0;
	label2->Text = "";
	Bombs();
}
};
}
