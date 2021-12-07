#pragma once
#include "Matrix.h"
#include <Windows.h>

namespace Mtrx {

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(129, 108);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(425, 231);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->Format = L"N2";
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView2->Location = System::Drawing::Point(772, 108);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(436, 231);
			this->dataGridView2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(277, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 32);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Matrix A";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(942, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 32);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Matrix B";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(275, 356);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 22);
			this->numericUpDown1->TabIndex = 4;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(447, 533);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(439, 262);
			this->dataGridView3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(574, 472);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(179, 32);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Result matrix";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(602, 202);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 49);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"A+B", L"A-B", L"A*B", L"Transponate A", L"Inverse A",
					L"Gauss method for A", L"A+number", L"A-number", L"A*number", L"A/number"
			});
			this->comboBox1->Location = System::Drawing::Point(602, 141);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(120, 24);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(275, 396);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 22);
			this->numericUpDown2->TabIndex = 9;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown2_ValueChanged);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(940, 356);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 22);
			this->numericUpDown3->TabIndex = 10;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown3_ValueChanged);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(940, 396);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(120, 22);
			this->numericUpDown4->TabIndex = 11;
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown4_ValueChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(197, 356);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 16);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Rows";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(197, 396);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 16);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Columns";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(859, 358);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 16);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Rows";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(859, 401);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 16);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Columns";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(602, 272);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 47);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Swap";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(962, 561);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(268, 84);
			this->button4->TabIndex = 19;
			this->button4->Text = L"Paste to A\r\n";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(962, 684);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(268, 89);
			this->button5->TabIndex = 20;
			this->button5->Text = L"Paste to B";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(870, 202);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(189, 22);
			this->textBox1->TabIndex = 21;
			this->textBox1->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(899, 141);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 32);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Number";
			this->label4->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1378, 889);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

		   int ARows = 0;
		   int AColumns = 0;
		   int BRows = 0;
		   int BColumns = 0;


	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

		if (numericUpDown1->Value > 0)
		{
			ARows = int(numericUpDown1->Value);
			dataGridView1->RowCount = ARows;

		}
		else
		{
			MessageBox::Show("Задайте розмір масиву!");
		}
	}
	private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (numericUpDown2->Value > 0)
		{
			AColumns = int(numericUpDown2->Value);
			dataGridView1->ColumnCount = AColumns;
		}
		else
		{
			MessageBox::Show("Задайте розмір масиву!");
		}
	}
	private: System::Void numericUpDown3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (numericUpDown3->Value > 0)
		{
			BRows = int(numericUpDown3->Value);
			dataGridView2->RowCount = BRows;

		}
		else
		{
			MessageBox::Show("Задайте розмір масиву!");
		}
	}
	private: System::Void numericUpDown4_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (numericUpDown4->Value > 0)
		{
			BColumns = int(numericUpDown4->Value);
			dataGridView2->ColumnCount = BColumns;

		}
		else
		{
			MessageBox::Show("Задайте розмір масиву!");
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (ARows > 0 && AColumns > 0) {
				Matrix A = Matrix(ARows, AColumns);
				Matrix B = Matrix(BRows, BColumns);
				double number;
				for (int i = 0; i < ARows; i++)
				{
					for (int j = 0; j < AColumns; j++)
					{
						A[i][j] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value);
					}
				}

				for (size_t i = 0; i < BRows; i++)
				{
					for (size_t j = 0; j < BColumns; j++)
					{
						B[i][j] = Convert::ToDouble(dataGridView2->Rows[i]->Cells[j]->Value);
					}
				}

				int ch = comboBox1->SelectedIndex;

				if (ch != -1) {

					Matrix res;

					switch (comboBox1->SelectedIndex) {
					case 0:
						if (BRows > 0 && BColumns > 0) {
							res = A + B;
						}
						else {
							MessageBox::Show("B size is zero");
							return;
						}
						break;
					case 1:
						if (BRows > 0 && BColumns > 0) {
							res = A - B;
						}
						else {
							MessageBox::Show("B size is zero");
							return;
						}
						break;
					case 2:
						if (BRows > 0 && BColumns > 0) {
							res = A * B;
						}
						else {
							MessageBox::Show("B size is zero");
							return;
						}
						break;
					case 3:
						res = A.transponate();
						break;
					case 4:
						res = A.inverse();
						break;
					case 5:
						res = A.Gauss();
						break;
					case 6: 
						if (String::IsNullOrEmpty(textBox1->Text)) {
							MessageBox::Show("Enter number!");
							return;
						}
						number = Convert::ToDouble(textBox1->Text);
						res = A + number;
						break;
					case 7:
						if (String::IsNullOrEmpty(textBox1->Text)) {
							MessageBox::Show("Enter number!");
							return;
						}
						number = Convert::ToDouble(textBox1->Text);
						res = A - number;
						break;
					case 8:
						if (String::IsNullOrEmpty(textBox1->Text)) {
							MessageBox::Show("Enter number!");
							return;
						}
						number = Convert::ToDouble(textBox1->Text);
						res = A * number;
						break;
					case 9:
						if (String::IsNullOrEmpty(textBox1->Text)) {
							MessageBox::Show("Enter number!");
							return;
						}
						number = Convert::ToDouble(textBox1->Text);
						res = A / number;
						break;
					}



					dataGridView3->RowCount = res.getRows();
					dataGridView3->ColumnCount = res.getColumns();

					for (int i = 0; i < res.getRows(); i++)
					{
						for (int j = 0; j < res.getColumns(); j++)
						{
							dataGridView3->Rows[i]->Cells[j]->Value = Convert::ToString(res[i][j]);
						}
					}
				}
				else {
					MessageBox::Show("Choose operation!");
				}
			}
			else {
				MessageBox::Show("Enter array size!");
			}
		}
		catch (const char* exp) {
			String^ s = gcnew String(exp);
			MessageBox::Show(s, "Exception");
		}

	}


	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		int ch = comboBox1->SelectedIndex;
		if (ch > 5) {
			dataGridView2->Visible = false;
			textBox1->Visible = true;
			label2->Visible = false;
			label7->Visible = false; 
			label8->Visible = false;
			numericUpDown3->Visible = false;
			numericUpDown4->Visible = false;
			label4->Visible = true;
		}
		else {
			dataGridView2->Visible = true;
			textBox1->Visible = false;
			label2->Visible = true;
			label7->Visible = true;
			label8->Visible = true;
			numericUpDown3->Visible = true;
			numericUpDown4->Visible = true;
			label4->Visible = false;
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ARows > 0 && AColumns > 0 && BRows > 0 && BColumns > 0) {
			Matrix A = Matrix(ARows, AColumns);
			Matrix B = Matrix(BRows, BColumns);
			for (int i = 0; i < ARows; i++)
			{
				for (int j = 0; j < AColumns; j++)
				{
					A[i][j] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value);
				}
			}

			for (size_t i = 0; i < BRows; i++)
			{
				for (size_t j = 0; j < BColumns; j++)
				{
					B[i][j] = Convert::ToDouble(dataGridView2->Rows[i]->Cells[j]->Value);
				}
			}
			dataGridView2->ColumnCount = AColumns;
			dataGridView2->RowCount = ARows;
			dataGridView1->ColumnCount = BColumns;
			dataGridView1->RowCount = BRows;
			numericUpDown1->Value = BRows;
			numericUpDown2->Value = BColumns;
			numericUpDown3->Value = ARows;
			numericUpDown4->Value = AColumns;

			for (int i = 0; i < B.getRows(); i++)
			{
				for (int j = 0; j < B.getColumns(); j++)
				{
					dataGridView1->Rows[i]->Cells[j]->Value = Convert::ToString(B[i][j]);
				}
			}

			for (int i = 0; i < A.getRows(); i++)
			{
				for (int j = 0; j < A.getColumns(); j++)
				{
					dataGridView2->Rows[i]->Cells[j]->Value = Convert::ToString(A[i][j]);
				}
			}
		}
		else {
			MessageBox::Show("Size musn't be zero!");
		}
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView3->ColumnCount > 0 && dataGridView3->RowCount > 0) {
		dataGridView1->ColumnCount = dataGridView3->ColumnCount;
		dataGridView1->RowCount = dataGridView3->RowCount;
		numericUpDown1->Value = dataGridView3->RowCount;
		numericUpDown2->Value = dataGridView3->ColumnCount;

		for (int i = 0; i < dataGridView1->RowCount; i++)
		{
			for (int j = 0; j < dataGridView1->ColumnCount; j++)
			{
				dataGridView1->Rows[i]->Cells[j]->Value = dataGridView3->Rows[i]->Cells[j]->Value;
			}
		}

	}
	else {
		MessageBox::Show("Nothing to paste!");
	}

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView3->ColumnCount > 0 && dataGridView3->RowCount > 0) {
		dataGridView2->ColumnCount = dataGridView3->ColumnCount;
		dataGridView2->RowCount = dataGridView3->RowCount;
		numericUpDown3->Value = dataGridView3->RowCount;
		numericUpDown4->Value = dataGridView3->ColumnCount;


		for (int i = 0; i < dataGridView2->RowCount; i++)
		{
			for (int j = 0; j < dataGridView2->ColumnCount; j++)
			{
				dataGridView2->Rows[i]->Cells[j]->Value = dataGridView3->Rows[i]->Cells[j]->Value;
			}
		}

	}
	else {
		MessageBox::Show("Nothing to paste!");
	}
}
};
}
