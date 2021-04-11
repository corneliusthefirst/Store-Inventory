#pragma once
#include "stdafx.h"
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include <sstream>
#include <string>
#include <msclr\marshal_cppstd.h>

namespace inventory {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace std;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			Fillcombo();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  insert;

	private: System::Windows::Forms::TextBox^  productid_txt;
	private: System::Windows::Forms::TextBox^  price_txt;


	private: System::Windows::Forms::TextBox^  quantity_txt;

	private: System::Windows::Forms::TextBox^  productname_txt;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  update_btn;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  Delete_btn;
	private: System::Windows::Forms::Button^  load_btn;

	private: System::Windows::Forms::DataGridView^  dataGridView1;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::Button^  Lamborgini_btn;


	private: System::Windows::Forms::Button^  BMW_btn;
	private: System::Windows::Forms::Button^  Apache_btn;



	private: System::Windows::Forms::Button^  Mac_book_btn;

	private: System::Windows::Forms::Button^  royce_royce_phantom_btn;
	private: System::Windows::Forms::Button^  ferrari_fxxk_btn;
	private: System::Windows::Forms::Button^  Flash_z_btn;





	private: System::Windows::Forms::Button^  ferrari_gt_btn;



	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button3;


	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  Client_Name_txt;

	private: System::Windows::Forms::Button^  email_btn;
	private: System::Windows::Forms::TextBox^  Client_Email_txt;




	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox_update_txt;
	private: System::Windows::Forms::Label^  label9;











	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->insert = (gcnew System::Windows::Forms::Button());
			this->productid_txt = (gcnew System::Windows::Forms::TextBox());
			this->price_txt = (gcnew System::Windows::Forms::TextBox());
			this->quantity_txt = (gcnew System::Windows::Forms::TextBox());
			this->productname_txt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->update_btn = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Delete_btn = (gcnew System::Windows::Forms::Button());
			this->load_btn = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->Lamborgini_btn = (gcnew System::Windows::Forms::Button());
			this->BMW_btn = (gcnew System::Windows::Forms::Button());
			this->Apache_btn = (gcnew System::Windows::Forms::Button());
			this->Mac_book_btn = (gcnew System::Windows::Forms::Button());
			this->royce_royce_phantom_btn = (gcnew System::Windows::Forms::Button());
			this->ferrari_fxxk_btn = (gcnew System::Windows::Forms::Button());
			this->Flash_z_btn = (gcnew System::Windows::Forms::Button());
			this->ferrari_gt_btn = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->Client_Name_txt = (gcnew System::Windows::Forms::TextBox());
			this->email_btn = (gcnew System::Windows::Forms::Button());
			this->Client_Email_txt = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox_update_txt = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightGreen;
			this->button1->Location = System::Drawing::Point(1252, 657);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// insert
			// 
			this->insert->BackColor = System::Drawing::Color::Green;
			this->insert->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"insert.Image")));
			this->insert->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->insert->Location = System::Drawing::Point(21, 189);
			this->insert->Name = L"insert";
			this->insert->Size = System::Drawing::Size(72, 29);
			this->insert->TabIndex = 1;
			this->insert->Text = L"Insert";
			this->insert->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->insert->UseVisualStyleBackColor = false;
			this->insert->Click += gcnew System::EventHandler(this, &MyForm1::insert_Click);
			// 
			// productid_txt
			// 
			this->productid_txt->Location = System::Drawing::Point(88, 36);
			this->productid_txt->Name = L"productid_txt";
			this->productid_txt->Size = System::Drawing::Size(116, 20);
			this->productid_txt->TabIndex = 2;
			this->productid_txt->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// price_txt
			// 
			this->price_txt->Location = System::Drawing::Point(88, 163);
			this->price_txt->Name = L"price_txt";
			this->price_txt->Size = System::Drawing::Size(152, 20);
			this->price_txt->TabIndex = 3;
			this->price_txt->TextChanged += gcnew System::EventHandler(this, &MyForm1::price_txt_TextChanged);
			// 
			// quantity_txt
			// 
			this->quantity_txt->Location = System::Drawing::Point(88, 123);
			this->quantity_txt->Name = L"quantity_txt";
			this->quantity_txt->Size = System::Drawing::Size(191, 20);
			this->quantity_txt->TabIndex = 4;
			this->quantity_txt->TextChanged += gcnew System::EventHandler(this, &MyForm1::quantity_txt_TextChanged);
			// 
			// productname_txt
			// 
			this->productname_txt->Location = System::Drawing::Point(88, 71);
			this->productname_txt->Name = L"productname_txt";
			this->productname_txt->Size = System::Drawing::Size(217, 20);
			this->productname_txt->TabIndex = 5;
			this->productname_txt->TextChanged += gcnew System::EventHandler(this, &MyForm1::productname_txt_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(2, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L" ProductId       :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(1, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L" ProductName :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(12, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Quantity       :";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm1::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label4->Location = System::Drawing::Point(18, 166);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Price          :";
			// 
			// update_btn
			// 
			this->update_btn->BackColor = System::Drawing::Color::MediumTurquoise;
			this->update_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"update_btn.Image")));
			this->update_btn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->update_btn->Location = System::Drawing::Point(133, 229);
			this->update_btn->Name = L"update_btn";
			this->update_btn->Size = System::Drawing::Size(84, 29);
			this->update_btn->TabIndex = 10;
			this->update_btn->Text = L"Update";
			this->update_btn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->update_btn->UseVisualStyleBackColor = false;
			this->update_btn->Click += gcnew System::EventHandler(this, &MyForm1::update_btn_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::LightSlateGray;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->ItemHeight = 13;
			this->comboBox1->Location = System::Drawing::Point(110, 194);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(130, 21);
			this->comboBox1->TabIndex = 11;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox1_SelectedIndexChanged);
			// 
			// Delete_btn
			// 
			this->Delete_btn->BackColor = System::Drawing::Color::Tomato;
			this->Delete_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Delete_btn.Image")));
			this->Delete_btn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Delete_btn->Location = System::Drawing::Point(21, 229);
			this->Delete_btn->Name = L"Delete_btn";
			this->Delete_btn->Size = System::Drawing::Size(78, 29);
			this->Delete_btn->TabIndex = 12;
			this->Delete_btn->Text = L"Delete";
			this->Delete_btn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Delete_btn->UseVisualStyleBackColor = false;
			this->Delete_btn->Click += gcnew System::EventHandler(this, &MyForm1::Delete_btn_Click);
			// 
			// load_btn
			// 
			this->load_btn->BackColor = System::Drawing::Color::MediumAquamarine;
			this->load_btn->Location = System::Drawing::Point(593, 12);
			this->load_btn->Name = L"load_btn";
			this->load_btn->Size = System::Drawing::Size(117, 35);
			this->load_btn->TabIndex = 13;
			this->load_btn->Text = L"Load Table";
			this->load_btn->UseVisualStyleBackColor = false;
			this->load_btn->Click += gcnew System::EventHandler(this, &MyForm1::load_btn_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(427, 53);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 55;
			this->dataGridView1->Size = System::Drawing::Size(456, 208);
			this->dataGridView1->TabIndex = 14;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1028, 266);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(314, 169);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(15, 470);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(331, 184);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 23;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::RosyBrown;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(352, 267);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(338, 169);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox9->TabIndex = 24;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(352, 470);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(338, 184);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 26;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(696, 267);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(326, 169);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 27;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(696, 470);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(326, 184);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 28;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(1028, 470);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(314, 184);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 29;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox14_Click);
			// 
			// Lamborgini_btn
			// 
			this->Lamborgini_btn->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->Lamborgini_btn->Location = System::Drawing::Point(352, 657);
			this->Lamborgini_btn->Name = L"Lamborgini_btn";
			this->Lamborgini_btn->Size = System::Drawing::Size(75, 23);
			this->Lamborgini_btn->TabIndex = 30;
			this->Lamborgini_btn->Text = L"Lamborgini";
			this->Lamborgini_btn->UseVisualStyleBackColor = false;
			this->Lamborgini_btn->Click += gcnew System::EventHandler(this, &MyForm1::Lamborgini_btn_Click);
			// 
			// BMW_btn
			// 
			this->BMW_btn->BackColor = System::Drawing::Color::Thistle;
			this->BMW_btn->Location = System::Drawing::Point(17, 657);
			this->BMW_btn->Name = L"BMW_btn";
			this->BMW_btn->Size = System::Drawing::Size(75, 23);
			this->BMW_btn->TabIndex = 32;
			this->BMW_btn->Text = L"BMW";
			this->BMW_btn->UseVisualStyleBackColor = false;
			this->BMW_btn->Click += gcnew System::EventHandler(this, &MyForm1::BMW_btn_Click);
			// 
			// Apache_btn
			// 
			this->Apache_btn->BackColor = System::Drawing::Color::NavajoWhite;
			this->Apache_btn->Location = System::Drawing::Point(15, 441);
			this->Apache_btn->Name = L"Apache_btn";
			this->Apache_btn->Size = System::Drawing::Size(64, 22);
			this->Apache_btn->TabIndex = 33;
			this->Apache_btn->Text = L"Apache";
			this->Apache_btn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Apache_btn->UseVisualStyleBackColor = false;
			this->Apache_btn->Click += gcnew System::EventHandler(this, &MyForm1::Apache_btn_Click);
			// 
			// Mac_book_btn
			// 
			this->Mac_book_btn->BackColor = System::Drawing::Color::RosyBrown;
			this->Mac_book_btn->Location = System::Drawing::Point(352, 441);
			this->Mac_book_btn->Name = L"Mac_book_btn";
			this->Mac_book_btn->Size = System::Drawing::Size(75, 23);
			this->Mac_book_btn->TabIndex = 34;
			this->Mac_book_btn->Text = L"Mac_book";
			this->Mac_book_btn->UseVisualStyleBackColor = false;
			this->Mac_book_btn->Click += gcnew System::EventHandler(this, &MyForm1::Mac_book_btn_Click);
			// 
			// royce_royce_phantom_btn
			// 
			this->royce_royce_phantom_btn->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->royce_royce_phantom_btn->Location = System::Drawing::Point(696, 657);
			this->royce_royce_phantom_btn->Name = L"royce_royce_phantom_btn";
			this->royce_royce_phantom_btn->Size = System::Drawing::Size(137, 23);
			this->royce_royce_phantom_btn->TabIndex = 35;
			this->royce_royce_phantom_btn->Text = L"royce_royce_phantom";
			this->royce_royce_phantom_btn->UseVisualStyleBackColor = false;
			this->royce_royce_phantom_btn->Click += gcnew System::EventHandler(this, &MyForm1::royce_royce_phantom_btn_Click);
			// 
			// ferrari_fxxk_btn
			// 
			this->ferrari_fxxk_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ferrari_fxxk_btn->Location = System::Drawing::Point(1028, 657);
			this->ferrari_fxxk_btn->Name = L"ferrari_fxxk_btn";
			this->ferrari_fxxk_btn->Size = System::Drawing::Size(75, 23);
			this->ferrari_fxxk_btn->TabIndex = 36;
			this->ferrari_fxxk_btn->Text = L"ferrari_fxxk";
			this->ferrari_fxxk_btn->UseVisualStyleBackColor = false;
			this->ferrari_fxxk_btn->Click += gcnew System::EventHandler(this, &MyForm1::ferrari_fxxk_btn_Click);
			// 
			// Flash_z_btn
			// 
			this->Flash_z_btn->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->Flash_z_btn->Location = System::Drawing::Point(696, 441);
			this->Flash_z_btn->Name = L"Flash_z_btn";
			this->Flash_z_btn->Size = System::Drawing::Size(75, 23);
			this->Flash_z_btn->TabIndex = 37;
			this->Flash_z_btn->Text = L"Flash_z";
			this->Flash_z_btn->UseVisualStyleBackColor = false;
			this->Flash_z_btn->Click += gcnew System::EventHandler(this, &MyForm1::Flash_z_btn_Click);
			// 
			// ferrari_gt_btn
			// 
			this->ferrari_gt_btn->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ferrari_gt_btn->Location = System::Drawing::Point(1028, 441);
			this->ferrari_gt_btn->Name = L"ferrari_gt_btn";
			this->ferrari_gt_btn->Size = System::Drawing::Size(75, 23);
			this->ferrari_gt_btn->TabIndex = 38;
			this->ferrari_gt_btn->Text = L"ferrari_gt";
			this->ferrari_gt_btn->UseVisualStyleBackColor = false;
			this->ferrari_gt_btn->Click += gcnew System::EventHandler(this, &MyForm1::ferrari_gt_btn_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(15, 267);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(331, 168);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 39;
			this->pictureBox2->TabStop = false;
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(88, 442);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(44, 23);
			this->button3->TabIndex = 40;
			this->button3->Text = L"OK";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button5
			// 
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(1109, 441);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(44, 23);
			this->button5->TabIndex = 42;
			this->button5->Text = L"OK";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button6
			// 
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->Location = System::Drawing::Point(1109, 657);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(44, 23);
			this->button6->TabIndex = 43;
			this->button6->Text = L"OK";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button7
			// 
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->Location = System::Drawing::Point(839, 657);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(44, 23);
			this->button7->TabIndex = 44;
			this->button7->Text = L"OK";
			this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// button8
			// 
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->Location = System::Drawing::Point(439, 657);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(44, 23);
			this->button8->TabIndex = 45;
			this->button8->Text = L"OK";
			this->button8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// button9
			// 
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button9->Location = System::Drawing::Point(98, 657);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(44, 23);
			this->button9->TabIndex = 46;
			this->button9->Text = L"OK";
			this->button9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// button10
			// 
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button10->Location = System::Drawing::Point(777, 441);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(44, 23);
			this->button10->TabIndex = 47;
			this->button10->Text = L"OK";
			this->button10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm1::button10_Click);
			// 
			// button11
			// 
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
			this->button11->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button11->Location = System::Drawing::Point(439, 441);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(44, 23);
			this->button11->TabIndex = 48;
			this->button11->Text = L"OK";
			this->button11->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm1::button11_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1122, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(220, 249);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 49;
			this->pictureBox3->TabStop = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Khaki;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(905, 35);
			this->button4->Name = L"button4";
			this->button4->Padding = System::Windows::Forms::Padding(0, 2, 4, 0);
			this->button4->Size = System::Drawing::Size(198, 80);
			this->button4->TabIndex = 50;
			this->button4->Text = L"SEND EMAIL TO CLIENT";
			this->button4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// Client_Name_txt
			// 
			this->Client_Name_txt->BackColor = System::Drawing::Color::Salmon;
			this->Client_Name_txt->Location = System::Drawing::Point(968, 135);
			this->Client_Name_txt->Name = L"Client_Name_txt";
			this->Client_Name_txt->Size = System::Drawing::Size(148, 20);
			this->Client_Name_txt->TabIndex = 51;
			this->Client_Name_txt->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged_1);
			// 
			// email_btn
			// 
			this->email_btn->BackColor = System::Drawing::Color::Gold;
			this->email_btn->ForeColor = System::Drawing::Color::DarkGreen;
			this->email_btn->Location = System::Drawing::Point(950, 205);
			this->email_btn->Name = L"email_btn";
			this->email_btn->Size = System::Drawing::Size(130, 34);
			this->email_btn->TabIndex = 52;
			this->email_btn->Text = L"Save Client Email";
			this->email_btn->UseVisualStyleBackColor = false;
			this->email_btn->Click += gcnew System::EventHandler(this, &MyForm1::email_btn_Click);
			// 
			// Client_Email_txt
			// 
			this->Client_Email_txt->BackColor = System::Drawing::Color::Salmon;
			this->Client_Email_txt->Location = System::Drawing::Point(965, 170);
			this->Client_Email_txt->Name = L"Client_Email_txt";
			this->Client_Email_txt->Size = System::Drawing::Size(151, 20);
			this->Client_Email_txt->TabIndex = 53;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label5->Location = System::Drawing::Point(889, 138);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 13);
			this->label5->TabIndex = 54;
			this->label5->Text = L"Client_Name :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label6->Location = System::Drawing::Point(889, 175);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 13);
			this->label6->TabIndex = 55;
			this->label6->Text = L"Client_Email :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Orange;
			this->label7->Location = System::Drawing::Point(41, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(146, 13);
			this->label7->TabIndex = 56;
			this->label7->Text = L"---> Fill Here The Product Info";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SlateGray;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(287, 166);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 94);
			this->button2->TabIndex = 15;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::DarkOrange;
			this->label8->Location = System::Drawing::Point(284, 146);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(125, 13);
			this->label8->TabIndex = 57;
			this->label8->Text = L"Add User / View  Stock :";
			// 
			// textBox_update_txt
			// 
			this->textBox_update_txt->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox_update_txt->Location = System::Drawing::Point(327, 29);
			this->textBox_update_txt->Name = L"textBox_update_txt";
			this->textBox_update_txt->Size = System::Drawing::Size(100, 20);
			this->textBox_update_txt->TabIndex = 58;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Orange;
			this->label9->Location = System::Drawing::Point(293, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(147, 13);
			this->label9->TabIndex = 59;
			this->label9->Text = L"--> Available Product Quantity";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ClientSize = System::Drawing::Size(1354, 685);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox_update_txt);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Client_Email_txt);
			this->Controls->Add(this->email_btn);
			this->Controls->Add(this->Client_Name_txt);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->ferrari_gt_btn);
			this->Controls->Add(this->Flash_z_btn);
			this->Controls->Add(this->ferrari_fxxk_btn);
			this->Controls->Add(this->royce_royce_phantom_btn);
			this->Controls->Add(this->Mac_book_btn);
			this->Controls->Add(this->Apache_btn);
			this->Controls->Add(this->BMW_btn);
			this->Controls->Add(this->Lamborgini_btn);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->load_btn);
			this->Controls->Add(this->Delete_btn);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->update_btn);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->productname_txt);
			this->Controls->Add(this->quantity_txt);
			this->Controls->Add(this->price_txt);
			this->Controls->Add(this->productid_txt);
			this->Controls->Add(this->insert);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm1";
			this->Text = L"WELCOME TO OUR INVENTORY";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		Application::Exit();
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}



	


	private: System::Void insert_Click(System::Object^  sender, System::EventArgs^  e) {




		String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into  user_database.product (productid,productname,quantity,price) values ('" + this->productid_txt->Text + "','" + this->productname_txt->Text + "','" + this->quantity_txt->Text + "','" + this->price_txt->Text + "');", conDataBase);
		MySqlDataReader^ myReader;

		try {
			/*open my connection*/
			conDataBase->Open();
			/*my variable to wc i store the reader*/
			myReader = cmdDataBase->ExecuteReader();
			/*initialise my local variable to 0*/

			MessageBox::Show("New Product Saved");
			productid_txt->Text = "";
			productname_txt->Text = "";
			quantity_txt->Text = "";
			price_txt->Text = "";
		

			while (myReader->Read()) {

			}

		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);

		}
	}
	private: System::Void productname_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void update_btn_Click(System::Object^  sender, System::EventArgs^  e) {

		String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("update   user_database.product set productid='" + this->productid_txt->Text + "',productname='" + this->productname_txt->Text + "',quantity='" + this->quantity_txt->Text + "',price='" + this->price_txt->Text + "' where productid='" + this->productid_txt->Text + "'  ;", conDataBase);
		MySqlDataReader^ myReader;

		try {
			/*open my connection*/
			conDataBase->Open();
			/*my variable to wc i store the reader*/
			myReader = cmdDataBase->ExecuteReader();
			/*initialise my local variable to 0*/

			MessageBox::Show(" Product Updated");

			productid_txt->Text = "";
			productname_txt->Text = "";
			quantity_txt->Text = "";
			price_txt->Text = "";
			textBox_update_txt->Text = "";

			while (myReader->Read()) {

			}

		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);

		}
	}


	private: void Fillcombo(void) {



		String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from user_database.product ;", conDataBase);
		MySqlDataReader^ myReader;

		try {
			/*open my connection*/
			conDataBase->Open();
			/*my variable to wc i store the reader*/
			myReader = cmdDataBase->ExecuteReader();
			/*initialise my local variable to 0*/


			while (myReader->Read()) {
				String^ vproductname;
				vproductname = myReader->GetString("productname");
				comboBox1->Items->Add(vproductname);

			}

		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);

		}



	}



	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		String^ comboval = comboBox1->Text;

		String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from user_database.product where productname='" + comboval + "' ;", conDataBase);
		MySqlDataReader^ myReader;

		try {
			/*open my connection*/
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();

			if (myReader->Read()) {
				String^ ProductidVal = myReader->GetInt32("productid").ToString();
				productid_txt->Text = ProductidVal;
				String^ ProductnameVal = myReader->GetString("productname");
				productname_txt->Text = ProductnameVal;
				String^ QuantityVal = myReader->GetInt32("quantity").ToString();
				quantity_txt->Text = QuantityVal;
				String^ PriceVal = myReader->GetInt32("price").ToString();
				price_txt->Text = PriceVal;


			}

		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);

		}

	}
	private: System::Void Delete_btn_Click(System::Object^  sender, System::EventArgs^  e) {


		String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("delete  from user_database.product where productid='" + this->productid_txt->Text + "' ;", conDataBase);
		MySqlDataReader^ myReader;

		try {
			/*open my connection*/
			conDataBase->Open();
			/*my variable to wc i store the reader*/
			myReader = cmdDataBase->ExecuteReader();
			/*initialise my local variable to 0*/

			MessageBox::Show(" Product successfully  deleted");

			productid_txt->Text = "";
			productname_txt->Text = "";
			quantity_txt->Text = "";
			price_txt->Text = "";
			textBox_update_txt->Text = "";

			while (myReader->Read()) {

			}

		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);

		}

	}
	private: System::Void quantity_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void price_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void load_btn_Click(System::Object^  sender, System::EventArgs^  e) {

		String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from user_database.product ;", conDataBase);
		MySqlDataReader^ myReader;

		try {
			//my sda variable is define wc help me access the selectCommand from the MySqlAdapter
			MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbdataset;
			dataGridView1->DataSource = bSource;
			sda->Update(dbdataset);

		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);

		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		//this->Hide();
		MyForm2^ f2 = gcnew MyForm2;
		/*show the second form*/
		f2->ShowDialog();
	}
	private: System::Void Apache_btn_Click(System::Object^  sender, System::EventArgs^  e) {

		String^ Apacheval = Apache_btn->Text;

		String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from user_database.stock where ProductName='" + Apacheval + "' ;", conDataBase);
		MySqlDataReader^ myReader;

		try {
			/*open my connection*/
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();

			MessageBox::Show(" Apache successfully selected,Please insert 1 in the quantity textbox");

			if (myReader->Read()) {

				String^ ProductnameVal = myReader->GetString("ProductName");
				productname_txt->Text = ProductnameVal;

				String^ PriceVal = myReader->GetInt32("Price").ToString();
				price_txt->Text = PriceVal;

				String^ UpdateVal = myReader->GetInt32("Available_quantity").ToString();
				textBox_update_txt->Text = UpdateVal;


			}

				while (myReader->Read()) {
				}


			

		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);

		}




	}




	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {


		String^ Apacheval = Apache_btn->Text;




		System::String^ Available_Q = textBox_update_txt->Text;
		std::string Middle_Q = msclr::interop::marshal_as<std::string>(Available_Q);


		string s = Middle_Q;

		// object from the class stringstream
		stringstream geek(s);

		// The object has the value from textBox and stream
		// it to the integer x
		int Updated_Q = 0;
		geek >> Updated_Q;

		int Updated_Q1 = Updated_Q - 1;


		String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" update user_database.stock set Available_quantity='" + Updated_Q1 + "' where ProductName='" + Apacheval + "' ; ", conDataBase);
		MySqlDataReader^ myReader;







		try {
			/*open my connection*/
			conDataBase->Open();
			/*my variable to wc i store the reader*/
			myReader = cmdDataBase->ExecuteReader();
			/*initialise my local variable to 0*/
			MessageBox::Show("Thank For buying Apache");
			textBox_update_txt->Text = "";

			if (myReader->Read()) {

				
				
			}

		}

		catch (Exception^ex) {
			MessageBox::Show(ex->Message);

		}


	}
				
				

			
