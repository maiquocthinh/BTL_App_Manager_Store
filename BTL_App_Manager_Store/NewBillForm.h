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
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel8;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::ComboBox^ comboBox2;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel9;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel12;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::ComboBox^ comboBox1;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
    private: System::Windows::Forms::TextBox^ inputName;
    private: System::Windows::Forms::Label^ lable1;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel11;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel10;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel13;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel15;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel14;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::ComboBox^ comboBox3;
    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ productID;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ productName;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ productPrice;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ productQuantity;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ totalMoney;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel18;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel19;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel22;
    private: System::Windows::Forms::TextBox^ textBox9;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Button^ button3;
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
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel22 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->productID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->productName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->productPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->productQuantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->totalMoney = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
            this->tableLayoutPanel12 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel9 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel10 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
            this->tableLayoutPanel11 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->inputName = (gcnew System::Windows::Forms::TextBox());
            this->lable1 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel13 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel15 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel14 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel1->SuspendLayout();
            this->tableLayoutPanel18->SuspendLayout();
            this->tableLayoutPanel19->SuspendLayout();
            this->tableLayoutPanel22->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->tableLayoutPanel3->SuspendLayout();
            this->tableLayoutPanel8->SuspendLayout();
            this->tableLayoutPanel7->SuspendLayout();
            this->tableLayoutPanel12->SuspendLayout();
            this->tableLayoutPanel9->SuspendLayout();
            this->tableLayoutPanel10->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
            this->tableLayoutPanel11->SuspendLayout();
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
            this->tableLayoutPanel1->Controls->Add(this->dataGridView1, 0, 2);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 1, 1);
            this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 1);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel13, 0, 3);
            this->tableLayoutPanel1->Controls->Add(this->button3, 0, 4);
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
            this->tableLayoutPanel19->Controls->Add(this->textBox7, 1, 0);
            this->tableLayoutPanel19->Controls->Add(this->label12, 0, 0);
            this->tableLayoutPanel19->Location = System::Drawing::Point(3, 60);
            this->tableLayoutPanel19->Name = L"tableLayoutPanel19";
            this->tableLayoutPanel19->RowCount = 1;
            this->tableLayoutPanel19->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel19->Size = System::Drawing::Size(538, 51);
            this->tableLayoutPanel19->TabIndex = 10;
            // 
            // textBox7
            // 
            this->textBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox7->Location = System::Drawing::Point(164, 12);
            this->textBox7->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(344, 26);
            this->textBox7->TabIndex = 1;
            this->textBox7->TabStop = false;
            // 
            // label12
            // 
            this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label12->Location = System::Drawing::Point(3, 0);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(155, 51);
            this->label12->TabIndex = 0;
            this->label12->Text = L"Change:";
            this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->tableLayoutPanel22->Controls->Add(this->textBox9, 1, 0);
            this->tableLayoutPanel22->Controls->Add(this->label15, 0, 0);
            this->tableLayoutPanel22->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel22->Name = L"tableLayoutPanel22";
            this->tableLayoutPanel22->RowCount = 1;
            this->tableLayoutPanel22->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel22->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                51)));
            this->tableLayoutPanel22->Size = System::Drawing::Size(538, 51);
            this->tableLayoutPanel22->TabIndex = 9;
            // 
            // textBox9
            // 
            this->textBox9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox9->Location = System::Drawing::Point(164, 12);
            this->textBox9->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(344, 26);
            this->textBox9->TabIndex = 1;
            this->textBox9->TabStop = false;
            // 
            // label15
            // 
            this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label15->Location = System::Drawing::Point(3, 0);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(155, 51);
            this->label15->TabIndex = 0;
            this->label15->Text = L"Cash Tendered:";
            this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->dataGridView1->Location = System::Drawing::Point(3, 313);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->ReadOnly = true;
            this->dataGridView1->RowHeadersWidth = 62;
            this->dataGridView1->RowTemplate->Height = 28;
            this->dataGridView1->Size = System::Drawing::Size(1094, 197);
            this->dataGridView1->TabIndex = 6;
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
            this->tableLayoutPanel8->Controls->Add(this->textBox2, 1, 0);
            this->tableLayoutPanel8->Controls->Add(this->label5, 0, 0);
            this->tableLayoutPanel8->Location = System::Drawing::Point(3, 61);
            this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
            this->tableLayoutPanel8->RowCount = 1;
            this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel8->Size = System::Drawing::Size(538, 52);
            this->tableLayoutPanel8->TabIndex = 8;
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
            // label5
            // 
            this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label5->Location = System::Drawing::Point(3, 0);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(155, 52);
            this->label5->TabIndex = 0;
            this->label5->Text = L"Price";
            this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->tableLayoutPanel7->Controls->Add(this->label4, 0, 0);
            this->tableLayoutPanel7->Controls->Add(this->comboBox2, 1, 0);
            this->tableLayoutPanel7->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
            this->tableLayoutPanel7->RowCount = 1;
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel7->Size = System::Drawing::Size(538, 52);
            this->tableLayoutPanel7->TabIndex = 7;
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
            this->label4->Size = System::Drawing::Size(155, 52);
            this->label4->TabIndex = 0;
            this->label4->Text = L"Product";
            this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // comboBox2
            // 
            this->comboBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->comboBox2->FormattingEnabled = true;
            this->comboBox2->Location = System::Drawing::Point(164, 12);
            this->comboBox2->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->comboBox2->Name = L"comboBox2";
            this->comboBox2->Size = System::Drawing::Size(344, 28);
            this->comboBox2->TabIndex = 1;
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
            this->tableLayoutPanel12->Controls->Add(this->button2, 1, 0);
            this->tableLayoutPanel12->Controls->Add(this->button1, 0, 0);
            this->tableLayoutPanel12->Location = System::Drawing::Point(3, 177);
            this->tableLayoutPanel12->Name = L"tableLayoutPanel12";
            this->tableLayoutPanel12->RowCount = 1;
            this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel12->Size = System::Drawing::Size(538, 54);
            this->tableLayoutPanel12->TabIndex = 10;
            // 
            // button2
            // 
            this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->button2->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(294, 6);
            this->button2->Margin = System::Windows::Forms::Padding(25, 6, 3, 9);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(100, 39);
            this->button2->TabIndex = 1;
            this->button2->Text = L"Remove";
            this->button2->UseVisualStyleBackColor = true;
            // 
            // button1
            // 
            this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button1->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(156, 6);
            this->button1->Margin = System::Windows::Forms::Padding(3, 6, 25, 6);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(88, 42);
            this->button1->TabIndex = 0;
            this->button1->Text = L"Add";
            this->button1->UseVisualStyleBackColor = true;
            // 
            // tableLayoutPanel9
            // 
            this->tableLayoutPanel9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel9->ColumnCount = 2;
            this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel9->Controls->Add(this->tableLayoutPanel10, 0, 0);
            this->tableLayoutPanel9->Controls->Add(this->tableLayoutPanel11, 1, 0);
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
                36.36364F)));
            this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                63.63636F)));
            this->tableLayoutPanel10->Controls->Add(this->label6, 0, 0);
            this->tableLayoutPanel10->Controls->Add(this->numericUpDown1, 1, 0);
            this->tableLayoutPanel10->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel10->Name = L"tableLayoutPanel10";
            this->tableLayoutPanel10->RowCount = 1;
            this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel10->Size = System::Drawing::Size(263, 46);
            this->tableLayoutPanel10->TabIndex = 12;
            // 
            // label6
            // 
            this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label6->Location = System::Drawing::Point(3, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(89, 46);
            this->label6->TabIndex = 0;
            this->label6->Text = L"Quantity";
            this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // numericUpDown1
            // 
            this->numericUpDown1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->numericUpDown1->Location = System::Drawing::Point(110, 15);
            this->numericUpDown1->Margin = System::Windows::Forms::Padding(15, 15, 15, 3);
            this->numericUpDown1->Name = L"numericUpDown1";
            this->numericUpDown1->Size = System::Drawing::Size(138, 26);
            this->numericUpDown1->TabIndex = 1;
            // 
            // tableLayoutPanel11
            // 
            this->tableLayoutPanel11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel11->ColumnCount = 2;
            this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                36.36364F)));
            this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                63.63636F)));
            this->tableLayoutPanel11->Controls->Add(this->textBox3, 0, 0);
            this->tableLayoutPanel11->Controls->Add(this->label7, 0, 0);
            this->tableLayoutPanel11->Location = System::Drawing::Point(272, 3);
            this->tableLayoutPanel11->Name = L"tableLayoutPanel11";
            this->tableLayoutPanel11->RowCount = 1;
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel11->Size = System::Drawing::Size(263, 46);
            this->tableLayoutPanel11->TabIndex = 11;
            // 
            // textBox3
            // 
            this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox3->Location = System::Drawing::Point(110, 10);
            this->textBox3->Margin = System::Windows::Forms::Padding(15, 10, 15, 3);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(138, 26);
            this->textBox3->TabIndex = 2;
            // 
            // label7
            // 
            this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label7->Location = System::Drawing::Point(3, 0);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(89, 46);
            this->label7->TabIndex = 0;
            this->label7->Text = L"Discount";
            this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->label1->TabIndex = 0;
            this->label1->Text = L"New Bill";
            this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->tableLayoutPanel6->Controls->Add(this->textBox1, 1, 0);
            this->tableLayoutPanel6->Controls->Add(this->label3, 0, 0);
            this->tableLayoutPanel6->Location = System::Drawing::Point(3, 119);
            this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
            this->tableLayoutPanel6->RowCount = 1;
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel6->Size = System::Drawing::Size(538, 52);
            this->tableLayoutPanel6->TabIndex = 7;
            // 
            // textBox1
            // 
            this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox1->Location = System::Drawing::Point(164, 12);
            this->textBox1->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(344, 26);
            this->textBox1->TabIndex = 1;
            this->textBox1->TabStop = false;
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
            this->label3->Size = System::Drawing::Size(155, 52);
            this->label3->TabIndex = 0;
            this->label3->Text = L"Date";
            this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->tableLayoutPanel5->Controls->Add(this->label2, 0, 0);
            this->tableLayoutPanel5->Controls->Add(this->comboBox1, 1, 0);
            this->tableLayoutPanel5->Location = System::Drawing::Point(3, 61);
            this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
            this->tableLayoutPanel5->RowCount = 1;
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel5->Size = System::Drawing::Size(538, 52);
            this->tableLayoutPanel5->TabIndex = 6;
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
            this->label2->Size = System::Drawing::Size(155, 52);
            this->label2->TabIndex = 0;
            this->label2->Text = L"Customer Name";
            this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // comboBox1
            // 
            this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Location = System::Drawing::Point(164, 12);
            this->comboBox1->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(344, 28);
            this->comboBox1->TabIndex = 1;
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
            this->tableLayoutPanel4->Size = System::Drawing::Size(538, 52);
            this->tableLayoutPanel4->TabIndex = 5;
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
            this->lable1->Size = System::Drawing::Size(155, 52);
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
            this->tableLayoutPanel14->Controls->Add(this->label8, 0, 0);
            this->tableLayoutPanel14->Controls->Add(this->comboBox3, 1, 0);
            this->tableLayoutPanel14->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel14->Name = L"tableLayoutPanel14";
            this->tableLayoutPanel14->RowCount = 1;
            this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel14->Size = System::Drawing::Size(538, 51);
            this->tableLayoutPanel14->TabIndex = 7;
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
            this->label8->Text = L"Discount by Customer Point:";
            this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // comboBox3
            // 
            this->comboBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->comboBox3->FormattingEnabled = true;
            this->comboBox3->Location = System::Drawing::Point(164, 12);
            this->comboBox3->Margin = System::Windows::Forms::Padding(3, 12, 30, 3);
            this->comboBox3->Name = L"comboBox3";
            this->comboBox3->Size = System::Drawing::Size(344, 28);
            this->comboBox3->TabIndex = 1;
            // 
            // button3
            // 
            this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel1->SetColumnSpan(this->button3, 2);
            this->button3->Font = (gcnew System::Drawing::Font(L"Cooper Black", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->button3->Location = System::Drawing::Point(450, 645);
            this->button3->Margin = System::Windows::Forms::Padding(450, 12, 450, 12);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(200, 76);
            this->button3->TabIndex = 8;
            this->button3->Text = L"PAY";
            this->button3->UseVisualStyleBackColor = true;
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
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"New Bill";
            this->tableLayoutPanel1->ResumeLayout(false);
            this->tableLayoutPanel1->PerformLayout();
            this->tableLayoutPanel18->ResumeLayout(false);
            this->tableLayoutPanel19->ResumeLayout(false);
            this->tableLayoutPanel19->PerformLayout();
            this->tableLayoutPanel22->ResumeLayout(false);
            this->tableLayoutPanel22->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->tableLayoutPanel3->ResumeLayout(false);
            this->tableLayoutPanel8->ResumeLayout(false);
            this->tableLayoutPanel8->PerformLayout();
            this->tableLayoutPanel7->ResumeLayout(false);
            this->tableLayoutPanel7->PerformLayout();
            this->tableLayoutPanel12->ResumeLayout(false);
            this->tableLayoutPanel9->ResumeLayout(false);
            this->tableLayoutPanel10->ResumeLayout(false);
            this->tableLayoutPanel10->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
            this->tableLayoutPanel11->ResumeLayout(false);
            this->tableLayoutPanel11->PerformLayout();
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
    };
}
