#pragma once
#include "Header.h"

namespace VIPZ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentsList
	/// </summary>
	public ref class StudentsList : public System::Windows::Forms::Form
	{
	public:
		StudentsList(void)
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
		~StudentsList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:














	private: System::Windows::Forms::FlowLayoutPanel^  Panel1;

	private: System::Windows::Forms::TextBox^  FirstNameTextBox;
	private: System::Windows::Forms::TextBox^  LastNameTextBox;





	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::ComboBox^  MathComboBox;
	private: System::Windows::Forms::ComboBox^  HistoryComboBox;
	private: System::Windows::Forms::ComboBox^  BiologyComboBox;




	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Panel^  panel2;


	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::TextBox^  FirstNameTextBox2;
	private: System::Windows::Forms::Panel^  InsertPanel;

	private: System::Windows::Forms::Panel^  DeletePanel;
	private: System::Windows::Forms::Panel^  OrderPanel;

	private: System::Windows::Forms::Panel^  LoadPanel;
	private: System::Windows::Forms::Panel^  ExitPanel;

	private: System::Windows::Forms::Panel^  FilterPanel;
	private: System::Windows::Forms::Label^  label8;
























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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle16 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle17 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle18 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle19 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle20 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentsList::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Panel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->FirstNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->LastNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->FirstNameTextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->MathComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->BiologyComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->HistoryComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->ExitPanel = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->FilterPanel = (gcnew System::Windows::Forms::Panel());
			this->OrderPanel = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->LoadPanel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->InsertPanel = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->DeletePanel = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->Panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel2->SuspendLayout();
			this->ExitPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->FilterPanel->SuspendLayout();
			this->OrderPanel->SuspendLayout();
			this->LoadPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->InsertPanel->SuspendLayout();
			this->DeletePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			dataGridViewCellStyle16->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle16->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle16->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle16->SelectionForeColor = System::Drawing::Color::Black;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle16;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle17->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle17->BackColor = System::Drawing::SystemColors::MenuHighlight;
			dataGridViewCellStyle17->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 8));
			dataGridViewCellStyle17->ForeColor = System::Drawing::Color::SaddleBrown;
			dataGridViewCellStyle17->SelectionBackColor = System::Drawing::SystemColors::AppWorkspace;
			dataGridViewCellStyle17->SelectionForeColor = System::Drawing::Color::SaddleBrown;
			dataGridViewCellStyle17->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle17;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column5, this->Column6, this->Column3, this->Column2, this->Column4, this->Column7
			});
			dataGridViewCellStyle18->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle18->BackColor = System::Drawing::Color::Beige;
			dataGridViewCellStyle18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle18->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle18->SelectionBackColor = System::Drawing::Color::Beige;
			dataGridViewCellStyle18->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle18->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle18;
			this->dataGridView1->Enabled = false;
			this->dataGridView1->GridColor = System::Drawing::Color::Khaki;
			this->dataGridView1->Location = System::Drawing::Point(330, 25);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			dataGridViewCellStyle19->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle19->BackColor = System::Drawing::Color::DarkOliveGreen;
			dataGridViewCellStyle19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle19->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle19->SelectionBackColor = System::Drawing::Color::DarkOliveGreen;
			dataGridViewCellStyle19->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle19->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle19;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(195)));
			dataGridViewCellStyle20->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle20->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(195)));
			dataGridViewCellStyle20->SelectionForeColor = System::Drawing::Color::Black;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle20;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(755, 444);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->FillWeight = 30;
			this->Column1->HeaderText = L"¹";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"First Name";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Last Name";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->FillWeight = 178;
			this->Column3->HeaderText = L"Birthday";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->FillWeight = 80;
			this->Column2->HeaderText = L"Math";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->FillWeight = 80;
			this->Column4->HeaderText = L"History";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->FillWeight = 80;
			this->Column7->HeaderText = L"Biology";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// Panel1
			// 
			this->Panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Panel1->Controls->Add(this->FirstNameTextBox);
			this->Panel1->Controls->Add(this->LastNameTextBox);
			this->Panel1->Controls->Add(this->FirstNameTextBox2);
			this->Panel1->Controls->Add(this->dateTimePicker1);
			this->Panel1->Controls->Add(this->MathComboBox);
			this->Panel1->Controls->Add(this->BiologyComboBox);
			this->Panel1->Controls->Add(this->HistoryComboBox);
			this->Panel1->Location = System::Drawing::Point(368, 475);
			this->Panel1->Name = L"Panel1";
			this->Panel1->Size = System::Drawing::Size(727, 47);
			this->Panel1->TabIndex = 3;
			this->Panel1->Visible = false;
			// 
			// FirstNameTextBox
			// 
			this->FirstNameTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->FirstNameTextBox->Location = System::Drawing::Point(3, 3);
			this->FirstNameTextBox->Name = L"FirstNameTextBox";
			this->FirstNameTextBox->Size = System::Drawing::Size(0, 22);
			this->FirstNameTextBox->TabIndex = 0;
			// 
			// LastNameTextBox
			// 
			this->LastNameTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->LastNameTextBox->Location = System::Drawing::Point(9, 3);
			this->LastNameTextBox->Name = L"LastNameTextBox";
			this->LastNameTextBox->Size = System::Drawing::Size(111, 22);
			this->LastNameTextBox->TabIndex = 1;
			// 
			// FirstNameTextBox2
			// 
			this->FirstNameTextBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->FirstNameTextBox2->Location = System::Drawing::Point(126, 3);
			this->FirstNameTextBox2->Name = L"FirstNameTextBox2";
			this->FirstNameTextBox2->Size = System::Drawing::Size(111, 22);
			this->FirstNameTextBox2->TabIndex = 18;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::Color::Wheat;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateTimePicker1->Location = System::Drawing::Point(243, 3);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(197, 25);
			this->dateTimePicker1->TabIndex = 6;
			// 
			// MathComboBox
			// 
			this->MathComboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->MathComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->MathComboBox->FormattingEnabled = true;
			this->MathComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"0", L"1", L"2", L"3", L"4", L"5" });
			this->MathComboBox->Location = System::Drawing::Point(446, 3);
			this->MathComboBox->Name = L"MathComboBox";
			this->MathComboBox->Size = System::Drawing::Size(87, 24);
			this->MathComboBox->TabIndex = 7;
			// 
			// BiologyComboBox
			// 
			this->BiologyComboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->BiologyComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->BiologyComboBox->FormattingEnabled = true;
			this->BiologyComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"0", L"1", L"2", L"3", L"4", L"5" });
			this->BiologyComboBox->Location = System::Drawing::Point(539, 3);
			this->BiologyComboBox->Name = L"BiologyComboBox";
			this->BiologyComboBox->Size = System::Drawing::Size(84, 24);
			this->BiologyComboBox->TabIndex = 9;
			// 
			// HistoryComboBox
			// 
			this->HistoryComboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->HistoryComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->HistoryComboBox->FormattingEnabled = true;
			this->HistoryComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"0", L"1", L"2", L"3", L"4", L"5" });
			this->HistoryComboBox->Location = System::Drawing::Point(629, 3);
			this->HistoryComboBox->Name = L"HistoryComboBox";
			this->HistoryComboBox->Size = System::Drawing::Size(88, 24);
			this->HistoryComboBox->TabIndex = 8;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)));
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(12, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(62, 56);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &StudentsList::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)));
			this->pictureBox2->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.ErrorImage")));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(12, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(62, 56);
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &StudentsList::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)));
			this->pictureBox3->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.ErrorImage")));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.InitialImage")));
			this->pictureBox3->Location = System::Drawing::Point(12, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(62, 56);
			this->pictureBox3->TabIndex = 13;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &StudentsList::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)));
			this->pictureBox4->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.ErrorImage")));
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.InitialImage")));
			this->pictureBox4->Location = System::Drawing::Point(12, 0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(62, 56);
			this->pictureBox4->TabIndex = 14;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &StudentsList::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(175)));
			this->pictureBox5->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.ErrorImage")));
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.InitialImage")));
			this->pictureBox5->Location = System::Drawing::Point(1015, 528);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(62, 56);
			this->pictureBox5->TabIndex = 15;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &StudentsList::pictureBox5_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)));
			this->panel2->Controls->Add(this->ExitPanel);
			this->panel2->Controls->Add(this->FilterPanel);
			this->panel2->Controls->Add(this->OrderPanel);
			this->panel2->Controls->Add(this->LoadPanel);
			this->panel2->Controls->Add(this->InsertPanel);
			this->panel2->Controls->Add(this->DeletePanel);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->pictureBox7);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(308, 695);
			this->panel2->TabIndex = 16;
			// 
			// ExitPanel
			// 
			this->ExitPanel->Controls->Add(this->label7);
			this->ExitPanel->Controls->Add(this->pictureBox8);
			this->ExitPanel->Location = System::Drawing::Point(0, 617);
			this->ExitPanel->Name = L"ExitPanel";
			this->ExitPanel->Size = System::Drawing::Size(308, 64);
			this->ExitPanel->TabIndex = 30;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(80, 21);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 23);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Exit";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(12, 5);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(62, 56);
			this->pictureBox8->TabIndex = 23;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &StudentsList::pictureBox8_Click);
			// 
			// FilterPanel
			// 
			this->FilterPanel->Controls->Add(this->label8);
			this->FilterPanel->Controls->Add(this->pictureBox3);
			this->FilterPanel->Location = System::Drawing::Point(0, 528);
			this->FilterPanel->Name = L"FilterPanel";
			this->FilterPanel->Size = System::Drawing::Size(308, 64);
			this->FilterPanel->TabIndex = 29;
			// 
			// OrderPanel
			// 
			this->OrderPanel->Controls->Add(this->pictureBox1);
			this->OrderPanel->Controls->Add(this->label4);
			this->OrderPanel->Location = System::Drawing::Point(0, 458);
			this->OrderPanel->Name = L"OrderPanel";
			this->OrderPanel->Size = System::Drawing::Size(308, 64);
			this->OrderPanel->TabIndex = 28;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(80, 17);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(159, 23);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Order by ascending";
			// 
			// LoadPanel
			// 
			this->LoadPanel->Controls->Add(this->pictureBox6);
			this->LoadPanel->Controls->Add(this->label1);
			this->LoadPanel->Location = System::Drawing::Point(0, 248);
			this->LoadPanel->Name = L"LoadPanel";
			this->LoadPanel->Size = System::Drawing::Size(308, 64);
			this->LoadPanel->TabIndex = 27;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)));
			this->pictureBox6->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.ErrorImage")));
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.InitialImage")));
			this->pictureBox6->Location = System::Drawing::Point(12, 0);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(62, 56);
			this->pictureBox6->TabIndex = 15;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &StudentsList::pictureBox6_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(80, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 23);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Load students from file";
			// 
			// InsertPanel
			// 
			this->InsertPanel->Controls->Add(this->pictureBox4);
			this->InsertPanel->Controls->Add(this->label2);
			this->InsertPanel->Location = System::Drawing::Point(0, 318);
			this->InsertPanel->Name = L"InsertPanel";
			this->InsertPanel->Size = System::Drawing::Size(308, 64);
			this->InsertPanel->TabIndex = 26;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(80, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 23);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Insert new sudent";
			// 
			// DeletePanel
			// 
			this->DeletePanel->Controls->Add(this->pictureBox2);
			this->DeletePanel->Controls->Add(this->label3);
			this->DeletePanel->Location = System::Drawing::Point(0, 388);
			this->DeletePanel->Name = L"DeletePanel";
			this->DeletePanel->Size = System::Drawing::Size(308, 64);
			this->DeletePanel->TabIndex = 25;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(80, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(204, 23);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Delete students without 5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(-19, 201);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(416, 17);
			this->label6->TabIndex = 22;
			this->label6->Text = L"___________________________________________________";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(34, 163);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(126, 27);
			this->label5->TabIndex = 21;
			this->label5->Text = L"StudentsList";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(12, 12);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(161, 148);
			this->pictureBox7->TabIndex = 20;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(175)));
			this->pictureBox9->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.ErrorImage")));
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.InitialImage")));
			this->pictureBox9->Location = System::Drawing::Point(939, 528);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(62, 56);
			this->pictureBox9->TabIndex = 17;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Visible = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &StudentsList::pictureBox9_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(80, 19);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 23);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Filter";
			// 
			// StudentsList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(175)));
			this->ClientSize = System::Drawing::Size(1119, 693);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->Panel1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox5);
			this->Name = L"StudentsList";
			this->Text = L" ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->Panel1->ResumeLayout(false);
			this->Panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ExitPanel->ResumeLayout(false);
			this->ExitPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->FilterPanel->ResumeLayout(false);
			this->FilterPanel->PerformLayout();
			this->OrderPanel->ResumeLayout(false);
			this->OrderPanel->PerformLayout();
			this->LoadPanel->ResumeLayout(false);
			this->LoadPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->InsertPanel->ResumeLayout(false);
			this->InsertPanel->PerformLayout();
			this->DeletePanel->ResumeLayout(false);
			this->DeletePanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		void clearPanel() {

			LastNameTextBox->Clear();
			FirstNameTextBox2->Clear();
			MathComboBox->SelectedIndex = -1;
			HistoryComboBox->SelectedIndex = -1;
			BiologyComboBox->SelectedIndex = -1;
		}
	private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
		//INSERT PANEL 
		InsertPanel->BackColor =
			System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)));
		pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
			static_cast<System::Int32>(static_cast<System::Byte>(156)),
			static_cast<System::Int32>(static_cast<System::Byte>(137)));




		Panel1->Visible = false;
		pictureBox5->Visible = false;
		pictureBox9->Visible = false;
		
		struct SStudent student = {
			"",
			"",
			Convert::ToInt64(MathComboBox->Text),
			Convert::ToInt64(HistoryComboBox->Text),
			Convert::ToInt64(BiologyComboBox->Text) };

		toCharArray(student.cFirstName, FirstNameTextBox2->Text);
		toCharArray(student.cLastName, LastNameTextBox->Text);
		//student.sBirthday = dateTimePicker1->Text;
		toTmStruct(student.sBirthday, dateTimePicker1->Value);

		student.fMarksAvg = (student.nMarks[0]+ student.nMarks[1] +student.nMarks[2]) / 3.0;

		OrderByBirthdayAscending();
		InsertStudent(student);

		PrintTableForms(dataGridView1, ignore);
		Panel1->Visible = false;
		pictureBox5->Visible = false;
		pictureBox9->Visible = false;
		clearPanel();
	}
			 //load from file
