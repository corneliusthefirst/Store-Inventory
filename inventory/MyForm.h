#pragma once
#include "stdafx.h"
#include "MyForm1.h"

namespace inventory {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;/*important and use for references*/

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
	private: System::Windows::Forms::Button^  button1;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^  username_txt;
	private: System::Windows::Forms::TextBox^  password_txt;


	private: System::Windows::Forms::Label^  username_lbl;
	private: System::Windows::Forms::Label^  password_lbl;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->username_txt = (gcnew System::Windows::Forms::TextBox());
			this->password_txt = (gcnew System::Windows::Forms::TextBox());
			this->username_lbl = (gcnew System::Windows::Forms::Label());
			this->password_lbl = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Wheat;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(108, 82);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Login";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// username_txt
			// 
			this->username_txt->Location = System::Drawing::Point(74, 15);
			this->username_txt->Name = L"username_txt";
			this->username_txt->Size = System::Drawing::Size(170, 20);
			this->username_txt->TabIndex = 1;
			// 
			// password_txt
			// 
			this->password_txt->Location = System::Drawing::Point(74, 47);
			this->password_txt->MaxLength = 15;
			this->password_txt->Name = L"password_txt";
			this->password_txt->PasswordChar = '$';
			this->password_txt->Size = System::Drawing::Size(170, 20);
			this->password_txt->TabIndex = 2;
			this->password_txt->TextChanged += gcnew System::EventHandler(this, &MyForm::password_txt_TextChanged);
			// 
			// username_lbl
			// 
			this->username_lbl->AutoSize = true;
			this->username_lbl->Location = System::Drawing::Point(15, 18);
			this->username_lbl->Name = L"username_lbl";
			this->username_lbl->Size = System::Drawing::Size(53, 13);
			this->username_lbl->TabIndex = 3;
			this->username_lbl->Text = L"username";
			// 
			// password_lbl
			// 
			this->password_lbl->AutoSize = true;
			this->password_lbl->Location = System::Drawing::Point(20, 50);
			this->password_lbl->Name = L"password_lbl";
			this->password_lbl->Size = System::Drawing::Size(53, 13);
			this->password_lbl->TabIndex = 4;
			this->password_lbl->Text = L"Password";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->password_txt);
			this->groupBox1->Controls->Add(this->password_lbl);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->username_lbl);
			this->groupBox1->Controls->Add(this->username_txt);
			this->groupBox1->Location = System::Drawing::Point(354, 73);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(261, 121);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"sign In";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(336, 333);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ClientSize = System::Drawing::Size(624, 369);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->ForeColor = System::Drawing::Color::Black;
			this->Name = L"MyForm";
			this->Text = L"                 LOGIN TO INVENTORY";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
            
		String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from user_database.edata where user_name='"+this->username_txt->Text+"' and password='"+this->password_txt->Text+"'  ;", conDataBase);
		MySqlDataReader^ myReader;
		
		try {
			/*open my connection*/
			conDataBase->Open();
			/*my variable to wc i store the reader*/
			myReader = cmdDataBase->ExecuteReader();
			/*initialise my local variable to 0*/
			int count = 0;
			while (myReader->Read()) {
				count = count + 1;	
			}
			if (count == 1) {
				MessageBox::Show("user name and password is correct");
				/*hear i hide the first form*/
				this->Hide();
				MyForm1^ f2 = gcnew MyForm1;
				/*show the second form*/
				f2->ShowDialog();
			}
			else if (count > 1) {
				MessageBox::Show("Duplicate user name and password ... access denied");

			}else
				MessageBox::Show("user name and password are not correct ..Please try again");

		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		 
		}

	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

    
	}

private: System::Void password_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
