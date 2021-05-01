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





	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::ComboBox^  MathComboBox;
	private: System::Windows::Forms::ComboBox^  HistoryComboBox;
	private: System::Windows::Forms::ComboBox^  BiologyComboBox;























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
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->MathComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->HistoryComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->BiologyComboBox = (gcnew System::Windows::Forms::ComboBox());
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
			this->Panel1->Controls->Add(this->dateTimePicker1);
			this->Panel1->Controls->Add(this->MathComboBox);
			this->Panel1->Controls->Add(this->HistoryComboBox);
			this->Panel1->Controls->Add(this->BiologyComboBox);
			this->Panel1->Location = System::Drawing::Point(28, 530);
			this->Panel1->Name = L"Panel1";
			this->Panel1->Size = System::Drawing::Size(599, 69);
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
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(177, 3);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 6;
			// 
			// MathComboBox
			// 
			this->MathComboBox->FormattingEnabled = true;
			this->MathComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"0", L"1", L"2", L"3", L"4", L"5" });
			this->MathComboBox->Location = System::Drawing::Point(383, 3);
			this->MathComboBox->Name = L"MathComboBox";
			this->MathComboBox->Size = System::Drawing::Size(121, 24);
			this->MathComboBox->TabIndex = 7;
			// 
			// HistoryComboBox
			// 
			this->HistoryComboBox->FormattingEnabled = true;
			this->HistoryComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"0", L"1", L"2", L"3", L"4", L"5" });
			this->HistoryComboBox->Location = System::Drawing::Point(3, 33);
			this->HistoryComboBox->Name = L"HistoryComboBox";
			this->HistoryComboBox->Size = System::Drawing::Size(121, 24);
			this->HistoryComboBox->TabIndex = 8;
			// 
			// BiologyComboBox
			// 
			this->BiologyComboBox->FormattingEnabled = true;
			this->BiologyComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"0", L"1", L"2", L"3", L"4", L"5" });
			this->BiologyComboBox->Location = System::Drawing::Point(130, 33);
			this->BiologyComboBox->Name = L"BiologyComboBox";
			this->BiologyComboBox->Size = System::Drawing::Size(121, 24);
			this->BiologyComboBox->TabIndex = 9;
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

		}
#pragma endregion
		
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		ReadStudentsFromFile();
		DeleteStudentWithout5;
		//dataGridView1->RowCount = GetStudentsCount();
		PrintTableForms(dataGridView1);

	}



	private: System::Void AddNewStudentButton_Click(System::Object^  sender, System::EventArgs^  e) {
		
		
		struct SStudent student = { 
			"",
			"",
			Convert::ToInt64(MathComboBox->Text),
			Convert::ToInt64(HistoryComboBox->Text), 
			Convert::ToInt64(BiologyComboBox->Text) };
		
		toCharArray(student.cFirstName, FirstNameTextBox->Text);
		toCharArray(student.cLastName, LastNameTextBox->Text);
		//student.sBirthday = dateTimePicker1->Text;
		toTmStruct(student.sBirthday, dateTimePicker1->Value);
		//student.sBirthday.tm_mday = 1;
		//student.sBirthday.tm_mon = 5;
		//student.sBirthday.tm_year = 2003;
		InsertStudent(student);

		PrintTableForms(dataGridView1);
	}

};
}