private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
	//PANEL COLOR CHANGE LOAD
	LoadPanel->BackColor =
		System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
			static_cast<System::Int32>(static_cast<System::Byte>(168)),
			static_cast<System::Int32>(static_cast<System::Byte>(148)));
	pictureBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
		static_cast<System::Int32>(static_cast<System::Byte>(168)),
		static_cast<System::Int32>(static_cast<System::Byte>(148)));
	//INSERT PANEL 
	InsertPanel->BackColor =
		System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
			static_cast<System::Int32>(static_cast<System::Byte>(156)),
			static_cast<System::Int32>(static_cast<System::Byte>(137)));
	pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
		static_cast<System::Int32>(static_cast<System::Byte>(156)),
		static_cast<System::Int32>(static_cast<System::Byte>(137)));
	//DELETE PANEL
	DeletePanel->BackColor =
		System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
			static_cast<System::Int32>(static_cast<System::Byte>(156)),
			static_cast<System::Int32>(static_cast<System::Byte>(137)));
	pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
		static_cast<System::Int32>(static_cast<System::Byte>(156)),
		static_cast<System::Int32>(static_cast<System::Byte>(137)));
	// OREDER PANEL
	OrderPanel->BackColor =
		System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
			static_cast<System::Int32>(static_cast<System::Byte>(156)),
			static_cast<System::Int32>(static_cast<System::Byte>(137)));
	pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
		static_cast<System::Int32>(static_cast<System::Byte>(156)),
		static_cast<System::Int32>(static_cast<System::Byte>(137)));



	Panel1->Visible = false;
	pictureBox5->Visible = false;
	pictureBox9->Visible = false;
	
	ReadStudentsFromFile();
	DeleteStudentWithout5;
	//dataGridView1->RowCount = GetStudentsCount();
	PrintTableForms(dataGridView1, ignore);
}
		 //insert
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
	//LOAD PANEL
	LoadPanel->BackColor =
		System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
			static_cast<System::Int32>(static_cast<System::Byte>(156)),
			static_cast<System::Int32>(static_cast<System::Byte>(137)));
	pictureBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
		static_cast<System::Int32>(static_cast<System::Byte>(156)),
		static_cast<System::Int32>(static_cast<System::Byte>(137)));
	//INSERT PANEL
	InsertPanel->BackColor =
		System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
			static_cast<System::Int32>(static_cast<System::Byte>(168)),
			static_cast<System::Int32>(static_cast<System::Byte>(148)));
	pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
		static_cast<System::Int32>(static_cast<System::Byte>(168)),
		static_cast<System::Int32>(static_cast<System::Byte>(148)));
	//DELETE PANEL
	DeletePanel->BackColor =
		System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
			static_cast<System::Int32>(static_cast<System::Byte>(156)),
			static_cast<System::Int32>(static_cast<System::Byte>(137)));
	pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
		static_cast<System::Int32>(static_cast<System::Byte>(156)),
		static_cast<System::Int32>(static_cast<System::Byte>(137)));
	// OREDER PANEL
	OrderPanel->BackColor =
		System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
			static_cast<System::Int32>(static_cast<System::Byte>(156)),
			static_cast<System::Int32>(static_cast<System::Byte>(137)));
	pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
		static_cast<System::Int32>(static_cast<System::Byte>(156)),
		static_cast<System::Int32>(static_cast<System::Byte>(137)));


	Panel1->Visible = true;
	pictureBox5->Visible = true;
	pictureBox9->Visible = true;

}

		 //delete
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	// delete panel
	DeletePanel->BackColor =
		System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
			static_cast<System::Int32>(static_cast<System::Byte>(168)),
			static_cast<System::Int32>(static_cast<System::Byte>(148)));
	pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
		static_cast<System::Int32>(static_cast<System::Byte>(168)),
		static_cast<System::Int32>(static_cast<System::Byte>(148)));
	//LOAD PANEL
	LoadPanel->BackColor =
		System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
			static_cast<System::Int32>(static_cast<System::Byte>(156)),
			static_cast<System::Int32>(static_cast<System::Byte>(137)));
	pictureBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
		static_cast<System::Int32>(static_cast<System::Byte>(156)),
		static_cast<System::Int32>(static_cast<System::Byte>(137)));
	//INSERT PANEL 
	InsertPanel->BackColor =
		System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
			static_cast<System::Int32>(static_cast<System::Byte>(156)),
			static_cast<System::Int32>(static_cast<System::Byte>(137)));
	pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
		static_cast<System::Int32>(static_cast<System::Byte>(156)),
		static_cast<System::Int32>(static_cast<System::Byte>(137)));
