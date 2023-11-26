#pragma once

namespace OSProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	public ref class createprocess : public System::Windows::Forms::Form
	{
	public:

		bool final_check;

		createprocess(void)
		{
			InitializeComponent();
			final_check = false;
		}

	protected:
		
		~createprocess()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ p_name;
	private: System::Windows::Forms::TextBox^ p_bt;
	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ p_pr;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ p_ir1;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ p_ir2;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ p_ir3;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ p_ir4;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ p_ir5;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;

	private:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->p_name = (gcnew System::Windows::Forms::TextBox());
			this->p_bt = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->p_pr = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->p_ir1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->p_ir2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->p_ir3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->p_ir4 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->p_ir5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name";
			// 
			// p_name
			// 
			this->p_name->Location = System::Drawing::Point(101, 33);
			this->p_name->Name = L"p_name";
			this->p_name->Size = System::Drawing::Size(128, 20);
			this->p_name->TabIndex = 1;
			// 
			// p_bt
			// 
			this->p_bt->Location = System::Drawing::Point(101, 59);
			this->p_bt->Name = L"p_bt";
			this->p_bt->Size = System::Drawing::Size(128, 20);
			this->p_bt->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Burst time";
			// 
			// p_pr
			// 
			this->p_pr->Location = System::Drawing::Point(101, 85);
			this->p_pr->Name = L"p_pr";
			this->p_pr->Size = System::Drawing::Size(128, 20);
			this->p_pr->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Priority";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(182, 18);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Instances req by resource:";
			// 
			// p_ir1
			// 
			this->p_ir1->Location = System::Drawing::Point(34, 154);
			this->p_ir1->Name = L"p_ir1";
			this->p_ir1->Size = System::Drawing::Size(41, 20);
			this->p_ir1->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 156);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 18);
			this->label5->TabIndex = 7;
			this->label5->Text = L"1";
			// 
			// p_ir2
			// 
			this->p_ir2->Location = System::Drawing::Point(34, 180);
			this->p_ir2->Name = L"p_ir2";
			this->p_ir2->Size = System::Drawing::Size(41, 20);
			this->p_ir2->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 182);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 18);
			this->label6->TabIndex = 9;
			this->label6->Text = L"2";
			// 
			// p_ir3
			// 
			this->p_ir3->Location = System::Drawing::Point(34, 206);
			this->p_ir3->Name = L"p_ir3";
			this->p_ir3->Size = System::Drawing::Size(41, 20);
			this->p_ir3->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(12, 208);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(16, 18);
			this->label7->TabIndex = 11;
			this->label7->Text = L"3";
			// 
			// p_ir4
			// 
			this->p_ir4->Location = System::Drawing::Point(147, 154);
			this->p_ir4->Name = L"p_ir4";
			this->p_ir4->Size = System::Drawing::Size(38, 20);
			this->p_ir4->TabIndex = 14;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(125, 156);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(16, 18);
			this->label8->TabIndex = 13;
			this->label8->Text = L"4";
			// 
			// p_ir5
			// 
			this->p_ir5->Location = System::Drawing::Point(147, 180);
			this->p_ir5->Name = L"p_ir5";
			this->p_ir5->Size = System::Drawing::Size(38, 20);
			this->p_ir5->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(125, 182);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(16, 18);
			this->label9->TabIndex = 15;
			this->label9->Text = L"5";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(15, 248);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(60, 17);
			this->checkBox1->TabIndex = 17;
			this->checkBox1->Text = L"I/O req";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(128, 248);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 46);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Create";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &createprocess::button1_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(81, 161);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 13);
			this->label10->TabIndex = 19;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(81, 187);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 13);
			this->label11->TabIndex = 20;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(81, 213);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 13);
			this->label12->TabIndex = 21;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(191, 161);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 13);
			this->label13->TabIndex = 22;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(188, 187);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 13);
			this->label14->TabIndex = 23;
			// 
			// createprocess
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(241, 306);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->p_ir5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->p_ir4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->p_ir3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->p_ir2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->p_ir1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->p_pr);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->p_bt);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->p_name);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"createprocess";
			this->Text = L"New process";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: String^ get_name() {
			return p_name->Text;
		}
		public: String^ get_BT() {
			return p_bt->Text;
		}
		public: String^ get_Pr() {
			return p_pr->Text;
		}
		public: bool^ get_io() {
			return checkBox1->Checked;
		}
		public: bool get_final_checks() {
			return final_check;
		}

		public: String^ get_ir1() { return p_ir1->Text; }
		public: String^ get_ir2() { return p_ir2->Text; }
		public: String^ get_ir3() { return p_ir3->Text; }
		public: String^ get_ir4() { return p_ir4->Text; }
		public: String^ get_ir5() { return p_ir5->Text; }

	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		array<System::Windows::Forms::TextBox^>^ textBoxes = { p_name,p_bt,p_pr,p_ir1,p_ir2,p_ir3,p_ir4,p_ir5 };
		bool hasEmptyTextBox = false; bool incorrectDatatype = false;
		for (int i = 0; i < textBoxes->Length; i++)
		{
			String^ data_entered = textBoxes[i]->Text;
			if (data_entered->Trim() == "")
			{
				hasEmptyTextBox = true;
				break;
			}
			else
			{
				if (i == 0 && !String::typeid->IsAssignableFrom(data_entered->GetType()))
				{
					MessageBox::Show("Invalid data type for Process name, Expected string.", "Data Type Mismatch", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					incorrectDatatype = true;
				}
				else if (i > 0)
				{
					int parsedValue;
					if (!Int32::TryParse(data_entered, parsedValue))
					{
						MessageBox::Show("Invalid data type for " + textBoxes[i]->Name + " Expected int.", "Data Type Mismatch", MessageBoxButtons::OK, MessageBoxIcon::Warning);
						incorrectDatatype = true;
					}
				}
			}
		}
		// Check if any text box is empty
		if (hasEmptyTextBox)
		{
			MessageBox::Show("Please fill in all the required fields.", "Missing Information", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else if (!incorrectDatatype)
		{
			if (Int32::Parse(textBoxes[2]->Text) < 0) {
				MessageBox::Show("Prioriy level should be greater than zero", "Incorrect input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else {
				final_check = true;
				this->Close();
			}
		}
	
}

	public: void set_instances(String^ i_r1, String^ i_r2, String^ i_r3, String^ i_r4, String^ i_r5 ) {
	//array<System::Windows::Forms::Label^>^ labels = {label10,label11,label12,label13,label14};
	label10->Text = "/" + i_r1;
	label11->Text = "/" + i_r2;
	label12->Text = "/" + i_r3;
	label13->Text = "/" + i_r4;
	label14->Text = "/" + i_r5;
}

	};
}
