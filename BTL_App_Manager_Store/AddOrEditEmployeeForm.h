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
    /// Summary for AddOrEditEmployeeForm
    /// </summary>
    public ref class AddOrEditEmployeeForm : public System::Windows::Forms::Form
    {
    private: bool isEditMode;
    public:
        AddOrEditEmployeeForm(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
        }
        AddOrEditEmployeeForm(bool isEditMode)
        {
            this->isEditMode = isEditMode;
            InitializeComponent();
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~AddOrEditEmployeeForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
    private: System::Windows::Forms::Label^ lbSex;
    private: System::Windows::Forms::ComboBox^ cbSex;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
    private: System::Windows::Forms::TextBox^ tbxName;
    private: System::Windows::Forms::Label^ lbName;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
    private: System::Windows::Forms::TextBox^ tbxImage;
    private: System::Windows::Forms::Label^ lbImage;
    private: System::Windows::Forms::Label^ titleForm;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
    private: System::Windows::Forms::TextBox^ tbxPhone;
    private: System::Windows::Forms::Label^ lbPhone;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
    private: System::Windows::Forms::TextBox^ tbxAddress;
    private: System::Windows::Forms::Label^ lbAddress;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
    private: System::Windows::Forms::Label^ lbPosition;
    private: System::Windows::Forms::PictureBox^ imageEmployee;
    private: System::Windows::Forms::ImageList^ ListIcon;
    private: System::Windows::Forms::Button^ btnCancel;
    private: System::Windows::Forms::Button^ btnSave;
    private: System::Windows::Forms::TextBox^ tbxPosition;
    private: System::ComponentModel::IContainer^ components;

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
            this->components = (gcnew System::ComponentModel::Container());
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddOrEditEmployeeForm::typeid));
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->btnCancel = (gcnew System::Windows::Forms::Button());
            this->ListIcon = (gcnew System::Windows::Forms::ImageList(this->components));
            this->btnSave = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tbxImage = (gcnew System::Windows::Forms::TextBox());
            this->lbImage = (gcnew System::Windows::Forms::Label());
            this->titleForm = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->cbSex = (gcnew System::Windows::Forms::ComboBox());
            this->lbSex = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tbxPhone = (gcnew System::Windows::Forms::TextBox());
            this->lbPhone = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tbxName = (gcnew System::Windows::Forms::TextBox());
            this->lbName = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tbxAddress = (gcnew System::Windows::Forms::TextBox());
            this->lbAddress = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tbxPosition = (gcnew System::Windows::Forms::TextBox());
            this->lbPosition = (gcnew System::Windows::Forms::Label());
            this->imageEmployee = (gcnew System::Windows::Forms::PictureBox());
            this->tableLayoutPanel1->SuspendLayout();
            this->tableLayoutPanel3->SuspendLayout();
            this->tableLayoutPanel5->SuspendLayout();
            this->tableLayoutPanel7->SuspendLayout();
            this->tableLayoutPanel2->SuspendLayout();
            this->tableLayoutPanel4->SuspendLayout();
            this->tableLayoutPanel6->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageEmployee))->BeginInit();
            this->SuspendLayout();
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->ColumnCount = 2;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel1->Controls->Add(this->btnCancel, 1, 6);
            this->tableLayoutPanel1->Controls->Add(this->btnSave, 0, 6);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 0, 1);
            this->tableLayoutPanel1->Controls->Add(this->titleForm, 0, 0);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel5, 0, 4);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel7, 0, 3);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 2);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel4, 1, 4);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel6, 0, 5);
            this->tableLayoutPanel1->Controls->Add(this->imageEmployee, 1, 1);
            this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 7;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 70)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(1078, 519);
            this->tableLayoutPanel1->TabIndex = 1;
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
            this->btnCancel->Location = System::Drawing::Point(563, 394);
            this->btnCancel->Margin = System::Windows::Forms::Padding(24, 24, 3, 24);
            this->btnCancel->Name = L"btnCancel";
            this->btnCancel->Size = System::Drawing::Size(140, 101);
            this->btnCancel->TabIndex = 14;
            this->btnCancel->TabStop = false;
            this->btnCancel->UseVisualStyleBackColor = true;
            // 
            // ListIcon
            // 
            this->ListIcon->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"ListIcon.ImageStream")));
            this->ListIcon->TransparentColor = System::Drawing::Color::Transparent;
            this->ListIcon->Images->SetKeyName(0, L"add-icon.png");
            this->ListIcon->Images->SetKeyName(1, L"cancel-icon.png");
            this->ListIcon->Images->SetKeyName(2, L"save-icon.png");
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
            this->btnSave->Location = System::Drawing::Point(375, 394);
            this->btnSave->Margin = System::Windows::Forms::Padding(3, 24, 24, 24);
            this->btnSave->Name = L"btnSave";
            this->btnSave->Size = System::Drawing::Size(140, 101);
            this->btnSave->TabIndex = 13;
            this->btnSave->TabStop = false;
            this->btnSave->UseVisualStyleBackColor = true;
            this->btnSave->Click += gcnew System::EventHandler(this, &AddOrEditEmployeeForm::btnSave_Click);
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
            this->tableLayoutPanel3->Controls->Add(this->tbxImage, 1, 0);
            this->tableLayoutPanel3->Controls->Add(this->lbImage, 0, 0);
            this->tableLayoutPanel3->Location = System::Drawing::Point(3, 73);
            this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
            this->tableLayoutPanel3->RowCount = 1;
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel3->Size = System::Drawing::Size(533, 54);
            this->tableLayoutPanel3->TabIndex = 4;
            // 
            // tbxImage
            // 
            this->tbxImage->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxImage->Location = System::Drawing::Point(162, 12);
            this->tbxImage->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->tbxImage->Name = L"tbxImage";
            this->tbxImage->Size = System::Drawing::Size(341, 26);
            this->tbxImage->TabIndex = 1;
            this->tbxImage->TabStop = false;
            this->tbxImage->TextChanged += gcnew System::EventHandler(this, &AddOrEditEmployeeForm::inputImage_TextChanged);
            // 
            // lbImage
            // 
            this->lbImage->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbImage->AutoSize = true;
            this->lbImage->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbImage->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbImage->Location = System::Drawing::Point(3, 0);
            this->lbImage->Name = L"lbImage";
            this->lbImage->Size = System::Drawing::Size(153, 54);
            this->lbImage->TabIndex = 0;
            this->lbImage->Text = L"Image";
            this->lbImage->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->titleForm->Size = System::Drawing::Size(1072, 70);
            this->titleForm->TabIndex = 0;
            this->titleForm->Text = L"Add Employee";
            this->titleForm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->tableLayoutPanel5->Controls->Add(this->cbSex, 1, 0);
            this->tableLayoutPanel5->Controls->Add(this->lbSex, 0, 0);
            this->tableLayoutPanel5->Location = System::Drawing::Point(3, 253);
            this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
            this->tableLayoutPanel5->RowCount = 1;
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel5->Size = System::Drawing::Size(533, 54);
            this->tableLayoutPanel5->TabIndex = 7;
            // 
            // cbSex
            // 
            this->cbSex->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->cbSex->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->cbSex->FormattingEnabled = true;
            this->cbSex->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
            this->cbSex->Location = System::Drawing::Point(162, 12);
            this->cbSex->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->cbSex->Name = L"cbSex";
            this->cbSex->Size = System::Drawing::Size(341, 28);
            this->cbSex->TabIndex = 1;
            this->cbSex->TabStop = false;
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
            this->lbSex->Size = System::Drawing::Size(153, 54);
            this->lbSex->TabIndex = 0;
            this->lbSex->Text = L"Sex";
            this->lbSex->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->tableLayoutPanel7->Location = System::Drawing::Point(3, 193);
            this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
            this->tableLayoutPanel7->RowCount = 1;
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel7->Size = System::Drawing::Size(533, 54);
            this->tableLayoutPanel7->TabIndex = 9;
            // 
            // tbxPhone
            // 
            this->tbxPhone->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxPhone->Location = System::Drawing::Point(162, 12);
            this->tbxPhone->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->tbxPhone->Name = L"tbxPhone";
            this->tbxPhone->Size = System::Drawing::Size(341, 26);
            this->tbxPhone->TabIndex = 1;
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
            this->lbPhone->Size = System::Drawing::Size(153, 54);
            this->lbPhone->TabIndex = 0;
            this->lbPhone->Text = L"Phone";
            this->lbPhone->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->tableLayoutPanel2->Controls->Add(this->tbxName, 1, 0);
            this->tableLayoutPanel2->Controls->Add(this->lbName, 0, 0);
            this->tableLayoutPanel2->Location = System::Drawing::Point(3, 133);
            this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
            this->tableLayoutPanel2->RowCount = 1;
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel2->Size = System::Drawing::Size(533, 54);
            this->tableLayoutPanel2->TabIndex = 5;
            // 
            // tbxName
            // 
            this->tbxName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxName->Location = System::Drawing::Point(162, 12);
            this->tbxName->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->tbxName->Name = L"tbxName";
            this->tbxName->Size = System::Drawing::Size(341, 26);
            this->tbxName->TabIndex = 1;
            this->tbxName->TabStop = false;
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
            this->lbName->Size = System::Drawing::Size(153, 54);
            this->lbName->TabIndex = 0;
            this->lbName->Text = L"Full Name";
            this->lbName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->tableLayoutPanel4->Location = System::Drawing::Point(542, 253);
            this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
            this->tableLayoutPanel4->RowCount = 1;
            this->tableLayoutPanel1->SetRowSpan(this->tableLayoutPanel4, 2);
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel4->Size = System::Drawing::Size(533, 114);
            this->tableLayoutPanel4->TabIndex = 6;
            // 
            // tbxAddress
            // 
            this->tbxAddress->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxAddress->Location = System::Drawing::Point(162, 12);
            this->tbxAddress->Margin = System::Windows::Forms::Padding(3, 12, 30, 12);
            this->tbxAddress->Multiline = true;
            this->tbxAddress->Name = L"tbxAddress";
            this->tbxAddress->Size = System::Drawing::Size(341, 90);
            this->tbxAddress->TabIndex = 1;
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
            this->lbAddress->Size = System::Drawing::Size(153, 114);
            this->lbAddress->TabIndex = 0;
            this->lbAddress->Text = L"Address";
            this->lbAddress->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->tableLayoutPanel6->Controls->Add(this->tbxPosition, 0, 0);
            this->tableLayoutPanel6->Controls->Add(this->lbPosition, 0, 0);
            this->tableLayoutPanel6->Location = System::Drawing::Point(3, 313);
            this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
            this->tableLayoutPanel6->RowCount = 1;
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel6->Size = System::Drawing::Size(533, 54);
            this->tableLayoutPanel6->TabIndex = 10;
            // 
            // tbxPosition
            // 
            this->tbxPosition->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxPosition->Location = System::Drawing::Point(162, 12);
            this->tbxPosition->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->tbxPosition->Name = L"tbxPosition";
            this->tbxPosition->Size = System::Drawing::Size(341, 26);
            this->tbxPosition->TabIndex = 2;
            this->tbxPosition->TabStop = false;
            // 
            // lbPosition
            // 
            this->lbPosition->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbPosition->AutoSize = true;
            this->lbPosition->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbPosition->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbPosition->Location = System::Drawing::Point(3, 0);
            this->lbPosition->Name = L"lbPosition";
            this->lbPosition->Size = System::Drawing::Size(153, 54);
            this->lbPosition->TabIndex = 0;
            this->lbPosition->Text = L"Position";
            this->lbPosition->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // imageEmployee
            // 
            this->imageEmployee->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->imageEmployee->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->imageEmployee->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imageEmployee.Image")));
            this->imageEmployee->Location = System::Drawing::Point(718, 73);
            this->imageEmployee->Margin = System::Windows::Forms::Padding(179, 3, 179, 3);
            this->imageEmployee->Name = L"imageEmployee";
            this->tableLayoutPanel1->SetRowSpan(this->imageEmployee, 3);
            this->imageEmployee->Size = System::Drawing::Size(181, 174);
            this->imageEmployee->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->imageEmployee->TabIndex = 11;
            this->imageEmployee->TabStop = false;
            // 
            // AddOrEditEmployeeForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1078, 519);
            this->Controls->Add(this->tableLayoutPanel1);
            this->MaximizeBox = false;
            this->MaximumSize = System::Drawing::Size(1100, 575);
            this->MinimumSize = System::Drawing::Size(1100, 575);
            this->Name = L"AddOrEditEmployeeForm";
            this->ShowInTaskbar = false;
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
            this->Text = L"Add Employee";
            this->Load += gcnew System::EventHandler(this, &AddOrEditEmployeeForm::AddOrEditEmployeeForm_Load);
            this->tableLayoutPanel1->ResumeLayout(false);
            this->tableLayoutPanel1->PerformLayout();
            this->tableLayoutPanel3->ResumeLayout(false);
            this->tableLayoutPanel3->PerformLayout();
            this->tableLayoutPanel5->ResumeLayout(false);
            this->tableLayoutPanel5->PerformLayout();
            this->tableLayoutPanel7->ResumeLayout(false);
            this->tableLayoutPanel7->PerformLayout();
            this->tableLayoutPanel2->ResumeLayout(false);
            this->tableLayoutPanel2->PerformLayout();
            this->tableLayoutPanel4->ResumeLayout(false);
            this->tableLayoutPanel4->PerformLayout();
            this->tableLayoutPanel6->ResumeLayout(false);
            this->tableLayoutPanel6->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageEmployee))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion

