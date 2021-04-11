#pragma once


namespace inventory {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  Eid_txt;
	private: System::Windows::Forms::TextBox^  Age_txt;
	private: System::Windows::Forms::TextBox^  User_name_txt;
	private: System::Windows::Forms::TextBox^  Password_txt;
	private: System::Windows::Forms::TextBox^  Surname_txt;
	private: System::Windows::Forms::TextBox^  Name_txt;
	private: System::Windows::Forms::Button^  user_btn;

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  Price_txt;

	private: System::Windows::Forms::TextBox^  ProductName_txt;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  Available_Quantity_txt;


	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;




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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Eid_txt = (gcnew System::Windows::Forms::TextBox());
			this->Age_txt = (gcnew System::Windows::Forms::TextBox());
			this->User_name_txt = (gcnew System::Windows::Forms::TextBox());
			this->Password_txt = (gcnew System::Windows::Forms::TextBox());
			this->Surname_txt = (gcnew System::Windows::Forms::TextBox());
			this->Name_txt = (gcnew System::Windows::Forms::TextBox());
			this->user_btn = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Price_txt = (gcnew System::Windows::Forms::TextBox());
			this->ProductName_txt = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Available_Quantity_txt = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Eid              :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name          :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Surname      :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 120);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Age              :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(26, 147);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"User_name  :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(26, 179);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Password     :";
			// 
			// Eid_txt
			// 
			this->Eid_txt->Location = System::Drawing::Point(105, 31);
			this->Eid_txt->Name = L"Eid_txt";
			this->Eid_txt->Size = System::Drawing::Size(138, 20);
			this->Eid_txt->TabIndex = 6;
			// 
			// Age_txt
			// 
			this->Age_txt->Location = System::Drawing::Point(105, 117);
			this->Age_txt->Name = L"Age_txt";
			this->Age_txt->Size = System::Drawing::Size(138, 20);
			this->Age_txt->TabIndex = 7;
			// 
			// User_name_txt
			// 
			this->User_name_txt->Location = System::Drawing::Point(105, 144);
			this->User_name_txt->Name = L"User_name_txt";
			this->User_name_txt->Size = System::Drawing::Size(138, 20);
			this->User_name_txt->TabIndex = 8;
			// 
			// Password_txt
			// 
			this->Password_txt->Location = System::Drawing::Point(105, 176);
			this->Password_txt->Name = L"Password_txt";
			this->Password_txt->Size = System::Drawing::Size(138, 20);
			this->Password_txt->TabIndex = 9;
			// 
			// Surname_txt
			// 
			this->Surname_txt->Location = System::Drawing::Point(105, 87);
			this->Surname_txt->Name = L"Surname_txt";
			this->Surname_txt->Size = System::Drawing::Size(138, 20);
			this->Surname_txt->TabIndex = 10;
			// 
			// Name_txt
			// 
			this->Name_txt->Location = System::Drawing::Point(105, 57);
			this->Name_txt->Name = L"Name_txt";
			this->Name_txt->Size = System::Drawing::Size(138, 20);
			this->Name_txt->TabIndex = 11;
			// 
			// user_btn
			// 
			this->user_btn->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->user_btn->Location = System::Drawing::Point(78, 214);
			this->user_btn->Name = L"user_btn";
			this->user_btn->Size = System::Drawing::Size(120, 28);
			this->user_btn->TabIndex = 12;
			this->user_btn->Text = L"Add New User";
			this->user_btn->UseVisualStyleBackColor = false;
			this->user_btn->Click += gcnew System::EventHandler(this, &MyForm2::user_btn_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(290, 45);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(326, 247);
			this->dataGridView1->TabIndex = 14;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm2::dataGridView1_CellContentClick);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->button2->Location = System::Drawing::Point(290, 334);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 30);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Add New Stock";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// Price_txt
			// 
			this->Price_txt->Location = System::Drawing::Point(128, 316);
			this->Price_txt->Name = L"Price_txt";
			this->Price_txt->Size = System::Drawing::Size(141, 20);
			this->Price_txt->TabIndex = 17;
			this->Price_txt->TextChanged += gcnew System::EventHandler(this, &MyForm2::Price_txt_TextChanged);
			// 
			// ProductName_txt
			// 
			this->ProductName_txt->Location = System::Drawing::Point(128, 290);
			this->ProductName_txt->Name = L"ProductName_txt";
			this->ProductName_txt->Size = System::Drawing::Size(141, 20);
			this->ProductName_txt->TabIndex = 18;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button3->Location = System::Drawing::Point(388, 6);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(139, 33);
			this->button3->TabIndex = 19;
			this->button3->Text = L"View Available Stock";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(26, 290);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(96, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Product Name      :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(26, 319);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(96, 13);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Price for One        :";
			// 
			// Available_Quantity_txt
			// 
			this->Available_Quantity_txt->Location = System::Drawing::Point(128, 342);
			this->Available_Quantity_txt->Name = L"Available_Quantity_txt";
			this->Available_Quantity_txt->Size = System::Drawing::Size(141, 20);
			this->Available_Quantity_txt->TabIndex = 22;
			this->Available_Quantity_txt->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox1_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(25, 350);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 13);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Availaible Quantity:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::DarkOrange;
			this->label10->Location = System::Drawing::Point(75, 6);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(145, 13);
			this->label10->TabIndex = 24;
			this->label10->Text = L"---> Fill Here The User Details";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::DarkOrange;
			this->label11->Location = System::Drawing::Point(75, 260);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(151, 13);
			this->label11->TabIndex = 25;
			this->label11->Text = L"---> Fill Here The Stock Details";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ClientSize = System::Drawing::Size(646, 374);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Available_Quantity_txt);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->ProductName_txt);
			this->Controls->Add(this->Price_txt);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->user_btn);
			this->Controls->Add(this->Name_txt);
			this->Controls->Add(this->Surname_txt);
			this->Controls->Add(this->Password_txt);
			this->Controls->Add(this->User_name_txt);
			this->Controls->Add(this->Age_txt);
			this->Controls->Add(this->Eid_txt);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm2";
			this->Text = L"Add New User / View Available Stock";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void user_btn_Click(System::Object^  sender, System::EventArgs^  e) {



		String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into  user_database.edata (Eid,name,surname,age,user_name,password) values ('" + this->Eid_txt->Text + "','" + this->Name_txt->Text + "','" + this->Surname_txt->Text + "','" + this->Age_txt->Text + "','" + this->User_name_txt->Text + "','" + this->Password_txt->Text + "');", conDataBase);
		MySqlDataReader^ myReader;

		try {
			/*open my connection*/
			conDataBase->Open();
			/*my variable to wc i store the reader*/
			myReader = cmdDataBase->ExecuteReader();
			/*initialise my local variable to 0*/

			MessageBox::Show("New User Saved");

			Eid_txt->Text = "";
			Name_txt->Text = "";
			Surname_txt->Text = "";
			Age_txt->Text = "";
			User_name_txt->Text = "";
			Password_txt->Text = "";


			while (myReader->Read()) {

			}

		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);

		}
	}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
     
	
//	Application::Exit();
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {




	String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into  user_database.stock (ProductName,Price,Available_quantity) values ('" + this->ProductName_txt->Text + "','" + this->Price_txt->Text + "','" + this->Available_Quantity_txt->Text + "');", conDataBase);
	MySqlDataReader^ myReader;

	try {
		/*open my connection*/
		conDataBase->Open();
		/*my variable to wc i store the reader*/
		myReader = cmdDataBase->ExecuteReader();
		/*initialise my local variable to 0*/

		MessageBox::Show("New Stock Saved");

		ProductName_txt->Text = "";
		Price_txt->Text = "";
		Available_Quantity_txt->Text = "";

		while (myReader->Read()) {

		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);

	}



}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {


	String^ constring = L"datasource=localhost;port=3306;username=root;password=jugal98;SslMode=none";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	/*selecting from database what is collected from textbox e.g this->username->Text for comparison*/
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from user_database.stock ;", conDataBase);
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
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Price_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
}

};
}
