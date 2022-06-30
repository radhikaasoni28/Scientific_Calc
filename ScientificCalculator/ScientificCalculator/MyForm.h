#pragma once

namespace ScientificCalculator {

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  scientificToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  historyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;

	private: System::Windows::Forms::TextBox^  Display;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::ToolStripMenuItem^  temToolStripMenuItem;
	private: System::Windows::Forms::Label^  label;

	private: System::Windows::Forms::Label^  label3Cov;



	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::TextBox^  textBoxConvert;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  listBox1;


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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->scientificToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->temToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Display = (gcnew System::Windows::Forms::TextBox());
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
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBoxConvert = (gcnew System::Windows::Forms::TextBox());
			this->label3Cov = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1552, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->sToolStripMenuItem,
					this->scientificToolStripMenuItem, this->historyToolStripMenuItem, this->temToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(44, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// sToolStripMenuItem
			// 
			this->sToolStripMenuItem->Name = L"sToolStripMenuItem";
			this->sToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->sToolStripMenuItem->Text = L"Standard";
			this->sToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::sToolStripMenuItem_Click);
			// 
			// scientificToolStripMenuItem
			// 
			this->scientificToolStripMenuItem->Name = L"scientificToolStripMenuItem";
			this->scientificToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->scientificToolStripMenuItem->Text = L"Scientific";
			this->scientificToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::scientificToolStripMenuItem_Click);
			// 
			// historyToolStripMenuItem
			// 
			this->historyToolStripMenuItem->Checked = true;
			this->historyToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->historyToolStripMenuItem->Name = L"historyToolStripMenuItem";
			this->historyToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->historyToolStripMenuItem->Text = L"History";
			this->historyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::historyToolStripMenuItem_Click);
			// 
			// temToolStripMenuItem
			// 
			this->temToolStripMenuItem->Name = L"temToolStripMenuItem";
			this->temToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->temToolStripMenuItem->Text = L"Temperature";
			this->temToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::temToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(47, 24);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(57, 24);
			this->helpToolStripMenuItem->Text = L"Help ";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::helpToolStripMenuItem_Click);
			// 
			// Display
			// 
			this->Display->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Display->Location = System::Drawing::Point(16, 78);
			this->Display->Margin = System::Windows::Forms::Padding(4);
			this->Display->Multiline = true;
			this->Display->Name = L"Display";
			this->Display->Size = System::Drawing::Size(508, 83);
			this->Display->TabIndex = 1;
			this->Display->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->Display->TextChanged += gcnew System::EventHandler(this, &MyForm::Display_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(16, 209);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 47);
			this->button1->TabIndex = 2;
			this->button1->Text = L"±";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(115, 209);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 47);
			this->button2->TabIndex = 2;
			this->button2->Text = L"CE";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(213, 209);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(91, 47);
			this->button3->TabIndex = 2;
			this->button3->Text = L"C";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(312, 209);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(91, 47);
			this->button4->TabIndex = 2;
			this->button4->Text = L"☒";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(16, 263);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(91, 47);
			this->button5->TabIndex = 2;
			this->button5->Text = L"7";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(115, 263);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(91, 47);
			this->button6->TabIndex = 2;
			this->button6->Text = L"8";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(213, 263);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(91, 47);
			this->button7->TabIndex = 2;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(312, 263);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(91, 47);
			this->button8->TabIndex = 2;
			this->button8->Text = L"+";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(16, 325);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(91, 47);
			this->button9->TabIndex = 2;
			this->button9->Text = L"4";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(115, 325);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(91, 47);
			this->button10->TabIndex = 2;
			this->button10->Text = L"5";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(16, 379);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(91, 47);
			this->button11->TabIndex = 2;
			this->button11->Text = L"1";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(115, 379);
			this->button12->Margin = System::Windows::Forms::Padding(4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(91, 47);
			this->button12->TabIndex = 2;
			this->button12->Text = L"2";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(213, 325);
			this->button13->Margin = System::Windows::Forms::Padding(4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(91, 47);
			this->button13->TabIndex = 2;
			this->button13->Text = L"6";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(213, 379);
			this->button14->Margin = System::Windows::Forms::Padding(4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(91, 47);
			this->button14->TabIndex = 2;
			this->button14->Text = L"3";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(312, 325);
			this->button15->Margin = System::Windows::Forms::Padding(4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(91, 47);
			this->button15->TabIndex = 2;
			this->button15->Text = L"-";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(312, 379);
			this->button16->Margin = System::Windows::Forms::Padding(4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(91, 47);
			this->button16->TabIndex = 2;
			this->button16->Text = L"*";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(16, 432);
			this->button17->Margin = System::Windows::Forms::Padding(4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(91, 47);
			this->button17->TabIndex = 2;
			this->button17->Text = L"0";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(115, 433);
			this->button18->Margin = System::Windows::Forms::Padding(4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(91, 47);
			this->button18->TabIndex = 2;
			this->button18->Text = L".";
			this->button18->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(213, 433);
			this->button19->Margin = System::Windows::Forms::Padding(4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(91, 47);
			this->button19->TabIndex = 2;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(312, 433);
			this->button20->Margin = System::Windows::Forms::Padding(4);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(91, 47);
			this->button20->TabIndex = 2;
			this->button20->Text = L"/";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(499, 209);
			this->button21->Margin = System::Windows::Forms::Padding(4);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(91, 47);
			this->button21->TabIndex = 2;
			this->button21->Text = L"√";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(597, 209);
			this->button22->Margin = System::Windows::Forms::Padding(4);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(91, 47);
			this->button22->TabIndex = 2;
			this->button22->Text = L"sin";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(499, 325);
			this->button23->Margin = System::Windows::Forms::Padding(4);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(91, 47);
			this->button23->TabIndex = 2;
			this->button23->Text = L"π";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(499, 263);
			this->button24->Margin = System::Windows::Forms::Padding(4);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(91, 47);
			this->button24->TabIndex = 2;
			this->button24->Text = L"x^2";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(597, 325);
			this->button25->Margin = System::Windows::Forms::Padding(4);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(91, 47);
			this->button25->TabIndex = 2;
			this->button25->Text = L"Bin";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(597, 263);
			this->button26->Margin = System::Windows::Forms::Padding(4);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(91, 47);
			this->button26->TabIndex = 2;
			this->button26->Text = L"sinh";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(499, 379);
			this->button27->Margin = System::Windows::Forms::Padding(4);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(91, 47);
			this->button27->TabIndex = 2;
			this->button27->Text = L"1/x";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(696, 209);
			this->button28->Margin = System::Windows::Forms::Padding(4);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(91, 47);
			this->button28->TabIndex = 2;
			this->button28->Text = L"cos";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(499, 433);
			this->button29->Margin = System::Windows::Forms::Padding(4);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(91, 47);
			this->button29->TabIndex = 2;
			this->button29->Text = L"Mod";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(597, 379);
			this->button30->Margin = System::Windows::Forms::Padding(4);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(91, 47);
			this->button30->TabIndex = 2;
			this->button30->Text = L"Oct";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(597, 433);
			this->button31->Margin = System::Windows::Forms::Padding(4);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(91, 47);
			this->button31->TabIndex = 2;
			this->button31->Text = L"Exp";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(696, 263);
			this->button32->Margin = System::Windows::Forms::Padding(4);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(91, 47);
			this->button32->TabIndex = 2;
			this->button32->Text = L"cosh";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->Location = System::Drawing::Point(696, 325);
			this->button33->Margin = System::Windows::Forms::Padding(4);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(91, 47);
			this->button33->TabIndex = 2;
			this->button33->Text = L"Hex";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->Location = System::Drawing::Point(696, 379);
			this->button34->Margin = System::Windows::Forms::Padding(4);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(91, 47);
			this->button34->TabIndex = 2;
			this->button34->Text = L"Dec";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->Location = System::Drawing::Point(696, 433);
			this->button35->Margin = System::Windows::Forms::Padding(4);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(91, 47);
			this->button35->TabIndex = 2;
			this->button35->Text = L"%";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->Location = System::Drawing::Point(795, 209);
			this->button36->Margin = System::Windows::Forms::Padding(4);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(91, 47);
			this->button36->TabIndex = 2;
			this->button36->Text = L"tan";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->Location = System::Drawing::Point(795, 325);
			this->button37->Margin = System::Windows::Forms::Padding(4);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(91, 47);
			this->button37->TabIndex = 2;
			this->button37->Text = L"log";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// button38
			// 
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button38->Location = System::Drawing::Point(795, 263);
			this->button38->Margin = System::Windows::Forms::Padding(4);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(91, 47);
			this->button38->TabIndex = 2;
			this->button38->Text = L"tanh";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// button39
			// 
			this->button39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button39->Location = System::Drawing::Point(795, 379);
			this->button39->Margin = System::Windows::Forms::Padding(4);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(91, 47);
			this->button39->TabIndex = 2;
			this->button39->Text = L"In x";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// button40
			// 
			this->button40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button40->Location = System::Drawing::Point(795, 433);
			this->button40->Margin = System::Windows::Forms::Padding(4);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(91, 47);
			this->button40->TabIndex = 2;
			this->button40->Text = L"MNR";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->textBoxConvert);
			this->panel1->Controls->Add(this->label3Cov);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button42);
			this->panel1->Controls->Add(this->button41);
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Location = System::Drawing::Point(963, 106);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(545, 373);
			this->panel1->TabIndex = 3;
			// 
			// textBoxConvert
			// 
			this->textBoxConvert->Location = System::Drawing::Point(364, 26);
			this->textBoxConvert->Margin = System::Windows::Forms::Padding(4);
			this->textBoxConvert->Name = L"textBoxConvert";
			this->textBoxConvert->Size = System::Drawing::Size(132, 22);
			this->textBoxConvert->TabIndex = 3;
			// 
			// label3Cov
			// 
			this->label3Cov->AutoSize = true;
			this->label3Cov->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3Cov->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3Cov->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label3Cov->Location = System::Drawing::Point(372, 236);
			this->label3Cov->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3Cov->Name = L"label3Cov";
			this->label3Cov->Size = System::Drawing::Size(111, 29);
			this->label3Cov->TabIndex = 2;
			this->label3Cov->Text = L"              ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(19, 241);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Converted Result";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(19, 26);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(209, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Enter Value to Convert";
			// 
			// button42
			// 
			this->button42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button42->Location = System::Drawing::Point(415, 315);
			this->button42->Margin = System::Windows::Forms::Padding(4);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(115, 39);
			this->button42->TabIndex = 1;
			this->button42->Text = L"Reset";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::button42_Click);
			// 
			// button41
			// 
			this->button41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button41->Location = System::Drawing::Point(53, 315);
			this->button41->Margin = System::Windows::Forms::Padding(4);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(123, 39);
			this->button41->TabIndex = 1;
			this->button41->Text = L"Convert";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button41_Click);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->Location = System::Drawing::Point(107, 190);
			this->radioButton3->Margin = System::Windows::Forms::Padding(4);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(88, 29);
			this->radioButton3->TabIndex = 0;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Kevin";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(107, 135);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(238, 29);
			this->radioButton2->TabIndex = 0;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Fahrenheit to Celsius";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(107, 80);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(238, 29);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Celsius to Fahrenheit";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->BackColor = System::Drawing::Color::White;
			this->label->Location = System::Drawing::Point(20, 81);
			this->label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(12, 17);
			this->label->TabIndex = 4;
			this->label->Text = L" ";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(13, 487);
			this->listBox1->Margin = System::Windows::Forms::Padding(4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(54, 20);
			this->listBox1->TabIndex = 5;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1552, 503);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Display);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double	iFirstnum,iSecondnum,Result;
		String^ iOperator;
		char op;
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 MyForm::Width=325;
			MyForm::Height=450;
			Display->Width=288;
			
			 }

			 //Exit file
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 Application::Exit();
		 }
//Standard option
private: System::Void sToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			MyForm::Width=325;
			MyForm::Height=450;
			Display->Width=288;
			
		 }
private: System::Void scientificToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 MyForm::Width=700;
			 MyForm::Height=450;
			 Display->Width=650;
		 }