// ############## Từ Đây Trở Xuống Sẽ Là Nơi Chúng Ta Viết Code #################

  // ****** Các biến sẽ được khai báo tập trung ở đây ******
    public:
        // Biến object của Employee
        MyObjects::Employee* employeeObject;

        // ****** Các hàm xử lý sự kiện (event) trong form này ******
    private:
        // Khi form này tải
        System::Void AddOrEditEmployeeForm_Load(System::Object^ sender, System::EventArgs^ e) {
            // Chuyển giữa Form tạo mới và Form chỉnh sửa
            if (this->isEditMode) {
                this->Text = L"Edit Employee";
                this->btnSave->ImageKey = L"save-icon.png";
                this->titleForm->Text = "Edit Employee";
                //Load data trong DB vao form
                this->tbxName->Text = MyUtils::stdStringToSystemString(this->employeeObject->getFullName());
                this->tbxPhone->Text = MyUtils::stdStringToSystemString(this->employeeObject->getPhone());
                this->cbSex->Text = MyUtils::stdStringToSystemString(MyUtils::intToStdString(this->employeeObject->getSex()));
                this->tbxAddress->Text = MyUtils::stdStringToSystemString(this->employeeObject->getAddress());
                this->tbxPosition->Text = MyUtils::stdStringToSystemString(MyUtils::intToStdString(this->employeeObject->getPosition()));
                //    c1   if (this->tbxPosition->Text = "1")
                //           this->employeeObject->getPosition = ("manager");
               //        else
                //           this->employeeObject->getPosition = ("staf");   
               //    }
               //    c2      = (this->tbxPosition->Text == "1") ? "Manager" : " Staff"));
            }
        }
            // Tự động load image khi nhập link image vào ô input
            System::Void inputImage_TextChanged(System::Object ^ sender, System::EventArgs ^ e) {
                System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddOrEditEmployeeForm::typeid));
                if (this->tbxImage->Text == "")
                    this->imageEmployee->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imageEmployee.Image")));
                else
                    this->imageEmployee->ImageLocation = this->tbxImage->Text;
            }

            System::Void btnSave_Click(System::Object ^ sender, System::EventArgs ^ e) {
                // Lấy các dữ liệu được nhập ở (phía ngoài) form và gán vào các biến (có chuyển đổi nếu cần thiết)
                // ... VD: std::string title = MyUtils::systemStringToStdString(this->tbxTitle->Text);
                this->employeeObject->setFullName(MyUtils::systemStringToStdString(this->tbxName->Text));
                this->employeeObject->setPhone(MyUtils::systemStringToStdString(this->tbxPhone->Text));
                //this->customerObject->setSex(stoi(MyUtils::systemStringToStdString(this->cbSex->Text)));
                this->employeeObject->setAddress(MyUtils::systemStringToStdString(this->tbxAddress->Text));
                this->employeeObject->setPosition(stoi(MyUtils::systemStringToStdString(this->tbxPosition->Text)));
                // ... VD: std::string title = MyUtils::systemStringToStdString(this->tbxTitle->Text);

                //Check xem from đang ở chế độ edit hay ko, nếu phải thì update, ngược lại create
                if (this->isEditMode) {
                    this->employeeObject->Update();
                    MessageBox::Show(L"Update Success", L"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
                }
                else {
                    this->employeeObject->Create();
                    MessageBox::Show(L"Create Success", L"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
                }
                this->Close(); // đóng form này lại
            }
        };
}