private: System::Void pictureBox14_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void email_btn_Click(System::Object^  sender, System::EventArgs^  e) {



	String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into  user_database.email (client_name,client_email) values ('" + this->Client_Name_txt->Text + "','" + this->Client_Email_txt->Text + "');", conDataBase);
	MySqlDataReader^ myReader;

	try {
		/*open my connection*/
		conDataBase->Open();
		/*my variable to wc i store the reader*/
		myReader = cmdDataBase->ExecuteReader();
		/*initialise my local variable to 0*/

		MessageBox::Show("New Client Email Saved");

		while (myReader->Read()) {

		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);

	}


}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	 
	//this->Hide();
	MyForm3^ f2 = gcnew MyForm3;
	/*show the second form*/
	f2->ShowDialog();

}
private: System::Void Mac_book_btn_Click(System::Object^  sender, System::EventArgs^  e) {


	String^ Mac_bookval = Mac_book_btn->Text;

	String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from user_database.stock where ProductName='" + Mac_bookval + "' ;", conDataBase);
	MySqlDataReader^ myReader;

	try {
		/*open my connection*/
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		MessageBox::Show(" Mac_book successfully selected,Please put 1 in the quantity textbox");

		if (myReader->Read()) {

			String^ ProductnameVal = myReader->GetString("ProductName");
			productname_txt->Text = ProductnameVal;

			String^ PriceVal = myReader->GetInt32("Price").ToString();
			price_txt->Text = PriceVal;

			String^ UpdateVal = myReader->GetInt32("Available_quantity").ToString();
			textBox_update_txt->Text = UpdateVal;


			

			while (myReader->Read()) {
			}


		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);

	}





}
private: System::Void Flash_z_btn_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ Flash_zval = Flash_z_btn->Text;



	String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from user_database.stock where ProductName='" + Flash_zval + "' ;", conDataBase);
	MySqlDataReader^ myReader;

	try {
		/*open my connection*/
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		MessageBox::Show(" Flash_z successfully selected,Please put 1 in the quantity textbox");

		if (myReader->Read()) {

			String^ ProductnameVal = myReader->GetString("ProductName");
			productname_txt->Text = ProductnameVal;

			String^ PriceVal = myReader->GetInt32("Price").ToString();
			price_txt->Text = PriceVal;

			String^ UpdateVal = myReader->GetInt32("Available_quantity").ToString();
			textBox_update_txt->Text = UpdateVal;




			while (myReader->Read()) {
			}


		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);

	}


}



