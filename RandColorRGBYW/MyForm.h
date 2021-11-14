#pragma once

#include "GenerateColor.h"

namespace RandColorRGBYW {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

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

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;


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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->tableLayoutPanel1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
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
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(12, 378);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(236, 41);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Shuffle";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Shuffle);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(331, 378);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(41, 41);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(254, 378);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(30, 41);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Cl";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Clear);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(295, 378);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(30, 41);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Op";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Read);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(384, 431);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Tag = L"MainWin";
			this->Text = L"Cube shuffle";
			this->Load += gcnew System::EventHandler(this, &MyForm::MainStart);
			this->panel1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		// GLOBAL
	
		int countt = 0;



//#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup") //hide console window
	private: System::Void MainStart(System::Object^ sender, System::EventArgs^ e) {
		cout << "Ready" << endl;
		cout << "0 Red\n1 Blue\n2 Green\n3 Orange\n4 Yellow\n5 White\n";
		cout << "===============\n";

	}
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


		vector<int> logsCor(9);



		for (int ch, i = 0; i < 9; i++)
		{
			switch (i)
			{
			case 0:	//=========================================================
				ch = CRand();
				cout << ch << endl;
				logsCor[i] = ch;
				if (ch == 0)
				{
					p11->BackColor = Color::FromArgb(222, 0, 67);
				}
				if (ch == 1)
				{
					p11->BackColor = Color::FromArgb(0, 68, 213);
				}
				if (ch == 2)
				{
					p11->BackColor = Color::FromArgb(8, 196, 83);
				}
				if (ch == 3)
				{
					p11->BackColor = Color::FromArgb(240,119,14);
				}
				if (ch == 4)
				{
					p11->BackColor = Color::FromArgb(231, 210, 56);
				}
				if (ch == 5)
				{
					p11->BackColor = Color::FromArgb(255, 255, 255);
				}
				break;
			case 1:	//=========================================================
				ch = CRand();
				cout << ch << endl;
				logsCor[i] = ch;
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
					p12->BackColor = Color::FromArgb(240, 119, 14);
				}
				if (ch == 4)
				{
					p12->BackColor = Color::FromArgb(231, 210, 56);
				}
				if (ch == 5)
				{
					p12->BackColor = Color::FromArgb(255, 255, 255);
				}
				break;
			case 2:	//=========================================================
				ch = CRand();
				cout << ch << endl;
				logsCor[i] = ch;
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
					p13->BackColor = Color::FromArgb(240, 119, 14);
				}
				if (ch == 4)
				{
					p13->BackColor = Color::FromArgb(231, 210, 56);
				}
				if (ch == 5)
				{
					p13->BackColor = Color::FromArgb(255, 255, 255);
				}
				break;
			case 3:	//=========================================================
				ch = CRand();
				cout << ch << endl;
				logsCor[i] = ch;
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
					p21->BackColor = Color::FromArgb(240, 119, 14);
				}
				if (ch == 4)
				{
					p21->BackColor = Color::FromArgb(231, 210, 56);
				}
				if (ch == 5)
				{
					p21->BackColor = Color::FromArgb(255, 255, 255);
				}
				break;
			case 4:	//=========================================================
				ch = CRand();
				cout << ch << endl;
				logsCor[i] = ch;
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
					p22->BackColor = Color::FromArgb(240, 119, 14);
				}
				if (ch == 4)
				{
					p22->BackColor = Color::FromArgb(231, 210, 56);
				}
				if (ch == 5)
				{
					p22->BackColor = Color::FromArgb(255, 255, 255);
				}
				break;
			case 5:	//=========================================================
				ch = CRand();
				cout << ch << endl;
				logsCor[i] = ch;
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
					p23->BackColor = Color::FromArgb(240, 119, 14);
				}
				if (ch == 4)
				{
					p23->BackColor = Color::FromArgb(231, 210, 56);
				}
				if (ch == 5)
				{
					p23->BackColor = Color::FromArgb(255, 255, 255);
				}
				break;
			case 6:	//=========================================================
				ch = CRand();
				cout << ch << endl;
				logsCor[i] = ch;
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
					p31->BackColor = Color::FromArgb(240, 119, 14);
				}
				if (ch == 4)
				{
					p31->BackColor = Color::FromArgb(231, 210, 56);
				}
				if (ch == 5)
				{
					p31->BackColor = Color::FromArgb(255, 255, 255);
				}
				break;
			case 7:	//=========================================================
				ch = CRand();
				cout << ch << endl;
				logsCor[i] = ch;
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
					p32->BackColor = Color::FromArgb(240, 119, 14);
				}
				if (ch == 4)
				{
					p32->BackColor = Color::FromArgb(231, 210, 56);
				}
				if (ch == 5)
				{
					p32->BackColor = Color::FromArgb(255, 255, 255);
				}
				break;
			case 8:	//=========================================================
				ch = CRand();
				cout << ch << endl;
				logsCor[i] = ch;
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
				break;
			default:
				break;
			}
		}
		
		cout << "\n";

		int logs[9]{};

		for (int i = 0; i < logsCor.size(); i++)
		{
			logs[i] = logsCor[i];
		}

		inputF(logs, logsCor.size(), countt);
		countt++;

		//string clear;
		//cin >> clear;
		//if (clear == "clear")
		//{
		//	system("cls");
		//}

		//clearF(clear);

		//p11->BackColor = Color::FromArgb(222, 0, 67);
		//p12->BackColor = Color::FromArgb(0, 68, 213);
		//p13->BackColor = Color::FromArgb(8, 196, 83);
	}
private: System::Void Clear(System::Object^ sender, System::EventArgs^ e) {
	system("cls");

	clearF(countt);
}
private: System::Void Read(System::Object^ sender, System::EventArgs^ e) {
	readF();
}
};
}
