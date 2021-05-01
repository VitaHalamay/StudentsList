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




	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;

	private: System::Windows::Forms::Button^  AddNewStudentButton;
	private: System::Windows::Forms::FlowLayoutPanel^  Panel1;

	private: System::Windows::Forms::TextBox^  FirstNameTextBox;
	private: System::Windows::Forms::TextBox^  LastNameTextBox;
	private: System::Windows::Forms::TextBox^  BirthdayTextBox;
	private: System::Windows::Forms::TextBox^  MathTextBox;
	private: System::Windows::Forms::TextBox^  HistoryTextBox;
	private: System::Windows::Forms::TextBox^  BiologyTextBox;



















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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->AddNewStudentButton = (gcnew System::Windows::Forms::Button());
			this->Panel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->FirstNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->LastNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->BirthdayTextBox = (gcnew System::Windows::Forms::TextBox());
			this->MathTextBox = (gcnew System::Windows::Forms::TextBox());
			this->HistoryTextBox = (gcnew System::Windows::Forms::TextBox());
			this->BiologyTextBox = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->Panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::HighlightText;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column5, this->Column6, this->Column3, this->Column2, this->Column4, this->Column7
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveBorder;
			this->dataGridView1->Location = System::Drawing::Point(402, 34);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(591, 444);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->FillWeight = 27;
			this->Column1->HeaderText = L"¹";
			this->Column1->Name = L"Column1";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"First Name";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Last Name";
			this->Column6->Name = L"Column6";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Birthday";
			this->Column3->Name = L"Column3";
			// 
			// Column2
			// 
			this->Column2->FillWeight = 80;
			this->Column2->HeaderText = L"Math";
			this->Column2->Name = L"Column2";
			// 
			// Column4
			// 
			this->Column4->FillWeight = 80;
			this->Column4->HeaderText = L"History";
			this->Column4->Name = L"Column4";
			// 
			// Column7
			// 
			this->Column7->FillWeight = 80;
			this->Column7->HeaderText = L"Biology";
			this->Column7->Name = L"Column7";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(63, 69);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StudentsList::button1_Click);
			// 
			// AddNewStudentButton
			// 
			this->AddNewStudentButton->Location = System::Drawing::Point(63, 115);
			this->AddNewStudentButton->Name = L"AddNewStudentButton";
			this->AddNewStudentButton->Size = System::Drawing::Size(124, 23);
			this->AddNewStudentButton->TabIndex = 2;
			this->AddNewStudentButton->Text = L"AddNewStudent";
			this->AddNewStudentButton->UseVisualStyleBackColor = true;
			this->AddNewStudentButton->Click += gcnew System::EventHandler(this, &StudentsList::AddNewStudentButton_Click);
			// 
			// Panel1
			// 
			this->Panel1->Controls->Add(this->FirstNameTextBox);
			this->Panel1->Controls->Add(this->LastNameTextBox);
			this->Panel1->Controls->Add(this->BirthdayTextBox);
			this->Panel1->Controls->Add(this->MathTextBox);
			this->Panel1->Controls->Add(this->HistoryTextBox);
			this->Panel1->Controls->Add(this->BiologyTextBox);
			this->Panel1->Location = System::Drawing::Point(36, 506);
			this->Panel1->Name = L"Panel1";
			this->Panel1->Size = System::Drawing::Size(522, 69);
			this->Panel1->TabIndex = 3;
			// 
			// FirstNameTextBox
			// 
			this->FirstNameTextBox->Location = System::Drawing::Point(3, 3);
			this->FirstNameTextBox->Name = L"FirstNameTextBox";
			this->FirstNameTextBox->Size = System::Drawing::Size(81, 22);
			this->FirstNameTextBox->TabIndex = 0;
			// 
			// LastNameTextBox
			// 
			this->LastNameTextBox->Location = System::Drawing::Point(90, 3);
			this->LastNameTextBox->Name = L"LastNameTextBox";
			this->LastNameTextBox->Size = System::Drawing::Size(81, 22);
			this->LastNameTextBox->TabIndex = 1;
			// 
			// BirthdayTextBox
			// 
			this->BirthdayTextBox->Location = System::Drawing::Point(177, 3);
			this->BirthdayTextBox->Name = L"BirthdayTextBox";
			this->BirthdayTextBox->Size = System::Drawing::Size(81, 22);
			this->BirthdayTextBox->TabIndex = 2;
			// 
			// MathTextBox
			// 
			this->MathTextBox->Location = System::Drawing::Point(264, 3);
			this->MathTextBox->Name = L"MathTextBox";
			this->MathTextBox->Size = System::Drawing::Size(81, 22);
			this->MathTextBox->TabIndex = 3;
			// 
			// HistoryTextBox
			// 
			this->HistoryTextBox->Location = System::Drawing::Point(351, 3);
			this->HistoryTextBox->Name = L"HistoryTextBox";
			this->HistoryTextBox->Size = System::Drawing::Size(81, 22);
			this->HistoryTextBox->TabIndex = 4;
			// 
			// BiologyTextBox
			// 
			this->BiologyTextBox->Location = System::Drawing::Point(438, 3);
			this->BiologyTextBox->Name = L"BiologyTextBox";
			this->BiologyTextBox->Size = System::Drawing::Size(81, 22);
			this->BiologyTextBox->TabIndex = 5;
			// 
			// StudentsList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1056, 628);
			this->Controls->Add(this->Panel1);
			this->Controls->Add(this->AddNewStudentButton);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"StudentsList";
			this->Text = L"StudentsList";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->Panel1->ResumeLayout(false);
			this->Panel1->PerformLayout();
			this->ResumeLayout(false);
			//this->Panel1->Visible = false;
		}
#pragma endregion
		
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		ReadStudentsFromFile();
		DeleteStudentWithout5;
		//dataGridView1->RowCount = GetStudentsCount();
		PrintTableForms(dataGridView1);

	}



	private: System::Void AddNewStudentButton_Click(System::Object^  sender, System::EventArgs^  e) {
		///this->Panel1->Visible = true;
		//String^ s = FirstNameTextBox->Text;

		struct SStudent student1 = {"Mike", //(FirstNameTextBox->Text), 
			"Bin",//Convert::ToChar(LastNameTextBox->Text),
			Convert::ToInt64(MathTextBox->Text),
			Convert::ToInt64(HistoryTextBox->Text), 
			Convert::ToInt64(BiologyTextBox->Text) };
		//FirstNameTextBox->
		
		//student1.cFirstName = s;//FirstNameTextBox->Text;
		student1.sBirthday.tm_mday = 1;
		student1.sBirthday.tm_mon = 5;
		student1.sBirthday.tm_year = 2003;
		InsertStudent(student1);

		PrintTableForms(dataGridView1);
	}

};
}
