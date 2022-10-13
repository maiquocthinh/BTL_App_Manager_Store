#include "Objects.h"
#pragma once

namespace BTLAppManagerStore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddOrEditCustomerForm
	/// </summary>
	public ref class AddOrEditCustomerForm : public System::Windows::Forms::Form
	{
    private: bool isEditMode;
	public:
		AddOrEditCustomerForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
        AddOrEditCustomerForm(bool isEditMode)
        {
            this->isEditMode = isEditMode;
            InitializeComponent();
        }

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddOrEditCustomerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ImageList^ ListIcon;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
    private: System::Windows::Forms::Button^ btnSave;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
    private: System::Windows::Forms::Label^ lbSex;
    private: System::Windows::Forms::ComboBox^ cbSex;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
    private: System::Windows::Forms::TextBox^ tbxName;
    private: System::Windows::Forms::Label^ lbName;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
    private: System::Windows::Forms::TextBox^ tbxID;
    private: System::Windows::Forms::Label^ lbID;
    private: System::Windows::Forms::Label^ titleForm;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
    private: System::Windows::Forms::TextBox^ tbxPoints;
    private: System::Windows::Forms::Label^ lbPoints;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
    private: System::Windows::Forms::TextBox^ tbxPhone;
    private: System::Windows::Forms::Label^ lbPhone;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
    private: System::Windows::Forms::TextBox^ tbxAddress;
    private: System::Windows::Forms::Label^ lbAddress;
    private: System::Windows::Forms::Button^ btnCancel;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
        System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            this->components = (gcnew System::ComponentModel::Container());
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddOrEditCustomerForm::typeid));
            this->ListIcon = (gcnew System::Windows::Forms::ImageList(this->components));
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->lbSex = (gcnew System::Windows::Forms::Label());
            this->cbSex = (gcnew System::Windows::Forms::ComboBox());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->lbName = (gcnew System::Windows::Forms::Label());
            this->tbxName = (gcnew System::Windows::Forms::TextBox());
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tbxID = (gcnew System::Windows::Forms::TextBox());
            this->lbID = (gcnew System::Windows::Forms::Label());
            this->titleForm = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tbxPoints = (gcnew System::Windows::Forms::TextBox());
            this->lbPoints = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tbxPhone = (gcnew System::Windows::Forms::TextBox());
            this->lbPhone = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tbxAddress = (gcnew System::Windows::Forms::TextBox());
            this->lbAddress = (gcnew System::Windows::Forms::Label());
            this->btnCancel = (gcnew System::Windows::Forms::Button());
            this->btnSave = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel1->SuspendLayout();
            this->tableLayoutPanel5->SuspendLayout();
            this->tableLayoutPanel2->SuspendLayout();
            this->tableLayoutPanel3->SuspendLayout();
            this->tableLayoutPanel6->SuspendLayout();
            this->tableLayoutPanel7->SuspendLayout();
            this->tableLayoutPanel4->SuspendLayout();
            this->SuspendLayout();
            // 
            // ListIcon
            // 
            this->ListIcon->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"ListIcon.ImageStream")));
            this->ListIcon->TransparentColor = System::Drawing::Color::Transparent;
            this->ListIcon->Images->SetKeyName(0, L"add-icon.png");
            this->ListIcon->Images->SetKeyName(1, L"cancel-icon.png");
            this->ListIcon->Images->SetKeyName(2, L"save-icon.png");
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->ColumnCount = 2;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel5, 1, 2);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 1, 1);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 0, 1);
            this->tableLayoutPanel1->Controls->Add(this->titleForm, 0, 0);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel6, 1, 3);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel7, 0, 2);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel4, 0, 3);
            this->tableLayoutPanel1->Controls->Add(this->btnCancel, 1, 4);
            this->tableLayoutPanel1->Controls->Add(this->btnSave, 0, 4);
            this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 5;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 56)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 48)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 48)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 128)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(784, 402);
            this->tableLayoutPanel1->TabIndex = 0;
            // 
            // tableLayoutPanel5
            // 
            this->tableLayoutPanel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel5->ColumnCount = 2;
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                30)));
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel5->Controls->Add(this->lbSex, 0, 0);
            this->tableLayoutPanel5->Controls->Add(this->cbSex, 1, 0);
            this->tableLayoutPanel5->Location = System::Drawing::Point(395, 106);
            this->tableLayoutPanel5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
            this->tableLayoutPanel5->RowCount = 1;
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel5->Size = System::Drawing::Size(386, 44);
            this->tableLayoutPanel5->TabIndex = 7;
            // 
            // lbSex
            // 
            this->lbSex->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbSex->AutoSize = true;
            this->lbSex->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbSex->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbSex->Location = System::Drawing::Point(3, 0);
            this->lbSex->Name = L"lbSex";
            this->lbSex->Size = System::Drawing::Size(109, 44);
            this->lbSex->TabIndex = 6;
            this->lbSex->Text = L"Sex";
            this->lbSex->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // cbSex
            // 
            this->cbSex->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->cbSex->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->cbSex->FormattingEnabled = true;
            this->cbSex->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
            this->cbSex->Location = System::Drawing::Point(118, 10);
            this->cbSex->Margin = System::Windows::Forms::Padding(3, 10, 27, 2);
            this->cbSex->Name = L"cbSex";
            this->cbSex->Size = System::Drawing::Size(241, 24);
            this->cbSex->TabIndex = 3;
            this->cbSex->TabStop = false;
            // 
            // tableLayoutPanel2
            // 
            this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel2->ColumnCount = 2;
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                30)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel2->Controls->Add(this->lbName, 0, 0);
            this->tableLayoutPanel2->Controls->Add(this->tbxName, 1, 0);
            this->tableLayoutPanel2->Location = System::Drawing::Point(395, 58);
            this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
            this->tableLayoutPanel2->RowCount = 1;
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 44)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 44)));
            this->tableLayoutPanel2->Size = System::Drawing::Size(386, 44);
            this->tableLayoutPanel2->TabIndex = 5;
            // 
            // lbName
            // 
            this->lbName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbName->AutoSize = true;
            this->lbName->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbName->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbName->Location = System::Drawing::Point(3, 0);
            this->lbName->Name = L"lbName";
            this->lbName->Size = System::Drawing::Size(109, 44);
            this->lbName->TabIndex = 2;
            this->lbName->Text = L"Full Name";
            this->lbName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tbxName
            // 
            this->tbxName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxName->Location = System::Drawing::Point(118, 10);
            this->tbxName->Margin = System::Windows::Forms::Padding(3, 10, 27, 2);
            this->tbxName->Name = L"tbxName";
            this->tbxName->Size = System::Drawing::Size(241, 22);
            this->tbxName->TabIndex = 1;
            this->tbxName->TabStop = false;
            // 
            // tableLayoutPanel3
            // 
            this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel3->ColumnCount = 2;
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                30)));
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel3->Controls->Add(this->tbxID, 1, 0);
            this->tableLayoutPanel3->Controls->Add(this->lbID, 0, 0);
            this->tableLayoutPanel3->Location = System::Drawing::Point(3, 58);
            this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
            this->tableLayoutPanel3->RowCount = 1;
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel3->Size = System::Drawing::Size(386, 44);
            this->tableLayoutPanel3->TabIndex = 7;
            // 
            // tbxID
            // 
            this->tbxID->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxID->Location = System::Drawing::Point(118, 10);
            this->tbxID->Margin = System::Windows::Forms::Padding(3, 10, 27, 2);
            this->tbxID->Name = L"tbxID";
            this->tbxID->ReadOnly = true;
            this->tbxID->Size = System::Drawing::Size(241, 22);
            this->tbxID->TabIndex = 0;
            this->tbxID->TabStop = false;
            this->tbxID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // lbID
            // 
            this->lbID->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbID->AutoSize = true;
            this->lbID->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbID->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbID->Location = System::Drawing::Point(3, 0);
            this->lbID->Name = L"lbID";
            this->lbID->Size = System::Drawing::Size(109, 44);
            this->lbID->TabIndex = 0;
            this->lbID->Text = L"ID";
            this->lbID->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // titleForm
            // 
            this->titleForm->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->titleForm->AutoSize = true;
            this->tableLayoutPanel1->SetColumnSpan(this->titleForm, 2);
            this->titleForm->Font = (gcnew System::Drawing::Font(L"Cooper Black", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->titleForm->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->titleForm->Location = System::Drawing::Point(3, 0);
            this->titleForm->Name = L"titleForm";
            this->titleForm->Size = System::Drawing::Size(778, 56);
            this->titleForm->TabIndex = 0;
            this->titleForm->Text = L"Add Customer";
            this->titleForm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel6
            // 
            this->tableLayoutPanel6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel6->ColumnCount = 2;
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                30)));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel6->Controls->Add(this->tbxPoints, 1, 0);
            this->tableLayoutPanel6->Controls->Add(this->lbPoints, 0, 0);
            this->tableLayoutPanel6->Location = System::Drawing::Point(395, 154);
            this->tableLayoutPanel6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
            this->tableLayoutPanel6->RowCount = 1;
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel6->Size = System::Drawing::Size(386, 124);
            this->tableLayoutPanel6->TabIndex = 8;
            // 
            // tbxPoints
            // 
            this->tbxPoints->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxPoints->Location = System::Drawing::Point(118, 10);
            this->tbxPoints->Margin = System::Windows::Forms::Padding(3, 10, 27, 2);
            this->tbxPoints->Name = L"tbxPoints";
            this->tbxPoints->Size = System::Drawing::Size(241, 22);
            this->tbxPoints->TabIndex = 5;
            this->tbxPoints->TabStop = false;
            // 
            // lbPoints
            // 
            this->lbPoints->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbPoints->AutoSize = true;
            this->lbPoints->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbPoints->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbPoints->Location = System::Drawing::Point(3, 0);
            this->lbPoints->Name = L"lbPoints";
            this->lbPoints->Padding = System::Windows::Forms::Padding(0, 10, 0, 0);
            this->lbPoints->Size = System::Drawing::Size(109, 124);
            this->lbPoints->TabIndex = 10;
            this->lbPoints->Text = L"Points";
            this->lbPoints->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // tableLayoutPanel7
            // 
            this->tableLayoutPanel7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel7->ColumnCount = 2;
            this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                30)));
            this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel7->Controls->Add(this->tbxPhone, 1, 0);
            this->tableLayoutPanel7->Controls->Add(this->lbPhone, 0, 0);
            this->tableLayoutPanel7->Location = System::Drawing::Point(3, 106);
            this->tableLayoutPanel7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
            this->tableLayoutPanel7->RowCount = 1;
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel7->Size = System::Drawing::Size(386, 44);
            this->tableLayoutPanel7->TabIndex = 9;
            // 
            // tbxPhone
            // 
            this->tbxPhone->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxPhone->Location = System::Drawing::Point(118, 10);
            this->tbxPhone->Margin = System::Windows::Forms::Padding(3, 10, 27, 2);
            this->tbxPhone->Name = L"tbxPhone";
            this->tbxPhone->Size = System::Drawing::Size(241, 22);
            this->tbxPhone->TabIndex = 2;
            this->tbxPhone->TabStop = false;
            // 
            // lbPhone
            // 
            this->lbPhone->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbPhone->AutoSize = true;
            this->lbPhone->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbPhone->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbPhone->Location = System::Drawing::Point(3, 0);
            this->lbPhone->Name = L"lbPhone";
            this->lbPhone->Size = System::Drawing::Size(109, 44);
            this->lbPhone->TabIndex = 4;
            this->lbPhone->Text = L"Phone";
            this->lbPhone->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel4
            // 
            this->tableLayoutPanel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel4->ColumnCount = 2;
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                30)));
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel4->Controls->Add(this->tbxAddress, 1, 0);
            this->tableLayoutPanel4->Controls->Add(this->lbAddress, 0, 0);
            this->tableLayoutPanel4->Location = System::Drawing::Point(3, 154);
            this->tableLayoutPanel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
            this->tableLayoutPanel4->RowCount = 1;
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel4->Size = System::Drawing::Size(386, 124);
            this->tableLayoutPanel4->TabIndex = 6;
            // 
            // tbxAddress
            // 
            this->tbxAddress->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxAddress->Location = System::Drawing::Point(118, 10);
            this->tbxAddress->Margin = System::Windows::Forms::Padding(3, 10, 27, 10);
            this->tbxAddress->Multiline = true;
            this->tbxAddress->Name = L"tbxAddress";
            this->tbxAddress->Size = System::Drawing::Size(241, 104);
            this->tbxAddress->TabIndex = 4;
            this->tbxAddress->TabStop = false;
            // 
            // lbAddress
            // 
            this->lbAddress->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbAddress->AutoSize = true;
            this->lbAddress->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbAddress->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbAddress->Location = System::Drawing::Point(3, 0);
            this->lbAddress->Name = L"lbAddress";
            this->lbAddress->Padding = System::Windows::Forms::Padding(0, 10, 0, 0);
            this->lbAddress->Size = System::Drawing::Size(109, 124);
            this->lbAddress->TabIndex = 8;
            this->lbAddress->Text = L"Address";
            this->lbAddress->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // btnCancel
            // 
            this->btnCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
            this->btnCancel->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->btnCancel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnCancel->ImageKey = L"cancel-icon.png";
            this->btnCancel->ImageList = this->ListIcon;
            this->btnCancel->Location = System::Drawing::Point(413, 299);
            this->btnCancel->Margin = System::Windows::Forms::Padding(21, 19, 3, 19);
            this->btnCancel->Name = L"btnCancel";
            this->btnCancel->Size = System::Drawing::Size(124, 84);
            this->btnCancel->TabIndex = 7;
            this->btnCancel->TabStop = false;
            this->btnCancel->UseVisualStyleBackColor = true;
            // 
            // btnSave
            // 
            this->btnSave->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnSave->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->btnSave->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnSave->ImageKey = L"add-icon.png";
            this->btnSave->ImageList = this->ListIcon;
            this->btnSave->Location = System::Drawing::Point(247, 299);
            this->btnSave->Margin = System::Windows::Forms::Padding(3, 19, 21, 19);
            this->btnSave->Name = L"btnSave";
            this->btnSave->Size = System::Drawing::Size(124, 84);
            this->btnSave->TabIndex = 6;
            this->btnSave->TabStop = false;
            this->btnSave->UseVisualStyleBackColor = true;
            this->btnSave->Click += gcnew System::EventHandler(this, &AddOrEditCustomerForm::btnSave_Click);
            // 
            // AddOrEditCustomerForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(784, 402);
            this->Controls->Add(this->tableLayoutPanel1);
            this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->MaximizeBox = false;
            this->MaximumSize = System::Drawing::Size(802, 449);
            this->MinimumSize = System::Drawing::Size(802, 449);
            this->Name = L"AddOrEditCustomerForm";
            this->ShowInTaskbar = false;
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
            this->Text = L"AddOrEditCustomerForm";
            this->Load += gcnew System::EventHandler(this, &AddOrEditCustomerForm::AddOrEditCustomerForm_Load);
            this->tableLayoutPanel1->ResumeLayout(false);
            this->tableLayoutPanel1->PerformLayout();
            this->tableLayoutPanel5->ResumeLayout(false);
            this->tableLayoutPanel5->PerformLayout();
            this->tableLayoutPanel2->ResumeLayout(false);
            this->tableLayoutPanel2->PerformLayout();
            this->tableLayoutPanel3->ResumeLayout(false);
            this->tableLayoutPanel3->PerformLayout();
            this->tableLayoutPanel6->ResumeLayout(false);
            this->tableLayoutPanel6->PerformLayout();
            this->tableLayoutPanel7->ResumeLayout(false);
            this->tableLayoutPanel7->PerformLayout();
            this->tableLayoutPanel4->ResumeLayout(false);
            this->tableLayoutPanel4->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion

// ############## Từ Đây Trở Xuống Sẽ Là Nơi Chúng Ta Viết Code #################
    
    // ****** Các biến sẽ được khai báo tập trung ở đây ******
    public:
        // Biến object của Customer
        MyObjects::Customer* customerObject;

    // ****** Các hàm xử lý sự kiện (event) trong form này ******
    private: 
        // Khi form này tải
        System::Void AddOrEditCustomerForm_Load(System::Object^ sender, System::EventArgs^ e) {
            // Chuyển giữa Form tạo mới và Form chỉnh sửa
            if (isEditMode) {
                this->Text = L"Edit Customer";
                this->btnSave->ImageKey = L"save-icon.png";
                this->titleForm->Text = "Edit Customer";
                //Load data trong DB vao form
                this->tbxID->Text = MyUtils::stdStringToSystemString(MyUtils::intToStdString(this->customerObject->getId()));
                this->tbxName->Text = MyUtils::stdStringToSystemString(this->customerObject->getFullName());
                this->tbxPhone->Text = MyUtils::stdStringToSystemString(this->customerObject->getPhone());
                this->cbSex->Text = MyUtils::stdStringToSystemString(MyUtils::intToStdString(this->customerObject->getSex()));
                this->tbxAddress->Text = MyUtils::stdStringToSystemString(this->customerObject->getAddress());
                this->tbxPoints->Text = MyUtils::stdStringToSystemString(MyUtils::intToStdString(this->customerObject->getPoints()));
            }
        }
	
        System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
            // Lấy các dữ liệu được nhập ở (phía ngoài) form và gán vào các biến (có chuyển đổi nếu cần thiết)
            //this->customerObject->setId(stoi(MyUtils::systemStringToStdString(this->tbxID->Text)));
            this->customerObject->setFullName(MyUtils::systemStringToStdString(this->tbxName->Text));
            this->customerObject->setPhone(MyUtils::systemStringToStdString(this->tbxPhone->Text));
            //this->customerObject->setSex(stoi(MyUtils::systemStringToStdString(this->cbSex->Text)));
            this->customerObject->setAddress(MyUtils::systemStringToStdString(this->tbxAddress->Text));
            this->customerObject->setPoints(stoi(MyUtils::systemStringToStdString(this->tbxPoints->Text)));
            // ... VD: std::string title = MyUtils::systemStringToStdString(this->tbxTitle->Text);
            
            //Check xem from đang ở chế độ edit hay ko, nếu phải thì update, ngược lại create
            if (this->isEditMode) {
                this->customerObject->Update();
                MessageBox::Show(L"Update Success", L"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
            else {
                this->customerObject->Create();
                MessageBox::Show(L"Create Success", L"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
            this->Close(); // đóng form này lại
        }
};
}