// OREDER PANEL
	OrderPanel->BackColor =
		System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
			static_cast<System::Int32>(static_cast<System::Byte>(156)),
			static_cast<System::Int32>(static_cast<System::Byte>(137)));
	pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
		static_cast<System::Int32>(static_cast<System::Byte>(156)),
		static_cast<System::Int32>(static_cast<System::Byte>(137)));


	Panel1->Visible = false;
	pictureBox5->Visible = false;
	pictureBox9->Visible = false;
	
	DeleteStudentWithout5();
	PrintTableForms(dataGridView1, ignore);
}

		 //sort
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	//ORDER PANEL 
	OrderPanel->BackColor =
		System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
			static_cast<System::Int32>(static_cast<System::Byte>(168)),
			static_cast<System::Int32>(static_cast<System::Byte>(148)));
	pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
		static_cast<System::Int32>(static_cast<System::Byte>(168)),
		static_cast<System::Int32>(static_cast<System::Byte>(148)));
	//LOAD PANEL
	LoadPanel->BackColor =
		System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
			static_cast<System::Int32>(static_cast<System::Byte>(156)),
			static_cast<System::Int32>(static_cast<System::Byte>(137)));
	pictureBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
		static_cast<System::Int32>(static_cast<System::Byte>(156)),
		static_cast<System::Int32>(static_cast<System::Byte>(137)));
	//INSERT PANEL 
	InsertPanel->BackColor =
		System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
			static_cast<System::Int32>(static_cast<System::Byte>(156)),
			static_cast<System::Int32>(static_cast<System::Byte>(137)));
	pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
		static_cast<System::Int32>(static_cast<System::Byte>(156)),
		static_cast<System::Int32>(static_cast<System::Byte>(137)));
	//DELETE PANEL
	DeletePanel->BackColor =
		System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
			static_cast<System::Int32>(static_cast<System::Byte>(156)),
			static_cast<System::Int32>(static_cast<System::Byte>(137)));
	pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
		static_cast<System::Int32>(static_cast<System::Byte>(156)),
		static_cast<System::Int32>(static_cast<System::Byte>(137)));



	Panel1->Visible = false;
	pictureBox5->Visible = false;
	pictureBox9->Visible = false;
	
	OrderByBirthdayAscending();
	PrintTableForms(dataGridView1, ignore);

}
		 int ignore = 1;
	

