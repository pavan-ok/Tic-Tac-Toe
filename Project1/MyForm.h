#pragma once
namespace $safeprojectname$ {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button11;





	private:










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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::AppStarting;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Location = System::Drawing::Point(224, 21);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(230, 45);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Tic-Tac-Toe";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Strikeout)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label3->Location = System::Drawing::Point(-28, 66);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(979, 20);
			this->label3->TabIndex = 11;
			this->label3->Text = L"_________________________________________________________________________________"
				L"________________";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Info;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(47, 154);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 91);
			this->button1->TabIndex = 12;
			this->button1->Text = L"  ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Info;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(155, 154);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 91);
			this->button2->TabIndex = 13;
			this->button2->Text = L"   ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Info;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(263, 154);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 91);
			this->button3->TabIndex = 14;
			this->button3->Text = L"    ";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Info;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(47, 252);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 91);
			this->button4->TabIndex = 17;
			this->button4->Text = L"     ";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Info;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(155, 252);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 91);
			this->button5->TabIndex = 16;
			this->button5->Text = L"      ";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Info;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->Location = System::Drawing::Point(263, 252);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 91);
			this->button6->TabIndex = 15;
			this->button6->Text = L"        ";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click_1);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Info;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->Location = System::Drawing::Point(47, 351);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 91);
			this->button7->TabIndex = 20;
			this->button7->Text = L"        ";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::Info;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->Location = System::Drawing::Point(155, 351);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 91);
			this->button8->TabIndex = 19;
			this->button8->Text = L"       ";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::Info;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button9->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button9->Location = System::Drawing::Point(263, 351);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 91);
			this->button9->TabIndex = 18;
			this->button9->Text = L"            ";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button10->Location = System::Drawing::Point(564, 476);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(105, 39);
			this->button10->TabIndex = 21;
			this->button10->Text = L"Reset";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label2->Location = System::Drawing::Point(581, 105);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 31);
			this->label2->TabIndex = 22;
			this->label2->Text = L"\'s Turn";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label5->Location = System::Drawing::Point(323, 462);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 32);
			this->label5->TabIndex = 24;
			this->label5->Text = L" ";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label4->Location = System::Drawing::Point(560, 112);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 24);
			this->label4->TabIndex = 23;
			this->label4->Text = L"X";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label6->Location = System::Drawing::Point(291, 462);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(21, 32);
			this->label6->TabIndex = 25;
			this->label6->Text = L" ";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label7->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label7->Location = System::Drawing::Point(437, 252);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(166, 32);
			this->label7->TabIndex = 26;
			this->label7->Text = L"X-Points = ";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.2F));
			this->label8->Location = System::Drawing::Point(610, 253);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 32);
			this->label8->TabIndex = 27;
			this->label8->Text = L"0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label9->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label9->Location = System::Drawing::Point(437, 302);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(166, 32);
			this->label9->TabIndex = 28;
			this->label9->Text = L"O-Points = ";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.2F));
			this->label10->Location = System::Drawing::Point(610, 302);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(31, 32);
			this->label10->TabIndex = 29;
			this->label10->Text = L"0";
			// 
			// button11
			// 
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button11->Location = System::Drawing::Point(564, 403);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(105, 39);
			this->button11->TabIndex = 30;
			this->button11->Text = L"New game";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(709, 551);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int Xp = 0;
		int Op = 0;
