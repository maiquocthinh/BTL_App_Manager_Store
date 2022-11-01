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
    /// Summary for AddOrEditProductForm
    /// </summary>
    public ref class AddOrEditProductForm : public System::Windows::Forms::Form
    {
    public:
        AddOrEditProductForm(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
        }
        AddOrEditProductForm(bool isEditMode)
        {
            InitializeComponent();
            this->isEditMode = isEditMode;
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~AddOrEditProductForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
    private: System::Windows::Forms::Label^ lbUnit;
    private: System::Windows::Forms::TextBox^ tbxUnit;
    private: System::Windows::Forms::Label^ titleForm;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
    private: System::Windows::Forms::TextBox^ tbxName;
    private: System::Windows::Forms::Label^ lbName;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
    private: System::Windows::Forms::Label^ lbImage;
    private: System::Windows::Forms::TextBox^ tbxImage;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
    private: System::Windows::Forms::Label^ lbCategory;
    private: System::Windows::Forms::ComboBox^ cbCategory;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
    private: System::Windows::Forms::TextBox^ tbxDescription;
    private: System::Windows::Forms::Label^ lbDescription;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel8;
    private: System::Windows::Forms::Label^ lbImportPrice;
    private: System::Windows::Forms::TextBox^ tbxImportPrice;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel9;
    private: System::Windows::Forms::Label^ lbSellPrice;
    private: System::Windows::Forms::TextBox^ tbxSellPrice;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel10;
    private: System::Windows::Forms::Label^ lbPosition;
    private: System::Windows::Forms::TextBox^ tbxPosition;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
    private: System::Windows::Forms::Label^ lbQuantity;
    private: System::Windows::Forms::ImageList^ ListIcon;
    private: System::Windows::Forms::Button^ btnSave;
    private: System::Windows::Forms::Button^ btnCancel;
    private: System::Windows::Forms::PictureBox^ imageProduct;
    private: System::Windows::Forms::NumericUpDown^ numQuantity;
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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddOrEditProductForm::typeid));
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->btnSave = (gcnew System::Windows::Forms::Button());
            this->ListIcon = (gcnew System::Windows::Forms::ImageList(this->components));
            this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->lbUnit = (gcnew System::Windows::Forms::Label());
            this->tbxUnit = (gcnew System::Windows::Forms::TextBox());
            this->titleForm = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tbxName = (gcnew System::Windows::Forms::TextBox());
            this->lbName = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->lbImage = (gcnew System::Windows::Forms::Label());
            this->tbxImage = (gcnew System::Windows::Forms::TextBox());
            this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->lbCategory = (gcnew System::Windows::Forms::Label());
            this->cbCategory = (gcnew System::Windows::Forms::ComboBox());
            this->imageProduct = (gcnew System::Windows::Forms::PictureBox());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tbxDescription = (gcnew System::Windows::Forms::TextBox());
            this->lbDescription = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->lbImportPrice = (gcnew System::Windows::Forms::Label());
            this->tbxImportPrice = (gcnew System::Windows::Forms::TextBox());
            this->tableLayoutPanel9 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->lbSellPrice = (gcnew System::Windows::Forms::Label());
            this->tbxSellPrice = (gcnew System::Windows::Forms::TextBox());
            this->tableLayoutPanel10 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->lbPosition = (gcnew System::Windows::Forms::Label());
            this->tbxPosition = (gcnew System::Windows::Forms::TextBox());
            this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->lbQuantity = (gcnew System::Windows::Forms::Label());
            this->numQuantity = (gcnew System::Windows::Forms::NumericUpDown());
            this->btnCancel = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel1->SuspendLayout();
            this->tableLayoutPanel6->SuspendLayout();
            this->tableLayoutPanel3->SuspendLayout();
            this->tableLayoutPanel5->SuspendLayout();
            this->tableLayoutPanel4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageProduct))->BeginInit();
            this->tableLayoutPanel2->SuspendLayout();
            this->tableLayoutPanel8->SuspendLayout();
            this->tableLayoutPanel9->SuspendLayout();
            this->tableLayoutPanel10->SuspendLayout();
            this->tableLayoutPanel7->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numQuantity))->BeginInit();
            this->SuspendLayout();
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->ColumnCount = 2;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel1->Controls->Add(this->btnSave, 0, 8);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel6, 0, 4);
            this->tableLayoutPanel1->Controls->Add(this->titleForm, 0, 0);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 0, 1);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel5, 0, 2);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel4, 0, 3);
            this->tableLayoutPanel1->Controls->Add(this->imageProduct, 1, 1);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 1, 5);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel8, 0, 5);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel9, 0, 6);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel10, 0, 7);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel7, 1, 4);
            this->tableLayoutPanel1->Controls->Add(this->btnCancel, 1, 8);
            this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 9;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 80)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(1088, 644);
            this->tableLayoutPanel1->TabIndex = 5;
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
            this->btnSave->Location = System::Drawing::Point(380, 524);
            this->btnSave->Margin = System::Windows::Forms::Padding(3, 24, 24, 24);
            this->btnSave->Name = L"btnSave";
            this->btnSave->Size = System::Drawing::Size(140, 96);
            this->btnSave->TabIndex = 14;
            this->btnSave->TabStop = false;
            this->btnSave->UseVisualStyleBackColor = true;
            this->btnSave->Click += gcnew System::EventHandler(this, &AddOrEditProductForm::btnSave_Click);
            // 
            // ListIcon
            // 
            this->ListIcon->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"ListIcon.ImageStream")));
            this->ListIcon->TransparentColor = System::Drawing::Color::Transparent;
            this->ListIcon->Images->SetKeyName(0, L"add-icon.png");
            this->ListIcon->Images->SetKeyName(1, L"cancel-icon.png");
            this->ListIcon->Images->SetKeyName(2, L"save-icon.png");
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
            this->tableLayoutPanel6->Controls->Add(this->lbUnit, 0, 0);
            this->tableLayoutPanel6->Controls->Add(this->tbxUnit, 1, 0);
            this->tableLayoutPanel6->Location = System::Drawing::Point(3, 263);
            this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
            this->tableLayoutPanel6->RowCount = 1;
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel6->Size = System::Drawing::Size(538, 54);
            this->tableLayoutPanel6->TabIndex = 13;
            // 
            // lbUnit
            // 
            this->lbUnit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbUnit->AutoSize = true;
            this->lbUnit->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbUnit->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbUnit->Location = System::Drawing::Point(3, 0);
            this->lbUnit->Name = L"lbUnit";
            this->lbUnit->Size = System::Drawing::Size(155, 54);
            this->lbUnit->TabIndex = 0;
            this->lbUnit->Text = L"Unit";
            this->lbUnit->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tbxUnit
            // 
            this->tbxUnit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxUnit->Location = System::Drawing::Point(164, 12);
            this->tbxUnit->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->tbxUnit->Name = L"tbxUnit";
            this->tbxUnit->Size = System::Drawing::Size(344, 26);
            this->tbxUnit->TabIndex = 1;
            this->tbxUnit->TabStop = false;
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
            this->titleForm->Size = System::Drawing::Size(1082, 80);
            this->titleForm->TabIndex = 1;
            this->titleForm->Text = L"Add Product";
            this->titleForm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->tableLayoutPanel3->Controls->Add(this->tbxName, 1, 0);
            this->tableLayoutPanel3->Controls->Add(this->lbName, 0, 0);
            this->tableLayoutPanel3->Location = System::Drawing::Point(3, 83);
            this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
            this->tableLayoutPanel3->RowCount = 1;
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel3->Size = System::Drawing::Size(538, 54);
            this->tableLayoutPanel3->TabIndex = 3;
            // 
            // tbxName
            // 
            this->tbxName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxName->Location = System::Drawing::Point(164, 12);
            this->tbxName->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->tbxName->Name = L"tbxName";
            this->tbxName->Size = System::Drawing::Size(344, 26);
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
            this->lbName->Size = System::Drawing::Size(155, 54);
            this->lbName->TabIndex = 0;
            this->lbName->Text = L"Name";
            this->lbName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->tableLayoutPanel5->Controls->Add(this->lbImage, 0, 0);
            this->tableLayoutPanel5->Controls->Add(this->tbxImage, 1, 0);
            this->tableLayoutPanel5->Location = System::Drawing::Point(3, 143);
            this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
            this->tableLayoutPanel5->RowCount = 1;
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel5->Size = System::Drawing::Size(538, 54);
            this->tableLayoutPanel5->TabIndex = 5;
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
            this->lbImage->Size = System::Drawing::Size(155, 54);
            this->lbImage->TabIndex = 0;
            this->lbImage->Text = L"Image";
            this->lbImage->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tbxImage
            // 
            this->tbxImage->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxImage->Location = System::Drawing::Point(164, 12);
            this->tbxImage->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->tbxImage->Name = L"tbxImage";
            this->tbxImage->Size = System::Drawing::Size(344, 26);
            this->tbxImage->TabIndex = 2;
            this->tbxImage->TabStop = false;
            this->tbxImage->TextChanged += gcnew System::EventHandler(this, &AddOrEditProductForm::inputImage_TextChanged);
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
            this->tableLayoutPanel4->Controls->Add(this->lbCategory, 0, 0);
            this->tableLayoutPanel4->Controls->Add(this->cbCategory, 1, 0);
            this->tableLayoutPanel4->Location = System::Drawing::Point(3, 203);
            this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
            this->tableLayoutPanel4->RowCount = 1;
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel4->Size = System::Drawing::Size(538, 54);
            this->tableLayoutPanel4->TabIndex = 4;
            // 
            // lbCategory
            // 
            this->lbCategory->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbCategory->AutoSize = true;
            this->lbCategory->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbCategory->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbCategory->Location = System::Drawing::Point(3, 0);
            this->lbCategory->Name = L"lbCategory";
            this->lbCategory->Size = System::Drawing::Size(155, 54);
            this->lbCategory->TabIndex = 0;
            this->lbCategory->Text = L"Category";
            this->lbCategory->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // cbCategory
            // 
            this->cbCategory->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->cbCategory->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->cbCategory->FormattingEnabled = true;
            this->cbCategory->Location = System::Drawing::Point(164, 12);
            this->cbCategory->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->cbCategory->Name = L"cbCategory";
            this->cbCategory->Size = System::Drawing::Size(344, 28);
            this->cbCategory->TabIndex = 2;
            this->cbCategory->TabStop = false;
            this->cbCategory->SelectedIndexChanged += gcnew System::EventHandler(this, &AddOrEditProductForm::cbCategory_SelectedIndexChanged);
            // 
            // imageProduct
            // 
            this->imageProduct->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->imageProduct->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->imageProduct->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imageProduct.Image")));
            this->imageProduct->ImageLocation = L"";
            this->imageProduct->Location = System::Drawing::Point(729, 83);
            this->imageProduct->Margin = System::Windows::Forms::Padding(185, 3, 185, 3);
            this->imageProduct->Name = L"imageProduct";
            this->tableLayoutPanel1->SetRowSpan(this->imageProduct, 3);
            this->imageProduct->Size = System::Drawing::Size(174, 174);
            this->imageProduct->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->imageProduct->TabIndex = 12;
            this->imageProduct->TabStop = false;
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
            this->tableLayoutPanel2->Controls->Add(this->tbxDescription, 1, 0);
            this->tableLayoutPanel2->Controls->Add(this->lbDescription, 0, 0);
            this->tableLayoutPanel2->Location = System::Drawing::Point(547, 323);
            this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
            this->tableLayoutPanel2->RowCount = 1;
            this->tableLayoutPanel1->SetRowSpan(this->tableLayoutPanel2, 3);
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel2->Size = System::Drawing::Size(538, 174);
            this->tableLayoutPanel2->TabIndex = 10;
            // 
            // tbxDescription
            // 
            this->tbxDescription->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxDescription->Location = System::Drawing::Point(164, 3);
            this->tbxDescription->Margin = System::Windows::Forms::Padding(3, 3, 30, 3);
            this->tbxDescription->Multiline = true;
            this->tbxDescription->Name = L"tbxDescription";
            this->tbxDescription->Size = System::Drawing::Size(344, 168);
            this->tbxDescription->TabIndex = 2;
            this->tbxDescription->TabStop = false;
            // 
            // lbDescription
            // 
            this->lbDescription->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbDescription->AutoSize = true;
            this->lbDescription->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbDescription->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbDescription->Location = System::Drawing::Point(3, 0);
            this->lbDescription->Name = L"lbDescription";
            this->lbDescription->Padding = System::Windows::Forms::Padding(0, 12, 0, 0);
            this->lbDescription->Size = System::Drawing::Size(155, 174);
            this->lbDescription->TabIndex = 0;
            this->lbDescription->Text = L"Description";
            this->lbDescription->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // tableLayoutPanel8
            // 
            this->tableLayoutPanel8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel8->ColumnCount = 2;
            this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                30)));
            this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel8->Controls->Add(this->lbImportPrice, 0, 0);
            this->tableLayoutPanel8->Controls->Add(this->tbxImportPrice, 1, 0);
            this->tableLayoutPanel8->Location = System::Drawing::Point(3, 323);
            this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
            this->tableLayoutPanel8->RowCount = 1;
            this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel8->Size = System::Drawing::Size(538, 54);
            this->tableLayoutPanel8->TabIndex = 8;
            // 
            // lbImportPrice
            // 
            this->lbImportPrice->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbImportPrice->AutoSize = true;
            this->lbImportPrice->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbImportPrice->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbImportPrice->Location = System::Drawing::Point(3, 0);
            this->lbImportPrice->Name = L"lbImportPrice";
            this->lbImportPrice->Size = System::Drawing::Size(155, 54);
            this->lbImportPrice->TabIndex = 0;
            this->lbImportPrice->Text = L"Import Price";
            this->lbImportPrice->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tbxImportPrice
            // 
            this->tbxImportPrice->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxImportPrice->Location = System::Drawing::Point(164, 12);
            this->tbxImportPrice->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->tbxImportPrice->Name = L"tbxImportPrice";
            this->tbxImportPrice->Size = System::Drawing::Size(344, 26);
            this->tbxImportPrice->TabIndex = 1;
            this->tbxImportPrice->TabStop = false;
            // 
            // tableLayoutPanel9
            // 
            this->tableLayoutPanel9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel9->ColumnCount = 2;
            this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                30)));
            this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel9->Controls->Add(this->lbSellPrice, 0, 0);
            this->tableLayoutPanel9->Controls->Add(this->tbxSellPrice, 1, 0);
            this->tableLayoutPanel9->Location = System::Drawing::Point(3, 383);
            this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
            this->tableLayoutPanel9->RowCount = 1;
            this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel9->Size = System::Drawing::Size(538, 54);
            this->tableLayoutPanel9->TabIndex = 9;
            // 
            // lbSellPrice
            // 
            this->lbSellPrice->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbSellPrice->AutoSize = true;
            this->lbSellPrice->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbSellPrice->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbSellPrice->Location = System::Drawing::Point(3, 0);
            this->lbSellPrice->Name = L"lbSellPrice";
            this->lbSellPrice->Size = System::Drawing::Size(155, 54);
            this->lbSellPrice->TabIndex = 0;
            this->lbSellPrice->Text = L"Sell Price";
            this->lbSellPrice->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tbxSellPrice
            // 
            this->tbxSellPrice->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxSellPrice->Location = System::Drawing::Point(164, 12);
            this->tbxSellPrice->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->tbxSellPrice->Name = L"tbxSellPrice";
            this->tbxSellPrice->Size = System::Drawing::Size(344, 26);
            this->tbxSellPrice->TabIndex = 1;
            this->tbxSellPrice->TabStop = false;
            // 
            // tableLayoutPanel10
            // 
            this->tableLayoutPanel10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel10->ColumnCount = 2;
            this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                30)));
            this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel10->Controls->Add(this->lbPosition, 0, 0);
            this->tableLayoutPanel10->Controls->Add(this->tbxPosition, 1, 0);
            this->tableLayoutPanel10->Location = System::Drawing::Point(3, 443);
            this->tableLayoutPanel10->Name = L"tableLayoutPanel10";
            this->tableLayoutPanel10->RowCount = 1;
            this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel10->Size = System::Drawing::Size(538, 54);
            this->tableLayoutPanel10->TabIndex = 11;
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
            this->lbPosition->Size = System::Drawing::Size(155, 54);
            this->lbPosition->TabIndex = 0;
            this->lbPosition->Text = L"Posiotion";
            this->lbPosition->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tbxPosition
            // 
            this->tbxPosition->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxPosition->Location = System::Drawing::Point(164, 12);
            this->tbxPosition->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->tbxPosition->Name = L"tbxPosition";
            this->tbxPosition->Size = System::Drawing::Size(344, 26);
            this->tbxPosition->TabIndex = 1;
            this->tbxPosition->TabStop = false;
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
            this->tableLayoutPanel7->Controls->Add(this->lbQuantity, 0, 0);
            this->tableLayoutPanel7->Controls->Add(this->numQuantity, 1, 0);
            this->tableLayoutPanel7->Location = System::Drawing::Point(547, 263);
            this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
            this->tableLayoutPanel7->RowCount = 1;
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel7->Size = System::Drawing::Size(538, 54);
            this->tableLayoutPanel7->TabIndex = 7;
            // 
            // lbQuantity
            // 
            this->lbQuantity->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbQuantity->AutoSize = true;
            this->lbQuantity->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbQuantity->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbQuantity->Location = System::Drawing::Point(3, 0);
            this->lbQuantity->Name = L"lbQuantity";
            this->lbQuantity->Size = System::Drawing::Size(155, 54);
            this->lbQuantity->TabIndex = 0;
            this->lbQuantity->Text = L"Quantity";
            this->lbQuantity->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // numQuantity
            // 
            this->numQuantity->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->numQuantity->Enabled = false;
            this->numQuantity->Location = System::Drawing::Point(164, 12);
            this->numQuantity->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->numQuantity->Name = L"numQuantity";
            this->numQuantity->ReadOnly = true;
            this->numQuantity->Size = System::Drawing::Size(344, 26);
            this->numQuantity->TabIndex = 1;
            this->numQuantity->TabStop = false;
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
            this->btnCancel->Location = System::Drawing::Point(568, 524);
            this->btnCancel->Margin = System::Windows::Forms::Padding(24, 24, 3, 24);
            this->btnCancel->Name = L"btnCancel";
            this->btnCancel->Size = System::Drawing::Size(140, 96);
            this->btnCancel->TabIndex = 15;
            this->btnCancel->TabStop = false;
            this->btnCancel->UseVisualStyleBackColor = true;
            // 
            // AddOrEditProductForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1088, 644);
            this->Controls->Add(this->tableLayoutPanel1);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->MaximizeBox = false;
            this->MaximumSize = System::Drawing::Size(1110, 700);
            this->MinimumSize = System::Drawing::Size(1110, 700);
            this->Name = L"AddOrEditProductForm";
            this->ShowInTaskbar = false;
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
            this->Text = L"Add Product";
            this->Load += gcnew System::EventHandler(this, &AddOrEditProductForm::AddOrEditProductForm_Load);
            this->tableLayoutPanel1->ResumeLayout(false);
            this->tableLayoutPanel1->PerformLayout();
            this->tableLayoutPanel6->ResumeLayout(false);
            this->tableLayoutPanel6->PerformLayout();
            this->tableLayoutPanel3->ResumeLayout(false);
            this->tableLayoutPanel3->PerformLayout();
            this->tableLayoutPanel5->ResumeLayout(false);
            this->tableLayoutPanel5->PerformLayout();
            this->tableLayoutPanel4->ResumeLayout(false);
            this->tableLayoutPanel4->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageProduct))->EndInit();
            this->tableLayoutPanel2->ResumeLayout(false);
            this->tableLayoutPanel2->PerformLayout();
            this->tableLayoutPanel8->ResumeLayout(false);
            this->tableLayoutPanel8->PerformLayout();
            this->tableLayoutPanel9->ResumeLayout(false);
            this->tableLayoutPanel9->PerformLayout();
            this->tableLayoutPanel10->ResumeLayout(false);
            this->tableLayoutPanel10->PerformLayout();
            this->tableLayoutPanel7->ResumeLayout(false);
            this->tableLayoutPanel7->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numQuantity))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion

// ############## Từ Đây Trở Xuống Sẽ Là Nơi Chúng Ta Viết Code #################

    // ****** Các biến sẽ được khai báo tập trung ở đây ******
    public:
        // Biến này quyết định form này là form edit hay form create
        bool isEditMode;
        // Biến object của Product
        MyObjects::Product* productObject;
        MyStructs::Category* currentCategory;


    // ****** Các hàm ta tự định nghĩa ******
    private:
        void loadCBCategory() {
            for (MyObjects::Node<MyStructs::Category>* i = APP_SESSION::ListCategories.getHead(); i != NULL; i = i->next) {
                this->cbCategory->Items->Add(MyUtils::toSystemString(i->data.title));
            }
        }
        MyStructs::Category* getCategoryByTitle(std::string title) {
            for (MyObjects::Node<MyStructs::Category>* i = APP_SESSION::ListCategories.getHead(); i != NULL; i = i->next)
            {
                if (i->data.title == title) {
                    return &(i->data);
                }
            }
        }

    // ****** Các hàm xử lý sự kiện (event) trong form này ******
    private:
        // Khi form tải
        System::Void AddOrEditProductForm_Load(System::Object^ sender, System::EventArgs^ e) {
            loadCBCategory();
            // Chuyển giữa Form tạo mới và Form chỉnh sửa
            if (this->isEditMode) {
                this->Text = L"Edit Product";
                this->btnSave->ImageKey = L"save-icon.png";
                this->titleForm->Text = "Edit Product";
                // Load data trong Db vào forom
                this->tbxName->Text = MyUtils::toSystemString(this->productObject->getName());
                this->tbxDescription->Text = MyUtils::toSystemString(this->productObject->getDescription());
                this->tbxImage->Text = MyUtils::toSystemString(this->productObject->getImage());
                this->tbxUnit->Text = MyUtils::toSystemString(this->productObject->getUnit());
                this->tbxImportPrice->Text = MyUtils::toSystemString(MyUtils::intToStdString(this->productObject->getImportPrice()));
                this->tbxSellPrice->Text = MyUtils::toSystemString(MyUtils::intToStdString(this->productObject->getSellPrice()));
                this->numQuantity->Value = this->productObject->getQuantity();
                this->tbxPosition->Text = MyUtils::toSystemString(this->productObject->getPosition());
                this->currentCategory = &(APP_SESSION::ListCategories.getNodeByID(this->productObject->getCategoryID())->data);
                if (currentCategory != NULL)
                    this->cbCategory->SelectedItem = MyUtils::toSystemString(this->currentCategory->title);
            }
        }
        // Tự động load image khi nhập link image vào ô image
        System::Void inputImage_TextChanged(System::Object^ sender, System::EventArgs^ e) {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddOrEditProductForm::typeid));
            if (this->tbxImage->Text == "")
                this->imageProduct->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imageProduct.Image")));
            else
                this->imageProduct->ImageLocation = this->tbxImage->Text;
        }
        // Khi nút lưu/thêm click
        System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
            this->productObject->setName(MyUtils::toStdString(this->tbxName->Text));
            this->productObject->setDescription(MyUtils::toStdString(this->tbxDescription->Text));
            this->productObject->setImage(MyUtils::toStdString(this->tbxImage->Text));
            this->productObject->setUnit(MyUtils::toStdString(this->tbxUnit->Text));
            this->productObject->setImprotPrice(stoi(MyUtils::toStdString(this->tbxImportPrice->Text)));
            this->productObject->setsellPrice(stoi(MyUtils::toStdString(this->tbxSellPrice->Text)));
            this->productObject->setPosition(MyUtils::toStdString(this->tbxPosition->Text));
            this->productObject->setCategoryID(this->currentCategory->id);
            if (this->isEditMode) {
                this->productObject->Update();
                MessageBox::Show(L"Update Product Success", L"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
            else {
                this->productObject->Create();
                MessageBox::Show(L"Create Product Success", L"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
            this->Close();
        }
        // Khi cbCategory đổi giá trị
        System::Void cbCategory_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
            std::string title = MyUtils::toStdString(this->cbCategory->SelectedItem->ToString());
            this->currentCategory = getCategoryByTitle(title);
        }
    };
}