private: System::Void pictureBox8_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {

	//INSERT PANEL 
	InsertPanel->BackColor =
		System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
			static_cast<System::Int32>(static_cast<System::Byte>(156)),
			static_cast<System::Int32>(static_cast<System::Byte>(137)));
	pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
		static_cast<System::Int32>(static_cast<System::Byte>(156)),
		static_cast<System::Int32>(static_cast<System::Byte>(137)));


	Panel1->Visible = false;
	pictureBox5->Visible = false;
	pictureBox9->Visible = false;
	clearPanel();
}

private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ignore) {
		//FILTER PANEL 
		FilterPanel->BackColor =
			System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(168)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)));
		pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)),
			static_cast<System::Int32>(static_cast<System::Byte>(168)),
			static_cast<System::Int32>(static_cast<System::Byte>(148)));
	}if (!ignore) {
		//FILTER PANEL 
		FilterPanel->BackColor =
			System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)));
		pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
			static_cast<System::Int32>(static_cast<System::Byte>(156)),
			static_cast<System::Int32>(static_cast<System::Byte>(137)));
	}
	
	//LOAD PANEL
	LoadPanel->BackColor =
		System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
			static_cast<System::Int32>(static_cast<System::Byte>(156)),
			static_cast<System::Int32>(static_cast<System::Byte>(137)));
	pictureBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
		static_cast<System::Int32>(static_cast<System::Byte>(156)),
		static_cast<System::Int32>(static_cast<System::Byte>(137)));
	//INSERT PANEL 
	InsertPanel->BackColor =
		System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
			static_cast<System::Int32>(static_cast<System::Byte>(156)),
			static_cast<System::Int32>(static_cast<System::Byte>(137)));
	pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
		static_cast<System::Int32>(static_cast<System::Byte>(156)),
		static_cast<System::Int32>(static_cast<System::Byte>(137)));
	//DELETE PANEL
	DeletePanel->BackColor =
		System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
			static_cast<System::Int32>(static_cast<System::Byte>(156)),
			static_cast<System::Int32>(static_cast<System::Byte>(137)));
	pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
		static_cast<System::Int32>(static_cast<System::Byte>(156)),
		static_cast<System::Int32>(static_cast<System::Byte>(137)));
	// OREDER PANEL
	OrderPanel->BackColor =
		System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
			static_cast<System::Int32>(static_cast<System::Byte>(156)),
			static_cast<System::Int32>(static_cast<System::Byte>(137)));
	pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
		static_cast<System::Int32>(static_cast<System::Byte>(156)),
		static_cast<System::Int32>(static_cast<System::Byte>(137)));

	Panel1->Visible = false;
	pictureBox5->Visible = false;
	pictureBox9->Visible = false;

	ignore = 1 - ignore;
	PrintTableForms(dataGridView1, ignore);
}
};
}
