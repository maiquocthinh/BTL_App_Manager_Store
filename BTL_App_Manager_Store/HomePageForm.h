#pragma once

namespace BTLAppManagerStore {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for HomePageForm
    /// </summary>
    public ref class HomePageForm : public System::Windows::Forms::Form
    {
    public:
        HomePageForm(void)
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
        ~HomePageForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
    protected:
    private: System::Windows::Forms::DataGridView^ tableTopProducts;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ idProduct;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ nameProduct;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ categoryProduct;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ quantity;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ unit;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ position;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
    private: System::Windows::Forms::Panel^ panel3;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ turnoverOfDay;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
    private: System::Windows::Forms::Label^ totalCustomers;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
    private: System::Windows::Forms::Label^ totalEmployees;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Panel^ panel4;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
    private: System::Windows::Forms::Label^ totalProducts;
    private: System::Windows::Forms::Label^ label1;

    protected:
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
            this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableTopProducts = (gcnew System::Windows::Forms::DataGridView());
            this->idProduct = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->nameProduct = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->categoryProduct = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->unit = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->position = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->turnoverOfDay = (gcnew System::Windows::Forms::Label());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->totalCustomers = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->totalEmployees = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->totalProducts = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel6->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tableTopProducts))->BeginInit();
            this->tableLayoutPanel1->SuspendLayout();
            this->panel3->SuspendLayout();
            this->tableLayoutPanel4->SuspendLayout();
            this->panel2->SuspendLayout();
            this->tableLayoutPanel5->SuspendLayout();
            this->panel1->SuspendLayout();
            this->tableLayoutPanel3->SuspendLayout();
            this->panel4->SuspendLayout();
            this->tableLayoutPanel2->SuspendLayout();
            this->SuspendLayout();
            // 
            // tableLayoutPanel6
            // 
            this->tableLayoutPanel6->BackColor = System::Drawing::SystemColors::Control;
            this->tableLayoutPanel6->ColumnCount = 1;
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel6->Controls->Add(this->tableTopProducts, 0, 1);
            this->tableLayoutPanel6->Controls->Add(this->label10, 0, 0);
            this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Top;
            this->tableLayoutPanel6->Location = System::Drawing::Point(0, 556);
            this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
            this->tableLayoutPanel6->RowCount = 2;
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 70)));
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
            this->tableLayoutPanel6->Size = System::Drawing::Size(1181, 424);
            this->tableLayoutPanel6->TabIndex = 5;
            // 
            // tableTopProducts
            // 
            this->tableTopProducts->AllowUserToAddRows = false;
            this->tableTopProducts->AllowUserToDeleteRows = false;
            this->tableTopProducts->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableTopProducts->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->tableTopProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->tableTopProducts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
                this->idProduct,
                    this->nameProduct, this->categoryProduct, this->quantity, this->unit, this->position
            });
            this->tableTopProducts->Location = System::Drawing::Point(30, 73);
            this->tableTopProducts->Margin = System::Windows::Forms::Padding(30, 3, 30, 30);
            this->tableTopProducts->Name = L"tableTopProducts";
            this->tableTopProducts->ReadOnly = true;
            this->tableTopProducts->RowHeadersWidth = 62;
            this->tableTopProducts->RowTemplate->Height = 28;
            this->tableTopProducts->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
            this->tableTopProducts->Size = System::Drawing::Size(1121, 321);
            this->tableTopProducts->TabIndex = 3;
            // 
            // idProduct
            // 
            this->idProduct->HeaderText = L"ID";
            this->idProduct->MinimumWidth = 8;
            this->idProduct->Name = L"idProduct";
            this->idProduct->ReadOnly = true;
            // 
            // nameProduct
            // 
            this->nameProduct->HeaderText = L"Name";
            this->nameProduct->MinimumWidth = 8;
            this->nameProduct->Name = L"nameProduct";
            this->nameProduct->ReadOnly = true;
            // 
            // categoryProduct
            // 
            this->categoryProduct->HeaderText = L"Category";
            this->categoryProduct->MinimumWidth = 8;
            this->categoryProduct->Name = L"categoryProduct";
            this->categoryProduct->ReadOnly = true;
            // 
            // quantity
            // 
            this->quantity->HeaderText = L"Quantity";
            this->quantity->MinimumWidth = 8;
            this->quantity->Name = L"quantity";
            this->quantity->ReadOnly = true;
            // 
            // unit
            // 
            this->unit->HeaderText = L"Unit";
            this->unit->MinimumWidth = 8;
            this->unit->Name = L"unit";
            this->unit->ReadOnly = true;
            // 
            // position
            // 
            this->position->HeaderText = L"Position";
            this->position->MinimumWidth = 8;
            this->position->Name = L"position";
            this->position->ReadOnly = true;
            // 
            // label10
            // 
            this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label10->AutoSize = true;
            this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->label10->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label10->Location = System::Drawing::Point(3, 0);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(1175, 70);
            this->label10->TabIndex = 0;
            this->label10->Text = L"Top Products Sell on Day";
            this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->BackColor = System::Drawing::SystemColors::Control;
            this->tableLayoutPanel1->ColumnCount = 2;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel1->Controls->Add(this->panel3, 1, 1);
            this->tableLayoutPanel1->Controls->Add(this->panel2, 0, 1);
            this->tableLayoutPanel1->Controls->Add(this->panel1, 1, 0);
            this->tableLayoutPanel1->Controls->Add(this->panel4, 0, 0);
            this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Top;
            this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 2;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(1181, 556);
            this->tableLayoutPanel1->TabIndex = 4;
            // 
            // panel3
            // 
            this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
                static_cast<System::Int32>(static_cast<System::Byte>(135)));
            this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel3->Controls->Add(this->tableLayoutPanel4);
            this->panel3->Location = System::Drawing::Point(613, 301);
            this->panel3->Margin = System::Windows::Forms::Padding(23, 23, 46, 30);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(522, 225);
            this->panel3->TabIndex = 7;
            // 
            // tableLayoutPanel4
            // 
            this->tableLayoutPanel4->ColumnCount = 1;
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel4->Controls->Add(this->label5, 0, 0);
            this->tableLayoutPanel4->Controls->Add(this->turnoverOfDay, 0, 1);
            this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel4->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
            this->tableLayoutPanel4->RowCount = 2;
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 45)));
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 55)));
            this->tableLayoutPanel4->Size = System::Drawing::Size(520, 223);
            this->tableLayoutPanel4->TabIndex = 0;
            // 
            // label5
            // 
            this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label5->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::White;
            this->label5->Location = System::Drawing::Point(3, 0);
            this->label5->Name = L"label5";
            this->label5->Padding = System::Windows::Forms::Padding(0, 0, 0, 12);
            this->label5->Size = System::Drawing::Size(514, 100);
            this->label5->TabIndex = 0;
            this->label5->Text = L"Turnover of Day";
            this->label5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            // 
            // turnoverOfDay
            // 
            this->turnoverOfDay->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->turnoverOfDay->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->turnoverOfDay->ForeColor = System::Drawing::Color::White;
            this->turnoverOfDay->Location = System::Drawing::Point(3, 100);
            this->turnoverOfDay->Name = L"turnoverOfDay";
            this->turnoverOfDay->Padding = System::Windows::Forms::Padding(0, 12, 0, 0);
            this->turnoverOfDay->Size = System::Drawing::Size(514, 123);
            this->turnoverOfDay->TabIndex = 1;
            this->turnoverOfDay->Text = L"5.328.000 VND";
            this->turnoverOfDay->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // panel2
            // 
            this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
                static_cast<System::Int32>(static_cast<System::Byte>(88)));
            this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel2->Controls->Add(this->tableLayoutPanel5);
            this->panel2->Location = System::Drawing::Point(46, 301);
            this->panel2->Margin = System::Windows::Forms::Padding(46, 23, 23, 30);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(521, 225);
            this->panel2->TabIndex = 6;
            // 
            // tableLayoutPanel5
            // 
            this->tableLayoutPanel5->ColumnCount = 1;
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel5->Controls->Add(this->totalCustomers, 0, 1);
            this->tableLayoutPanel5->Controls->Add(this->label8, 0, 0);
            this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel5->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
            this->tableLayoutPanel5->RowCount = 2;
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 45)));
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 55)));
            this->tableLayoutPanel5->Size = System::Drawing::Size(519, 223);
            this->tableLayoutPanel5->TabIndex = 1;
            // 
            // totalCustomers
            // 
            this->totalCustomers->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->totalCustomers->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 28, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->totalCustomers->ForeColor = System::Drawing::Color::White;
            this->totalCustomers->Location = System::Drawing::Point(3, 100);
            this->totalCustomers->Name = L"totalCustomers";
            this->totalCustomers->Padding = System::Windows::Forms::Padding(0, 12, 0, 0);
            this->totalCustomers->Size = System::Drawing::Size(513, 123);
            this->totalCustomers->TabIndex = 1;
            this->totalCustomers->Text = L"23";
            this->totalCustomers->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label8
            // 
            this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label8->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->ForeColor = System::Drawing::Color::White;
            this->label8->Location = System::Drawing::Point(3, 0);
            this->label8->Name = L"label8";
            this->label8->Padding = System::Windows::Forms::Padding(0, 0, 0, 12);
            this->label8->Size = System::Drawing::Size(513, 100);
            this->label8->TabIndex = 0;
            this->label8->Text = L"Total Customer";
            this->label8->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            // 
            // panel1
            // 
            this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
                static_cast<System::Int32>(static_cast<System::Byte>(153)));
            this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel1->Controls->Add(this->tableLayoutPanel3);
            this->panel1->Location = System::Drawing::Point(613, 46);
            this->panel1->Margin = System::Windows::Forms::Padding(23, 46, 46, 23);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(522, 209);
            this->panel1->TabIndex = 5;
            // 
            // tableLayoutPanel3
            // 
            this->tableLayoutPanel3->ColumnCount = 1;
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel3->Controls->Add(this->totalEmployees, 0, 1);
            this->tableLayoutPanel3->Controls->Add(this->label3, 0, 0);
            this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel3->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
            this->tableLayoutPanel3->RowCount = 2;
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 45)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 55)));
            this->tableLayoutPanel3->Size = System::Drawing::Size(520, 207);
            this->tableLayoutPanel3->TabIndex = 0;
            // 
            // totalEmployees
            // 
            this->totalEmployees->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->totalEmployees->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 28, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->totalEmployees->ForeColor = System::Drawing::Color::White;
            this->totalEmployees->Location = System::Drawing::Point(3, 93);
            this->totalEmployees->Name = L"totalEmployees";
            this->totalEmployees->Padding = System::Windows::Forms::Padding(0, 12, 0, 0);
            this->totalEmployees->Size = System::Drawing::Size(514, 114);
            this->totalEmployees->TabIndex = 1;
            this->totalEmployees->Text = L"23";
            this->totalEmployees->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label3
            // 
            this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label3->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::White;
            this->label3->Location = System::Drawing::Point(3, 0);
            this->label3->Name = L"label3";
            this->label3->Padding = System::Windows::Forms::Padding(0, 0, 0, 12);
            this->label3->Size = System::Drawing::Size(514, 93);
            this->label3->TabIndex = 0;
            this->label3->Text = L"Total Employees";
            this->label3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            // 
            // panel4
            // 
            this->panel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
                static_cast<System::Int32>(static_cast<System::Byte>(217)));
            this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel4->Controls->Add(this->tableLayoutPanel2);
            this->panel4->Location = System::Drawing::Point(46, 46);
            this->panel4->Margin = System::Windows::Forms::Padding(46, 46, 23, 23);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(521, 209);
            this->panel4->TabIndex = 4;
            // 
            // tableLayoutPanel2
            // 
            this->tableLayoutPanel2->ColumnCount = 1;
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel2->Controls->Add(this->totalProducts, 0, 1);
            this->tableLayoutPanel2->Controls->Add(this->label1, 0, 0);
            this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
            this->tableLayoutPanel2->RowCount = 2;
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 45)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 55)));
            this->tableLayoutPanel2->Size = System::Drawing::Size(519, 207);
            this->tableLayoutPanel2->TabIndex = 0;
            // 
            // totalProducts
            // 
            this->totalProducts->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->totalProducts->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->totalProducts->ForeColor = System::Drawing::Color::White;
            this->totalProducts->Location = System::Drawing::Point(3, 93);
            this->totalProducts->Name = L"totalProducts";
            this->totalProducts->Padding = System::Windows::Forms::Padding(0, 12, 0, 0);
            this->totalProducts->Size = System::Drawing::Size(513, 114);
            this->totalProducts->TabIndex = 1;
            this->totalProducts->Text = L"143";
            this->totalProducts->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label1
            // 
            this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label1->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::White;
            this->label1->Location = System::Drawing::Point(3, 0);
            this->label1->Name = L"label1";
            this->label1->Padding = System::Windows::Forms::Padding(0, 0, 0, 12);
            this->label1->Size = System::Drawing::Size(513, 93);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Total Products";
            this->label1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            // 
            // HomePageForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoScroll = true;
            this->BackColor = System::Drawing::SystemColors::Control;
            this->CausesValidation = false;
            this->ClientSize = System::Drawing::Size(1181, 992);
            this->Controls->Add(this->tableLayoutPanel6);
            this->Controls->Add(this->tableLayoutPanel1);
            this->DoubleBuffered = true;
            this->ForeColor = System::Drawing::SystemColors::ControlText;
            this->Name = L"HomePageForm";
            this->Text = L"HomePageForm";
            this->tableLayoutPanel6->ResumeLayout(false);
            this->tableLayoutPanel6->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tableTopProducts))->EndInit();
            this->tableLayoutPanel1->ResumeLayout(false);
            this->panel3->ResumeLayout(false);
            this->tableLayoutPanel4->ResumeLayout(false);
            this->panel2->ResumeLayout(false);
            this->tableLayoutPanel5->ResumeLayout(false);
            this->panel1->ResumeLayout(false);
            this->tableLayoutPanel3->ResumeLayout(false);
            this->panel4->ResumeLayout(false);
            this->tableLayoutPanel2->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion


    };
}
