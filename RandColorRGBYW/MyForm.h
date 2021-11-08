#pragma once

#include "GenerateColor.h"

namespace RandColorRGBYW {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Panel^ p13;

	private: System::Windows::Forms::Panel^ p11;
	private: System::Windows::Forms::Panel^ p22;
	private: System::Windows::Forms::Panel^ p23;




	private: System::Windows::Forms::Panel^ p21;
	private: System::Windows::Forms::Panel^ p31;
	private: System::Windows::Forms::Panel^ p32;
	private: System::Windows::Forms::Panel^ p33;




	private: System::Windows::Forms::Panel^ p12;
	private: System::Windows::Forms::TextBox^ textArea;


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->p13 = (gcnew System::Windows::Forms::Panel());
			this->p11 = (gcnew System::Windows::Forms::Panel());
			this->p22 = (gcnew System::Windows::Forms::Panel());
			this->p23 = (gcnew System::Windows::Forms::Panel());
			this->p21 = (gcnew System::Windows::Forms::Panel());
			this->p31 = (gcnew System::Windows::Forms::Panel());
			this->p32 = (gcnew System::Windows::Forms::Panel());
			this->p33 = (gcnew System::Windows::Forms::Panel());
			this->p12 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textArea = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(360, 360);
			this->panel1->TabIndex = 0;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33334F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->Controls->Add(this->p13, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->p11, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->p22, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->p23, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->p21, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->p31, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->p32, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->p33, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->p12, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33112F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33445F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33444F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(360, 360);
			this->tableLayoutPanel1->TabIndex = 0;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel1_Paint);
			// 
			// p13
			// 
			this->p13->BackColor = System::Drawing::Color::Silver;
			this->p13->Location = System::Drawing::Point(242, 3);
			this->p13->Name = L"p13";
			this->p13->Size = System::Drawing::Size(114, 113);
			this->p13->TabIndex = 1;
			// 
			// p11
			// 
			this->p11->BackColor = System::Drawing::Color::Silver;
			this->p11->Location = System::Drawing::Point(3, 3);
			this->p11->Name = L"p11";
			this->p11->Size = System::Drawing::Size(113, 113);
			this->p11->TabIndex = 0;
			// 
			// p22
			// 
			this->p22->BackColor = System::Drawing::Color::Silver;
			this->p22->Location = System::Drawing::Point(122, 122);
			this->p22->Name = L"p22";
			this->p22->Size = System::Drawing::Size(114, 114);
			this->p22->TabIndex = 1;
			// 
			// p23
			// 
			this->p23->BackColor = System::Drawing::Color::Silver;
			this->p23->Location = System::Drawing::Point(242, 122);
			this->p23->Name = L"p23";
			this->p23->Size = System::Drawing::Size(115, 114);
			this->p23->TabIndex = 1;
			// 
			// p21
			// 
			this->p21->BackColor = System::Drawing::Color::Silver;
			this->p21->Location = System::Drawing::Point(3, 122);
			this->p21->Name = L"p21";
			this->p21->Size = System::Drawing::Size(113, 114);
			this->p21->TabIndex = 1;
			// 
			// p31
			// 
			this->p31->BackColor = System::Drawing::Color::Silver;
			this->p31->Location = System::Drawing::Point(3, 242);
			this->p31->Name = L"p31";
			this->p31->Size = System::Drawing::Size(113, 115);
			this->p31->TabIndex = 1;
			// 
			// p32
			// 
			this->p32->BackColor = System::Drawing::Color::Silver;
			this->p32->Location = System::Drawing::Point(122, 242);
			this->p32->Name = L"p32";
			this->p32->Size = System::Drawing::Size(114, 115);
			this->p32->TabIndex = 1;
			// 
			// p33
			// 
			this->p33->BackColor = System::Drawing::Color::Silver;
			this->p33->Location = System::Drawing::Point(242, 242);
			this->p33->Name = L"p33";
			this->p33->Size = System::Drawing::Size(115, 115);
			this->p33->TabIndex = 1;
			// 
			// p12
			// 
			this->p12->BackColor = System::Drawing::Color::Silver;
			this->p12->Location = System::Drawing::Point(122, 3);
			this->p12->Name = L"p12";
			this->p12->Size = System::Drawing::Size(113, 113);
			this->p12->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 378);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(236, 41);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Shuffle";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Shuffle);
			// 
			// textArea
			// 
			this->textArea->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textArea->Location = System::Drawing::Point(255, 378);
			this->textArea->Multiline = true;
			this->textArea->Name = L"textArea";
			this->textArea->Size = System::Drawing::Size(117, 41);
			this->textArea->TabIndex = 2;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 431);
			this->Controls->Add(this->textArea);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Cube shuffle";
			this->panel1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup") //hide console window
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void Shuffle(System::Object^ sender, System::EventArgs^ e) {
		//============ 9 6
		//textArea->Text = System::Convert::ToString(CRand());

		/*
			0 Red = 222,0,67
			1 Blue = 0,68,213
			2 Green = 8,196,83
			3 Orange = 240,125,62
			4 Yellow = 231,210,56
			5 White = 255,255,255
		*/

		srand(time(NULL));

		for (int ch, i = 0; i < 6; i++)
		{
			switch (i)
			{
			case 0:	//=========================================================
				ch = CRand();
				if (ch == 0)
				{
					p11->BackColor = Color::FromArgb(222, 0, 67);
					textArea->Text = "S0";
				}
				if (ch == 1)
				{
					p11->BackColor = Color::FromArgb(0, 68, 213);
					textArea->Text = "S1";
				}
				if (ch == 2)
				{
					p11->BackColor = Color::FromArgb(8, 196, 83);
					textArea->Text = "S2";
				}
				if (ch == 3)
				{
					p11->BackColor = Color::FromArgb(240,119,14);
					textArea->Text = "S3";
				}
				if (ch == 4)
				{
					p11->BackColor = Color::FromArgb(231, 210, 56);
					textArea->Text = "S4";
				}
				if (ch == 5)
				{
					p11->BackColor = Color::FromArgb(255, 255, 255);
					textArea->Text = "S5";
				}
			case 1:	//=========================================================
				ch = CRand();
				if (ch == 0)
				{
					p12->BackColor = Color::FromArgb(222, 0, 67);
				}
				if (ch == 1)
				{
					p12->BackColor = Color::FromArgb(0, 68, 213);
				}
				if (ch == 2)
				{
					p12->BackColor = Color::FromArgb(8, 196, 83);
				}
				if (ch == 3)
				{
					p12->BackColor = Color::FromArgb(240,119,14);
				}
				if (ch == 4)
				{
					p12->BackColor = Color::FromArgb(231, 210, 56);
				}
				if (ch == 5)
				{
					p12->BackColor = Color::FromArgb(255, 255, 255);
				}
			case 2:	//=========================================================
				ch = CRand();
				if (ch == 0)
				{
					p13->BackColor = Color::FromArgb(222, 0, 67);
				}
				if (ch == 1)
				{
					p13->BackColor = Color::FromArgb(0, 68, 213);
				}
				if (ch == 2)
				{
					p13->BackColor = Color::FromArgb(8, 196, 83);
				}
				if (ch == 3)
				{
					p13->BackColor = Color::FromArgb(240,119,14);
				}
				if (ch == 4)
				{
					p13->BackColor = Color::FromArgb(231, 210, 56);
				}
				if (ch == 5)
				{
					p13->BackColor = Color::FromArgb(255, 255, 255);
				}
			case 3:	//=========================================================
				ch = CRand();
				if (ch == 0)
				{
					p21->BackColor = Color::FromArgb(222, 0, 67);
				}
				if (ch == 1)
				{
					p21->BackColor = Color::FromArgb(0, 68, 213);
				}
				if (ch == 2)
				{
					p21->BackColor = Color::FromArgb(8, 196, 83);
				}
				if (ch == 3)
				{
					p21->BackColor = Color::FromArgb(240,119,14);
				}
				if (ch == 4)
				{
					p21->BackColor = Color::FromArgb(231, 210, 56);
				}
				if (ch == 5)
				{
					p21->BackColor = Color::FromArgb(255, 255, 255);
				}
			case 4:	//=========================================================
				ch = CRand();
				if (ch == 0)
				{
					p22->BackColor = Color::FromArgb(222, 0, 67);
				}
				if (ch == 1)
				{
					p22->BackColor = Color::FromArgb(0, 68, 213);
				}
				if (ch == 2)
				{
					p22->BackColor = Color::FromArgb(8, 196, 83);
				}
				if (ch == 3)
				{
					p22->BackColor = Color::FromArgb(240,119,14);
				}
				if (ch == 4)
				{
					p22->BackColor = Color::FromArgb(231, 210, 56);
				}
				if (ch == 5)
				{
					p22->BackColor = Color::FromArgb(255, 255, 255);
				}
			case 5:	//=========================================================
				ch = CRand();
				if (ch == 0)
				{
					p23->BackColor = Color::FromArgb(222, 0, 67);
				}
				if (ch == 1)
				{
					p23->BackColor = Color::FromArgb(0, 68, 213);
				}
				if (ch == 2)
				{
					p23->BackColor = Color::FromArgb(8, 196, 83);
				}
				if (ch == 3)
				{
					p23->BackColor = Color::FromArgb(240,119,14);
				}
				if (ch == 4)
				{
					p23->BackColor = Color::FromArgb(231, 210, 56);
				}
				if (ch == 5)
				{
					p23->BackColor = Color::FromArgb(255, 255, 255);
				}
			case 6:	//=========================================================
				ch = CRand();
				if (ch == 0)
				{
					p31->BackColor = Color::FromArgb(222, 0, 67);
				}
				if (ch == 1)
				{
					p31->BackColor = Color::FromArgb(0, 68, 213);
				}
				if (ch == 2)
				{
					p31->BackColor = Color::FromArgb(8, 196, 83);
				}
				if (ch == 3)
				{
					p31->BackColor = Color::FromArgb(240,119,14);
				}
				if (ch == 4)
				{
					p31->BackColor = Color::FromArgb(231, 210, 56);
				}
				if (ch == 5)
				{
					p31->BackColor = Color::FromArgb(255, 255, 255);
				}
			case 7:	//=========================================================
				ch = CRand();
				if (ch == 0)
				{
					p32->BackColor = Color::FromArgb(222, 0, 67);
				}
				if (ch == 1)
				{
					p32->BackColor = Color::FromArgb(0, 68, 213);
				}
				if (ch == 2)
				{
					p32->BackColor = Color::FromArgb(8, 196, 83);
				}
				if (ch == 3)
				{
					p32->BackColor = Color::FromArgb(240,119,14);
				}
				if (ch == 4)
				{
					p32->BackColor = Color::FromArgb(231, 210, 56);
				}
				if (ch == 5)
				{
					p32->BackColor = Color::FromArgb(255, 255, 255);
				}
			case 8:	//=========================================================
				ch = CRand();
				if (ch == 0)
				{
					p33->BackColor = Color::FromArgb(222, 0, 67);
				}
				if (ch == 1)
				{
					p33->BackColor = Color::FromArgb(0, 68, 213);
				}
				if (ch == 2)
				{
					p33->BackColor = Color::FromArgb(8, 196, 83);
				}
				if (ch == 3)
				{
					p33->BackColor = Color::FromArgb(240,119,14);
				}
				if (ch == 4)
				{
					p33->BackColor = Color::FromArgb(231, 210, 56);
				}
				if (ch == 5)
				{
					p33->BackColor = Color::FromArgb(255, 255, 255);
				}
			default:
				break;
			}
		}

		//p11->BackColor = Color::FromArgb(222, 0, 67);
		//p12->BackColor = Color::FromArgb(0, 68, 213);
		//p13->BackColor = Color::FromArgb(8, 196, 83);
	}
	};
}
