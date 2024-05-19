#pragma once

namespace Quizz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ nr;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ rbOK;





	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RadioButton^ rbNOT2;

	private: System::Windows::Forms::RadioButton^ rbNOT;













	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ rbOK2;

	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ rbOK3;

	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::RadioButton^ rbOK4;

	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::RadioButton^ rbOK5;

	protected:


	protected:










	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->nr = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbNOT2 = (gcnew System::Windows::Forms::RadioButton());
			this->rbNOT = (gcnew System::Windows::Forms::RadioButton());
			this->rbOK = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->rbOK2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->rbOK3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->rbOK4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->rbOK5 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// nr
			// 
			this->nr->AutoSize = true;
			this->nr->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nr->Location = System::Drawing::Point(263, 31);
			this->nr->Name = L"nr";
			this->nr->Size = System::Drawing::Size(118, 42);
			this->nr->TabIndex = 0;
			this->nr->Text = L"Quizz";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbNOT2);
			this->groupBox1->Controls->Add(this->rbNOT);
			this->groupBox1->Controls->Add(this->rbOK);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox1->Location = System::Drawing::Point(79, 105);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(500, 50);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Jak wywo³ujemy tekst w c++";
			// 
			// rbNOT2
			// 
			this->rbNOT2->AutoSize = true;
			this->rbNOT2->Location = System::Drawing::Point(400, 19);
			this->rbNOT2->Name = L"rbNOT2";
			this->rbNOT2->Size = System::Drawing::Size(94, 17);
			this->rbNOT2->TabIndex = 2;
			this->rbNOT2->TabStop = true;
			this->rbNOT2->Text = L"cout >> \"text\";";
			this->rbNOT2->UseVisualStyleBackColor = true;
			// 
			// rbNOT
			// 
			this->rbNOT->AutoSize = true;
			this->rbNOT->Location = System::Drawing::Point(208, 19);
			this->rbNOT->Name = L"rbNOT";
			this->rbNOT->Size = System::Drawing::Size(78, 17);
			this->rbNOT->TabIndex = 1;
			this->rbNOT->TabStop = true;
			this->rbNOT->Text = L"print(\"text\")";
			this->rbNOT->UseVisualStyleBackColor = true;
			// 
			// rbOK
			// 
			this->rbOK->AutoSize = true;
			this->rbOK->Location = System::Drawing::Point(25, 19);
			this->rbOK->Name = L"rbOK";
			this->rbOK->Size = System::Drawing::Size(94, 17);
			this->rbOK->TabIndex = 0;
			this->rbOK->TabStop = true;
			this->rbOK->Text = L"cout << \"text\";";
			this->rbOK->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(191, 417);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(259, 82);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Zatwierdz\'";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(185, 502);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 31);
			this->label1->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(598, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(598, 182);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(598, 238);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(598, 294);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(598, 350);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"label6";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Controls->Add(this->rbOK2);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox2->Location = System::Drawing::Point(79, 161);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(500, 50);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Jak wywo³ujemy tekst w c++";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(400, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(94, 17);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"cout >> \"text\";";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// rbOK2
			// 
			this->rbOK2->AutoSize = true;
			this->rbOK2->Location = System::Drawing::Point(208, 19);
			this->rbOK2->Name = L"rbOK2";
			this->rbOK2->Size = System::Drawing::Size(78, 17);
			this->rbOK2->TabIndex = 1;
			this->rbOK2->TabStop = true;
			this->rbOK2->Text = L"print(\"text\")";
			this->rbOK2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(25, 19);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(94, 17);
			this->radioButton3->TabIndex = 0;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"cout << \"text\";";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButton4);
			this->groupBox3->Controls->Add(this->rbOK3);
			this->groupBox3->Controls->Add(this->radioButton6);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox3->Location = System::Drawing::Point(79, 217);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(500, 50);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Jak wywo³ujemy tekst w c++";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(400, 19);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(94, 17);
			this->radioButton4->TabIndex = 2;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"cout >> \"text\";";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// rbOK3
			// 
			this->rbOK3->AutoSize = true;
			this->rbOK3->Location = System::Drawing::Point(208, 19);
			this->rbOK3->Name = L"rbOK3";
			this->rbOK3->Size = System::Drawing::Size(78, 17);
			this->rbOK3->TabIndex = 1;
			this->rbOK3->TabStop = true;
			this->rbOK3->Text = L"print(\"text\")";
			this->rbOK3->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(25, 19);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(94, 17);
			this->radioButton6->TabIndex = 0;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"cout << \"text\";";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->rbOK4);
			this->groupBox4->Controls->Add(this->radioButton8);
			this->groupBox4->Controls->Add(this->radioButton9);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox4->Location = System::Drawing::Point(79, 273);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(500, 50);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Jak wywo³ujemy tekst w c++";
			// 
			// rbOK4
			// 
			this->rbOK4->AutoSize = true;
			this->rbOK4->Location = System::Drawing::Point(400, 19);
			this->rbOK4->Name = L"rbOK4";
			this->rbOK4->Size = System::Drawing::Size(94, 17);
			this->rbOK4->TabIndex = 2;
			this->rbOK4->TabStop = true;
			this->rbOK4->Text = L"cout >> \"text\";";
			this->rbOK4->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(208, 19);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(78, 17);
			this->radioButton8->TabIndex = 1;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"print(\"text\")";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(25, 19);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(94, 17);
			this->radioButton9->TabIndex = 0;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"cout << \"text\";";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->radioButton10);
			this->groupBox5->Controls->Add(this->radioButton11);
			this->groupBox5->Controls->Add(this->rbOK5);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox5->Location = System::Drawing::Point(79, 329);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(500, 50);
			this->groupBox5->TabIndex = 3;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Jak wywo³ujemy tekst w c++";
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(400, 19);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(94, 17);
			this->radioButton10->TabIndex = 2;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"cout >> \"text\";";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(208, 19);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(78, 17);
			this->radioButton11->TabIndex = 1;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"print(\"text\")";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// rbOK5
			// 
			this->rbOK5->AutoSize = true;
			this->rbOK5->Location = System::Drawing::Point(25, 19);
			this->rbOK5->Name = L"rbOK5";
			this->rbOK5->Size = System::Drawing::Size(94, 17);
			this->rbOK5->TabIndex = 0;
			this->rbOK5->TabStop = true;
			this->rbOK5->Text = L"cout << \"text\";";
			this->rbOK5->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(692, 546);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->nr);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		  
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	int pop = 0;
	int npop = 0;

	if (rbOK->Checked)
	{
		label2->Text = "Poprawnie";
		pop = pop + 1;
	}
	else
	{
		label2->Text = "Nie poprawnie";
		npop = npop + 1;
	}
	if (rbOK2->Checked)
	{
		label3->Text = "Poprawnie";
		pop = pop + 1;
	}
	else
	{
		label3->Text = "Nie poprawnie";
		npop = npop + 1;
	}
	if (rbOK3->Checked)
	{
		label4->Text = "Poprawnie";
		pop = pop + 1;
	}
	else
	{
		label4->Text = "Nie poprawnie";
		npop = npop + 1;
	}
	if (rbOK4->Checked)
	{
		label5->Text = "Poprawnie";
		pop = pop + 1;
	}
	else
	{
		label5->Text = "Nie poprawnie";
		npop = npop + 1;
	}
	if (rbOK5->Checked)
	{
		label6->Text = "Poprawnie";
		pop = pop + 1;
	}
	else
	{
		label6->Text = "Nie poprawnie";
		npop = npop + 1;
	}

	label1->Text = "Poprawne = " + pop + ", nie poprawne = " + npop;
}
};
}