private: System::Void temToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MyForm::Width=1200;
			 MyForm::Height=450;
			 Display->Width=650;
		 }
private: System::Void Button_Click(System::Object^  sender, System::EventArgs^  e) {

			 Button ^ Numbers=safe_cast<Button^>(sender);
			 if(Display->Text=="0")
			 {
				 Display->Text=Numbers->Text;

			 }
			 else
			 {
				 Display->Text=Display->Text + Numbers->Text;
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Display->Clear();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Display->Clear();
		 }
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {

			 if(!Display->Text->Contains("."))
			 {
				 Display->Text=Display->Text+".";
			 }
		 }
private: System::Void Arithmetic_Op(System::Object^  sender, System::EventArgs^  e) {
			 Button ^ op=safe_cast<Button^>(sender);
			iFirstnum=Double::Parse(Display->Text);
		Display->Text="";
		iOperator=op->Text;

		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(Display->Text->Contains("-"))
			 {
				 Display->Text=Display->Text->Remove(0,1);
			 }
			 else
			 {
				  Display->Text="-"+Display->Text;
			 }
		 }
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {

	         label->Text = "";
			 iSecondnum=Double::Parse(Display->Text);
			
			 if(iOperator=="+")
			 {
			   Result=iFirstnum+iSecondnum;
			   Display->Text=System::Convert::ToString(Result);
			   listBox1->Items->Add(System::Convert::ToString(label->Text));

			 }
			 else if(iOperator=="-")
			 {
			  Result=iFirstnum-iSecondnum;
			   Display->Text=System::Convert::ToString(Result);
			     listBox1->Items->Add(System::Convert::ToString(label->Text));
			 }
			 else if(iOperator=="*")
			 {
			  Result=iFirstnum*iSecondnum;
			   Display->Text=System::Convert::ToString(Result);
			     listBox1->Items->Add(System::Convert::ToString(label->Text));
			 }
			 else if(iOperator=="/")

			 {
			  Result=iFirstnum/iSecondnum;
			   Display->Text=System::Convert::ToString(Result);
			     listBox1->Items->Add(System::Convert::ToString(label->Text));
			 }
			 else if(iOperator=="Mod")
			 {
				 int f,s,r;
				 f=Convert::ToInt32(iFirstnum);
				 s=Convert::ToInt32(iSecondnum);
				 r=f%s;
				
			   Display->Text=System::Convert::ToString(r);
			     listBox1->Items->Add(System::Convert::ToString(label->Text));

			 }
			 else if(iOperator=="Exp")
			 {
				 Result=(iFirstnum,(1/iSecondnum));
			   Display->Text=System::Convert::ToString(Math::Exp((Result)));
			     listBox1->Items->Add(System::Convert::ToString(label->Text));
			 }
			 

		 }
private: System::Void Display_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void historyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(historyToolStripMenuItem->Checked==true)
			 {
				 listBox1->Visible=true;
				 historyToolStripMenuItem->Visible=false;
				 historyToolStripMenuItem->Visible=true;
				 MyForm::Height=600;
			 }
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(Display->Text->Length>0)
			 {
				 Display->Text=Display->Text->Remove(Display->Text->Length -1,1);
			 }
		 }
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
			 Display->Text=("3.1415926523");
		 }
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
			 int a;
			 a=Double::Parse(Display->Text);
			 label->Text=System::Convert::ToString("log "+"("+(Display->Text)+")");
			 listBox1->Items->Add(System::Convert::ToString(label->Text));
			 a=Math::Log(a);
			 Display->Text=System::Convert::ToString(a);
		 }
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
			 int a;
			 a=Double::Parse(Display->Text);
			 a=Math::Sqrt(a);
			 Display->Text=System::Convert::ToString(a);
			 listBox1->Items->Add(System::Convert::ToString(Display->Text));
		 }
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {

			 int a;
			 a=Double::Parse(Display->Text);
			 label->Text=System::Convert::ToString("Sinh "+"("+(Display->Text)+")");
			 listBox1->Items->Add(System::Convert::ToString(label->Text));
			 a=Math::Sinh(a);
			 Display->Text=System::Convert::ToString(a);
		 }
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
			 int a=Double::Parse(Display->Text);
			 label->Text=System::Convert::ToString("sin "+"("+(Display->Text)+")");
			 listBox1->Items->Add(System::Convert::ToString(label->Text));
			 a=Math::Sin(a);
			 Display->Text=System::Convert::ToString(a);
		 }
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
			 int a;
			 a=Double::Parse(Display->Text);
			 label->Text=System::Convert::ToString("cos "+"("+(Display->Text)+")");
			 listBox1->Items->Add(System::Convert::ToString(label->Text));
			 a=Math::Cos(a);
			 Display->Text=System::Convert::ToString(a);
		 }
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
			 int a;
			 a=Double::Parse(Display->Text);
			 label->Text=System::Convert::ToString("Cosh "+"("+(Display->Text)+")");
			 listBox1->Items->Add(System::Convert::ToString(label->Text));
			 a=Math::Cosh(a);
			 Display->Text=System::Convert::ToString(a);
		 }
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
			 int a;
			 a=Double::Parse(Display->Text);
			 label->Text=System::Convert::ToString("tan "+"("+(Display->Text)+")");
			 listBox1->Items->Add(System::Convert::ToString(label->Text));
			 a=Math::Tan(a);
			 Display->Text=System::Convert::ToString(a);
		 }
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
			 int a;
			 a=Double::Parse(Display->Text);
			 label->Text=System::Convert::ToString("Tanh "+"("+(Display->Text)+")");
			 listBox1->Items->Add(System::Convert::ToString(label->Text));
			 a=Math::Tanh(a);
			 Display->Text=System::Convert::ToString(a);
		 }
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
			 int a=int::Parse(Display->Text);
			 Display->Text=System::Convert::ToString(a,2);
			 label->Text="";
			 listBox1->Items->Add(System::Convert::ToString(Display->Text));

		 }
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
			 int a=int::Parse(Display->Text);
			 Display->Text=System::Convert::ToString(a,16);
			 label->Text="";
			 listBox1->Items->Add(System::Convert::ToString(Display->Text));
		 }
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
			 int a=int::Parse(Display->Text);
			 Display->Text=System::Convert::ToString(a,10);
			 label->Text="";
			 listBox1->Items->Add(System::Convert::ToString(Display->Text));
		 }
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
			 int a=int::Parse(Display->Text);
			 Display->Text=System::Convert::ToString(a,8);
			 label->Text="";
			 listBox1->Items->Add(System::Convert::ToString(Display->Text));
		 }
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
			 double a;
			 a=System::Math::Log(Convert::ToDouble(Display->Text));
			 Display->Text=Convert::ToString(a);

		 }
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
			 double a;
			 a=Convert::ToDouble(Display->Text)/Convert::ToDouble(100);
			 Display->Text=Convert::ToString(a);
		 }
private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("It's Md.Naimur Rahman");
		 }

private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 op;
			 op='C';
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			  op='F';
		 }
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 op='K';
		 }
private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
			 float ic,iF,ik;
			 switch(op)
			 {
			 case 'C':
				 (float::TryParse(textBoxConvert->Text,ic));
				 label3Cov->Text=((((9*ic)/5)+32).ToString());
				 break;
			 case 'F':
				 (float::TryParse(textBoxConvert->Text,iF));
				 label3Cov->Text=((((iF-32)*5)/9).ToString());
				 break;

			 case 'K':
				 (float::TryParse(textBoxConvert->Text,ik));
				 label3Cov->Text=(((((9*ik)/5)+32)+273.15).ToString());
			 }
		 }
private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
			 label3Cov->Text="";
			 textBoxConvert->Text="";
			 radioButton1->Checked=false;
			 radioButton2->Checked=false;
			 radioButton3->Checked=false;
		 }


private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
