#include "main window.h"

using namespace std;

namespace OSProject {			//		EVENTS ONLY
	// SJF
	void MyForm::button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (proc_counter>0)
			SJF();
		else
			MessageBox::Show("No process available in job queue!", "Process error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

	// priority
	void MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (proc_counter > 0)
			Priority();
		else
			MessageBox::Show("No process available in job queue!", "Process error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

	// Round Robin
	void MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (proc_counter > 0) {
			OSProject::MyForm1 newfrm;
			newfrm.ShowDialog();
			if (newfrm.get_final_checks()) {
				rr_time = newfrm.get_rrtime();
				RoundRobin();
			}
		}
		else
			MessageBox::Show("No process available in job queue!", "Process error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

	// FCFS
	void MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (proc_counter > 0)
			Fcfs();
		else
			MessageBox::Show("No process available in job queue!", "Process error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}


	// add process
	void MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e) {
		OSProject::createprocess newfrm;
		List<String^>^ transfer_ins_avail = gcnew List<String^>;
		for (int i = 0; i < number_of_resources; i++)
			transfer_ins_avail->Add(insta_avail[i].ToString());
		newfrm.set_instances(transfer_ins_avail[0], transfer_ins_avail[1], transfer_ins_avail[2], transfer_ins_avail[3], transfer_ins_avail[4]);
		newfrm.ShowDialog();
		if (newfrm.get_final_checks()) {
			proc_counter++;
			dataGridView1->Rows->Add(proc_counter, newfrm.get_name(), newfrm.get_BT(), newfrm.get_Pr(), newfrm.get_io(), newfrm.get_ir1(), newfrm.get_ir2(), newfrm.get_ir3(), newfrm.get_ir4(), newfrm.get_ir5());
		}
	}

	// application run
	void MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	// event log: closing
	void MyForm::MyForm_FormClosing(Object^ sender, FormClosingEventArgs^ e) {
		// Show a confirmation dialog box when the user tries to close the form
		if (MessageBox::Show("Are you sure you want to exit?", "Confirm Exit", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No) {
			e->Cancel = true;
		}
	}

}