private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {



	String^ Mac_bookval = Mac_book_btn->Text;




	System::String^ Available_Q = textBox_update_txt->Text;
	std::string Middle_Q = msclr::interop::marshal_as<std::string>(Available_Q);


	string s = Middle_Q;

	// object from the class stringstream
	stringstream geek(s);

	// The object has the value from textBox and stream
	// it to the integer x
	int Updated_Q = 0;
	geek >> Updated_Q;

	int Updated_Q1 = Updated_Q - 1;


	String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" update user_database.stock set Available_quantity='" + Updated_Q1 + "' where ProductName='" + Mac_bookval + "' ; ", conDataBase);
	MySqlDataReader^ myReader;







	try {
		/*open my connection*/
		conDataBase->Open();
		/*my variable to wc i store the reader*/
		myReader = cmdDataBase->ExecuteReader();
		/*initialise my local variable to 0*/
		MessageBox::Show("Thank For buying Mac book");
		textBox_update_txt->Text = "";

		if (myReader->Read()) {



		}

	}

	catch (Exception^ex) {
		MessageBox::Show(ex->Message);

	}

}
private: System::Void ferrari_gt_btn_Click(System::Object^  sender, System::EventArgs^  e) {


	String^ ferrari_gtval = ferrari_gt_btn->Text;

	String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from user_database.stock where ProductName='" + ferrari_gtval + "' ;", conDataBase);
	MySqlDataReader^ myReader;

	try {
		/*open my connection*/
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		MessageBox::Show(" ferrari_gt successfully selected,Please put 1 in the quantity textbox");

		if (myReader->Read()) {

			String^ ProductnameVal = myReader->GetString("ProductName");
			productname_txt->Text = ProductnameVal;

			String^ PriceVal = myReader->GetInt32("Price").ToString();
			price_txt->Text = PriceVal;

			String^ UpdateVal = myReader->GetInt32("Available_quantity").ToString();
			textBox_update_txt->Text = UpdateVal;




			while (myReader->Read()) {
			}


		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);

	}

}
private: System::Void BMW_btn_Click(System::Object^  sender, System::EventArgs^  e) {



	String^ BMW_val = BMW_btn->Text;

	String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from user_database.stock where ProductName='" + BMW_val + "' ;", conDataBase);
	MySqlDataReader^ myReader;

	try {
		/*open my connection*/
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		MessageBox::Show(" BMW successfully selected,Please put 1 in the quantity textbox");

		if (myReader->Read()) {

			String^ ProductnameVal = myReader->GetString("ProductName");
			productname_txt->Text = ProductnameVal;

			String^ PriceVal = myReader->GetInt32("Price").ToString();
			price_txt->Text = PriceVal;

			String^ UpdateVal = myReader->GetInt32("Available_quantity").ToString();
			textBox_update_txt->Text = UpdateVal;




			while (myReader->Read()) {
			}


		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);

	}

}
private: System::Void Lamborgini_btn_Click(System::Object^  sender, System::EventArgs^  e) {


	String^ Lamborgini_val = Lamborgini_btn->Text;

	String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from user_database.stock where ProductName='" + Lamborgini_val + "' ;", conDataBase);
	MySqlDataReader^ myReader;

	try {
		/*open my connection*/
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		MessageBox::Show(" Lamborgini successfully selected,Please put 1 in the quantity textbox");

		if (myReader->Read()) {

			String^ ProductnameVal = myReader->GetString("ProductName");
			productname_txt->Text = ProductnameVal;

			String^ PriceVal = myReader->GetInt32("Price").ToString();
			price_txt->Text = PriceVal;

			String^ UpdateVal = myReader->GetInt32("Available_quantity").ToString();
			textBox_update_txt->Text = UpdateVal;




			while (myReader->Read()) {
			}


		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);

	}

}
private: System::Void royce_royce_phantom_btn_Click(System::Object^  sender, System::EventArgs^  e) {


	String^ royceval = royce_royce_phantom_btn->Text;

	String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from user_database.stock where ProductName='" + royceval + "' ;", conDataBase);
	MySqlDataReader^ myReader;

	try {
		/*open my connection*/
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		MessageBox::Show(" royce_royce_phantom successfully selected,Please put 1 in the quantity textbox");

		if (myReader->Read()) {

			String^ ProductnameVal = myReader->GetString("ProductName");
			productname_txt->Text = ProductnameVal;

			String^ PriceVal = myReader->GetInt32("Price").ToString();
			price_txt->Text = PriceVal;

			String^ UpdateVal = myReader->GetInt32("Available_quantity").ToString();
			textBox_update_txt->Text = UpdateVal;




			while (myReader->Read()) {
			}


		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);

	}

}
private: System::Void ferrari_fxxk_btn_Click(System::Object^  sender, System::EventArgs^  e) {


	String^ ferrari_fxxkval = ferrari_fxxk_btn->Text;

	String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from user_database.stock where ProductName='" + ferrari_fxxkval + "' ;", conDataBase);
	MySqlDataReader^ myReader;

	try {
		/*open my connection*/
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		MessageBox::Show(" ferrari_fxxk successfully selected,Please put 1 in the quantity textbox");

		if (myReader->Read()) {

			String^ ProductnameVal = myReader->GetString("ProductName");
			productname_txt->Text = ProductnameVal;

			String^ PriceVal = myReader->GetInt32("Price").ToString();
			price_txt->Text = PriceVal;

			String^ UpdateVal = myReader->GetInt32("Available_quantity").ToString();
			textBox_update_txt->Text = UpdateVal;




			while (myReader->Read()) {
			}


		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);

	}
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {


	String^ Flash_zval = Flash_z_btn->Text;




	System::String^ Available_Q = textBox_update_txt->Text;
	std::string Middle_Q = msclr::interop::marshal_as<std::string>(Available_Q);


	string s = Middle_Q;

	// object from the class stringstream
	stringstream geek(s);

	// The object has the value from textBox and stream
	// it to the integer x
	int Updated_Q = 0;
	geek >> Updated_Q;

	int Updated_Q1 = Updated_Q - 1;


	String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" update user_database.stock set Available_quantity='" + Updated_Q1 + "' where ProductName='" + Flash_zval + "' ; ", conDataBase);
	MySqlDataReader^ myReader;







	try {
		/*open my connection*/
		conDataBase->Open();
		/*my variable to wc i store the reader*/
		myReader = cmdDataBase->ExecuteReader();
		/*initialise my local variable to 0*/
		MessageBox::Show("Thank For buying our Flash_z");
		textBox_update_txt->Text = "";

		if (myReader->Read()) {



		}

	}

	catch (Exception^ex) {
		MessageBox::Show(ex->Message);

	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ ferrari_gtval = ferrari_gt_btn->Text;




	System::String^ Available_Q = textBox_update_txt->Text;
	std::string Middle_Q = msclr::interop::marshal_as<std::string>(Available_Q);


	string s = Middle_Q;

	// object from the class stringstream
	stringstream geek(s);

	// The object has the value from textBox and stream
	// it to the integer x
	int Updated_Q = 0;
	geek >> Updated_Q;

	int Updated_Q1 = Updated_Q - 1;


	String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" update user_database.stock set Available_quantity='" + Updated_Q1 + "' where ProductName='" + ferrari_gtval + "' ; ", conDataBase);
	MySqlDataReader^ myReader;







	try {
		/*open my connection*/
		conDataBase->Open();
		/*my variable to wc i store the reader*/
		myReader = cmdDataBase->ExecuteReader();
		/*initialise my local variable to 0*/
		MessageBox::Show("Thank For buying our ferrari_gt");
		textBox_update_txt->Text = "";

		if (myReader->Read()) {



		}

	}

	catch (Exception^ex) {
		MessageBox::Show(ex->Message);

	}
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {


	String^ BMW_val = BMW_btn->Text;




	System::String^ Available_Q = textBox_update_txt->Text;
	std::string Middle_Q = msclr::interop::marshal_as<std::string>(Available_Q);


	string s = Middle_Q;

	// object from the class stringstream
	stringstream geek(s);

	// The object has the value from textBox and stream
	// it to the integer x
	int Updated_Q = 0;
	geek >> Updated_Q;

	int Updated_Q1 = Updated_Q - 1;


	String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" update user_database.stock set Available_quantity='" + Updated_Q1 + "' where ProductName='" + BMW_val + "' ; ", conDataBase);
	MySqlDataReader^ myReader;







	try {
		/*open my connection*/
		conDataBase->Open();
		/*my variable to wc i store the reader*/
		myReader = cmdDataBase->ExecuteReader();
		/*initialise my local variable to 0*/
		MessageBox::Show("Thank For buying our BMW");
		textBox_update_txt->Text = "";

		if (myReader->Read()) {



		}

	}

	catch (Exception^ex) {
		MessageBox::Show(ex->Message);

	}
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {


	String^ Lamborgini_val = Lamborgini_btn->Text;




	System::String^ Available_Q = textBox_update_txt->Text;
	std::string Middle_Q = msclr::interop::marshal_as<std::string>(Available_Q);


	string s = Middle_Q;

	// object from the class stringstream
	stringstream geek(s);

	// The object has the value from textBox and stream
	// it to the integer x
	int Updated_Q = 0;
	geek >> Updated_Q;

	int Updated_Q1 = Updated_Q - 1;


	String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" update user_database.stock set Available_quantity='" + Updated_Q1 + "' where ProductName='" + Lamborgini_val + "' ; ", conDataBase);
	MySqlDataReader^ myReader;







	try {
		/*open my connection*/
		conDataBase->Open();
		/*my variable to wc i store the reader*/
		myReader = cmdDataBase->ExecuteReader();
		/*initialise my local variable to 0*/
		MessageBox::Show("Thank For buying our Lamborgini");
		textBox_update_txt->Text = "";

		if (myReader->Read()) {



		}

	}

	catch (Exception^ex) {
		MessageBox::Show(ex->Message);

	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {


	String^ royceval = royce_royce_phantom_btn->Text;




	System::String^ Available_Q = textBox_update_txt->Text;
	std::string Middle_Q = msclr::interop::marshal_as<std::string>(Available_Q);


	string s = Middle_Q;

	// object from the class stringstream
	stringstream geek(s);

	// The object has the value from textBox and stream
	// it to the integer x
	int Updated_Q = 0;
	geek >> Updated_Q;

	int Updated_Q1 = Updated_Q - 1;


	String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" update user_database.stock set Available_quantity='" + Updated_Q1 + "' where ProductName='" + royceval + "' ; ", conDataBase);
	MySqlDataReader^ myReader;







	try {
		/*open my connection*/
		conDataBase->Open();
		/*my variable to wc i store the reader*/
		myReader = cmdDataBase->ExecuteReader();
		/*initialise my local variable to 0*/
		MessageBox::Show("Thank For buying our royce_royce_phantom");
		textBox_update_txt->Text = "";

		if (myReader->Read()) {



		}

	}

	catch (Exception^ex) {
		MessageBox::Show(ex->Message);

	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {


	String^ fxxk_val = ferrari_fxxk_btn->Text;




	System::String^ Available_Q = textBox_update_txt->Text;
	std::string Middle_Q = msclr::interop::marshal_as<std::string>(Available_Q);


	string s = Middle_Q;

	// object from the class stringstream
	stringstream geek(s);

	// The object has the value from textBox and stream
	// it to the integer x
	int Updated_Q = 0;
	geek >> Updated_Q;

	int Updated_Q1 = Updated_Q - 1;


	String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" update user_database.stock set Available_quantity='" + Updated_Q1 + "' where ProductName='" + fxxk_val + "' ; ", conDataBase);
	MySqlDataReader^ myReader;







	try {
		/*open my connection*/
		conDataBase->Open();
		/*my variable to wc i store the reader*/
		myReader = cmdDataBase->ExecuteReader();
		/*initialise my local variable to 0*/
		MessageBox::Show("Thank For buying our ferrari_fxxk");
		textBox_update_txt->Text = "";

		if (myReader->Read()) {



		}

	}

	catch (Exception^ex) {
		MessageBox::Show(ex->Message);

	}
}
};

}
