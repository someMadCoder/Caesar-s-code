#pragma once
#include <string>
#include <iostream>
#include <string>

namespace Project1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace std;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(414, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Зашифровать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(193, 165);
			this->textBox1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(414, 53);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 37);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Дешифровать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(469, 152);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 31, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(68, 20);
			this->numericUpDown1->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(414, 96);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 46);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Перебрать все возможные варианты";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(414, 153);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 17);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Ключ:";
			// 
			// textBox2
			// 
			this->textBox2->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->textBox2->Location = System::Drawing::Point(215, 12);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(193, 165);
			this->textBox2->TabIndex = 9;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(549, 184);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Шифрование текста шифром Цезаря";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}


	private: String^ EncodeTxt(String^ sourcetxt) {//шифрование
		int charSum;
		array<wchar_t>^ sourcetxt_char = sourcetxt->ToCharArray();
		String^ result = L"";
		for (int i = 0; i < sourcetxt->Length; i++)
		{
			if (sourcetxt_char[i] + (int)numericUpDown1->Value > 1103 ) {
				sourcetxt_char[i] -= 32;
			}
			if (sourcetxt_char[i] != 32 && (sourcetxt_char[i] < 47 || sourcetxt_char[i] > 58))
				sourcetxt_char[i] += (int)numericUpDown1->Value; 
			
			result += sourcetxt_char[i];
		}
		return result;
	}

	private: String^ DecodeTxt(String^ sourcetxt) {//дешифрование
		int charSum;
		array<wchar_t>^ sourcetxt_char = sourcetxt->ToCharArray();
		String^ result = L"";
		for (int i = 0; i < sourcetxt->Length; i++)
		{
			if (sourcetxt_char[i] != 32 && (sourcetxt_char[i] < 47 || sourcetxt_char[i] > 58)) {
				if (sourcetxt_char[i] - (int)numericUpDown1->Value < 1040) {
					sourcetxt_char[i] += 32;
				}
				sourcetxt_char[i] -= (int)numericUpDown1->Value;
			}
			result += sourcetxt_char[i];
		}
		return result;
	}

	private: String^ BrutForceDecodeTxt(String^ sourcetxt) {//дешифрование методом перебора ключей
		int charSum;
		array<wchar_t>^ sourcetxt_char = sourcetxt->ToCharArray();
		String^ result = L"";
		for (int j = 0; j < 32; j++)
		{
			result += (j).ToString() + ")";
			for (int i = 0; i < sourcetxt->Length; i++)
			{
				if (sourcetxt_char[i] != 32 && (sourcetxt_char[i] < 47 || sourcetxt_char[i] > 58)) {
					if (sourcetxt_char[i] - j < 1040) {
						sourcetxt_char[i] += 32;
					}
					sourcetxt_char[i] -= j;
				}
				result += sourcetxt_char[i];
			}
			result += "         ";
		}
		return result;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			textBox2->Text = EncodeTxt(textBox1->Text);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			textBox2->Text = DecodeTxt(textBox1->Text);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			textBox2->Text = BrutForceDecodeTxt(textBox1->Text);
	}
};
}
