#pragma once

namespace Project1 {

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
	private: System::Windows::Forms::Button^ additional;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ multiply;
	private: System::Windows::Forms::Button^ divide;
	private: System::Windows::Forms::TextBox^ input1;
	private: System::Windows::Forms::TextBox^ input2;
	private: System::Windows::Forms::Label^ op;


	protected:







	private: System::Windows::Forms::Label^ result;
	protected:

	protected:

	protected:

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
			this->additional = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->multiply = (gcnew System::Windows::Forms::Button());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->input1 = (gcnew System::Windows::Forms::TextBox());
			this->input2 = (gcnew System::Windows::Forms::TextBox());
			this->op = (gcnew System::Windows::Forms::Label());
			this->result = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// additional
			// 
			this->additional->Location = System::Drawing::Point(12, 91);
			this->additional->Name = L"additional";
			this->additional->Size = System::Drawing::Size(75, 23);
			this->additional->TabIndex = 0;
			this->additional->Text = L"+";
			this->additional->UseVisualStyleBackColor = true;
			this->additional->Click += gcnew System::EventHandler(this, &MyForm::additional_Click);
			// 
			// minus
			// 
			this->minus->Location = System::Drawing::Point(12, 120);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(75, 23);
			this->minus->TabIndex = 1;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = true;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::minus_Click);
			// 
			// multiply
			// 
			this->multiply->Location = System::Drawing::Point(12, 149);
			this->multiply->Name = L"multiply";
			this->multiply->Size = System::Drawing::Size(75, 23);
			this->multiply->TabIndex = 2;
			this->multiply->Text = L"x";
			this->multiply->UseVisualStyleBackColor = true;
			this->multiply->Click += gcnew System::EventHandler(this, &MyForm::multiply_Click);
			// 
			// divide
			// 
			this->divide->Location = System::Drawing::Point(12, 178);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(75, 23);
			this->divide->TabIndex = 3;
			this->divide->Text = L"/";
			this->divide->UseVisualStyleBackColor = true;
			this->divide->Click += gcnew System::EventHandler(this, &MyForm::divide_Click);
			// 
			// input1
			// 
			this->input1->Location = System::Drawing::Point(136, 91);
			this->input1->Name = L"input1";
			this->input1->Size = System::Drawing::Size(100, 20);
			this->input1->TabIndex = 4;
			// 
			// input2
			// 
			this->input2->Location = System::Drawing::Point(136, 151);
			this->input2->Name = L"input2";
			this->input2->Size = System::Drawing::Size(100, 20);
			this->input2->TabIndex = 5;
			// 
			// op
			// 
			this->op->AutoSize = true;
			this->op->Location = System::Drawing::Point(161, 125);
			this->op->Name = L"op";
			this->op->Size = System::Drawing::Size(46, 13);
			this->op->TabIndex = 6;
			this->op->Text = L"operator";
			// 
			// result
			// 
			this->result->AutoSize = true;
			this->result->Location = System::Drawing::Point(157, 188);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(50, 13);
			this->result->TabIndex = 7;
			this->result->Text = L"RESULT";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->result);
			this->Controls->Add(this->op);
			this->Controls->Add(this->input2);
			this->Controls->Add(this->input1);
			this->Controls->Add(this->divide);
			this->Controls->Add(this->multiply);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->additional);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void additional_Click(System::Object^ sender, System::EventArgs^ e) {
		
		int output = System::Convert::ToInt16(input1->Text) + System::Convert::ToInt16(input2->Text);

		result->Text = System::Convert::ToString(output);
	
	}
	private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {
		int output = System::Convert::ToInt16(input1->Text) - System::Convert::ToInt16(input2->Text);

		result->Text = System::Convert::ToString(output);
	}
	private: System::Void multiply_Click(System::Object^ sender, System::EventArgs^ e) {
		int output = System::Convert::ToInt16(input1->Text) * System::Convert::ToInt16(input2->Text);

		result->Text = System::Convert::ToString(output);
}
	private: System::Void divide_Click(System::Object^ sender, System::EventArgs^ e) {
		int output = System::Convert::ToInt16(input1->Text) / System::Convert::ToInt16(input2->Text);

		result->Text = System::Convert::ToString(output);
}
};
}

