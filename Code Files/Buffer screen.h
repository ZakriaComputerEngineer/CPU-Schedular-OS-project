#pragma once
#include"main window.h"


namespace OSProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms::DataVisualization::Charting;

	public ref class Bufferscreen : public System::Windows::Forms::Form
	{
		
	public:

		List<String^>^ values;
		List<String^>^ names;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	public:

		Bufferscreen(void)
		{
			InitializeComponent();
			values = gcnew List<String^>;
			names = gcnew List<String^>;
		}
		

	protected:
		
		~Bufferscreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:


	private:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Gantt Chart";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Dock = System::Windows::Forms::DockStyle::Bottom;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(0, 49);
			this->chart1->Name = L"chart1";
			this->chart1->Padding = System::Windows::Forms::Padding(10);
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(517, 145);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// Bufferscreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(517, 194);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Bufferscreen";
			this->Text = L"OS project";
			this->Load += gcnew System::EventHandler(this, &Bufferscreen::Bufferscreen_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	

	private: System::Void Bufferscreen_Load(System::Object^ sender, System::EventArgs^ e) {
		
		chart1->Series->Clear();
		Series^ series = chart1->Series->Add("Data Series");

		series->ChartType = SeriesChartType::RangeBar;
		series->Color = Color::DodgerBlue;
		series->BackGradientStyle = GradientStyle::HorizontalCenter;

		chart1->ChartAreas[0]->AxisX->Interval = 1;
		chart1->ChartAreas[0]->AxisX->LabelStyle->Font = gcnew System::Drawing::Font("Arial", 10, FontStyle::Bold);

		double totalHeight = names->Count * 40;
		double maxHeight = (names->Count > 0) ? totalHeight / names->Count : 40;

		// Adjust the chart area position and size
		chart1->ChartAreas[0]->Position->Auto = false;
		chart1->ChartAreas[0]->Position->X = 0;
		chart1->ChartAreas[0]->Position->Y = 0;
		chart1->ChartAreas[0]->Position->Width = 100;
		chart1->ChartAreas[0]->Position->Height = 100;

		double currentY = 0.5;

		for (int i = 0; i < names->Count; i++)
		{
			String^ name = names[i];
			int value = Int32::Parse(values[i]);
			DataPoint^ dataPoint = gcnew DataPoint();
			dataPoint->AxisLabel = name;
			dataPoint->YValues = gcnew array<double>(2) { currentY, currentY + maxHeight * value };

			// Customize the appearance of the data point
			dataPoint->Color = Color::Orange;
			dataPoint->BorderColor = Color::Black;
			series->Points->Add(dataPoint);
			CustomLabel^ label = chart1->ChartAreas[0]->AxisY->CustomLabels->Add(currentY, currentY + maxHeight * value, name);
			label->ForeColor = Color::White; // Set the text color to white for better visibility
			currentY += maxHeight * value;
		}

		chart1->ChartAreas[0]->AxisY->LabelStyle->Enabled = false;
		chart1->Refresh();

	}
	

	public: void set_names(String^ in) {
		names->Add(in);
	}

	public: void set_values(String^ in) {
		values->Add(in);
	}

	};
}
