#pragma once

namespace OSProject {

#include"main window.h"

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm1 : public System::Windows::Forms::Form
	{

		int round_robin_time;
		bool final_check;
	public:
		MyForm1(void)
		{
			InitializeComponent();
			final_check = false;
		}

	protected:
		
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;

	private:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(169, 77);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 59);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Location = System::Drawing::Point(39, 107);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(116, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(36, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Enter time quantum";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(315, 213);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm1";
			this->Text = L"Entry";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: bool get_final_checks() {
		return final_check;
	}

	public:int get_rrtime() { return round_robin_time; }

	// main screen
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	// start click
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			System::String^ inputText = MyForm1::textBox1->Text;
			round_robin_time = System::Int32::Parse(inputText);
			if (round_robin_time <= 0)
			{
				throw gcnew System::ArgumentException("Value must be larger than 0.");
			}
			final_check = true;
			Close();

		}
		catch (System::FormatException^)
		{
			System::Windows::Forms::MessageBox::Show("Invalid input format. Please enter a valid integer.", "Format Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (System::OverflowException^)
		{
			System::Windows::Forms::MessageBox::Show("The entered value is too large or too small for an integer.", "Overflow Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (System::ArgumentException^ ex)
		{
			System::Windows::Forms::MessageBox::Show(ex->Message, "Invalid Value", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	};
}
