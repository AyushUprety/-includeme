#pragma once
// to do attendance
#include"MyForm15.h"
//to check attendance
#include"MyForm16.h"
#
//#include <msclr\marshal_cppstd.h>
//#include "..\\..\\..\\..\\..\\include\\ClassLib\\ltWrappr.h"


namespace Includeme {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//to connect to database
	using namespace MySql::Data::MySqlClient;
	//for image saving hai guys haru
	//using namespace System::IO;

	/// <summary>
	/// Summary for MyForm13
	/// </summary>
	public ref class MyForm13 : public System::Windows::Forms::Form
	{

	public:
		MyForm13(void)
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
		~MyForm13()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Button^ image1;
	private: System::Windows::Forms::PictureBox^ image2;



	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ imagelocation;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::Splitter^ splitter2;

	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm13::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->imagelocation = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->image1 = (gcnew System::Windows::Forms::Button());
			this->image2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->splitter2 = (gcnew System::Windows::Forms::Splitter());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->image2))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-2, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(160, 114);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(-2, 342);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(332, 382);
			this->panel1->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(83, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(191, 41);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Attendance";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(38, 278);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(258, 95);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Check Attendance";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm13::Button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(38, 132);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(258, 89);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Do Attendance";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm13::Button1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->imagelocation);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->image1);
			this->panel2->Controls->Add(this->image2);
			this->panel2->Location = System::Drawing::Point(330, 342);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(374, 388);
			this->panel2->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(79, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(193, 41);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Assignment";
			// 
			// imagelocation
			// 
			this->imagelocation->Location = System::Drawing::Point(41, 278);
			this->imagelocation->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->imagelocation->Name = L"imagelocation";
			this->imagelocation->Size = System::Drawing::Size(286, 26);
			this->imagelocation->TabIndex = 7;
			this->imagelocation->TextChanged += gcnew System::EventHandler(this, &MyForm13::Imagelocation_TextChanged);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(196, 325);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(178, 57);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Save";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm13::Button3_Click_1);
			// 
			// image1
			// 
			this->image1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->image1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->image1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->image1->Location = System::Drawing::Point(8, 323);
			this->image1->Name = L"image1";
			this->image1->Size = System::Drawing::Size(178, 57);
			this->image1->TabIndex = 5;
			this->image1->Text = L"Browse";
			this->image1->UseVisualStyleBackColor = false;
			this->image1->Click += gcnew System::EventHandler(this, &MyForm13::Button3_Click);
			// 
			// image2
			// 
			this->image2->BackColor = System::Drawing::Color::White;
			this->image2->Location = System::Drawing::Point(39, 89);
			this->image2->Name = L"image2";
			this->image2->Size = System::Drawing::Size(288, 165);
			this->image2->TabIndex = 4;
			this->image2->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->textBox5);
			this->panel3->Controls->Add(this->richTextBox1);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Location = System::Drawing::Point(704, 343);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(376, 380);
			this->panel3->TabIndex = 10;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm13::Panel3_Paint);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(-4, 35);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 41);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Date : -";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(33, 88);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 41);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Notice";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(130, 35);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(232, 39);
			this->textBox5->TabIndex = 6;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(24, 138);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(314, 169);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm13::RichTextBox1_TextChanged);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(68, 328);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(258, 57);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Publish";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm13::Button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(164, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(742, 48);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Welcome to Teacher Login Page";
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(3, 749);
			this->splitter1->TabIndex = 12;
			this->splitter1->TabStop = false;
			// 
			// splitter2
			// 
			this->splitter2->Location = System::Drawing::Point(3, 0);
			this->splitter2->Name = L"splitter2";
			this->splitter2->Size = System::Drawing::Size(3, 749);
			this->splitter2->TabIndex = 13;
			this->splitter2->TabStop = false;
			// 
			// MyForm13
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::GhostWhite;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1076, 749);
			this->Controls->Add(this->splitter2);
			this->Controls->Add(this->splitter1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->MaximumSize = System::Drawing::Size(1098, 891);
			this->MinimumSize = System::Drawing::Size(1098, 727);
			this->Name = L"MyForm13";
			this->Text = L"Teacher Login";
			this->Load += gcnew System::EventHandler(this, &MyForm13::MyForm13_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->image2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm13_Load(System::Object^ sender, System::EventArgs^ e) {
	}
			 // yo bata chai photo halney hai 
	private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {

		try

		{

			OpenFileDialog^ dialog = gcnew OpenFileDialog();



			if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)

			{
				//string picPath = msclr::interop::marshal_as<std::string>(dialog->FileName->ToString());

				imagelocation->Text = dialog->FileName->ToString();
				//MessageBox::Show(imagelocation->ToString());

				//imagelocation->Text = picPath;



				image2->Image = Image::FromFile(dialog->FileName);

				//image2->Image= picPath;



			}

		}

		catch (exception) {

			MessageBox::Show("an error occur", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}

	}

	private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
		// yo bata chai teacher ko notice aaucha
		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=includemecpp1";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			String^ Date = textBox5->Text;
			String^ Notice = richTextBox1->Text;


			MySqlCommand^ cmd = gcnew MySqlCommand("insert into notice_teacher values('" + Date + "','" + Notice + "')", con);
			MySqlDataReader^ dr;
			if (Date == "")
			{
				MessageBox::Show("please enter date");

			}

			else
			{
				con->Open();

				dr = cmd->ExecuteReader();
				textBox5->Text = "";

				richTextBox1->Text = "";
				MessageBox::Show("notice saved");

			}



		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);


		}
	}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm15^ f15 = gcnew MyForm15();
		f15->ShowDialog();
	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm16^ f16 = gcnew MyForm16();
		f16->ShowDialog();

	}
	private: System::Void RichTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		// yaa baata xai imge file ko location database ma save garni
	}
	private: System::Void Button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=image_file";

			MySqlConnection^ con = gcnew MySqlConnection(constr);

			String^ image = imagelocation->Text;

			//string *aa = image;
			String^ updatedString = gcnew String("");
			int i = 0;
			while (i < image->Length) {
				if (image[i] == '\\') {
					updatedString += "\\\\\\\\";
				}
				else {
					updatedString += image[i];
				}
				i++;
			}
	

		

			MySqlCommand^ cmd = gcnew MySqlCommand("insert into assignment values('" + updatedString + "')", con);

			MySqlDataReader^ dr;

			con->Open();

			dr = cmd->ExecuteReader();

			MessageBox::Show("image file saved");
		}
		catch (const std::exception&)
		{

		}

	}
	private: System::Void Imagelocation_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
