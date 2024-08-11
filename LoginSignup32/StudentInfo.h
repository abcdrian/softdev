#pragma once

namespace LoginSignup32 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for StudentInfo
	/// </summary>
	public ref class StudentInfo : public System::Windows::Forms::Form
	{
	public:
		StudentInfo(void)
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
		~StudentInfo()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txbSurname;

	private: System::Windows::Forms::ComboBox^ cbGender;
	private: System::Windows::Forms::ComboBox^ cbTrack;
	private: System::Windows::Forms::TextBox^ cbLRN;







	private: System::Windows::Forms::ComboBox^ cbStrand;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txbFirstname;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txbMiddlename;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ cbCollege;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::PictureBox^ picturebox1;
	private: System::Windows::Forms::ComboBox^ cbCourse;


	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::ComboBox^ cbCampus;

	private: System::Windows::Forms::Label^ label7;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentInfo::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txbSurname = (gcnew System::Windows::Forms::TextBox());
			this->cbGender = (gcnew System::Windows::Forms::ComboBox());
			this->cbStrand = (gcnew System::Windows::Forms::ComboBox());
			this->cbTrack = (gcnew System::Windows::Forms::ComboBox());
			this->cbLRN = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txbFirstname = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txbMiddlename = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->cbCampus = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cbCourse = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->picturebox1 = (gcnew System::Windows::Forms::PictureBox());
			this->cbCollege = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(310, -30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(342, 120);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Student Form";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &StudentInfo::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(73, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Surname";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(77, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 18);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Sex";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(243, 166);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 18);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Strand";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(406, 166);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 18);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Track";
			this->label5->Click += gcnew System::EventHandler(this, &StudentInfo::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(73, 252);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(205, 18);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Learners Reference Number";
			this->label6->Click += gcnew System::EventHandler(this, &StudentInfo::label6_Click);
			// 
			// txbSurname
			// 
			this->txbSurname->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbSurname->Location = System::Drawing::Point(71, 112);
			this->txbSurname->Multiline = true;
			this->txbSurname->Name = L"txbSurname";
			this->txbSurname->Size = System::Drawing::Size(138, 33);
			this->txbSurname->TabIndex = 8;
			this->txbSurname->TextChanged += gcnew System::EventHandler(this, &StudentInfo::textBox1_TextChanged);
			// 
			// cbGender
			// 
			this->cbGender->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbGender->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbGender->FormattingEnabled = true;
			this->cbGender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->cbGender->Location = System::Drawing::Point(71, 188);
			this->cbGender->Name = L"cbGender";
			this->cbGender->Size = System::Drawing::Size(138, 26);
			this->cbGender->TabIndex = 9;
			// 
			// cbStrand
			// 
			this->cbStrand->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbStrand->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbStrand->FormattingEnabled = true;
			this->cbStrand->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"ICT ", L"ABM", L"STEM", L"HE" });
			this->cbStrand->Location = System::Drawing::Point(237, 188);
			this->cbStrand->Name = L"cbStrand";
			this->cbStrand->Size = System::Drawing::Size(138, 26);
			this->cbStrand->TabIndex = 10;
			// 
			// cbTrack
			// 
			this->cbTrack->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbTrack->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbTrack->FormattingEnabled = true;
			this->cbTrack->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"TVL", L"TECHVOC" });
			this->cbTrack->Location = System::Drawing::Point(400, 188);
			this->cbTrack->Name = L"cbTrack";
			this->cbTrack->Size = System::Drawing::Size(138, 26);
			this->cbTrack->TabIndex = 11;
			this->cbTrack->SelectedIndexChanged += gcnew System::EventHandler(this, &StudentInfo::comboBox3_SelectedIndexChanged);
			// 
			// cbLRN
			// 
			this->cbLRN->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbLRN->Location = System::Drawing::Point(71, 273);
			this->cbLRN->Name = L"cbLRN";
			this->cbLRN->Size = System::Drawing::Size(467, 26);
			this->cbLRN->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Blue;
			this->button1->Location = System::Drawing::Point(737, 392);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 46);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Confirm";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StudentInfo::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(737, 365);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(155, 21);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Browse Image";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &StudentInfo::button2_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(690, 95);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(231, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"2x2 with Name and Signature Blue Background";
			// 
			// txbFirstname
			// 
			this->txbFirstname->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbFirstname->Location = System::Drawing::Point(237, 112);
			this->txbFirstname->Multiline = true;
			this->txbFirstname->Name = L"txbFirstname";
			this->txbFirstname->Size = System::Drawing::Size(138, 33);
			this->txbFirstname->TabIndex = 19;
			this->txbFirstname->TextChanged += gcnew System::EventHandler(this, &StudentInfo::textBox3_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::White;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(239, 90);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(85, 18);
			this->label9->TabIndex = 18;
			this->label9->Text = L"First Name";
			// 
			// txbMiddlename
			// 
			this->txbMiddlename->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbMiddlename->Location = System::Drawing::Point(400, 112);
			this->txbMiddlename->Multiline = true;
			this->txbMiddlename->Name = L"txbMiddlename";
			this->txbMiddlename->Size = System::Drawing::Size(138, 33);
			this->txbMiddlename->TabIndex = 21;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::White;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(402, 90);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(84, 18);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Last Name";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->cbCampus);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->cbCourse);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->picturebox1);
			this->panel1->Controls->Add(this->cbCollege);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->txbMiddlename);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->txbFirstname);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->cbLRN);
			this->panel1->Controls->Add(this->cbTrack);
			this->panel1->Controls->Add(this->cbStrand);
			this->panel1->Controls->Add(this->cbGender);
			this->panel1->Controls->Add(this->txbSurname);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(159, 72);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(970, 539);
			this->panel1->TabIndex = 22;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentInfo::panel1_Paint);
			// 
			// cbCampus
			// 
			this->cbCampus->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbCampus->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbCampus->FormattingEnabled = true;
			this->cbCampus->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Boni ", L"Pasig" });
			this->cbCampus->Location = System::Drawing::Point(71, 488);
			this->cbCampus->Name = L"cbCampus";
			this->cbCampus->Size = System::Drawing::Size(138, 26);
			this->cbCampus->TabIndex = 30;
			this->cbCampus->SelectedIndexChanged += gcnew System::EventHandler(this, &StudentInfo::comboBox4_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::White;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(73, 467);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(130, 18);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Campus Intended";
			this->label7->Click += gcnew System::EventHandler(this, &StudentInfo::label7_Click_1);
			// 
			// cbCourse
			// 
			this->cbCourse->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbCourse->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbCourse->FormattingEnabled = true;
			this->cbCourse->Items->AddRange(gcnew cli::array< System::Object^  >(42) {
				L"Bachelor of Science in Mechanical Engineering",
					L"Bachelor of Science in Architecture (Boni Campus)", L"Bachelor of Science in Civil Engineering", L"Bachelor of Science in Electrical Engineering",
					L"Bachelor of Science in Electronics Engineering", L"Bachelor of Science in Computer Engineering", L"Bachelor of Science in Industrial Engineering (Boni Campus)",
					L"Bachelor of Science in Information Technology (Boni Campus)", L"Bachelor of Science in Instrumentation and Control Engineering (Boni Campus) ",
					L"Bachelor of Science in Mechatronics", L"", L"", L"Bachelor of Science in Accountancy", L"Bachelor of Science in Entrepreneurship",
					L"Bachelor of Science in Office Administration", L"Bachelor of Science in Business Administration major in Operations Management",
					L"Bachelor of Science in Business Administration major in Marketing Management", L"Bachelor of Science in Business Administration major in Financial Management",
					L"Bachelor of Science in Business Administration major in Human Resource Management"
					L"", L"", L"", L"Bachelor of Secondary Education major in English",
					L"Bachelor of Secondary Education major in Math", L"Bachelor of  Secondary Education major in Science (Boni Campus)", L"Bachelor of Secondary Education major in Social Studies",
					L"Bachelor of Secondary Education Major in Filipino ", L"Bachelor of Technical-Vocational Teacher Education major in Animation",
					L"Bachelor of Technical-Vocational Teacher Education major in Computer Hardware Ser"
					L"vicing", L"Bachelor of Technical-Vocational Teacher Education major in Visual Graphic Design"
					L"",
					L"Bachelor or Technical-Vocational Teacher Education Major in Garments Fashion and "
					L"Design", L"Bachelor or Technical-Vocational Teacher Education Major in Electronics Technolog"
					L"y",
					L"Bachelor or Technical-Vocational Teacher Education Major in Welding and Fabricati"
					L"ons Technology", L"", L"", L"Bachelor of Science in Psychology",
					L"Bachelor of Arts in Political Science", L"Bachelor of Science in Statistics (Boni Campus)", L"Bachelor of Science in Biology (Boni Campus)",
					L"Bachelor of Science in Astronomy", L"", L"", L"Bachelor of Science in Physical Education (Boni Campus)"
			});
			this->cbCourse->Location = System::Drawing::Point(71, 420);
			this->cbCourse->Name = L"cbCourse";
			this->cbCourse->Size = System::Drawing::Size(467, 26);
			this->cbCourse->TabIndex = 28;
			this->cbCourse->SelectedIndexChanged += gcnew System::EventHandler(this, &StudentInfo::comboBox6_SelectedIndexChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::White;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(73, 399);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(122, 18);
			this->label13->TabIndex = 27;
			this->label13->Text = L"Course Intended";
			// 
			// picturebox1
			// 
			this->picturebox1->Location = System::Drawing::Point(693, 128);
			this->picturebox1->Name = L"picturebox1";
			this->picturebox1->Size = System::Drawing::Size(228, 202);
			this->picturebox1->TabIndex = 26;
			this->picturebox1->TabStop = false;
			this->picturebox1->Click += gcnew System::EventHandler(this, &StudentInfo::picturebox1_Click);
			// 
			// cbCollege
			// 
			this->cbCollege->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbCollege->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbCollege->FormattingEnabled = true;
			this->cbCollege->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"CEA", L"CBEA", L"CED", L"CAS", L"IHK" });
			this->cbCollege->Location = System::Drawing::Point(71, 349);
			this->cbCollege->Name = L"cbCollege";
			this->cbCollege->Size = System::Drawing::Size(467, 26);
			this->cbCollege->TabIndex = 25;
			this->cbCollege->SelectedIndexChanged += gcnew System::EventHandler(this, &StudentInfo::comboBox5_SelectedIndexChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::White;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(73, 328);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(148, 18);
			this->label12->TabIndex = 24;
			this->label12->Text = L"College Department";
			this->label12->Click += gcnew System::EventHandler(this, &StudentInfo::label12_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label11->Location = System::Drawing::Point(377, 42);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(207, 18);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Fill out the information below.";
			// 
			// StudentInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1224, 632);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->Name = L"StudentInfo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudentInfo";
			this->Load += gcnew System::EventHandler(this, &StudentInfo::StudentInfo_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox1))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion
	private: System::Void StudentInfo_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
		openFileDialog->Filter = "Image Files|*.jpg;*.jpeg;*.png;*.gif;*.bmp|All Files|*.*";
		openFileDialog->FilterIndex = 1;
		openFileDialog->RestoreDirectory = true;

		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ filepath = openFileDialog->FileName;

			try
			{
				picturebox1->Image = Image::FromFile(filepath);
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error: Could not read the image file. Original error: " + ex->Message);
			}
			
		}
	}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ Surname;
	String^ Firstname;
	String^ Middlename;
	String^ Gender;
	String^ Strand;
	String^ Track;
	String^ LRN;
	String^ Campus;
	String^ Course;
	String^ College;

	bool isValid = true;
	
	if (txbSurname->Text->Trim()->Length > 1) Surname = txbSurname->Text;
	else isValid = false;

	if (txbFirstname->Text->Trim()->Length > 1) Firstname = txbFirstname->Text;
	else isValid = false;

	if (txbMiddlename->Text->Trim()->Length > 1) Middlename = txbMiddlename->Text;
	else isValid = false;

	Gender = cbGender->Text;
	Strand = cbStrand->Text;
	Track = cbTrack->Text;
	Campus = cbCampus->Text;
	Course = cbCourse->Text;
	College = cbCollege->Text;

	if (isValid) {

		StudentInfo^ si = gcnew StudentInfo();
		si->(Gender, Strand, Track, Campus, Course, College);

		if (isValid) {
			StudentInfo^ si = gcnew StudentInfo();
			si->(Gender, Strand, Track, Campus, Course, LRN);

	}
		
	}



}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void picturebox1_Click(System::Object^ sender, System::EventArgs^ e) 
{
}
	   
private: System::Void comboBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
}
	   
private: System::Void comboBox6_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
