#pragma once

namespace RationalFractionProgram {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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

	protected:

	protected:

	private: System::Windows::Forms::TextBox^ TextNum1;
	private: System::Windows::Forms::TextBox^ TextDenom1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ ReduceButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ TextNum2;
	private: System::Windows::Forms::TextBox^ TextDenom2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ TextResNum;
	private: System::Windows::Forms::TextBox^ TextResDenom;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label6;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->TextNum1 = (gcnew System::Windows::Forms::TextBox());
			this->TextDenom1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ReduceButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TextNum2 = (gcnew System::Windows::Forms::TextBox());
			this->TextDenom2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TextResNum = (gcnew System::Windows::Forms::TextBox());
			this->TextResDenom = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// TextNum1
			// 
			this->TextNum1->Location = System::Drawing::Point(136, 64);
			this->TextNum1->Name = L"TextNum1";
			this->TextNum1->Size = System::Drawing::Size(28, 20);
			this->TextNum1->TabIndex = 2;
			// 
			// TextDenom1
			// 
			this->TextDenom1->Location = System::Drawing::Point(136, 91);
			this->TextDenom1->Name = L"TextDenom1";
			this->TextDenom1->Size = System::Drawing::Size(28, 20);
			this->TextDenom1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(36, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Первая дробь - А:";
			// 
			// ReduceButton
			// 
			this->ReduceButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ReduceButton->Location = System::Drawing::Point(39, 88);
			this->ReduceButton->Name = L"ReduceButton";
			this->ReduceButton->Size = System::Drawing::Size(78, 23);
			this->ReduceButton->TabIndex = 0;
			this->ReduceButton->Text = L"Сократить";
			this->ReduceButton->UseVisualStyleBackColor = true;
			this->ReduceButton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(9, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(522, 35);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Действия с рациональными дробями";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(209, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Вторая дробь - B:";
			// 
			// TextNum2
			// 
			this->TextNum2->Location = System::Drawing::Point(310, 64);
			this->TextNum2->Name = L"TextNum2";
			this->TextNum2->Size = System::Drawing::Size(28, 20);
			this->TextNum2->TabIndex = 7;
			// 
			// TextDenom2
			// 
			this->TextDenom2->Location = System::Drawing::Point(310, 90);
			this->TextDenom2->Name = L"TextDenom2";
			this->TextDenom2->Size = System::Drawing::Size(28, 20);
			this->TextDenom2->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(366, 67);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Результат:";
			// 
			// TextResNum
			// 
			this->TextResNum->Location = System::Drawing::Point(450, 64);
			this->TextResNum->Name = L"TextResNum";
			this->TextResNum->ReadOnly = true;
			this->TextResNum->Size = System::Drawing::Size(28, 20);
			this->TextResNum->TabIndex = 10;
			// 
			// TextResDenom
			// 
			this->TextResDenom->Location = System::Drawing::Point(450, 91);
			this->TextResDenom->Name = L"TextResDenom";
			this->TextResDenom->ReadOnly = true;
			this->TextResDenom->Size = System::Drawing::Size(28, 20);
			this->TextResDenom->TabIndex = 11;
			// 
			// comboBox1
			// 
			this->comboBox1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Сложение", L"Вычитание", L"Произведение", L"Деление",
					L"Сложить в А", L"Вычесть в А", L"Умножить в А", L"Поделить в А"
			});
			this->comboBox1->Location = System::Drawing::Point(39, 162);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 12;
			this->comboBox1->Text = L"Сложение";
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(181, 162);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Выполнить!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(181, 191);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Очистить поля";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(212, 88);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Сократить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Location = System::Drawing::Point(369, 88);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Сократить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(36, 144);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 13);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Операции:";
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Location = System::Drawing::Point(181, 220);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(106, 23);
			this->button5->TabIndex = 18;
			this->button5->Text = L"Сравнить дроби";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(307, 189);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 19;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(542, 277);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->TextResDenom);
			this->Controls->Add(this->TextResNum);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->TextDenom2);
			this->Controls->Add(this->TextNum2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->TextDenom1);
			this->Controls->Add(this->TextNum1);
			this->Controls->Add(this->ReduceButton);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Операции с рациональными дробями";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//Сократить первую дробь
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { 
		int n1 = System::Convert::ToInt16(TextNum1->Text);
		int d1 = System::Convert::ToInt16(TextDenom1->Text);
		if (d1 != 0) {
			if (d1 < 0) 
			{
				d1 *= -1;
				n1 *= -1;
			}
			RationalFraction Frac1(n1, d1);
			Frac1.ReduceFrac();
			TextNum1->Text = System::Convert::ToString(Frac1.getNum());
			TextDenom1->Text = System::Convert::ToString(Frac1.getDenom());
		}
		else MessageBox::Show("Ноль в знаменателе! Операция не будет выполнена! Введите дробь верно!", "Ошибка!");
	} 
		  //Сократить вторую дробь
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int n2 = System::Convert::ToInt16(TextNum2->Text);
		int d2 = System::Convert::ToInt16(TextDenom2->Text);
		if (d2 != 0) {
			if (d2 < 0)
			{
				d2 *= -1;
				n2 *= -1;
			}
			RationalFraction Frac2(n2, d2);
			Frac2.ReduceFrac();
			TextNum2->Text = System::Convert::ToString(Frac2.getNum());
			TextDenom2->Text = System::Convert::ToString(Frac2.getDenom());
		} else MessageBox::Show("Ноль в знаменателе! Операция не будет выполнена! Введите дробь верно!", "Ошибка!");
	}
		   //Сократить результат
	 private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		 int n3 = System::Convert::ToInt16(TextResNum->Text);
		 int d3 = System::Convert::ToInt16(TextResDenom->Text);
		 if (d3 != 0) {
			 if (d3 < 0)
			 {
				 d3 *= -1;
				 n3 *= -1;
			 }
			 RationalFraction Frac3(n3, d3);
			 Frac3.ReduceFrac();
			 TextResNum->Text = System::Convert::ToString(Frac3.getNum());
			 TextResDenom->Text = System::Convert::ToString(Frac3.getDenom());
		 } else MessageBox::Show("Ноль в знаменателе! Операция не будет выполнена! Введите дробь верно!", "Ошибка!");

	}
		 //Выполнить с учетом операции
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		int n1 = System::Convert::ToInt16(TextNum1->Text);
		int d1 = System::Convert::ToInt16(TextDenom1->Text);
		int n2 = System::Convert::ToInt16(TextNum2->Text);
		int d2 = System::Convert::ToInt16(TextDenom2->Text);
		if ((d1 != 0) && (d2 != 0)) {
			RationalFraction Frac1(n1, d1);
			RationalFraction Frac2(n2, d2);
			RationalFraction ResFrac;
			switch (comboBox1->SelectedIndex)
			{
			case 0:
			{
				ResFrac = Frac1 + Frac2;
				TextResNum->Text = System::Convert::ToString(ResFrac.getNum());
				TextResDenom->Text = System::Convert::ToString(ResFrac.getDenom()); break;
			}
			case 1:
			{
				ResFrac = Frac1 - Frac2;
				TextResNum->Text = System::Convert::ToString(ResFrac.getNum());
				TextResDenom->Text = System::Convert::ToString(ResFrac.getDenom()); break;
			}
			case 2:
			{
				ResFrac = Frac1 * Frac2;
				TextResNum->Text = System::Convert::ToString(ResFrac.getNum());
				TextResDenom->Text = System::Convert::ToString(ResFrac.getDenom()); break;
			}
			case 3:
			{
				ResFrac = Frac1 / Frac2;
				TextResNum->Text = System::Convert::ToString(ResFrac.getNum());
				TextResDenom->Text = System::Convert::ToString(ResFrac.getDenom()); break;
			}
			case 4:
			{
				Frac1 += Frac2;
				TextNum1->Text = System::Convert::ToString(Frac1.getNum());
				TextDenom1->Text = System::Convert::ToString(Frac1.getDenom()); break;
				break;
			}
			case 5:
			{
				Frac1 -= Frac2;
				TextNum1->Text = System::Convert::ToString(Frac1.getNum());
				TextDenom1->Text = System::Convert::ToString(Frac1.getDenom()); break; break;
			}
			case 6:
			{
				Frac1 *= Frac2;
				TextNum1->Text = System::Convert::ToString(Frac1.getNum());
				TextDenom1->Text = System::Convert::ToString(Frac1.getDenom()); break; break;
			}
			case 7:
			{
				Frac1 /= Frac2;
				TextNum1->Text = System::Convert::ToString(Frac1.getNum());
				TextDenom1->Text = System::Convert::ToString(Frac1.getDenom()); break; break;
			}
			}
		}
		else MessageBox::Show("Ноль в знаменателе! Операция не будет выполнена! Введите дробь верно!", "Ошибка!");
	}
		 //Очистка полей
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		TextNum1->Text = L"";
		TextDenom1->Text = L"";
		TextNum2->Text = L"";
		TextDenom2->Text = L"";
		TextResNum->Text = L"";
		TextResDenom->Text = L"";		
	}
		//Сравнение дробей
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		int n1 = System::Convert::ToInt16(TextNum1->Text);
		int d1 = System::Convert::ToInt16(TextDenom1->Text);
		int n2 = System::Convert::ToInt16(TextNum2->Text);
		int d2 = System::Convert::ToInt16(TextDenom2->Text);
		if ((d1 != 0) && (d2 != 0)) {
			RationalFraction Frac1(n1, d1);
			RationalFraction Frac2(n2, d2);
			if (Frac1 > Frac2) { label6->Text = "Дробь A больше чем дробь B!"; }
			else
			{
				if (Frac2 > Frac1) { label6->Text = "Дробь B больше чем дробь A!"; }
				else { label6->Text = "Дроби A и B равны!"; }
			}
		} else MessageBox::Show("Ноль в знаменателе! Операция не будет выполнена! Введите дробь верно!", "Ошибка!");
		
}
		  
		 


	
		//Защита от ввода посторонних символов, кроме 012...89
	/*private: System::Void TextNum1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	if (e->KeyChar <= 47 || e->KeyChar >= 58)
	{
		e->Handled = true;
	}
}
	private: System::Void TextDenom1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	if (e->KeyChar <= 47 || e->KeyChar >= 58)
	{
		e->Handled = true;
	}
}
	private: System::Void TextNum2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	if (e->KeyChar <= 47 || e->KeyChar >= 58)
	{
		e->Handled = true;
	}
}
	private: System::Void TextDenom2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	if (e->KeyChar <= 47 || e->KeyChar >= 58)
	{
		e->Handled = true;
	}
}*/


};
}

