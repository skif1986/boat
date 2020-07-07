#pragma once
#include < stdlib.h >

namespace BoatLogic {

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  зановоToolStripMenuItem;
	public: System::Windows::Forms::Button^  buttWolf;
	private:

	private: System::Windows::Forms::Button^  buttSheep;
	private: System::Windows::Forms::Button^  buttCabbage;
	private: System::Windows::Forms::Button^  buttBoat;
	public: System::Windows::Forms::PictureBox^  pictureWolf;
	private:
	public: System::Windows::Forms::PictureBox^  pictureSheep;






	public: System::Windows::Forms::PictureBox^  pictureCabbage;
	private:
	public: System::Windows::Forms::PictureBox^  pictureBoat;







	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зановоToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buttWolf = (gcnew System::Windows::Forms::Button());
			this->buttSheep = (gcnew System::Windows::Forms::Button());
			this->buttCabbage = (gcnew System::Windows::Forms::Button());
			this->buttBoat = (gcnew System::Windows::Forms::Button());
			this->pictureWolf = (gcnew System::Windows::Forms::PictureBox());
			this->pictureSheep = (gcnew System::Windows::Forms::PictureBox());
			this->pictureCabbage = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoat = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureWolf))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureSheep))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureCabbage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoat))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->выходToolStripMenuItem,
					this->зановоToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1291, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// зановоToolStripMenuItem
			// 
			this->зановоToolStripMenuItem->Name = L"зановоToolStripMenuItem";
			this->зановоToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->зановоToolStripMenuItem->Text = L"Заново";
			this->зановоToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::зановоToolStripMenuItem_Click);
			// 
			// buttWolf
			// 
			this->buttWolf->Location = System::Drawing::Point(12, 39);
			this->buttWolf->Name = L"buttWolf";
			this->buttWolf->Size = System::Drawing::Size(118, 43);
			this->buttWolf->TabIndex = 1;
			this->buttWolf->Text = L"Переместить волка";
			this->buttWolf->UseVisualStyleBackColor = true;
			this->buttWolf->Click += gcnew System::EventHandler(this, &MyForm::buttWolf_Click);
			// 
			// buttSheep
			// 
			this->buttSheep->Location = System::Drawing::Point(12, 88);
			this->buttSheep->Name = L"buttSheep";
			this->buttSheep->Size = System::Drawing::Size(118, 43);
			this->buttSheep->TabIndex = 1;
			this->buttSheep->Text = L"Переместить овцу";
			this->buttSheep->UseVisualStyleBackColor = true;
			this->buttSheep->Click += gcnew System::EventHandler(this, &MyForm::buttSheep_Click);
			// 
			// buttCabbage
			// 
			this->buttCabbage->Location = System::Drawing::Point(12, 137);
			this->buttCabbage->Name = L"buttCabbage";
			this->buttCabbage->Size = System::Drawing::Size(118, 43);
			this->buttCabbage->TabIndex = 1;
			this->buttCabbage->Text = L"Переместить капусту";
			this->buttCabbage->UseVisualStyleBackColor = true;
			this->buttCabbage->Click += gcnew System::EventHandler(this, &MyForm::buttCabbage_Click);
			// 
			// buttBoat
			// 
			this->buttBoat->Location = System::Drawing::Point(12, 269);
			this->buttBoat->Name = L"buttBoat";
			this->buttBoat->Size = System::Drawing::Size(118, 43);
			this->buttBoat->TabIndex = 1;
			this->buttBoat->Text = L"Отправить лодку";
			this->buttBoat->UseVisualStyleBackColor = true;
			this->buttBoat->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// pictureWolf
			// 
			this->pictureWolf->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureWolf.Image")));
			this->pictureWolf->Location = System::Drawing::Point(164, 214);
			this->pictureWolf->Name = L"pictureWolf";
			this->pictureWolf->Size = System::Drawing::Size(87, 100);
			this->pictureWolf->TabIndex = 2;
			this->pictureWolf->TabStop = false;
			// 
			// pictureSheep
			// 
			this->pictureSheep->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureSheep.Image")));
			this->pictureSheep->Location = System::Drawing::Point(257, 202);
			this->pictureSheep->Name = L"pictureSheep";
			this->pictureSheep->Size = System::Drawing::Size(81, 112);
			this->pictureSheep->TabIndex = 2;
			this->pictureSheep->TabStop = false;
			// 
			// pictureCabbage
			// 
			this->pictureCabbage->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureCabbage.Image")));
			this->pictureCabbage->Location = System::Drawing::Point(344, 269);
			this->pictureCabbage->Name = L"pictureCabbage";
			this->pictureCabbage->Size = System::Drawing::Size(43, 45);
			this->pictureCabbage->TabIndex = 2;
			this->pictureCabbage->TabStop = false;
			// 
			// pictureBoat
			// 
			this->pictureBoat->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoat.Image")));
			this->pictureBoat->Location = System::Drawing::Point(393, 162);
			this->pictureBoat->Name = L"pictureBoat";
			this->pictureBoat->Size = System::Drawing::Size(242, 152);
			this->pictureBoat->TabIndex = 2;
			this->pictureBoat->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(238, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 37);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Берег 1:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(935, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(134, 37);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Берег 2:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1291, 337);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureCabbage);
			this->Controls->Add(this->pictureSheep);
			this->Controls->Add(this->pictureWolf);
			this->Controls->Add(this->buttBoat);
			this->Controls->Add(this->buttCabbage);
			this->Controls->Add(this->buttSheep);
			this->Controls->Add(this->buttWolf);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBoat);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(1307, 376);
			this->MinimumSize = System::Drawing::Size(1307, 376);
			this->Name = L"MyForm";
			this->Text = L"BoatLogic";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureWolf))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureSheep))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureCabbage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoat))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{ 
	if ((pictureWolf->Location == Point(1056, 214)) && (pictureSheep->Location == Point(1149, 202)) && (pictureCabbage->Location == Point(1236, 269)))
	{
		System::Windows::Forms::DialogResult result = MessageBox::Show("Поздравляю! Вы решили логическую задачу. Чтобы начать заново, нажмите \"Да\". Чтобы выйти, нажмите \"Нет\"", "Победа!", MessageBoxButtons::YesNo,
			MessageBoxIcon::Information);
		if (result == System::Windows::Forms::DialogResult::No)
		{
			exit(0);
		}
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			pictureBoat->Location = Point(393, 162);
			pictureWolf->Location = Point(164, 214);
			pictureSheep->Location = Point(257, 202);
			pictureCabbage->Location = Point(344, 269);
		}
	}
	else if (((pictureWolf->Location == Point(164, 214)) && (pictureSheep->Location == Point(257, 202))) || ((pictureSheep->Location == Point(257, 202)) && (pictureCabbage->Location == Point(344, 269))) || ((pictureSheep->Location == Point(257, 202)) && (pictureCabbage->Location == Point(816, 231))) || ((pictureWolf->Location == Point(1056, 214)) && (pictureSheep->Location == Point(1149, 202))) || ((pictureSheep->Location == Point(1149, 202)) && (pictureCabbage->Location == Point(1236, 269))) ||
		((pictureWolf->Location == Point(434, 162)) && (pictureSheep->Location == Point(518, 150))) || ((pictureWolf->Location == Point(434, 162)) && (pictureCabbage->Location == Point(469, 240))) || ((pictureSheep->Location == Point(518, 150)) && (pictureCabbage->Location == Point(469, 240))) ||
		((pictureWolf->Location == Point(781, 162)) && (pictureSheep->Location == Point(865, 150))) || ((pictureWolf->Location == Point(781, 162)) && (pictureCabbage->Location == Point(816, 231))) || ((pictureSheep->Location == Point(865, 150)) && (pictureCabbage->Location == Point(816, 231)))) 
	{
		System::Windows::Forms::DialogResult result = MessageBox::Show("Вы допустили логическую ошибку. Чтобы начать заново, нажмите \"Да\". Чтобы выйти, нажмите \"Нет\"", "Ошибка!", MessageBoxButtons::YesNo,
			MessageBoxIcon::Information);
		if (result == System::Windows::Forms::DialogResult::No) 
		{
				exit(0);
		}
		if (result == System::Windows::Forms::DialogResult::Yes) 
		{
			pictureBoat->Location = Point(393, 162);
			pictureWolf->Location = Point(164, 214);
			pictureSheep->Location = Point(257, 202);
			pictureCabbage->Location = Point(344, 269);
		}
	}
	else if ((pictureBoat->Location == Point(393, 162)) && (pictureWolf->Location == Point(434, 162)))
	{
		pictureBoat->Location = Point(740, 162);
		pictureWolf->Location = Point(781, 162);
	}	
	else if ((pictureBoat->Location == Point(393, 162)) && (pictureSheep->Location == Point(518, 150)))
	{
		pictureBoat->Location = Point(740, 162);
		pictureSheep->Location = Point(865, 150);
	}
	else if ((pictureBoat->Location == Point(393, 162)) && (pictureCabbage->Location == Point(469, 240)))
	{
		pictureBoat->Location = Point(740, 162);
		pictureCabbage->Location = Point(816, 231);
	}
	else if ((pictureBoat->Location == Point(740, 162)) && (pictureWolf->Location == Point(781, 162)))
	{
		pictureBoat->Location = Point(393, 162);
		pictureWolf->Location = Point(434, 162);
	}
	else if ((pictureBoat->Location == Point(740, 162)) && (pictureSheep->Location == Point(865, 150)))
	{
		pictureBoat->Location = Point(393, 162);
		pictureSheep->Location = Point(518, 150);
	}
	else if ((pictureBoat->Location == Point(740, 162)) && (pictureCabbage->Location == Point(816, 231)))
	{
		pictureBoat->Location = Point(393, 162);
		pictureCabbage->Location = Point(469, 231);
	}
	else if (pictureBoat->Location == Point(740, 162))
	{
		pictureBoat->Location = Point(393, 162);
	}
	else
	{
		pictureBoat->Location = Point(740, 162);
	}
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
public: System::Void buttWolf_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if ((pictureBoat->Location == Point(393, 162)) && (pictureWolf->Location != Point(781, 162)) && (pictureWolf->Location != Point(1056, 214)))
	{
		if (pictureWolf->Location == Point(164, 214)) pictureWolf->Location = Point(434, 162);
		else pictureWolf->Location = Point(164, 214);
	}
	else if ((pictureBoat->Location == Point(740, 162)) && (pictureWolf->Location != Point(164, 214)) && (pictureWolf->Location != Point(434, 162)))
	{
		if (pictureWolf->Location == Point(781, 162)) pictureWolf->Location = Point(1056, 214);
		else pictureWolf->Location = Point(781, 162);
	}
	else {}
}
private: System::Void buttSheep_Click(System::Object^  sender, System::EventArgs^  e)
{
	if ((pictureBoat->Location == Point(393, 162)) && (pictureSheep->Location != Point(865, 150)) && (pictureSheep->Location != Point(1149, 202)))
	{
		if (pictureSheep->Location == Point(257, 202)) pictureSheep->Location = Point(518, 150);
		else pictureSheep->Location = Point(257, 202);
	}
	else if ((pictureBoat->Location == Point(740, 162)) && (pictureSheep->Location != Point(257, 202)) && (pictureSheep->Location != Point(518, 150)))
	{
		if (pictureSheep->Location == Point(865, 150)) pictureSheep->Location = Point(1149, 202);
		else pictureSheep->Location = Point(865, 150);
	}
	else {}
}
private: System::Void выходToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	exit(0);
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void buttCabbage_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if ((pictureBoat->Location == Point(393, 162)) && (pictureCabbage->Location != Point(816, 240)) && (pictureCabbage->Location != Point(1236, 269)))
	{
		if (pictureCabbage->Location == Point(344, 269)) pictureCabbage->Location = Point(469, 240);
		else pictureCabbage->Location = Point(344, 269);
	}
	else if ((pictureBoat->Location == Point(740, 162)) && (pictureCabbage->Location != Point(344, 269)) && (pictureCabbage->Location != Point(469, 240)))
	{
		if (pictureCabbage->Location == Point(816, 231)) pictureCabbage->Location = Point(1236, 269);
		else pictureCabbage->Location = Point(816, 231);
	}
	else {}
}
private: System::Void зановоToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
	pictureBoat->Location = Point(393, 162);
	pictureWolf->Location = Point(164, 214);
	pictureSheep->Location = Point(257, 202);
	pictureCabbage->Location = Point(344, 269);
	}
};
}