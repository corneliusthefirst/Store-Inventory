#pragma once

namespace inventory {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	//these are included for mail
	using namespace System::Web;
	using namespace System::Net::Mail;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
		{
			InitializeComponent();
		    FillList();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox_USERNAME;
	private: System::Windows::Forms::TextBox^  textBox_SMTP;

	protected:

	protected:

	private: System::Windows::Forms::TextBox^  textBox_SUBJECT;

	private: System::Windows::Forms::TextBox^  textBox_TO;

	private: System::Windows::Forms::TextBox^  textBox_PASSWORD;

	private: System::Windows::Forms::TextBox^  textBox_FROM;
	private: System::Windows::Forms::RichTextBox^  richTextBox_BODY;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ListBox^  listBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->textBox_USERNAME = (gcnew System::Windows::Forms::TextBox());
			this->textBox_SMTP = (gcnew System::Windows::Forms::TextBox());
			this->textBox_SUBJECT = (gcnew System::Windows::Forms::TextBox());
			this->textBox_TO = (gcnew System::Windows::Forms::TextBox());
			this->textBox_PASSWORD = (gcnew System::Windows::Forms::TextBox());
			this->textBox_FROM = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox_BODY = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// textBox_USERNAME
			// 
			this->textBox_USERNAME->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox_USERNAME->Location = System::Drawing::Point(92, 37);
			this->textBox_USERNAME->Name = L"textBox_USERNAME";
			this->textBox_USERNAME->Size = System::Drawing::Size(200, 20);
			this->textBox_USERNAME->TabIndex = 0;
			// 
			// textBox_SMTP
			// 
			this->textBox_SMTP->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox_SMTP->Location = System::Drawing::Point(92, 176);
			this->textBox_SMTP->Name = L"textBox_SMTP";
			this->textBox_SMTP->Size = System::Drawing::Size(200, 20);
			this->textBox_SMTP->TabIndex = 1;
			// 
			// textBox_SUBJECT
			// 
			this->textBox_SUBJECT->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox_SUBJECT->Location = System::Drawing::Point(92, 150);
			this->textBox_SUBJECT->Name = L"textBox_SUBJECT";
			this->textBox_SUBJECT->Size = System::Drawing::Size(200, 20);
			this->textBox_SUBJECT->TabIndex = 2;
			// 
			// textBox_TO
			// 
			this->textBox_TO->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox_TO->Location = System::Drawing::Point(92, 124);
			this->textBox_TO->Name = L"textBox_TO";
			this->textBox_TO->Size = System::Drawing::Size(200, 20);
			this->textBox_TO->TabIndex = 3;
			// 
			// textBox_PASSWORD
			// 
			this->textBox_PASSWORD->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox_PASSWORD->Location = System::Drawing::Point(92, 98);
			this->textBox_PASSWORD->Name = L"textBox_PASSWORD";
			this->textBox_PASSWORD->PasswordChar = '$';
			this->textBox_PASSWORD->Size = System::Drawing::Size(200, 20);
			this->textBox_PASSWORD->TabIndex = 4;
			// 
			// textBox_FROM
			// 
			this->textBox_FROM->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox_FROM->Location = System::Drawing::Point(92, 63);
			this->textBox_FROM->Name = L"textBox_FROM";
			this->textBox_FROM->Size = System::Drawing::Size(200, 20);
			this->textBox_FROM->TabIndex = 5;
			// 
			// richTextBox_BODY
			// 
			this->richTextBox_BODY->BackColor = System::Drawing::SystemColors::MenuText;
			this->richTextBox_BODY->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->richTextBox_BODY->Location = System::Drawing::Point(29, 227);
			this->richTextBox_BODY->Name = L"richTextBox_BODY";
			this->richTextBox_BODY->Size = System::Drawing::Size(366, 206);
			this->richTextBox_BODY->TabIndex = 6;
			this->richTextBox_BODY->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label1->Location = System::Drawing::Point(20, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"User name :";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm3::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label2->Location = System::Drawing::Point(20, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"From           :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label3->Location = System::Drawing::Point(26, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label4->Location = System::Drawing::Point(26, 131);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"To";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label5->Location = System::Drawing::Point(26, 157);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Subject";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label6->Location = System::Drawing::Point(26, 179);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"SMTP";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SlateBlue;
			this->button1->Location = System::Drawing::Point(349, 439);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 29);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Send Mail";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::Silver;
			this->listBox1->ForeColor = System::Drawing::Color::DarkMagenta;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(393, 49);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(211, 160);
			this->listBox1->TabIndex = 14;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm3::listBox1_SelectedIndexChanged);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(616, 470);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox_BODY);
			this->Controls->Add(this->textBox_FROM);
			this->Controls->Add(this->textBox_PASSWORD);
			this->Controls->Add(this->textBox_TO);
			this->Controls->Add(this->textBox_SUBJECT);
			this->Controls->Add(this->textBox_SMTP);
			this->Controls->Add(this->textBox_USERNAME);
			this->Name = L"MyForm3";
			this->Text = L"MyForm3";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm3_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	MailMessage^ mail = gcnew MailMessage(textBox_FROM->Text, textBox_TO->Text, textBox_SUBJECT->Text, richTextBox_BODY->Text);

	//declaring the smtp client
	//SmtpServer = smtp.company.com; Ex: Gmail = smtp.gmail.com
	SmtpClient^ client = gcnew SmtpClient(textBox_SMTP->Text);
	//port 587 is the the prefered port for mail submission.Port 25 is widely abused by malwares as a result many ISPS are restricting it use.

	client->Port = 587;
	//setting my credential that is name and password
	client->Credentials = gcnew System::Net::NetworkCredential(textBox_USERNAME->Text, textBox_PASSWORD->Text);
	//Port 587 allows you to use a ssl connection

	client->EnableSsl = true;
	//up is what enables a secure Ssl connection
	client->Send(mail);
	MessageBox::Show("Mail Sent!","Success",MessageBoxButtons::OK);

} 



	private: void FillList(void) {



		String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from user_database.email ;", conDataBase);
		MySqlDataReader^ myReader;

		try {
			/*open my connection*/
			conDataBase->Open();
			/*my variable to wc i store the reader*/
			myReader = cmdDataBase->ExecuteReader();
			/*initialise my local variable to 0*/

			String^ CLIENT_NAME = " Client Name";
			String^ CLIENT_EMAIL = " Client Email";

			listBox1->Items->Add(CLIENT_NAME + "    " + CLIENT_EMAIL);

			while (myReader->Read()) {
				String^ vclient_name;
				vclient_name = myReader-> GetString ("client_name");
				//listBox1->Items->Add(vclient_name);

				String^ vclient_email;
				vclient_email = myReader-> GetString ("client_email");
				
		
		listBox1->Items -> Add(vclient_name+"           "+vclient_email);

			}

		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);

		}

	}

private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
