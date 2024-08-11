#pragma once

namespace LoginSignup32 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Receipt
	/// </summary>
	public ref class Receipt : public System::Windows::Forms::Form
	{
	public:
		Receipt(void)
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
		~Receipt()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ lblTrank;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ lblStrand;
	private: System::Windows::Forms::GroupBox^ groupBox9;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::Label^ lblCourse;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::Label^ lblCampus;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Label^ lblLRN;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ lblGender;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ lblFullname;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ btnSave;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Receipt::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->lblTrank = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->lblStrand = (gcnew System::Windows::Forms::Label());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->lblCourse = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->lblCampus = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->lblLRN = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->lblGender = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->lblFullname = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnSave);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->groupBox5);
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->groupBox9);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->groupBox8);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->groupBox7);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->groupBox6);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(198, 73);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(912, 522);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(414, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 45);
			this->label1->TabIndex = 26;
			this->label1->Text = L"EDIT";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(588, 124);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(251, 255);
			this->pictureBox1->TabIndex = 25;
			this->pictureBox1->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(330, 214);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(45, 19);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Track";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(171, 213);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 19);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Strand";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->lblTrank);
			this->groupBox5->Location = System::Drawing::Point(334, 168);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(124, 43);
			this->groupBox5->TabIndex = 21;
			this->groupBox5->TabStop = false;
			// 
			// lblTrank
			// 
			this->lblTrank->AutoSize = true;
			this->lblTrank->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTrank->Location = System::Drawing::Point(7, 13);
			this->lblTrank->Name = L"lblTrank";
			this->lblTrank->Size = System::Drawing::Size(0, 23);
			this->lblTrank->TabIndex = 0;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->lblStrand);
			this->groupBox4->Location = System::Drawing::Point(175, 168);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(131, 43);
			this->groupBox4->TabIndex = 22;
			this->groupBox4->TabStop = false;
			// 
			// lblStrand
			// 
			this->lblStrand->AutoSize = true;
			this->lblStrand->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblStrand->Location = System::Drawing::Point(7, 13);
			this->lblStrand->Name = L"lblStrand";
			this->lblStrand->Size = System::Drawing::Size(0, 23);
			this->lblStrand->TabIndex = 0;
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->label3);
			this->groupBox9->Location = System::Drawing::Point(289, 336);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(169, 49);
			this->groupBox9->TabIndex = 20;
			this->groupBox9->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(6, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 23);
			this->label3->TabIndex = 0;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(289, 388);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(145, 19);
			this->label4->TabIndex = 19;
			this->label4->Text = L"College Department";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->lblCourse);
			this->groupBox8->Location = System::Drawing::Point(61, 420);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(397, 49);
			this->groupBox8->TabIndex = 18;
			this->groupBox8->TabStop = false;
			// 
			// lblCourse
			// 
			this->lblCourse->AutoSize = true;
			this->lblCourse->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCourse->Location = System::Drawing::Point(6, 16);
			this->lblCourse->Name = L"lblCourse";
			this->lblCourse->Size = System::Drawing::Size(0, 23);
			this->lblCourse->TabIndex = 0;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(57, 472);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(55, 19);
			this->label15->TabIndex = 17;
			this->label15->Text = L"Course";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->lblCampus);
			this->groupBox7->Location = System::Drawing::Point(61, 336);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(169, 49);
			this->groupBox7->TabIndex = 16;
			this->groupBox7->TabStop = false;
			// 
			// lblCampus
			// 
			this->lblCampus->AutoSize = true;
			this->lblCampus->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCampus->Location = System::Drawing::Point(6, 16);
			this->lblCampus->Name = L"lblCampus";
			this->lblCampus->Size = System::Drawing::Size(0, 23);
			this->lblCampus->TabIndex = 0;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(57, 388);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(62, 19);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Campus";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->lblLRN);
			this->groupBox6->Location = System::Drawing::Point(61, 252);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(397, 49);
			this->groupBox6->TabIndex = 13;
			this->groupBox6->TabStop = false;
			// 
			// lblLRN
			// 
			this->lblLRN->AutoSize = true;
			this->lblLRN->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLRN->Location = System::Drawing::Point(6, 16);
			this->lblLRN->Name = L"lblLRN";
			this->lblLRN->Size = System::Drawing::Size(0, 23);
			this->lblLRN->TabIndex = 0;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(57, 304);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(199, 19);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Learners Reference Number";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(57, 214);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 19);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Sex";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->lblGender);
			this->groupBox3->Location = System::Drawing::Point(61, 168);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(96, 43);
			this->groupBox3->TabIndex = 12;
			this->groupBox3->TabStop = false;
			this->groupBox3->Enter += gcnew System::EventHandler(this, &Receipt::groupBox3_Enter);
			// 
			// lblGender
			// 
			this->lblGender->AutoSize = true;
			this->lblGender->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGender->Location = System::Drawing::Point(7, 13);
			this->lblGender->Name = L"lblGender";
			this->lblGender->Size = System::Drawing::Size(0, 23);
			this->lblGender->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->lblFullname);
			this->groupBox2->Location = System::Drawing::Point(61, 72);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(397, 49);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			// 
			// lblFullname
			// 
			this->lblFullname->AutoSize = true;
			this->lblFullname->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFullname->Location = System::Drawing::Point(6, 16);
			this->lblFullname->Name = L"lblFullname";
			this->lblFullname->Size = System::Drawing::Size(0, 23);
			this->lblFullname->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(57, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 19);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Full Name";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(1118, 31);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 13);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Necessities";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(1066, 31);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Reciept";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->ForeColor = System::Drawing::Color::Yellow;
			this->label10->Location = System::Drawing::Point(954, 31);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(106, 13);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Applicant Information";
			// 
			// btnSave
			// 
			this->btnSave->BackColor = System::Drawing::Color::RoyalBlue;
			this->btnSave->FlatAppearance->BorderSize = 0;
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->ForeColor = System::Drawing::Color::White;
			this->btnSave->Location = System::Drawing::Point(658, 420);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(122, 39);
			this->btnSave->TabIndex = 27;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = false;
			// 
			// Receipt
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1318, 607);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->groupBox1);
			this->DoubleBuffered = true;
			this->Name = L"Receipt";
			this->Text = L"Receipt";
			this->Load += gcnew System::EventHandler(this, &Receipt::Receipt_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Receipt_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
