#pragma once

namespace TextEditor {

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
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ создатьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьКакToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ правкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вырезатьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ копироватьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вставитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выделитьВсеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ форматToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ шрифтToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ цветToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сервисToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ числоваяПроверкаToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ statusLabel;
	private: System::Windows::Forms::ToolStripStatusLabel^ statusLabelInfo;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

		// Дополнительные переменные
	private: bool isNewFile;
	private: String^ currentFilePath;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Требуемый метод для поддержки конструктора — не изменяйте 
		   /// содержимое этого метода с помощью редактора кода.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			   this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->создатьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->сохранитьКакToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->правкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->вырезатьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->копироватьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->вставитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->выделитьВсеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->форматToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->шрифтToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->цветToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->сервисToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->числоваяПроверкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			   this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			   this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			   this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			   this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			   this->statusLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			   this->statusLabelInfo = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			   this->menuStrip1->SuspendLayout();
			   this->statusStrip1->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // menuStrip1
			   // 
			   this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				   this->файлToolStripMenuItem,
					   this->правкаToolStripMenuItem, this->форматToolStripMenuItem, this->сервисToolStripMenuItem
			   });
			   this->menuStrip1->Location = System::Drawing::Point(0, 0);
			   this->menuStrip1->Name = L"menuStrip1";
			   this->menuStrip1->Size = System::Drawing::Size(689, 28);
			   this->menuStrip1->TabIndex = 0;
			   this->menuStrip1->Text = L"menuStrip1";
			   // 
			   // файлToolStripMenuItem
			   // 
			   this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				   this->создатьToolStripMenuItem,
					   this->открытьToolStripMenuItem, this->сохранитьToolStripMenuItem, this->сохранитьКакToolStripMenuItem, this->выходToolStripMenuItem
			   });
			   this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			   this->файлToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			   this->файлToolStripMenuItem->Text = L"Файл";
			   // 
			   // создатьToolStripMenuItem
			   // 
			   this->создатьToolStripMenuItem->Name = L"создатьToolStripMenuItem";
			   this->создатьToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			   this->создатьToolStripMenuItem->Text = L"Создать";
			   this->создатьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::создатьToolStripMenuItem_Click);
			   // 
			   // открытьToolStripMenuItem
			   // 
			   this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			   this->открытьToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			   this->открытьToolStripMenuItem->Text = L"Открыть";
			   this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::открытьToolStripMenuItem_Click);
			   // 
			   // сохранитьToolStripMenuItem
			   // 
			   this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			   this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			   this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			   this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьToolStripMenuItem_Click);
			   // 
			   // сохранитьКакToolStripMenuItem
			   // 
			   this->сохранитьКакToolStripMenuItem->Name = L"сохранитьКакToolStripMenuItem";
			   this->сохранитьКакToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			   this->сохранитьКакToolStripMenuItem->Text = L"Сохранить как";
			   this->сохранитьКакToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьКакToolStripMenuItem_Click);
			   // 
			   // выходToolStripMenuItem
			   // 
			   this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			   this->выходToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			   this->выходToolStripMenuItem->Text = L"Выход";
			   this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			   // 
			   // правкаToolStripMenuItem
			   // 
			   this->правкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				   this->вырезатьToolStripMenuItem,
					   this->копироватьToolStripMenuItem, this->вставитьToolStripMenuItem, this->выделитьВсеToolStripMenuItem
			   });
			   this->правкаToolStripMenuItem->Name = L"правкаToolStripMenuItem";
			   this->правкаToolStripMenuItem->Size = System::Drawing::Size(74, 24);
			   this->правкаToolStripMenuItem->Text = L"Правка";
			   // 
			   // вырезатьToolStripMenuItem
			   // 
			   this->вырезатьToolStripMenuItem->Name = L"вырезатьToolStripMenuItem";
			   this->вырезатьToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			   this->вырезатьToolStripMenuItem->Text = L"Вырезать";
			   this->вырезатьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вырезатьToolStripMenuItem_Click);
			   // 
			   // копироватьToolStripMenuItem
			   // 
			   this->копироватьToolStripMenuItem->Name = L"копироватьToolStripMenuItem";
			   this->копироватьToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			   this->копироватьToolStripMenuItem->Text = L"Копировать";
			   this->копироватьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::копироватьToolStripMenuItem_Click);
			   // 
			   // вставитьToolStripMenuItem
			   // 
			   this->вставитьToolStripMenuItem->Name = L"вставитьToolStripMenuItem";
			   this->вставитьToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			   this->вставитьToolStripMenuItem->Text = L"Вставить";
			   this->вставитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вставитьToolStripMenuItem_Click);
			   // 
			   // выделитьВсеToolStripMenuItem
			   // 
			   this->выделитьВсеToolStripMenuItem->Name = L"выделитьВсеToolStripMenuItem";
			   this->выделитьВсеToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			   this->выделитьВсеToolStripMenuItem->Text = L"Выделить все";
			   this->выделитьВсеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выделитьВсеToolStripMenuItem_Click);
			   // 
			   // форматToolStripMenuItem
			   // 
			   this->форматToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				   this->шрифтToolStripMenuItem,
					   this->цветToolStripMenuItem
			   });
			   this->форматToolStripMenuItem->Name = L"форматToolStripMenuItem";
			   this->форматToolStripMenuItem->Size = System::Drawing::Size(77, 24);
			   this->форматToolStripMenuItem->Text = L"Формат";
			   // 
			   // шрифтToolStripMenuItem
			   // 
			   this->шрифтToolStripMenuItem->Name = L"шрифтToolStripMenuItem";
			   this->шрифтToolStripMenuItem->Size = System::Drawing::Size(140, 26);
			   this->шрифтToolStripMenuItem->Text = L"Шрифт";
			   this->шрифтToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::шрифтToolStripMenuItem_Click);
			   // 
			   // цветToolStripMenuItem
			   // 
			   this->цветToolStripMenuItem->Name = L"цветToolStripMenuItem";
			   this->цветToolStripMenuItem->Size = System::Drawing::Size(140, 26);
			   this->цветToolStripMenuItem->Text = L"Цвет";
			   this->цветToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::цветToolStripMenuItem_Click);
			   // 
			   // сервисToolStripMenuItem
			   // 
			   this->сервисToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->числоваяПроверкаToolStripMenuItem });
			   this->сервисToolStripMenuItem->Name = L"сервисToolStripMenuItem";
			   this->сервисToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			   this->сервисToolStripMenuItem->Text = L"Сервис";
			   // 
			   // числоваяПроверкаToolStripMenuItem
			   // 
			   this->числоваяПроверкаToolStripMenuItem->Name = L"числоваяПроверкаToolStripMenuItem";
			   this->числоваяПроверкаToolStripMenuItem->Size = System::Drawing::Size(230, 26);
			   this->числоваяПроверкаToolStripMenuItem->Text = L"Числовая проверка";
			   this->числоваяПроверкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::числоваяПроверкаToolStripMenuItem_Click);
			   // 
			   // textBox1
			   // 
			   this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->textBox1->Location = System::Drawing::Point(0, 28);
			   this->textBox1->Multiline = true;
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			   this->textBox1->Size = System::Drawing::Size(689, 436);
			   this->textBox1->TabIndex = 1;
			   // 
			   // openFileDialog1
			   // 
			   this->openFileDialog1->FileName = L"openFileDialog1";
			   this->openFileDialog1->Filter = L"txt files (*.txt)|*.txt|All files (*.*)|*.*";
			   this->openFileDialog1->RestoreDirectory = true;
			   // 
			   // saveFileDialog1
			   // 
			   this->saveFileDialog1->Filter = L"txt files (*.txt)|*.txt|All files (*.*)|*.*";
			   this->saveFileDialog1->RestoreDirectory = true;
			   // 
			   // statusStrip1
			   // 
			   this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			   this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				   this->statusLabel,
					   this->statusLabelInfo
			   });
			   this->statusStrip1->Location = System::Drawing::Point(0, 464);
			   this->statusStrip1->Name = L"statusStrip1";
			   this->statusStrip1->Size = System::Drawing::Size(689, 26);
			   this->statusStrip1->TabIndex = 2;
			   this->statusStrip1->Text = L"statusStrip1";
			   // 
			   // statusLabel
			   // 
			   this->statusLabel->Name = L"statusLabel";
			   this->statusLabel->Size = System::Drawing::Size(0, 20);
			   // 
			   // statusLabelInfo
			   // 
			   this->statusLabelInfo->Name = L"statusLabelInfo";
			   this->statusLabelInfo->Size = System::Drawing::Size(0, 20);
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(689, 490);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->menuStrip1);
			   this->Controls->Add(this->statusStrip1);
			   this->MainMenuStrip = this->menuStrip1;
			   this->Name = L"MyForm";
			   this->Text = L"Текстовый редактор";
			   this->menuStrip1->ResumeLayout(false);
			   this->menuStrip1->PerformLayout();
			   this->statusStrip1->ResumeLayout(false);
			   this->statusStrip1->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

		   //закрытие
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}

		   //Создание нового файла
	private: System::Void создатьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checkSaveBeforeClear()) {
			textBox1->Clear();
			currentFilePath = "";
			isNewFile = true;
			this->Text = "Безымянный";
			updateStatus();
		}
	}

		   //открытие файла
	private: System::Void открытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checkSaveBeforeClear()) {
			System::IO::Stream^ myStream;
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				if ((myStream = openFileDialog1->OpenFile()) != nullptr) {
					System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(myStream);
					textBox1->Text = sr->ReadToEnd();
					sr->Close();
					myStream->Close();
					currentFilePath = openFileDialog1->FileName;
					isNewFile = false;
					this->Text = currentFilePath;
					updateStatus();
				}
				else
					MessageBox::Show("Произошла ошибка при открытии файла");
			}
		}
	}

		   //Сохранить файл с вводом имени
	private: System::Void сохранитьКакToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		System::IO::Stream^ myStream;
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if ((myStream = saveFileDialog1->OpenFile()) != nullptr) {
				System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(myStream);
				sw->Write(textBox1->Text);
				sw->Close();
				myStream->Close();
				currentFilePath = saveFileDialog1->FileName;
				isNewFile = false;
				this->Text = currentFilePath;
				updateStatus();
			}
			else
				MessageBox::Show("Произошла ошибка при сохранении файла");
		}
	}

		   //Сохранить файл под своим именем
	private: System::Void сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isNewFile || currentFilePath == "") {
			сохранитьКакToolStripMenuItem_Click(sender, e);
		}
		else {
			System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(currentFilePath);
			sw->Write(textBox1->Text);
			sw->Close();
			updateStatus();
			MessageBox::Show("Файл сохранен!", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

		   //смена шрифта
	private: System::Void шрифтToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		fontDialog1->Font = textBox1->Font;
		if (fontDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			textBox1->Font = fontDialog1->Font;
		}
	}

		   //смена цвета фона
	private: System::Void цветToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			textBox1->BackColor = colorDialog1->Color;
		}
	}

		   //вырезать
	private: System::Void вырезатьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->SelectionLength > 0) textBox1->Cut();
	}

		   //копировать
	private: System::Void копироватьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->SelectionLength > 0) textBox1->Copy();
	}

		   //вставить
	private: System::Void вставитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Paste();
	}

		   //выделить все
	private: System::Void выделитьВсеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->SelectAll();
	}

		   //Проверка закрытия файла
	private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (textBox1->Text->Length > 0) {
			System::Windows::Forms::DialogResult dr = MessageBox::Show(
				"Сохранить изменения в файле?",
				"Выход из программы",
				MessageBoxButtons::YesNoCancel,
				MessageBoxIcon::Question);

			if (dr == System::Windows::Forms::DialogResult::Yes) {
				сохранитьToolStripMenuItem_Click(sender, e);
			}
			else if (dr == System::Windows::Forms::DialogResult::Cancel) {
				e->Cancel = true;
			}
		}
	}

		   //Проверка перед созданием/открытием нового файла
	private: bool checkSaveBeforeClear() {
		if (textBox1->Text->Length > 0) {
			System::Windows::Forms::DialogResult dr = MessageBox::Show(
				"Сохранить изменения?",
				"Предупреждение",
				MessageBoxButtons::YesNoCancel,
				MessageBoxIcon::Question);

			if (dr == System::Windows::Forms::DialogResult::Yes) {
				сохранитьToolStripMenuItem_Click(nullptr, nullptr);
				return true;
			}
			else if (dr == System::Windows::Forms::DialogResult::No) {
				return true;
			}
			else {
				return false;
			}
		}
		return true;
	}

		   //Обновление статусной строки
	private: void updateStatus() {
		int lineCount = textBox1->Lines->Length;
		int charCount = textBox1->Text->Length;
		statusLabel->Text = "Строк: " + lineCount + "  Символов: " + charCount;

		if (!isNewFile && currentFilePath != "") {
			statusLabelInfo->Text = "Файл: " + System::IO::Path::GetFileName(currentFilePath);
		}
		else {
			statusLabelInfo->Text = "Новый файл";
		}
	}

		   //Изменение текста
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		updateStatus();
	}

		   //Числовая проверка (улучшенная)
	private: System::Void числоваяПроверкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Trim() == "") {
			MessageBox::Show("Текст пуст!", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		array<String^>^ lines = textBox1->Text->Split(gcnew array<Char>{'\n'}, StringSplitOptions::RemoveEmptyEntries);
		int lineNum = 1;
		bool hasError = false;

		for each(String ^ line in lines) {
			line = line->Trim();
			if (line == "") continue;

			array<String^>^ numbers = line->Split(gcnew array<Char>{' ', '\t'}, StringSplitOptions::RemoveEmptyEntries);

			for each(String ^ num in numbers) {
				int value;
				if (!Int32::TryParse(num, value)) {
					MessageBox::Show("Строка " + lineNum + ": '" + num + "' не является целым числом",
						"Ошибка проверки", MessageBoxButtons::OK, MessageBoxIcon::Error);
					hasError = true;
					break;
				}
			}
			if (hasError) break;
			lineNum++;
		}

		if (!hasError) {
			MessageBox::Show("Всё в порядке! Все данные - целые числа.",
				"Результат проверки", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	};
}