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
    /// Summary for NewBillForm
    /// </summary>
    public ref class NewBillForm : public System::Windows::Forms::Form
    {
    public:
        NewBillForm(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
        }
        NewBillForm(MyDatabase* const MyDB)
        {
            InitializeComponent();
            this->MyDB = MyDB;
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~NewBillForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
    private: System::Windows::Forms::Label^ titleForm;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel8;
    private: System::Windows::Forms::TextBox^ tbxPrice;
    private: System::Windows::Forms::Label^ lbPrice;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
    private: System::Windows::Forms::Label^ lbProduct;
    private: System::Windows::Forms::ComboBox^ cbProducts;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel9;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel12;
    private: System::Windows::Forms::Button^ btnRemove;
    private: System::Windows::Forms::Button^ btnAdd;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
    private: System::Windows::Forms::TextBox^ tbxDate;
    private: System::Windows::Forms::Label^ lbDate;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
    private: System::Windows::Forms::Label^ lbCustomerName;
    private: System::Windows::Forms::ComboBox^ cbCustomersName;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
    private: System::Windows::Forms::TextBox^ tbxEmployeeName;
    private: System::Windows::Forms::Label^ lbEmployeeName;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel10;
    private: System::Windows::Forms::Label^ lbQuantity;
    private: System::Windows::Forms::NumericUpDown^ numQuantity;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel13;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel15;
    private: System::Windows::Forms::TextBox^ tbxTotalBill;
    private: System::Windows::Forms::Label^ lbTotalBill;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel14;
    private: System::Windows::Forms::Label^ lbDiscountByPoint;
    private: System::Windows::Forms::ComboBox^ cbDiscountByPoint;
    private: System::Windows::Forms::DataGridView^ dataTable;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ productID;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ productName;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ productPrice;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ productQuantity;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ totalMoney;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel18;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel19;
    private: System::Windows::Forms::TextBox^ tbxChange;
    private: System::Windows::Forms::Label^ lbChange;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel22;
    private: System::Windows::Forms::Label^ lbCash;
    private: System::Windows::Forms::Button^ btnPay;
    private: System::Windows::Forms::NumericUpDown^ numCash;
    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel18 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel19 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tbxChange = (gcnew System::Windows::Forms::TextBox());
            this->lbChange = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel22 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->numCash = (gcnew System::Windows::Forms::NumericUpDown());
            this->lbCash = (gcnew System::Windows::Forms::Label());
            this->dataTable = (gcnew System::Windows::Forms::DataGridView());
            this->productID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->productName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->productPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->productQuantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->totalMoney = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tbxPrice = (gcnew System::Windows::Forms::TextBox());
            this->lbPrice = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->lbProduct = (gcnew System::Windows::Forms::Label());
            this->cbProducts = (gcnew System::Windows::Forms::ComboBox());
            this->tableLayoutPanel12 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->btnRemove = (gcnew System::Windows::Forms::Button());
            this->btnAdd = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel9 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel10 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->lbQuantity = (gcnew System::Windows::Forms::Label());
            this->numQuantity = (gcnew System::Windows::Forms::NumericUpDown());
            this->titleForm = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tbxDate = (gcnew System::Windows::Forms::TextBox());
            this->lbDate = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->lbCustomerName = (gcnew System::Windows::Forms::Label());
            this->cbCustomersName = (gcnew System::Windows::Forms::ComboBox());
            this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tbxEmployeeName = (gcnew System::Windows::Forms::TextBox());
            this->lbEmployeeName = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel13 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel15 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tbxTotalBill = (gcnew System::Windows::Forms::TextBox());
            this->lbTotalBill = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel14 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->lbDiscountByPoint = (gcnew System::Windows::Forms::Label());
            this->cbDiscountByPoint = (gcnew System::Windows::Forms::ComboBox());
            this->btnPay = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel1->SuspendLayout();
            this->tableLayoutPanel18->SuspendLayout();
            this->tableLayoutPanel19->SuspendLayout();
            this->tableLayoutPanel22->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCash))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->BeginInit();
            this->tableLayoutPanel3->SuspendLayout();
            this->tableLayoutPanel8->SuspendLayout();
            this->tableLayoutPanel7->SuspendLayout();
            this->tableLayoutPanel12->SuspendLayout();
            this->tableLayoutPanel9->SuspendLayout();
            this->tableLayoutPanel10->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numQuantity))->BeginInit();
            this->tableLayoutPanel2->SuspendLayout();
            this->tableLayoutPanel6->SuspendLayout();
            this->tableLayoutPanel5->SuspendLayout();
            this->tableLayoutPanel4->SuspendLayout();
            this->tableLayoutPanel13->SuspendLayout();
            this->tableLayoutPanel15->SuspendLayout();
            this->tableLayoutPanel14->SuspendLayout();
            this->SuspendLayout();
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->ColumnCount = 2;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel18, 1, 3);
            this->tableLayoutPanel1->Controls->Add(this->dataTable, 0, 2);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 1, 1);
            this->tableLayoutPanel1->Controls->Add(this->titleForm, 0, 0);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 1);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel13, 0, 3);
            this->tableLayoutPanel1->Controls->Add(this->btnPay, 0, 4);
            this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 5;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 70)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 240)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 100)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(1100, 733);
            this->tableLayoutPanel1->TabIndex = 0;
            // 
            // tableLayoutPanel18
            // 
            this->tableLayoutPanel18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel18->BackColor = System::Drawing::Color::Ivory;
            this->tableLayoutPanel18->ColumnCount = 1;
            this->tableLayoutPanel18->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel18->Controls->Add(this->tableLayoutPanel19, 0, 1);
            this->tableLayoutPanel18->Controls->Add(this->tableLayoutPanel22, 0, 0);
            this->tableLayoutPanel18->Location = System::Drawing::Point(553, 516);
            this->tableLayoutPanel18->Name = L"tableLayoutPanel18";
            this->tableLayoutPanel18->RowCount = 2;
            this->tableLayoutPanel18->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel18->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel18->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel18->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel18->Size = System::Drawing::Size(544, 114);
            this->tableLayoutPanel18->TabIndex = 7;
            // 
            // tableLayoutPanel19
            // 
            this->tableLayoutPanel19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel19->ColumnCount = 2;
            this->tableLayoutPanel19->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                30)));
            this->tableLayoutPanel19->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel19->Controls->Add(this->tbxChange, 1, 0);
            this->tableLayoutPanel19->Controls->Add(this->lbChange, 0, 0);
            this->tableLayoutPanel19->Location = System::Drawing::Point(3, 60);
            this->tableLayoutPanel19->Name = L"tableLayoutPanel19";
            this->tableLayoutPanel19->RowCount = 1;
            this->tableLayoutPanel19->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel19->Size = System::Drawing::Size(538, 51);
            this->tableLayoutPanel19->TabIndex = 10;
            // 
            // tbxChange
            // 
            this->tbxChange->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxChange->Location = System::Drawing::Point(164, 12);
            this->tbxChange->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->tbxChange->Name = L"tbxChange";
            this->tbxChange->ReadOnly = true;
            this->tbxChange->Size = System::Drawing::Size(344, 26);
            this->tbxChange->TabIndex = 1;
            this->tbxChange->TabStop = false;
            // 
            // lbChange
            // 
            this->lbChange->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbChange->AutoSize = true;
            this->lbChange->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbChange->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbChange->Location = System::Drawing::Point(3, 0);
            this->lbChange->Name = L"lbChange";
            this->lbChange->Size = System::Drawing::Size(155, 51);
            this->lbChange->TabIndex = 0;
            this->lbChange->Text = L"Change:";
            this->lbChange->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel22
            // 
            this->tableLayoutPanel22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel22->ColumnCount = 2;
            this->tableLayoutPanel22->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                30)));
            this->tableLayoutPanel22->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel22->Controls->Add(this->numCash, 0, 0);
            this->tableLayoutPanel22->Controls->Add(this->lbCash, 0, 0);
            this->tableLayoutPanel22->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel22->Name = L"tableLayoutPanel22";
            this->tableLayoutPanel22->RowCount = 1;
            this->tableLayoutPanel22->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel22->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                51)));
            this->tableLayoutPanel22->Size = System::Drawing::Size(538, 51);
            this->tableLayoutPanel22->TabIndex = 9;
            // 
            // numCash
            // 
            this->numCash->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->numCash->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
            this->numCash->Location = System::Drawing::Point(164, 17);
            this->numCash->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->numCash->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999999, 0, 0, 0 });
            this->numCash->Name = L"numCash";
            this->numCash->Size = System::Drawing::Size(344, 26);
            this->numCash->TabIndex = 2;
            this->numCash->ValueChanged += gcnew System::EventHandler(this, &NewBillForm::numCash_ValueChanged);
            // 
            // lbCash
            // 
            this->lbCash->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbCash->AutoSize = true;
            this->lbCash->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbCash->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbCash->Location = System::Drawing::Point(3, 0);
            this->lbCash->Name = L"lbCash";
            this->lbCash->Size = System::Drawing::Size(155, 51);
            this->lbCash->TabIndex = 0;
            this->lbCash->Text = L"Cash Tendered:";
            this->lbCash->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // dataTable
            // 
            this->dataTable->AllowUserToAddRows = false;
            this->dataTable->AllowUserToDeleteRows = false;
            this->dataTable->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->dataTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
                this->productID,
                    this->productName, this->productPrice, this->productQuantity, this->totalMoney
            });
            this->tableLayoutPanel1->SetColumnSpan(this->dataTable, 2);
            this->dataTable->Location = System::Drawing::Point(3, 313);
            this->dataTable->MultiSelect = false;
            this->dataTable->Name = L"dataTable";
            this->dataTable->ReadOnly = true;
            this->dataTable->RowHeadersWidth = 62;
            this->dataTable->RowTemplate->Height = 28;
            this->dataTable->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
            this->dataTable->Size = System::Drawing::Size(1094, 197);
            this->dataTable->TabIndex = 6;
            // 
            // productID
            // 
            this->productID->HeaderText = L"ID";
            this->productID->MinimumWidth = 8;
            this->productID->Name = L"productID";
            this->productID->ReadOnly = true;
            // 
            // productName
            // 
            this->productName->HeaderText = L"Name";
            this->productName->MinimumWidth = 8;
            this->productName->Name = L"productName";
            this->productName->ReadOnly = true;
            // 
            // productPrice
            // 
            this->productPrice->HeaderText = L"Price";
            this->productPrice->MinimumWidth = 8;
            this->productPrice->Name = L"productPrice";
            this->productPrice->ReadOnly = true;
            // 
            // productQuantity
            // 
            this->productQuantity->HeaderText = L"Quantity";
            this->productQuantity->MinimumWidth = 8;
            this->productQuantity->Name = L"productQuantity";
            this->productQuantity->ReadOnly = true;
            // 
            // totalMoney
            // 
            this->totalMoney->HeaderText = L"Total Money";
            this->totalMoney->MinimumWidth = 8;
            this->totalMoney->Name = L"totalMoney";
            this->totalMoney->ReadOnly = true;
            // 
            // tableLayoutPanel3
            // 
            this->tableLayoutPanel3->BackColor = System::Drawing::Color::Ivory;
            this->tableLayoutPanel3->ColumnCount = 1;
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel8, 0, 1);
            this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel7, 0, 0);
            this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel12, 0, 3);
            this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel9, 0, 2);
            this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel3->Location = System::Drawing::Point(553, 73);
            this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
            this->tableLayoutPanel3->RowCount = 4;
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel3->Size = System::Drawing::Size(544, 234);
            this->tableLayoutPanel3->TabIndex = 2;
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
            this->tableLayoutPanel8->Controls->Add(this->tbxPrice, 1, 0);
            this->tableLayoutPanel8->Controls->Add(this->lbPrice, 0, 0);
            this->tableLayoutPanel8->Location = System::Drawing::Point(3, 61);
            this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
            this->tableLayoutPanel8->RowCount = 1;
            this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel8->Size = System::Drawing::Size(538, 52);
            this->tableLayoutPanel8->TabIndex = 8;
            // 
            // tbxPrice
            // 
            this->tbxPrice->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxPrice->Location = System::Drawing::Point(164, 12);
            this->tbxPrice->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->tbxPrice->Name = L"tbxPrice";
            this->tbxPrice->ReadOnly = true;
            this->tbxPrice->Size = System::Drawing::Size(344, 26);
            this->tbxPrice->TabIndex = 1;
            this->tbxPrice->TabStop = false;
            this->tbxPrice->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // lbPrice
            // 
            this->lbPrice->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbPrice->AutoSize = true;
            this->lbPrice->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbPrice->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbPrice->Location = System::Drawing::Point(3, 0);
            this->lbPrice->Name = L"lbPrice";
            this->lbPrice->Size = System::Drawing::Size(155, 52);
            this->lbPrice->TabIndex = 0;
            this->lbPrice->Text = L"Price";
            this->lbPrice->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->tableLayoutPanel7->Controls->Add(this->lbProduct, 0, 0);
            this->tableLayoutPanel7->Controls->Add(this->cbProducts, 1, 0);
            this->tableLayoutPanel7->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
            this->tableLayoutPanel7->RowCount = 1;
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel7->Size = System::Drawing::Size(538, 52);
            this->tableLayoutPanel7->TabIndex = 7;
            // 
            // lbProduct
            // 
            this->lbProduct->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbProduct->AutoSize = true;
            this->lbProduct->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbProduct->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbProduct->Location = System::Drawing::Point(3, 0);
            this->lbProduct->Name = L"lbProduct";
            this->lbProduct->Size = System::Drawing::Size(155, 52);
            this->lbProduct->TabIndex = 0;
            this->lbProduct->Text = L"Product";
            this->lbProduct->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // cbProducts
            // 
            this->cbProducts->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->cbProducts->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->cbProducts->FormattingEnabled = true;
            this->cbProducts->Location = System::Drawing::Point(164, 12);
            this->cbProducts->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->cbProducts->Name = L"cbProducts";
            this->cbProducts->Size = System::Drawing::Size(344, 28);
            this->cbProducts->TabIndex = 1;
            this->cbProducts->SelectedIndexChanged += gcnew System::EventHandler(this, &NewBillForm::cbProducts_SelectedIndexChanged);
            // 
            // tableLayoutPanel12
            // 
            this->tableLayoutPanel12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel12->ColumnCount = 2;
            this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel12->Controls->Add(this->btnRemove, 1, 0);
            this->tableLayoutPanel12->Controls->Add(this->btnAdd, 0, 0);
            this->tableLayoutPanel12->Location = System::Drawing::Point(3, 177);
            this->tableLayoutPanel12->Name = L"tableLayoutPanel12";
            this->tableLayoutPanel12->RowCount = 1;
            this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel12->Size = System::Drawing::Size(538, 54);
            this->tableLayoutPanel12->TabIndex = 10;
            // 
            // btnRemove
            // 
            this->btnRemove->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->btnRemove->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnRemove->Location = System::Drawing::Point(294, 6);
            this->btnRemove->Margin = System::Windows::Forms::Padding(25, 6, 3, 9);
            this->btnRemove->Name = L"btnRemove";
            this->btnRemove->Size = System::Drawing::Size(100, 39);
            this->btnRemove->TabIndex = 1;
            this->btnRemove->Text = L"Remove";
            this->btnRemove->UseVisualStyleBackColor = true;
            this->btnRemove->Click += gcnew System::EventHandler(this, &NewBillForm::btnRemove_Click);
            // 
            // btnAdd
            // 
            this->btnAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnAdd->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAdd->Location = System::Drawing::Point(156, 6);
            this->btnAdd->Margin = System::Windows::Forms::Padding(3, 6, 25, 6);
            this->btnAdd->Name = L"btnAdd";
            this->btnAdd->Size = System::Drawing::Size(88, 42);
            this->btnAdd->TabIndex = 0;
            this->btnAdd->Text = L"Add";
            this->btnAdd->UseVisualStyleBackColor = true;
            this->btnAdd->Click += gcnew System::EventHandler(this, &NewBillForm::btnAdd_Click);
            // 
            // tableLayoutPanel9
            // 
            this->tableLayoutPanel9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel9->ColumnCount = 1;
            this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel9->Controls->Add(this->tableLayoutPanel10, 0, 0);
            this->tableLayoutPanel9->Location = System::Drawing::Point(3, 119);
            this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
            this->tableLayoutPanel9->RowCount = 1;
            this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel9->Size = System::Drawing::Size(538, 52);
            this->tableLayoutPanel9->TabIndex = 9;
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
            this->tableLayoutPanel10->Controls->Add(this->lbQuantity, 0, 0);
            this->tableLayoutPanel10->Controls->Add(this->numQuantity, 1, 0);
            this->tableLayoutPanel10->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel10->Name = L"tableLayoutPanel10";
            this->tableLayoutPanel10->RowCount = 1;
            this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel10->Size = System::Drawing::Size(532, 46);
            this->tableLayoutPanel10->TabIndex = 12;
            // 
            // lbQuantity
            // 
            this->lbQuantity->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbQuantity->AutoSize = true;
            this->lbQuantity->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbQuantity->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbQuantity->Location = System::Drawing::Point(3, 0);
            this->lbQuantity->Name = L"lbQuantity";
            this->lbQuantity->Size = System::Drawing::Size(153, 46);
            this->lbQuantity->TabIndex = 0;
            this->lbQuantity->Text = L"Quantity";
            this->lbQuantity->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // numQuantity
            // 
            this->numQuantity->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->numQuantity->Location = System::Drawing::Point(162, 14);
            this->numQuantity->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->numQuantity->Name = L"numQuantity";
            this->numQuantity->Size = System::Drawing::Size(340, 26);
            this->numQuantity->TabIndex = 1;
            this->numQuantity->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
            this->titleForm->Size = System::Drawing::Size(1094, 70);
            this->titleForm->TabIndex = 0;
            this->titleForm->Text = L"New Bill";
            this->titleForm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel2
            // 
            this->tableLayoutPanel2->BackColor = System::Drawing::Color::Ivory;
            this->tableLayoutPanel2->ColumnCount = 1;
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel6, 0, 2);
            this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel5, 0, 1);
            this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel4, 0, 0);
            this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel2->Location = System::Drawing::Point(3, 73);
            this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
            this->tableLayoutPanel2->RowCount = 4;
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel2->Size = System::Drawing::Size(544, 234);
            this->tableLayoutPanel2->TabIndex = 1;
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
            this->tableLayoutPanel6->Controls->Add(this->tbxDate, 1, 0);
            this->tableLayoutPanel6->Controls->Add(this->lbDate, 0, 0);
            this->tableLayoutPanel6->Location = System::Drawing::Point(3, 119);
            this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
            this->tableLayoutPanel6->RowCount = 1;
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel6->Size = System::Drawing::Size(538, 52);
            this->tableLayoutPanel6->TabIndex = 7;
            // 
            // tbxDate
            // 
            this->tbxDate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxDate->Location = System::Drawing::Point(164, 12);
            this->tbxDate->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->tbxDate->Name = L"tbxDate";
            this->tbxDate->ReadOnly = true;
            this->tbxDate->Size = System::Drawing::Size(344, 26);
            this->tbxDate->TabIndex = 1;
            this->tbxDate->TabStop = false;
            this->tbxDate->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // lbDate
            // 
            this->lbDate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbDate->AutoSize = true;
            this->lbDate->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbDate->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbDate->Location = System::Drawing::Point(3, 0);
            this->lbDate->Name = L"lbDate";
            this->lbDate->Size = System::Drawing::Size(155, 52);
            this->lbDate->TabIndex = 0;
            this->lbDate->Text = L"Date";
            this->lbDate->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->tableLayoutPanel5->Controls->Add(this->lbCustomerName, 0, 0);
            this->tableLayoutPanel5->Controls->Add(this->cbCustomersName, 1, 0);
            this->tableLayoutPanel5->Location = System::Drawing::Point(3, 61);
            this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
            this->tableLayoutPanel5->RowCount = 1;
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel5->Size = System::Drawing::Size(538, 52);
            this->tableLayoutPanel5->TabIndex = 6;
            // 
            // lbCustomerName
            // 
            this->lbCustomerName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbCustomerName->AutoSize = true;
            this->lbCustomerName->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbCustomerName->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbCustomerName->Location = System::Drawing::Point(3, 0);
            this->lbCustomerName->Name = L"lbCustomerName";
            this->lbCustomerName->Size = System::Drawing::Size(155, 52);
            this->lbCustomerName->TabIndex = 0;
            this->lbCustomerName->Text = L"Customer Name";
            this->lbCustomerName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // cbCustomersName
            // 
            this->cbCustomersName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->cbCustomersName->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->cbCustomersName->FormattingEnabled = true;
            this->cbCustomersName->Location = System::Drawing::Point(164, 12);
            this->cbCustomersName->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->cbCustomersName->Name = L"cbCustomersName";
            this->cbCustomersName->Size = System::Drawing::Size(344, 28);
            this->cbCustomersName->TabIndex = 1;
            this->cbCustomersName->SelectedIndexChanged += gcnew System::EventHandler(this, &NewBillForm::cbCustomersName_SelectedIndexChanged);
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
            this->tableLayoutPanel4->Controls->Add(this->tbxEmployeeName, 1, 0);
            this->tableLayoutPanel4->Controls->Add(this->lbEmployeeName, 0, 0);
            this->tableLayoutPanel4->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
            this->tableLayoutPanel4->RowCount = 1;
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel4->Size = System::Drawing::Size(538, 52);
            this->tableLayoutPanel4->TabIndex = 5;
            // 
            // tbxEmployeeName
            // 
            this->tbxEmployeeName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxEmployeeName->Location = System::Drawing::Point(164, 12);
            this->tbxEmployeeName->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->tbxEmployeeName->Name = L"tbxEmployeeName";
            this->tbxEmployeeName->ReadOnly = true;
            this->tbxEmployeeName->Size = System::Drawing::Size(344, 26);
            this->tbxEmployeeName->TabIndex = 1;
            this->tbxEmployeeName->TabStop = false;
            this->tbxEmployeeName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // lbEmployeeName
            // 
            this->lbEmployeeName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbEmployeeName->AutoSize = true;
            this->lbEmployeeName->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbEmployeeName->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbEmployeeName->Location = System::Drawing::Point(3, 0);
            this->lbEmployeeName->Name = L"lbEmployeeName";
            this->lbEmployeeName->Size = System::Drawing::Size(155, 52);
            this->lbEmployeeName->TabIndex = 0;
            this->lbEmployeeName->Text = L"Employee Name";
            this->lbEmployeeName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel13
            // 
            this->tableLayoutPanel13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel13->BackColor = System::Drawing::Color::Ivory;
            this->tableLayoutPanel13->ColumnCount = 1;
            this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel13->Controls->Add(this->tableLayoutPanel15, 0, 1);
            this->tableLayoutPanel13->Controls->Add(this->tableLayoutPanel14, 0, 0);
            this->tableLayoutPanel13->Location = System::Drawing::Point(3, 516);
            this->tableLayoutPanel13->Name = L"tableLayoutPanel13";
            this->tableLayoutPanel13->RowCount = 2;
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel13->Size = System::Drawing::Size(544, 114);
            this->tableLayoutPanel13->TabIndex = 4;
            // 
            // tableLayoutPanel15
            // 
            this->tableLayoutPanel15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel15->ColumnCount = 2;
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                30)));
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel15->Controls->Add(this->tbxTotalBill, 1, 0);
            this->tableLayoutPanel15->Controls->Add(this->lbTotalBill, 0, 0);
            this->tableLayoutPanel15->Location = System::Drawing::Point(3, 60);
            this->tableLayoutPanel15->Name = L"tableLayoutPanel15";
            this->tableLayoutPanel15->RowCount = 1;
            this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel15->Size = System::Drawing::Size(538, 51);
            this->tableLayoutPanel15->TabIndex = 8;
            // 
            // tbxTotalBill
            // 
            this->tbxTotalBill->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxTotalBill->Location = System::Drawing::Point(164, 12);
            this->tbxTotalBill->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->tbxTotalBill->Name = L"tbxTotalBill";
            this->tbxTotalBill->ReadOnly = true;
            this->tbxTotalBill->Size = System::Drawing::Size(344, 26);
            this->tbxTotalBill->TabIndex = 1;
            this->tbxTotalBill->TabStop = false;
            this->tbxTotalBill->Text = L"0";
            // 
            // lbTotalBill
            // 
            this->lbTotalBill->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbTotalBill->AutoSize = true;
            this->lbTotalBill->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbTotalBill->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbTotalBill->Location = System::Drawing::Point(3, 0);
            this->lbTotalBill->Name = L"lbTotalBill";
            this->lbTotalBill->Size = System::Drawing::Size(155, 51);
            this->lbTotalBill->TabIndex = 0;
            this->lbTotalBill->Text = L"Total Bill:";
            this->lbTotalBill->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel14
            // 
            this->tableLayoutPanel14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel14->ColumnCount = 2;
            this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                30)));
            this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel14->Controls->Add(this->lbDiscountByPoint, 0, 0);
            this->tableLayoutPanel14->Controls->Add(this->cbDiscountByPoint, 1, 0);
            this->tableLayoutPanel14->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel14->Name = L"tableLayoutPanel14";
            this->tableLayoutPanel14->RowCount = 1;
            this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel14->Size = System::Drawing::Size(538, 51);
            this->tableLayoutPanel14->TabIndex = 7;
            // 
            // lbDiscountByPoint
            // 
            this->lbDiscountByPoint->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbDiscountByPoint->AutoSize = true;
            this->lbDiscountByPoint->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbDiscountByPoint->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbDiscountByPoint->Location = System::Drawing::Point(3, 0);
            this->lbDiscountByPoint->Name = L"lbDiscountByPoint";
            this->lbDiscountByPoint->Size = System::Drawing::Size(155, 51);
            this->lbDiscountByPoint->TabIndex = 0;
            this->lbDiscountByPoint->Text = L"Discount by Customer Point:";
            this->lbDiscountByPoint->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // cbDiscountByPoint
            // 
            this->cbDiscountByPoint->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->cbDiscountByPoint->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->cbDiscountByPoint->FormattingEnabled = true;
            this->cbDiscountByPoint->Location = System::Drawing::Point(164, 12);
            this->cbDiscountByPoint->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->cbDiscountByPoint->Name = L"cbDiscountByPoint";
            this->cbDiscountByPoint->Size = System::Drawing::Size(344, 28);
            this->cbDiscountByPoint->TabIndex = 1;
            this->cbDiscountByPoint->SelectedIndexChanged += gcnew System::EventHandler(this, &NewBillForm::cbDiscountByPoint_SelectedIndexChanged);
            // 
            // btnPay
            // 
            this->btnPay->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel1->SetColumnSpan(this->btnPay, 2);
            this->btnPay->Font = (gcnew System::Drawing::Font(L"Cooper Black", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnPay->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->btnPay->Location = System::Drawing::Point(450, 645);
            this->btnPay->Margin = System::Windows::Forms::Padding(450, 12, 450, 12);
            this->btnPay->Name = L"btnPay";
            this->btnPay->Size = System::Drawing::Size(200, 76);
            this->btnPay->TabIndex = 8;
            this->btnPay->Text = L"PAY";
            this->btnPay->UseVisualStyleBackColor = true;
            this->btnPay->Click += gcnew System::EventHandler(this, &NewBillForm::btnPay_Click);
            // 
            // NewBillForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1100, 733);
            this->Controls->Add(this->tableLayoutPanel1);
            this->MaximizeBox = false;
            this->MaximumSize = System::Drawing::Size(1122, 789);
            this->MinimumSize = System::Drawing::Size(1122, 789);
            this->Name = L"NewBillForm";
            this->ShowInTaskbar = false;
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
            this->Text = L"New Bill";
            this->Load += gcnew System::EventHandler(this, &NewBillForm::NewBillForm_Load);
            this->tableLayoutPanel1->ResumeLayout(false);
            this->tableLayoutPanel1->PerformLayout();
            this->tableLayoutPanel18->ResumeLayout(false);
            this->tableLayoutPanel19->ResumeLayout(false);
            this->tableLayoutPanel19->PerformLayout();
            this->tableLayoutPanel22->ResumeLayout(false);
            this->tableLayoutPanel22->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCash))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->EndInit();
            this->tableLayoutPanel3->ResumeLayout(false);
            this->tableLayoutPanel8->ResumeLayout(false);
            this->tableLayoutPanel8->PerformLayout();
            this->tableLayoutPanel7->ResumeLayout(false);
            this->tableLayoutPanel7->PerformLayout();
            this->tableLayoutPanel12->ResumeLayout(false);
            this->tableLayoutPanel9->ResumeLayout(false);
            this->tableLayoutPanel10->ResumeLayout(false);
            this->tableLayoutPanel10->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numQuantity))->EndInit();
            this->tableLayoutPanel2->ResumeLayout(false);
            this->tableLayoutPanel6->ResumeLayout(false);
            this->tableLayoutPanel6->PerformLayout();
            this->tableLayoutPanel5->ResumeLayout(false);
            this->tableLayoutPanel5->PerformLayout();
            this->tableLayoutPanel4->ResumeLayout(false);
            this->tableLayoutPanel4->PerformLayout();
            this->tableLayoutPanel13->ResumeLayout(false);
            this->tableLayoutPanel15->ResumeLayout(false);
            this->tableLayoutPanel15->PerformLayout();
            this->tableLayoutPanel14->ResumeLayout(false);
            this->tableLayoutPanel14->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion

// ############## Từ Đây Trở Xuống Sẽ Là Nơi Chúng Ta Viết Code #################
    // ****** Các biến sẽ được khai báo tập trung ở đây ******
    private:
        // Biến MyDB để thực hiện các tương tác đến Database
        MyDatabase* MyDB = new MyDatabase();
        // Biến object của BillCustomer
        MyObjects::BillCustomer* billCustomerObject;
        MyObjects::SList<MyStructs::Product>* ListProducts = new MyObjects::SList<MyStructs::Product>();
        MyObjects::SList<MyStructs::Customer>* ListCustomer = new MyObjects::SList<MyStructs::Customer>();
        MyStructs::Customer* currentCustomer = NULL;
        MyStructs::Product* currentProduct = NULL;

    // ****** Các hàm ta tự định nghĩa ******
    private:
        int getCurrentRowSelectedIndex() {
            int index = this->dataTable->CurrentRow->Index;
            if (index > this->dataTable->Rows->Count) index = this->dataTable->Rows->Count - 1;
            else if (index < 0) index = 0;
            return index;
        }
        void fillListCustomer() {
            sql::ResultSet* res = this->MyDB->ReadQuery("SELECT `id`, `fullname`, `points` FROM `tb_customers` WHERE (`isDelete` = 0)");
            while (res->next())
            {
                MyStructs::Customer customer;
                customer.id = res->getInt("id");
                customer.fullName = res->getString("fullname");
                customer.points = res->getInt("points");
                this->ListCustomer->addFirst(customer);
            }
        }
        void fillListProducts() {
            sql::ResultSet* res = this->MyDB->ReadQuery("SELECT `id`, `name`, `quantity`, `import_price`, `sell_price` FROM `tb_products` WHERE (`isDelete` = 0)");
            while (res->next())
            {
                MyStructs::Product pd;
                pd.id = res->getInt("id");
                pd.name = res->getString("name");
                pd.quantity = res->getInt("quantity");
                pd.importPrice = res->getInt("import_price");
                pd.sellPrice = res->getInt("sell_price");
                this->ListProducts->addFirst(pd);
            }
        }
        void loadCBProducts() {
            for (MyObjects::Node<MyStructs::Product>* i = this->ListProducts->getHead(); i != NULL; i = i->next)
            {
                this->cbProducts->Items->Add(MyUtils::stdStringToSystemString(i->data.name));
            }
        }
        void loadCBCustomers() {
            this->cbCustomersName->Items->Add(L"Khách vãng lai");
            for (MyObjects::Node<MyStructs::Customer>* i = this->ListCustomer->getHead(); i != NULL; i = i->next)
            {
                this->cbCustomersName->Items->Add(MyUtils::stdStringToSystemString(i->data.fullName));
            }
        }
        MyStructs::Product* getProductByName(std::string name) {
            for (MyObjects::Node<MyStructs::Product>* i = this->ListProducts->getHead(); i != NULL; i = i->next)
            {
                if (i->data.name == name) {
                    return &(i->data);
                }
            }
        }
        MyStructs::Customer* getCustomerByFullName(std::string fullName) {
            for (MyObjects::Node<MyStructs::Customer>* i = this->ListCustomer->getHead(); i != NULL; i = i->next)
            {
                if (i->data.fullName == fullName) {
                    return &(i->data);
                }
            }
        }
        void calcTotalMoney() {
            unsigned int sum = 0;
            for (int i = 0; i < this->dataTable->Rows->Count; i++)
            {
                sum += std::stoi(MyUtils::systemStringToStdString(this->dataTable->Rows[i]->Cells[4]->Value->ToString()));
            }
            this->tbxTotalBill->Text = sum.ToString();
        }
        void calcChangeMoney() {
            unsigned int totalMoney = std::stoi(MyUtils::systemStringToStdString(this->tbxTotalBill->Text));
            unsigned int cashMonney = (unsigned int)this->numCash->Value;
            if (cashMonney >= totalMoney) {
                this->tbxChange->Text = (cashMonney - totalMoney).ToString();
            }
            else {
                this->tbxChange->Text = "Cash Tendered not enough!!!";
            }
        }
        void updateQuantityProducts(std::string quantities, std::string productIDs) {
            std::vector<std::string> vtQuantities, vtProductIDs;
            vtProductIDs = MyUtils::split(productIDs, ",");
            vtQuantities = MyUtils::split(quantities, ",");
            for (int i = 0; i < vtProductIDs.size() - 1; i++)
            {
                this->MyDB->CUDQuery("UPDATE `tb_products` SET `quantity` = `quantity` - " + vtQuantities[i] + " WHERE (`id` = " + vtProductIDs[i] + ")");
            }
        }
        void updateDiscountPointsCustomer(unsigned int idCustomer, bool isUsedPoints, unsigned int totalMoney) {
            unsigned int extraPoints = totalMoney / 100;
            if (isUsedPoints) {
                std::string qr = "UPDATE `tb_customers` SET `points`=" + MyUtils::intToStdString(extraPoints) + "  WHERE (`id` = " + MyUtils::intToStdString(idCustomer) + ")";
                this->MyDB->CUDQuery(qr);
            }
            else {
                this->MyDB->CUDQuery("UPDATE `tb_customers` SET `points`=`points`+" + MyUtils::intToStdString(extraPoints) + "  WHERE (`id` = " + MyUtils::intToStdString(idCustomer) + ")");
            }
        }

    // ****** Các hàm xử lý sự kiện (event) trong form này ******
    private:
        System::Void NewBillForm_Load(System::Object^ sender, System::EventArgs^ e) {
            fillListCustomer();
            fillListProducts();
            loadCBCustomers();
            loadCBProducts();
            this->tbxEmployeeName->Text = MyUtils::stdStringToSystemString(APP_SESSION::currentUser->getFullName());
            this->tbxDate->Text = DateTime::Now.ToString("yyyy-MM-dd");
            this->billCustomerObject = new MyObjects::BillCustomer(this->MyDB);
        }
        System::Void cbCustomersName_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
            if (this->cbCustomersName->SelectedItem->ToString() != L"Khách vãng lai") {
                std::string fullNameCustomerSelected = MyUtils::systemStringToStdString(this->cbCustomersName->SelectedItem->ToString());
                this->currentCustomer = getCustomerByFullName(fullNameCustomerSelected);
                this->cbDiscountByPoint->Items->Clear();
                this->cbDiscountByPoint->Items->Add(-this->currentCustomer->points);
            }
            else {
                this->currentCustomer = NULL;
                this->cbDiscountByPoint->Items->Clear();
            }
        }
        System::Void cbProducts_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
            std::string nameProductSelected = MyUtils::systemStringToStdString(this->cbProducts->SelectedItem->ToString());
            this->currentProduct = getProductByName(nameProductSelected);
            this->tbxPrice->Text = this->currentProduct->sellPrice.ToString();
        }
        System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
            if (this->currentProduct != NULL) {
                if (this->numQuantity->Value <= this->currentProduct->quantity) {
                    this->dataTable->Rows->Add(
                        this->currentProduct->id,
                        MyUtils::stdStringToSystemString(this->currentProduct->name),
                        this->currentProduct->sellPrice,
                        this->numQuantity->Value,
                        this->numQuantity->Value * this->currentProduct->sellPrice
                    );
                    calcTotalMoney();
                }
                else MessageBox::Show("ERROR, Quantity over the allowed", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        System::Void btnRemove_Click(System::Object^ sender, System::EventArgs^ e) {
            this->dataTable->Rows->RemoveAt(this->getCurrentRowSelectedIndex());
            calcTotalMoney();
        }
        System::Void numCash_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
            calcChangeMoney();
        }
        System::Void cbDiscountByPoint_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
            if (this->cbDiscountByPoint->SelectedItem != nullptr) {
                int totalMoney = std::stoi(MyUtils::systemStringToStdString(this->tbxTotalBill->Text));
                int discountMoney = (int)this->cbDiscountByPoint->SelectedItem;
                if (totalMoney + discountMoney > 0)
                    this->tbxTotalBill->Text = (totalMoney + discountMoney).ToString();
                calcChangeMoney();
            }
        }
        System::Void btnPay_Click(System::Object^ sender, System::EventArgs^ e) {
            std::string productIDs = "", quantities = "";
            std::string date = MyUtils::systemStringToStdString(DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
            unsigned int totalMoney = std::stoi(MyUtils::systemStringToStdString(this->tbxTotalBill->Text));
            for (int i = 0; i < this->dataTable->Rows->Count; i++)
            {
                productIDs += MyUtils::systemStringToStdString(this->dataTable->Rows[i]->Cells[0]->Value->ToString()) + ",";
                quantities += MyUtils::systemStringToStdString(this->dataTable->Rows[i]->Cells[3]->Value->ToString()) + ",";
            }
            if (this->currentCustomer != NULL) {
                this->billCustomerObject->setCustomerID(this->currentCustomer->id);
            }
            else {
                this->billCustomerObject->setCustomerID(0);
            }
            if (this->cbDiscountByPoint->SelectedItem != nullptr) {
                int discount = (int)this->cbDiscountByPoint->SelectedItem;
                this->billCustomerObject->setDiscountByPoints(discount);
            }
            else {
                this->billCustomerObject->setDiscountByPoints(0);
            }
            this->billCustomerObject->setEmployeeID(APP_SESSION::currentUser->getId());
            this->billCustomerObject->setTotalPrice(totalMoney);
            this->billCustomerObject->setProductIDs(productIDs);
            this->billCustomerObject->setQuantityProducts(quantities);
            this->billCustomerObject->setDate(date);
            this->billCustomerObject->Create();

            updateQuantityProducts(quantities, productIDs);
            updateDiscountPointsCustomer(this->billCustomerObject->getCustomerID(), this->billCustomerObject->getDiscountByPoints(), this->billCustomerObject->getTotalPrice());

            MessageBox::Show(L"Create New Bill Success", L"SUCCESS", MessageBoxButtons::OK, MessageBoxIcon::Information);
            this->Close();
        }
    };
}