public: System::Boolean WinOrNot() {
		bool x = false;
		if (button1->Text == button2->Text && button1->Text == button3->Text)
		{
			x = true;
		}
		if (button4->Text == button5->Text && button4->Text == button6->Text)
		{
			x = true;
		}
		if (button7->Text == button8->Text && button7->Text == button9->Text)
		{
			x = true;
		}
		if (button1->Text == button5->Text && button1->Text == button9->Text)
		{
			x = true;
		}
		if (button1->Text == button4->Text && button1->Text == button7->Text)
		{
			x = true;
		}
		if (button2->Text == button5->Text && button2->Text == button8->Text)
		{
			x = true;
		}
		if (button3->Text == button6->Text && button3->Text == button9->Text)
		{
			x = true;
		}
		if (button3->Text == button5->Text && button3->Text == button7->Text)
		{
			x = true;
		}
		return x;
	}
		  System::Void Reset() {
			  button1->Text = "";
			  button2->Text = " ";
			  button3->Text = "  ";
			  button4->Text = "   ";
			  button5->Text = "    ";
			  button6->Text = "     ";
			  button7->Text = "      ";
			  button8->Text = "       ";
			  button9->Text = "";
			  label5->Text = "";
			  label6->Text = "";

			  button1->Enabled = true;
			  button2->Enabled = true;
			  button3->Enabled = true;
			  button4->Enabled = true;
			  button5->Enabled = true;
			  button6->Enabled = true;
			  button7->Enabled = true;
			  button8->Enabled = true;
			  button9->Enabled = true;
	}
		  System::Void End() {
			  button1->Enabled = false;
			  button2->Enabled = false;
			  button3->Enabled = false;
			  button4->Enabled = false;
			  button5->Enabled = false;
			  button6->Enabled = false;
			  button7->Enabled = false;
			  button8->Enabled = false;
			  button9->Enabled = false;
		  }
		  System::Void Change() {
			  if (CurrentPlayer == X) {
				  CurrentPlayer = Y;
			  }
			  else if (CurrentPlayer == Y) {
				  CurrentPlayer = X;
			  }

		  }
		  System::Void Winner() {
			  if (CurrentPlayer == X) {
				  label6->Text = Y;
				  Op += 1;
				  label10->Text = Convert::ToString(Op);
			  }
			  else if (CurrentPlayer == Y) {
				  label6->Text = X;
				  Xp += 1;
				  label8->Text = Convert::ToString(Xp);
			  }
		  }
		  System::Void Tie() {
			  if (button1->Enabled == false &&
				  button2->Enabled == false &&
				  button3->Enabled == false &&
				  button4->Enabled == false &&
				  button5->Enabled == false &&
				  button6->Enabled == false &&
				  button7->Enabled == false &&
				  button8->Enabled == false &&
				  button9->Enabled == false) {
				  label6->Text = "Tie";
			  }
		  }

		   String^ X = "X";
		   String^ CurrentPlayer=X;
		   String^ Y = "O";
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	button1->Text = CurrentPlayer;
	if (CurrentPlayer == X) {
		label4->Text = Y;
	}
	else if (CurrentPlayer == Y) {
		label4->Text = X;
	}
	Change();
	button1->Enabled = false;
	if (WinOrNot() == true) {
		label5->Text = "Won";
		Winner();
		End();
	}
	else {
		Tie();
	}
	 
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (CurrentPlayer == X) {
		label4->Text = Y;
	}
	else if (CurrentPlayer == Y) {
		label4->Text = X;
	}
	button2->Text = CurrentPlayer;
	Change();
	button2->Enabled = false;
	if (WinOrNot() == true) {
		label5->Text = "Won";
		Winner();
		End();
	}
	else {
		Tie();
	}
	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (CurrentPlayer == X) {
		label4->Text = Y;
	}
	else if (CurrentPlayer == Y) {
		label4->Text = X;
	}
	button3->Text = CurrentPlayer;
	Change();
	button3->Enabled = false;
	if (WinOrNot() == true) {
		label5->Text = "Won";
		Winner();
		End();
	}
	else{
		Tie();
	}
	 
}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CurrentPlayer == X) {
			label4->Text = Y;
		}
		else if (CurrentPlayer == Y) {
			label4->Text = X;
		}
		button4->Text = CurrentPlayer;
		Change();
		button4->Enabled = false;
		if (WinOrNot() == true) {
			label5->Text = "Won";
			Winner();
			End();
		}
		else {
			Tie();
		}
		 
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (CurrentPlayer == X) {
		label4->Text = Y;
	}
	else if (CurrentPlayer == Y) {
		label4->Text = X;
	}
	button5->Text = CurrentPlayer;
	Change();
	button5->Enabled = false;
	if (WinOrNot() == true) {
		label5->Text = "Won";
		Winner();
		End();
	}
	else {
		Tie();
	}
	 
}
private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (CurrentPlayer == X) {
		label4->Text = Y;
	}
	else if (CurrentPlayer == Y) {
		label4->Text = X;
	}
	button6->Text = CurrentPlayer;
	Change();
	button6->Enabled = false;
	if (WinOrNot() == true) {
		label5->Text = "Won";
		Winner();
		End();
	}
	else {
		Tie();
	}
	 
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (CurrentPlayer == X) {
		label4->Text = Y;
	}
	else if (CurrentPlayer == Y) {
		label4->Text = X;
	}
	button7->Text = CurrentPlayer;
	Change();
	button7->Enabled = false;
	if (WinOrNot() == true) {
		label5->Text = "Won";
		Winner();
		End();
	}
	else {
		Tie();
	}
	 
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (CurrentPlayer == X) {
		label4->Text = Y;
	}
	else if (CurrentPlayer == Y) {
		label4->Text = X;
	}
	button8->Text = CurrentPlayer;
	Change();
	button8->Enabled = false;
	if (WinOrNot() == true) {
		label5->Text = "Won";
		Winner();
		End();
	}
	else {
		Tie();
	}
	 
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (CurrentPlayer == X) {
		label4->Text = Y;
	}
	else if (CurrentPlayer == Y) {
		label4->Text = X;
	}
	button9->Text = CurrentPlayer;
	Change();
	button9->Enabled = false;
	if (WinOrNot() == true) {
		label5->Text = "Won";
		Winner();
		End();
	}
	else {
		Tie();
	}
	
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	Reset();
}


private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	label8->Text = "0";
	label10->Text = "0";
	Xp = 0;
	Op = 0;
	Reset();
}
};
}

