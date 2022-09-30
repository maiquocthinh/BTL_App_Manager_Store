#pragma once

namespace BTLAppManagerStore {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for BillDetailForm
    /// </summary>
    public ref class BillDetailForm : public System::Windows::Forms::Form
    {
    public:
        BillDetailForm(void)
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
        ~BillDetailForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
    private: System::Windows::Forms::Label^ titleForm;

    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
    private: System::Windows::Forms::TextBox^ tbxEmployeeName;


    private: System::Windows::Forms::Label^ lbEmployeeName;

    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
    private: System::Windows::Forms::TextBox^ tbxCustomerName;


    private: System::Windows::Forms::Label^ lbCustomerName;

    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
    private: System::Windows::Forms::TextBox^ tbxDate;


    private: System::Windows::Forms::Label^ lbDate;

    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
    private: System::Windows::Forms::TextBox^ tbxBillID;


    private: System::Windows::Forms::Label^ lbBillID;
    private: System::Windows::Forms::DataGridView^ dataTable;


    private: System::Windows::Forms::DataGridViewTextBoxColumn^ productID;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ productName;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ productPrice;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ productQuantity;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ totalMoney;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel13;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel15;
    private: System::Windows::Forms::TextBox^ tbxTotalBill;

    private: System::Windows::Forms::Label^ lbTotalBill;

    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel14;
    private: System::Windows::Forms::TextBox^ tbxDiscount;

    private: System::Windows::Forms::Label^ lbDiscount;
    private: System::Windows::Forms::Button^ btnDelete;



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
            this->dataTable = (gcnew System::Windows::Forms::DataGridView());
            this->productID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->productName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->productPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->productQuantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->totalMoney = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tbxDate = (gcnew System::Windows::Forms::TextBox());
            this->lbDate = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tbxBillID = (gcnew System::Windows::Forms::TextBox());
            this->lbBillID = (gcnew System::Windows::Forms::Label());
            this->titleForm = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tbxCustomerName = (gcnew System::Windows::Forms::TextBox());
            this->lbCustomerName = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tbxEmployeeName = (gcnew System::Windows::Forms::TextBox());
            this->lbEmployeeName = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel13 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel15 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tbxTotalBill = (gcnew System::Windows::Forms::TextBox());
            this->lbTotalBill = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel14 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tbxDiscount = (gcnew System::Windows::Forms::TextBox());
            this->lbDiscount = (gcnew System::Windows::Forms::Label());
            this->btnDelete = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->BeginInit();
            this->tableLayoutPanel5->SuspendLayout();
            this->tableLayoutPanel6->SuspendLayout();
            this->tableLayoutPanel7->SuspendLayout();
            this->tableLayoutPanel2->SuspendLayout();
            this->tableLayoutPanel3->SuspendLayout();
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
            this->tableLayoutPanel1->Controls->Add(this->dataTable, 0, 2);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel5, 1, 1);
            this->tableLayoutPanel1->Controls->Add(this->titleForm, 0, 0);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 1);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel13, 1, 3);
            this->tableLayoutPanel1->Controls->Add(this->btnDelete, 0, 3);
            this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 4;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 70)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(1100, 733);
            this->tableLayoutPanel1->TabIndex = 0;
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
            this->dataTable->Location = System::Drawing::Point(3, 193);
            this->dataTable->Name = L"dataTable";
            this->dataTable->ReadOnly = true;
            this->dataTable->RowHeadersWidth = 62;
            this->dataTable->RowTemplate->Height = 28;
            this->dataTable->Size = System::Drawing::Size(1094, 417);
            this->dataTable->TabIndex = 7;
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
            // tableLayoutPanel5
            // 
            this->tableLayoutPanel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel5->BackColor = System::Drawing::Color::Ivory;
            this->tableLayoutPanel5->ColumnCount = 1;
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel5->Controls->Add(this->tableLayoutPanel6, 0, 1);
            this->tableLayoutPanel5->Controls->Add(this->tableLayoutPanel7, 0, 0);
            this->tableLayoutPanel5->Location = System::Drawing::Point(553, 73);
            this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
            this->tableLayoutPanel5->RowCount = 2;
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel5->Size = System::Drawing::Size(544, 114);
            this->tableLayoutPanel5->TabIndex = 3;
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
            this->tableLayoutPanel6->Location = System::Drawing::Point(3, 60);
            this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
            this->tableLayoutPanel6->RowCount = 1;
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel6->Size = System::Drawing::Size(538, 51);
            this->tableLayoutPanel6->TabIndex = 7;
            // 
            // tbxDate
            // 
            this->tbxDate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxDate->Enabled = false;
            this->tbxDate->Location = System::Drawing::Point(164, 12);
            this->tbxDate->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->tbxDate->Name = L"tbxDate";
            this->tbxDate->ReadOnly = true;
            this->tbxDate->Size = System::Drawing::Size(344, 26);
            this->tbxDate->TabIndex = 1;
            this->tbxDate->TabStop = false;
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
            this->lbDate->Size = System::Drawing::Size(155, 51);
            this->lbDate->TabIndex = 0;
            this->lbDate->Text = L"Date";
            this->lbDate->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->tableLayoutPanel7->Controls->Add(this->tbxBillID, 1, 0);
            this->tableLayoutPanel7->Controls->Add(this->lbBillID, 0, 0);
            this->tableLayoutPanel7->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
            this->tableLayoutPanel7->RowCount = 1;
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel7->Size = System::Drawing::Size(538, 51);
            this->tableLayoutPanel7->TabIndex = 6;
            // 
            // tbxBillID
            // 
            this->tbxBillID->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxBillID->Enabled = false;
            this->tbxBillID->Location = System::Drawing::Point(164, 12);
            this->tbxBillID->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->tbxBillID->Name = L"tbxBillID";
            this->tbxBillID->ReadOnly = true;
            this->tbxBillID->Size = System::Drawing::Size(344, 26);
            this->tbxBillID->TabIndex = 1;
            this->tbxBillID->TabStop = false;
            // 
            // lbBillID
            // 
            this->lbBillID->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbBillID->AutoSize = true;
            this->lbBillID->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbBillID->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbBillID->Location = System::Drawing::Point(3, 0);
            this->lbBillID->Name = L"lbBillID";
            this->lbBillID->Size = System::Drawing::Size(155, 51);
            this->lbBillID->TabIndex = 0;
            this->lbBillID->Text = L"Bill ID";
            this->lbBillID->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->titleForm->TabIndex = 1;
            this->titleForm->Text = L"Bill Detail";
            this->titleForm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel2
            // 
            this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel2->BackColor = System::Drawing::Color::Ivory;
            this->tableLayoutPanel2->ColumnCount = 1;
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel3, 0, 1);
            this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel4, 0, 0);
            this->tableLayoutPanel2->Location = System::Drawing::Point(3, 73);
            this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
            this->tableLayoutPanel2->RowCount = 2;
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel2->Size = System::Drawing::Size(544, 114);
            this->tableLayoutPanel2->TabIndex = 2;
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
            this->tableLayoutPanel3->Controls->Add(this->tbxCustomerName, 1, 0);
            this->tableLayoutPanel3->Controls->Add(this->lbCustomerName, 0, 0);
            this->tableLayoutPanel3->Location = System::Drawing::Point(3, 60);
            this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
            this->tableLayoutPanel3->RowCount = 1;
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel3->Size = System::Drawing::Size(538, 51);
            this->tableLayoutPanel3->TabIndex = 7;
            // 
            // tbxCustomerName
            // 
            this->tbxCustomerName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxCustomerName->Enabled = false;
            this->tbxCustomerName->Location = System::Drawing::Point(164, 12);
            this->tbxCustomerName->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->tbxCustomerName->Name = L"tbxCustomerName";
            this->tbxCustomerName->ReadOnly = true;
            this->tbxCustomerName->Size = System::Drawing::Size(344, 26);
            this->tbxCustomerName->TabIndex = 1;
            this->tbxCustomerName->TabStop = false;
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
            this->lbCustomerName->Size = System::Drawing::Size(155, 51);
            this->lbCustomerName->TabIndex = 0;
            this->lbCustomerName->Text = L"Customer Name";
            this->lbCustomerName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->tableLayoutPanel4->Size = System::Drawing::Size(538, 51);
            this->tableLayoutPanel4->TabIndex = 6;
            // 
            // tbxEmployeeName
            // 
            this->tbxEmployeeName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxEmployeeName->Enabled = false;
            this->tbxEmployeeName->Location = System::Drawing::Point(164, 12);
            this->tbxEmployeeName->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->tbxEmployeeName->Name = L"tbxEmployeeName";
            this->tbxEmployeeName->ReadOnly = true;
            this->tbxEmployeeName->Size = System::Drawing::Size(344, 26);
            this->tbxEmployeeName->TabIndex = 1;
            this->tbxEmployeeName->TabStop = false;
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
            this->lbEmployeeName->Size = System::Drawing::Size(155, 51);
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
            this->tableLayoutPanel13->Location = System::Drawing::Point(553, 616);
            this->tableLayoutPanel13->Name = L"tableLayoutPanel13";
            this->tableLayoutPanel13->RowCount = 2;
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel13->Size = System::Drawing::Size(544, 114);
            this->tableLayoutPanel13->TabIndex = 8;
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
            this->tableLayoutPanel14->Controls->Add(this->tbxDiscount, 0, 0);
            this->tableLayoutPanel14->Controls->Add(this->lbDiscount, 0, 0);
            this->tableLayoutPanel14->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel14->Name = L"tableLayoutPanel14";
            this->tableLayoutPanel14->RowCount = 1;
            this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel14->Size = System::Drawing::Size(538, 51);
            this->tableLayoutPanel14->TabIndex = 7;
            // 
            // tbxDiscount
            // 
            this->tbxDiscount->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxDiscount->Location = System::Drawing::Point(164, 12);
            this->tbxDiscount->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->tbxDiscount->Name = L"tbxDiscount";
            this->tbxDiscount->ReadOnly = true;
            this->tbxDiscount->Size = System::Drawing::Size(344, 26);
            this->tbxDiscount->TabIndex = 2;
            this->tbxDiscount->TabStop = false;
            // 
            // lbDiscount
            // 
            this->lbDiscount->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbDiscount->AutoSize = true;
            this->lbDiscount->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbDiscount->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbDiscount->Location = System::Drawing::Point(3, 0);
            this->lbDiscount->Name = L"lbDiscount";
            this->lbDiscount->Size = System::Drawing::Size(155, 51);
            this->lbDiscount->TabIndex = 0;
            this->lbDiscount->Text = L"Discount:";
            this->lbDiscount->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // btnDelete
            // 
            this->btnDelete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnDelete->Font = (gcnew System::Drawing::Font(L"Cooper Black", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnDelete->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->btnDelete->Location = System::Drawing::Point(140, 625);
            this->btnDelete->Margin = System::Windows::Forms::Padding(140, 12, 140, 12);
            this->btnDelete->Name = L"btnDelete";
            this->btnDelete->Size = System::Drawing::Size(270, 96);
            this->btnDelete->TabIndex = 9;
            this->btnDelete->Text = L"Delete Bill";
            this->btnDelete->UseVisualStyleBackColor = true;
            // 
            // BillDetailForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1100, 733);
            this->Controls->Add(this->tableLayoutPanel1);
            this->Name = L"BillDetailForm";
            this->Text = L"BillDetailForm";
            this->tableLayoutPanel1->ResumeLayout(false);
            this->tableLayoutPanel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->EndInit();
            this->tableLayoutPanel5->ResumeLayout(false);
            this->tableLayoutPanel6->ResumeLayout(false);
            this->tableLayoutPanel6->PerformLayout();
            this->tableLayoutPanel7->ResumeLayout(false);
            this->tableLayoutPanel7->PerformLayout();
            this->tableLayoutPanel2->ResumeLayout(false);
            this->tableLayoutPanel3->ResumeLayout(false);
            this->tableLayoutPanel3->PerformLayout();
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
    };
}
