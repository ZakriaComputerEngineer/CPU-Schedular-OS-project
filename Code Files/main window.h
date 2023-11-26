#pragma once
#include <vcclr.h>
#using <mscorlib.dll>
#include "time entry.h"
#include "create process.h"
#include "Buffer screen.h"
#using <System.dll>
#using <System.Windows.Forms.dll>

namespace OSProject {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Threading;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	

	public ref class MyForm : public System::Windows::Forms::Form
	{

		ref struct process {
			String ^name, ^state;
			int bt, pr, at;
			bool io;
			List<int>^ resources;

			process() {
				state = "";
				name = "";
				bt = 0; pr = 0; //ir1 = 0; ir2 = 0; ir3 = 0; ir4 = 0; ir5 = 0;
				io = false;
				resources = gcnew List<int>();
				for (int i = 0; i < 5; i++)
					resources->Add(0);
				
			}

		public: void operator=(const process ^ operand) {
			name = operand->name;
			bt = operand->bt;
			pr = operand->pr;
			io = operand->io;
			for (int i = 0; i < 5; i++)
				resources[i] = operand->resources[i];
		}
		};

	public:

		static const int number_of_resources = 5; //currently have 5 resource
		int proc_counter, rr_time, choice;
		List<process^>^ proc, ^ ready, ^ job, ^ device;
		List<int>^ insta_avail;
		
		
	private: System::Windows::Forms::Panel^ panel4;
	public:
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ a;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ b;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ d;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ e;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ instances1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ instances2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ instances3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ instances4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ instances5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel7;



	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ p_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ p_time;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ waiting_time;






	private: System::Windows::Forms::DataGridView^ dataGridView1;

	public:

		MyForm(void)
		{
			InitializeComponent();
			proc_counter = 0; choice = 0; rr_time = 0;
			proc = gcnew List<process^>();
			ready = gcnew List<process^>();
			job = gcnew List<process^>();
			device = gcnew List<process^>();
			insta_avail = gcnew List<int>();

			//initializing instances available!
			insta_avail->Add(5);
			insta_avail->Add(7);
			insta_avail->Add(3);
			insta_avail->Add(4);
			insta_avail->Add(5);
		}

	protected:
		
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;

	protected:

	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->a = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->b = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->d = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->e = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->instances1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->instances2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->instances3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->instances4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->instances5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->p_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->p_time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->waiting_time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(10, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(403, 58);
			this->label1->TabIndex = 0;
			this->label1->Text = L"CPU Scheduling";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(849, 584);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// panel7
			// 
			this->panel7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel7->AutoSize = true;
			this->panel7->Controls->Add(this->richTextBox1);
			this->panel7->Controls->Add(this->dataGridView2);
			this->panel7->Location = System::Drawing::Point(552, 5);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(294, 341);
			this->panel7->TabIndex = 9;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(294, 226);
			this->richTextBox1->TabIndex = 7;
			this->richTextBox1->Text = L"";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::Info;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->p_name,
					this->p_time, this->waiting_time
			});
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView2->Location = System::Drawing::Point(0, 232);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->Size = System::Drawing::Size(294, 109);
			this->dataGridView2->TabIndex = 6;
			// 
			// panel6
			// 
			this->panel6->AutoSize = true;
			this->panel6->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel6->Controls->Add(this->label1);
			this->panel6->Controls->Add(this->panel5);
			this->panel6->Location = System::Drawing::Point(3, 5);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(517, 274);
			this->panel6->TabIndex = 9;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->button5);
			this->panel5->Controls->Add(this->button3);
			this->panel5->Controls->Add(this->button2);
			this->panel5->Controls->Add(this->button1);
			this->panel5->Location = System::Drawing::Point(17, 173);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(497, 98);
			this->panel5->TabIndex = 8;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(133, 7);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(107, 84);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Round Robin";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button3->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(387, 7);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 84);
			this->button3->TabIndex = 3;
			this->button3->Text = L"FCFS";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->AutoSize = true;
			this->button2->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(258, 7);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 84);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Priority";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(3, 7);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 84);
			this->button1->TabIndex = 1;
			this->button1->Text = L"SJF";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// panel2
			// 
			this->panel2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(0, 359);
			this->panel2->Name = L"panel2";
			this->panel2->Padding = System::Windows::Forms::Padding(10);
			this->panel2->Size = System::Drawing::Size(849, 225);
			this->panel2->TabIndex = 4;
			// 
			// panel4
			// 
			this->panel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel4->Controls->Add(this->button4);
			this->panel4->Location = System::Drawing::Point(728, 10);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(111, 70);
			this->panel4->TabIndex = 5;
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackColor = System::Drawing::Color::Orange;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(48, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 59);
			this->button4->TabIndex = 3;
			this->button4->Text = L"+";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->dataGridView1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(10, 86);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(829, 129);
			this->panel3->TabIndex = 4;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Info;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->a, this->b,
					this->c, this->d, this->e, this->instances1, this->instances2, this->instances3, this->instances4, this->instances5
			});
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(829, 129);
			this->dataGridView1->TabIndex = 0;
			// 
			// a
			// 
			this->a->HeaderText = L"No.";
			this->a->Name = L"a";
			this->a->ReadOnly = true;
			this->a->Width = 50;
			// 
			// b
			// 
			this->b->HeaderText = L"Name";
			this->b->Name = L"b";
			this->b->ReadOnly = true;
			this->b->Width = 150;
			// 
			// c
			// 
			this->c->HeaderText = L"Burst time";
			this->c->Name = L"c";
			this->c->ReadOnly = true;
			// 
			// d
			// 
			this->d->HeaderText = L"Priority";
			this->d->Name = L"d";
			this->d->ReadOnly = true;
			this->d->Width = 80;
			// 
			// e
			// 
			this->e->HeaderText = L"I / O";
			this->e->Name = L"e";
			this->e->ReadOnly = true;
			// 
			// instances1
			// 
			this->instances1->HeaderText = L"Inst R1";
			this->instances1->Name = L"instances1";
			this->instances1->ReadOnly = true;
			this->instances1->Width = 60;
			// 
			// instances2
			// 
			this->instances2->HeaderText = L"Inst R2";
			this->instances2->Name = L"instances2";
			this->instances2->ReadOnly = true;
			this->instances2->Width = 60;
			// 
			// instances3
			// 
			this->instances3->HeaderText = L"Inst R3";
			this->instances3->Name = L"instances3";
			this->instances3->ReadOnly = true;
			this->instances3->Width = 60;
			// 
			// instances4
			// 
			this->instances4->HeaderText = L"Inst R4";
			this->instances4->Name = L"instances4";
			this->instances4->ReadOnly = true;
			this->instances4->Width = 60;
			// 
			// instances5
			// 
			this->instances5->HeaderText = L"Inst R5";
			this->instances5->Name = L"instances5";
			this->instances5->ReadOnly = true;
			this->instances5->Width = 65;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(13, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(192, 42);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Processes";
			// 
			// p_name
			// 
			this->p_name->HeaderText = L"Process name";
			this->p_name->Name = L"p_name";
			this->p_name->ReadOnly = true;
			// 
			// p_time
			// 
			this->p_time->HeaderText = L"Time";
			this->p_time->Name = L"p_time";
			this->p_time->ReadOnly = true;
			this->p_time->Width = 50;
			// 
			// waiting_time
			// 
			this->waiting_time->HeaderText = L"Waite Time";
			this->waiting_time->Name = L"waiting_time";
			this->waiting_time->ReadOnly = true;
			this->waiting_time->Width = 85;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Lavender;
			this->ClientSize = System::Drawing::Size(849, 584);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"MyForm";
			this->Text = L"OS project";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion

	// SJF
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e);
		
	// Priority
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);

	// FCFS
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);

	// Round Robin
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);

	// add process
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);

	// application run
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);

	// event log: closing
	void MyForm_FormClosing(Object^ sender, FormClosingEventArgs^ e);

	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

		   // GETTERS *FROM GRID TO LIST
	public: String^ get_no(int row) { return dataGridView1->Rows[row]->Cells[0]->Value->ToString(); }
	public: String^ get_name(int row) { return dataGridView1->Rows[row]->Cells[1]->Value->ToString(); }
	public: String^ get_bt(int row) { return dataGridView1->Rows[row]->Cells[2]->Value->ToString(); }
	public: String^ get_pr(int row) { return dataGridView1->Rows[row]->Cells[3]->Value->ToString(); }
	public: String^ get_io(int row) { return dataGridView1->Rows[row]->Cells[4]->Value->ToString(); }
	public: String^ get_ir(int row, int offset) { return dataGridView1->Rows[row]->Cells[5+offset]->Value->ToString(); }


		  //	UTILITY FUNCTIONS

	//	collects the data from complete grid, create objects of process and adds in processes list
	void collect_data()
		  {
			  proc->Clear();
			  for (int i = 0; i < proc_counter; i++) {
				  
				  process^ obj = gcnew process();
				  obj->name = get_name(i);
				  obj->bt = Int32::Parse(get_bt(i));
				  obj->pr = Int32::Parse(get_pr(i));
				  obj->io = Boolean::Parse(get_io(i));
				  for (int j = 0; j < number_of_resources; j++)
					  obj->resources[j] = Int32::Parse(get_ir(i, j));
				  proc->Add(obj);
			  }
		  }

	//	sorts according to burst time
	void sort_bt() {
		collect_data();
		for (int i = 1; i < proc_counter; i++) {
			for (int j = 0; j < proc_counter - i; j++) {
				if (proc[j]->bt > proc[j + 1]->bt) {
					process^ backup;
					backup = proc[j];
					proc[j] = proc[j + 1];
					proc[j + 1] = backup;
				}
			}
		}
	}

	//	sorts according to priority
	void sort_pr() {
		collect_data();
		for (int i = 1; i < proc_counter; i++) {
			for (int j = 0; j < proc_counter - i; j++) {
				if (proc[j]->pr > proc[j + 1]->pr) {
					process^ backup;
					backup = proc[j];
					proc[j] = proc[j + 1];
					proc[j + 1] = backup;
				}
			}
		}
	}

	//	checks if the arguement object in under available resources and returns bool
	bool checkresources(process^ p) {
			  int check = 0;
			  for (int i = 0; i < number_of_resources; i++) {
				  if (p->resources[i] <= insta_avail[i]) {
					  check++;
				  }
			  }
			  if (check == number_of_resources) { //all instances available
				  p->state = "ready";
				  for (int i = 0; i < number_of_resources; i++) {
					  insta_avail[i] = insta_avail[i] - p->resources[i];
				  }
				  return true;
			  }
			  else
				  return false;
		  }

	//	create the graph form, transfers data to graph form for Gantt chart
	void generate_graph() {
		OSProject::Bufferscreen newfrm;
		for (int i = 0; i < dataGridView2->RowCount; i++) {
			newfrm.set_names(dataGridView2->Rows[i]->Cells[0]->Value->ToString());
			newfrm.set_values(dataGridView2->Rows[i]->Cells[1]->Value->ToString());
		}
		newfrm.ShowDialog();
	}

	//	 appends text in bold to text box
	void print_bold(String^ text_to_print) {
		String^ boldText = text_to_print;
		int start = richTextBox1->TextLength;
		richTextBox1->AppendText(boldText+Environment::NewLine+ Environment::NewLine);
		richTextBox1->Select(start, boldText->Length);
		richTextBox1->SelectionFont = gcnew System::Drawing::Font(richTextBox1->Font, FontStyle::Bold);
	}

	//	once done with ready queue, initialize resources so they're are available again
	void reinitialize_instances() {
		// initializing instances available back 2 orig values
		insta_avail[0] = 5;
		insta_avail[1] = 7;
		insta_avail[2] = 3;
		insta_avail[3] = 4;
		insta_avail[4] = 5;
	}

	//	create ready queue according to availble resources
	void generate_queues() {
		job->Clear(); ready->Clear();
		int temp_number = proc_counter;
		int process_num = 0;
		for (int i = 0; i < temp_number; i++) {
			job->Add(proc[process_num]);
			if (checkresources(proc[process_num])) {
				ready->Add(proc[process_num]);
				proc->RemoveAt(process_num);
				proc_counter--;
			}
			else
				process_num++;
			/*else {
				String^ error_msg = "No resources available for process" + job[i]->name + ",Not placed in ready queue!";
				System::Windows::Forms::MessageBox::Show(error_msg, "Resources alert", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}*/
			regenerate_datagrid();
		}
		reinitialize_instances();
	}

	//	process leaves the grid that have been transfered to ready queue
	void regenerate_datagrid() {
		dataGridView1->Rows->Clear();
		for (int i = 0; i < proc_counter; i++) {
			dataGridView1->Rows->Add(i + 1, proc[i]->name, proc[i]->bt, proc[i]->pr, proc[i]->io, proc[i]->resources[0], proc[i]->resources[1], proc[i]->resources[2], proc[i]->resources[3], proc[i]->resources[4]);
		}
		dataGridView1->Refresh();
	}




	//											ALGORITHMS

	void Priority() {

		sort_pr();
		generate_queues();

		if(ready->Count==0)
			MessageBox::Show("No process available in ready queue!", "Process error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		else {
			int elapsed_time = 0;
			double total_time = 0;
			int wait_time = 0;
			process^ temp;

			int process_in_ready_queue = ready->Count;
			print_bold("Initiating priority scheduling algorithm:");
			dataGridView2->Rows->Clear();
			dataGridView2->Columns[2]->HeaderText = "Wait time";
			do {
				temp = ready[0];
				ready->RemoveAt(0);
				if (temp->io)
					device->Add(temp);
				temp->at = wait_time;
				elapsed_time = temp->bt;
				wait_time += elapsed_time;
				total_time += temp->at;
				dataGridView2->Rows->Add(temp->name, temp->bt, temp->at);
				int count = 0;
				richTextBox1->AppendText(" \nProcess (" + temp->name + ") is Running according to Priority");
				while (count != elapsed_time) {
					Thread::Sleep(500);
					richTextBox1->AppendText(".");
					this->Refresh();
					count++;
					richTextBox1->ScrollToCaret();
				}
				richTextBox1->AppendText(Environment::NewLine);
			} while (ready->Count != 0);

			double avg = total_time / process_in_ready_queue;
			String^ formatted_avg = avg.ToString("F" + 1);

			richTextBox1->AppendText(Environment::NewLine+"AVG WAITING TIME: " + formatted_avg + Environment::NewLine + Environment::NewLine);
			print_bold("* All processes completed successfully ! *");
			richTextBox1->ScrollToCaret();

			generate_graph();
		}
	}

	void Fcfs() {

		collect_data();
		generate_queues();

		if(ready->Count==0)
			MessageBox::Show("No process available in ready queue!", "Process error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		else {
			int process_in_ready_queue = ready->Count;
			int elapsed_time = 0;
			int wait_time = 0;
			double total_time = 0;
			process^ temp;
			dataGridView2->Rows->Clear();
			dataGridView2->Columns[2]->HeaderText = "Wait time";
			print_bold("Initiating FCFS scheduling algorithm:");
			do {
				temp = ready[0];
				ready->RemoveAt(0);
				temp->at = wait_time;
				elapsed_time = temp->bt;
				wait_time += elapsed_time;
				total_time += temp->at;
				dataGridView2->Rows->Add(temp->name, temp->bt, temp->at);
				int count = 0;
				richTextBox1->AppendText(" \nProcess (" + temp->name + ") is Running according to FCFS");
				while (count != elapsed_time) {
					Thread::Sleep(500);
					richTextBox1->AppendText(".");
					this->Refresh();
					count++;
					richTextBox1->ScrollToCaret();
				}
				richTextBox1->AppendText(Environment::NewLine);
			} while (ready->Count != 0);

			double avg = total_time / process_in_ready_queue;
			String^ formatted_avg = avg.ToString("F" + 1);

			richTextBox1->AppendText(Environment::NewLine+"AVG WAITING TIME: " + formatted_avg + Environment::NewLine + Environment::NewLine);
			print_bold("* All processes completed successfully ! *");
			richTextBox1->ScrollToCaret();

			generate_graph();
		}
	}

	void SJF() {

		sort_bt();
		generate_queues();

		if(ready->Count==0)
			MessageBox::Show("No process available in ready queue!", "Process error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		else {
			int elapsed_time = 0;
			int wait_time = 0;
			double total_time = 0;
			process^ temp;

			int process_in_ready_queue = ready->Count;
			dataGridView2->Rows->Clear();
			dataGridView2->Columns[2]->HeaderText = "Wait time";
			print_bold("Initiating SJF scheduling algorithm:");
			do {
				temp = ready[0];
				temp->state = "Running";
				ready->RemoveAt(0);
				temp->at = wait_time;
				elapsed_time = temp->bt;
				wait_time += elapsed_time;
				total_time += temp->at;
				dataGridView2->Rows->Add(temp->name, temp->bt, temp->at);
				int count = 0;
				richTextBox1->AppendText(" \nProcess (" + temp->name + ") is Running according to SJF");
				while (count != elapsed_time) {
					Thread::Sleep(500);
					richTextBox1->AppendText(".");
					this->Refresh();
					count++;
					richTextBox1->ScrollToCaret();
				}
				richTextBox1->AppendText(Environment::NewLine);
				temp->state = "Terminated";
			} while (ready->Count != 0);

			double avg = total_time / process_in_ready_queue;
			String^ formatted_avg = avg.ToString("F" + 1);

			richTextBox1->AppendText(Environment::NewLine+"AVG WAITING TIME: " + formatted_avg + Environment::NewLine + Environment::NewLine);
			print_bold("* All processes completed successfully ! *");
			richTextBox1->ScrollToCaret();

			generate_graph();
		}
	}

	void RoundRobin() {
		collect_data();
		generate_queues();

		if(ready->Count==0)
			MessageBox::Show("No process available in ready queue!", "Process error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		else {
			dataGridView2->Rows->Clear();
			dataGridView2->Columns[2]->HeaderText = "Arrival time";


			int iteration = 0, arrival_next = 0, proc_in_ready = ready->Count;
			print_bold("Initiating Round Robin scheduling algorithm:");
			do {
				process^ temp = gcnew process();
				temp->name = ready[iteration]->name;
				temp->bt = ready[iteration]->bt;
				ready[iteration]->at = arrival_next; // arrival of previous

				if (temp->bt > rr_time) {
					dataGridView2->Rows->Add(temp->name, rr_time, arrival_next);
					arrival_next += rr_time;
				}
				else {
					dataGridView2->Rows->Add(temp->name, temp->bt, arrival_next);
					arrival_next += temp->bt;
				}

				int count = 0;
				richTextBox1->AppendText(" \nProcess (" + temp->name + ") is Running according to round robin");
				while (count != temp->bt) {
					Thread::Sleep(500);
					richTextBox1->AppendText(".");
					this->Refresh();
					if (count == rr_time) {
						richTextBox1->AppendText(Environment::NewLine + Environment::NewLine + " Process (" + temp->name + ") is preempted and added in the end of ready queue.");
						temp->bt -= rr_time;
						ready->Add(temp);
						break;
					}
					count++;
					richTextBox1->ScrollToCaret();
				}
				iteration++;
				richTextBox1->AppendText(Environment::NewLine);
			} while (iteration != ready->Count);


			int turn_around_time = 0, completion_time = 0, arrival_time = 0, total_wait = 0, wait_time=0;
			for (int i = 0; i < proc_in_ready; i++) {
				String^ name = ready[i]->name;
				arrival_time = ready[i]->at;
				completion_time = ready[i]->at + ready[i]->bt;
				for (int j = proc_in_ready; j < ready->Count; j++) {
					if (name == ready[j]->name)
						completion_time = ready[j]->at + ready[j]->bt;
				}
				turn_around_time = completion_time;
				wait_time = turn_around_time - ready[i]->bt;
				richTextBox1->AppendText(Environment::NewLine+ready[i]->name+" waiting time: "+wait_time+ Environment::NewLine);
				total_wait += wait_time;
			}

			double avg_wait = total_wait / proc_in_ready;
			String^ formatted_avg = avg_wait.ToString("F" + 1);

			richTextBox1->AppendText(Environment::NewLine+"AVG WAITING TIME: " + formatted_avg + Environment::NewLine + Environment::NewLine);
			print_bold("* All processes completed successfully ! *");
			richTextBox1->ScrollToCaret();

			generate_graph();
		}
	}

	};


}