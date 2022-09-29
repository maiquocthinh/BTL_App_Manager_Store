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
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
    private: System::Windows::Forms::TextBox^ inputName;
    private: System::Windows::Forms::Label^ lable1;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ productID;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ productName;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ productPrice;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ productQuantity;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ totalMoney;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel13;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel15;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel14;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Button^ button1;

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
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->productID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->productName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->productPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->productQuantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->totalMoney = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->inputName = (gcnew System::Windows::Forms::TextBox());
            this->lable1 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel13 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel15 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel14 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
            this->tableLayoutPanel1->Controls->Add(this->dataGridView1, 0, 2);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel5, 1, 1);
            this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 1);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel13, 1, 3);
            this->tableLayoutPanel1->Controls->Add(this->button1, 0, 3);
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
            // dataGridView1
            // 
            this->dataGridView1->AllowUserToAddRows = false;
            this->dataGridView1->AllowUserToDeleteRows = false;
            this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
                this->productID,
                    this->productName, this->productPrice, this->productQuantity, this->totalMoney
            });
            this->tableLayoutPanel1->SetColumnSpan(this->dataGridView1, 2);
            this->dataGridView1->Location = System::Drawing::Point(3, 193);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->ReadOnly = true;
            this->dataGridView1->RowHeadersWidth = 62;
            this->dataGridView1->RowTemplate->Height = 28;
            this->dataGridView1->Size = System::Drawing::Size(1094, 417);
            this->dataGridView1->TabIndex = 7;
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
            this->tableLayoutPanel6->Controls->Add(this->textBox2, 1, 0);
            this->tableLayoutPanel6->Controls->Add(this->label3, 0, 0);
            this->tableLayoutPanel6->Location = System::Drawing::Point(3, 60);
            this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
            this->tableLayoutPanel6->RowCount = 1;
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel6->Size = System::Drawing::Size(538, 51);
            this->tableLayoutPanel6->TabIndex = 7;
            // 
            // textBox2
            // 
            this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox2->Enabled = false;
            this->textBox2->Location = System::Drawing::Point(164, 12);
            this->textBox2->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(344, 26);
            this->textBox2->TabIndex = 1;
            this->textBox2->TabStop = false;
            // 
            // label3
            // 
            this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label3->Location = System::Drawing::Point(3, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(155, 51);
            this->label3->TabIndex = 0;
            this->label3->Text = L"Date";
            this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->tableLayoutPanel7->Controls->Add(this->textBox3, 1, 0);
            this->tableLayoutPanel7->Controls->Add(this->label4, 0, 0);
            this->tableLayoutPanel7->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
            this->tableLayoutPanel7->RowCount = 1;
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel7->Size = System::Drawing::Size(538, 51);
            this->tableLayoutPanel7->TabIndex = 6;
            // 
            // textBox3
            // 
            this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox3->Enabled = false;
            this->textBox3->Location = System::Drawing::Point(164, 12);
            this->textBox3->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(344, 26);
            this->textBox3->TabIndex = 1;
            this->textBox3->TabStop = false;
            // 
            // label4
            // 
            this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label4->Location = System::Drawing::Point(3, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(155, 51);
            this->label4->TabIndex = 0;
            this->label4->Text = L"Bill ID";
            this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label1
            // 
            this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label1->AutoSize = true;
            this->tableLayoutPanel1->SetColumnSpan(this->label1, 2);
            this->label1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->label1->Location = System::Drawing::Point(3, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(1094, 70);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Bill Detail";
            this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->tableLayoutPanel3->Controls->Add(this->textBox1, 1, 0);
            this->tableLayoutPanel3->Controls->Add(this->label2, 0, 0);
            this->tableLayoutPanel3->Location = System::Drawing::Point(3, 60);
            this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
            this->tableLayoutPanel3->RowCount = 1;
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel3->Size = System::Drawing::Size(538, 51);
            this->tableLayoutPanel3->TabIndex = 7;
            // 
            // textBox1
            // 
            this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox1->Enabled = false;
            this->textBox1->Location = System::Drawing::Point(164, 12);
            this->textBox1->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(344, 26);
            this->textBox1->TabIndex = 1;
            this->textBox1->TabStop = false;
            // 
            // label2
            // 
            this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label2->Location = System::Drawing::Point(3, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(155, 51);
            this->label2->TabIndex = 0;
            this->label2->Text = L"Customer Name";
            this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->tableLayoutPanel4->Controls->Add(this->inputName, 1, 0);
            this->tableLayoutPanel4->Controls->Add(this->lable1, 0, 0);
            this->tableLayoutPanel4->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
            this->tableLayoutPanel4->RowCount = 1;
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel4->Size = System::Drawing::Size(538, 51);
            this->tableLayoutPanel4->TabIndex = 6;
            // 
            // inputName
            // 
            this->inputName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->inputName->Enabled = false;
            this->inputName->Location = System::Drawing::Point(164, 12);
            this->inputName->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->inputName->Name = L"inputName";
            this->inputName->Size = System::Drawing::Size(344, 26);
            this->inputName->TabIndex = 1;
            this->inputName->TabStop = false;
            // 
            // lable1
            // 
            this->lable1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lable1->AutoSize = true;
            this->lable1->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lable1->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lable1->Location = System::Drawing::Point(3, 0);
            this->lable1->Name = L"lable1";
            this->lable1->Size = System::Drawing::Size(155, 51);
            this->lable1->TabIndex = 0;
            this->lable1->Text = L"Employee Name";
            this->lable1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->tableLayoutPanel15->Controls->Add(this->textBox4, 1, 0);
            this->tableLayoutPanel15->Controls->Add(this->label9, 0, 0);
            this->tableLayoutPanel15->Location = System::Drawing::Point(3, 60);
            this->tableLayoutPanel15->Name = L"tableLayoutPanel15";
            this->tableLayoutPanel15->RowCount = 1;
            this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel15->Size = System::Drawing::Size(538, 51);
            this->tableLayoutPanel15->TabIndex = 8;
            // 
            // textBox4
            // 
            this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox4->Location = System::Drawing::Point(164, 12);
            this->textBox4->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(344, 26);
            this->textBox4->TabIndex = 1;
            this->textBox4->TabStop = false;
            // 
            // label9
            // 
            this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label9->Location = System::Drawing::Point(3, 0);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(155, 51);
            this->label9->TabIndex = 0;
            this->label9->Text = L"Total Bill:";
            this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->tableLayoutPanel14->Controls->Add(this->textBox5, 0, 0);
            this->tableLayoutPanel14->Controls->Add(this->label8, 0, 0);
            this->tableLayoutPanel14->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel14->Name = L"tableLayoutPanel14";
            this->tableLayoutPanel14->RowCount = 1;
            this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel14->Size = System::Drawing::Size(538, 51);
            this->tableLayoutPanel14->TabIndex = 7;
            // 
            // textBox5
            // 
            this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox5->Location = System::Drawing::Point(164, 12);
            this->textBox5->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(344, 26);
            this->textBox5->TabIndex = 2;
            this->textBox5->TabStop = false;
            // 
            // label8
            // 
            this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label8->Location = System::Drawing::Point(3, 0);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(155, 51);
            this->label8->TabIndex = 0;
            this->label8->Text = L"Discount:";
            this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // button1
            // 
            this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->button1->Location = System::Drawing::Point(140, 625);
            this->button1->Margin = System::Windows::Forms::Padding(140, 12, 140, 12);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(270, 96);
            this->button1->TabIndex = 9;
            this->button1->Text = L"Delete Bill";
            this->button1->UseVisualStyleBackColor = true;
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
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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
    };
}
