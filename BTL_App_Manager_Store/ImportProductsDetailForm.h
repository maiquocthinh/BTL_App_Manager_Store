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
    /// Summary for ImportProductsDetailForm
    /// </summary>
    public ref class ImportProductsDetailForm : public System::Windows::Forms::Form
    {
    public:
        ImportProductsDetailForm(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
        }
        ImportProductsDetailForm(MyDatabase* const MyDB)
        {
            InitializeComponent();
            this->MyDB = MyDB;
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~ImportProductsDetailForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
    private: System::Windows::Forms::Label^ titleForm;
    private: System::Windows::Forms::DataGridView^ dataTable;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ productID;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ productName;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ productPrice;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ productQuantity;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ totalMoney;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
    private: System::Windows::Forms::TextBox^ tbxDate;
    private: System::Windows::Forms::Label^ lbDate;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
    private: System::Windows::Forms::TextBox^ tbxTotalMoney;
    private: System::Windows::Forms::Label^ lbTotalMoney;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
    private: System::Windows::Forms::TextBox^ tbxIDImport;

    private: System::Windows::Forms::Label^ lbIDBillImport;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
    private: System::Windows::Forms::TextBox^ tbxEmployeeName;
    private: System::Windows::Forms::Label^ lbEmployeeName;


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
            this->titleForm = (gcnew System::Windows::Forms::Label());
            this->dataTable = (gcnew System::Windows::Forms::DataGridView());
            this->productID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->productName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->productPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->productQuantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->totalMoney = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tbxDate = (gcnew System::Windows::Forms::TextBox());
            this->lbDate = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tbxIDImport = (gcnew System::Windows::Forms::TextBox());
            this->lbIDBillImport = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tbxEmployeeName = (gcnew System::Windows::Forms::TextBox());
            this->lbEmployeeName = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tbxTotalMoney = (gcnew System::Windows::Forms::TextBox());
            this->lbTotalMoney = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->BeginInit();
            this->tableLayoutPanel4->SuspendLayout();
            this->tableLayoutPanel6->SuspendLayout();
            this->tableLayoutPanel7->SuspendLayout();
            this->tableLayoutPanel2->SuspendLayout();
            this->tableLayoutPanel5->SuspendLayout();
            this->tableLayoutPanel3->SuspendLayout();
            this->SuspendLayout();
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->ColumnCount = 1;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel1->Controls->Add(this->titleForm, 0, 0);
            this->tableLayoutPanel1->Controls->Add(this->dataTable, 0, 3);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel4, 0, 1);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 2);
            this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 4;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 70)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(978, 610);
            this->tableLayoutPanel1->TabIndex = 1;
            // 
            // titleForm
            // 
            this->titleForm->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->titleForm->AutoSize = true;
            this->titleForm->Font = (gcnew System::Drawing::Font(L"Cooper Black", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->titleForm->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->titleForm->Location = System::Drawing::Point(3, 0);
            this->titleForm->Name = L"titleForm";
            this->titleForm->Size = System::Drawing::Size(972, 60);
            this->titleForm->TabIndex = 3;
            this->titleForm->Text = L"Detail Import Products";
            this->titleForm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->dataTable->Location = System::Drawing::Point(3, 193);
            this->dataTable->MultiSelect = false;
            this->dataTable->Name = L"dataTable";
            this->dataTable->ReadOnly = true;
            this->dataTable->RowHeadersWidth = 62;
            this->dataTable->RowTemplate->Height = 28;
            this->dataTable->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
            this->dataTable->Size = System::Drawing::Size(972, 414);
            this->dataTable->TabIndex = 1;
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
            // tableLayoutPanel4
            // 
            this->tableLayoutPanel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel4->ColumnCount = 2;
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel6, 1, 0);
            this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel7, 0, 0);
            this->tableLayoutPanel4->Location = System::Drawing::Point(3, 63);
            this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
            this->tableLayoutPanel4->RowCount = 1;
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel4->Size = System::Drawing::Size(972, 54);
            this->tableLayoutPanel4->TabIndex = 4;
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
            this->tableLayoutPanel6->Location = System::Drawing::Point(489, 3);
            this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
            this->tableLayoutPanel6->RowCount = 1;
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel6->Size = System::Drawing::Size(480, 48);
            this->tableLayoutPanel6->TabIndex = 8;
            // 
            // tbxDate
            // 
            this->tbxDate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxDate->Location = System::Drawing::Point(147, 8);
            this->tbxDate->Margin = System::Windows::Forms::Padding(3, 8, 30, 3);
            this->tbxDate->Name = L"tbxDate";
            this->tbxDate->ReadOnly = true;
            this->tbxDate->Size = System::Drawing::Size(303, 26);
            this->tbxDate->TabIndex = 1;
            this->tbxDate->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // lbDate
            // 
            this->lbDate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbDate->AutoSize = true;
            this->lbDate->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbDate->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbDate->Location = System::Drawing::Point(3, 0);
            this->lbDate->Name = L"lbDate";
            this->lbDate->Size = System::Drawing::Size(138, 48);
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
                36.36364F)));
            this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                63.63636F)));
            this->tableLayoutPanel7->Controls->Add(this->tbxIDImport, 1, 0);
            this->tableLayoutPanel7->Controls->Add(this->lbIDBillImport, 0, 0);
            this->tableLayoutPanel7->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
            this->tableLayoutPanel7->RowCount = 1;
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel7->Size = System::Drawing::Size(480, 48);
            this->tableLayoutPanel7->TabIndex = 6;
            // 
            // tbxIDImport
            // 
            this->tbxIDImport->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxIDImport->Location = System::Drawing::Point(177, 8);
            this->tbxIDImport->Margin = System::Windows::Forms::Padding(3, 8, 30, 3);
            this->tbxIDImport->Name = L"tbxIDImport";
            this->tbxIDImport->ReadOnly = true;
            this->tbxIDImport->Size = System::Drawing::Size(273, 26);
            this->tbxIDImport->TabIndex = 1;
            this->tbxIDImport->TabStop = false;
            this->tbxIDImport->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // lbIDBillImport
            // 
            this->lbIDBillImport->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbIDBillImport->AutoSize = true;
            this->lbIDBillImport->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbIDBillImport->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbIDBillImport->Location = System::Drawing::Point(3, 0);
            this->lbIDBillImport->Name = L"lbIDBillImport";
            this->lbIDBillImport->Size = System::Drawing::Size(168, 48);
            this->lbIDBillImport->TabIndex = 0;
            this->lbIDBillImport->Text = L"ID Import";
            this->lbIDBillImport->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel2
            // 
            this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel2->ColumnCount = 2;
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel5, 0, 0);
            this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel3, 1, 0);
            this->tableLayoutPanel2->Location = System::Drawing::Point(3, 123);
            this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
            this->tableLayoutPanel2->RowCount = 1;
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel2->Size = System::Drawing::Size(972, 64);
            this->tableLayoutPanel2->TabIndex = 5;
            // 
            // tableLayoutPanel5
            // 
            this->tableLayoutPanel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel5->ColumnCount = 2;
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                36.36364F)));
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                63.63636F)));
            this->tableLayoutPanel5->Controls->Add(this->tbxEmployeeName, 1, 0);
            this->tableLayoutPanel5->Controls->Add(this->lbEmployeeName, 0, 0);
            this->tableLayoutPanel5->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
            this->tableLayoutPanel5->RowCount = 1;
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel5->Size = System::Drawing::Size(480, 58);
            this->tableLayoutPanel5->TabIndex = 9;
            // 
            // tbxEmployeeName
            // 
            this->tbxEmployeeName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxEmployeeName->Location = System::Drawing::Point(177, 8);
            this->tbxEmployeeName->Margin = System::Windows::Forms::Padding(3, 8, 30, 3);
            this->tbxEmployeeName->Name = L"tbxEmployeeName";
            this->tbxEmployeeName->ReadOnly = true;
            this->tbxEmployeeName->Size = System::Drawing::Size(273, 26);
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
            this->lbEmployeeName->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbEmployeeName->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbEmployeeName->Location = System::Drawing::Point(3, 0);
            this->lbEmployeeName->Name = L"lbEmployeeName";
            this->lbEmployeeName->Size = System::Drawing::Size(168, 58);
            this->lbEmployeeName->TabIndex = 0;
            this->lbEmployeeName->Text = L"Employee Name";
            this->lbEmployeeName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
            this->tableLayoutPanel3->Controls->Add(this->tbxTotalMoney, 1, 0);
            this->tableLayoutPanel3->Controls->Add(this->lbTotalMoney, 0, 0);
            this->tableLayoutPanel3->Location = System::Drawing::Point(489, 3);
            this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
            this->tableLayoutPanel3->RowCount = 1;
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel3->Size = System::Drawing::Size(480, 58);
            this->tableLayoutPanel3->TabIndex = 8;
            // 
            // tbxTotalMoney
            // 
            this->tbxTotalMoney->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxTotalMoney->Location = System::Drawing::Point(147, 8);
            this->tbxTotalMoney->Margin = System::Windows::Forms::Padding(3, 8, 30, 3);
            this->tbxTotalMoney->Name = L"tbxTotalMoney";
            this->tbxTotalMoney->ReadOnly = true;
            this->tbxTotalMoney->Size = System::Drawing::Size(303, 26);
            this->tbxTotalMoney->TabIndex = 1;
            this->tbxTotalMoney->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // lbTotalMoney
            // 
            this->lbTotalMoney->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lbTotalMoney->AutoSize = true;
            this->lbTotalMoney->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lbTotalMoney->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbTotalMoney->Location = System::Drawing::Point(3, 0);
            this->lbTotalMoney->Name = L"lbTotalMoney";
            this->lbTotalMoney->Size = System::Drawing::Size(138, 58);
            this->lbTotalMoney->TabIndex = 0;
            this->lbTotalMoney->Text = L"Total Money";
            this->lbTotalMoney->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // ImportProductsDetailForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(978, 610);
            this->Controls->Add(this->tableLayoutPanel1);
            this->MaximizeBox = false;
            this->Name = L"ImportProductsDetailForm";
            this->ShowInTaskbar = false;
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
            this->Text = L"ImportProductsDetailForm";
            this->Load += gcnew System::EventHandler(this, &ImportProductsDetailForm::ImportProductsDetailForm_Load);
            this->tableLayoutPanel1->ResumeLayout(false);
            this->tableLayoutPanel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->EndInit();
            this->tableLayoutPanel4->ResumeLayout(false);
            this->tableLayoutPanel6->ResumeLayout(false);
            this->tableLayoutPanel6->PerformLayout();
            this->tableLayoutPanel7->ResumeLayout(false);
            this->tableLayoutPanel7->PerformLayout();
            this->tableLayoutPanel2->ResumeLayout(false);
            this->tableLayoutPanel5->ResumeLayout(false);
            this->tableLayoutPanel5->PerformLayout();
            this->tableLayoutPanel3->ResumeLayout(false);
            this->tableLayoutPanel3->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion

        // ############## Từ Đây Trở Xuống Sẽ Là Nơi Chúng Ta Viết Code #################

            // ****** Các biến sẽ được khai báo tập trung ở đây ******
    private:
        // Biến MyDB để thực hiện các tương tác đến Database
        MyDatabase* MyDB = new MyDatabase();
        MyObjects::SList<MyStructs::Product>* listProducts = new MyObjects::SList<MyStructs::Product>();
    public:
        // Biến object của BillImport
        MyObjects::BillImport* billImportObject;

        // ****** Các hàm ta tự định nghĩa ******
    private:
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
                this->listProducts->addFirst(pd);
            }
        }
        void loadAllDataToTable() {
            std::vector<std::string> vtQuantities, vtProductIDs;
            vtProductIDs = MyUtils::split(this->billImportObject->getProductIDs(), ",");
            vtQuantities = MyUtils::split(this->billImportObject->getQuantityProducts(), ",");
            for (int i = 0; i < vtProductIDs.size() - 1; i++)
            {
                MyObjects::Node<MyStructs::Product>* productNode = this->listProducts->getNodeByID(std::stoi(vtProductIDs[i]));
                if (productNode != NULL) {
                    this->dataTable->Rows->Add(
                        std::stoi(vtProductIDs[i]),
                        MyUtils::stdStringToSystemString(productNode->data.name),
                        productNode->data.importPrice,
                        std::stoi(vtQuantities[i]),
                        productNode->data.importPrice * std::stoi(vtQuantities[i])
                    );
                }
                delete productNode;
            }
        }

        // ****** Các hàm xử lý sự kiện (event) trong form này ******
    private:
        System::Void ImportProductsDetailForm_Load(System::Object^ sender, System::EventArgs^ e) {
            fillListProducts();
            loadAllDataToTable();
            sql::ResultSet* res = this->MyDB->ReadQuery("SELECT `fullname` FROM `tb_employees` WHERE (`id` = " + MyUtils::intToStdString(this->billImportObject->getEmployeeID()) + ") LIMIT 1");
            if (res->next()) this->tbxEmployeeName->Text = MyUtils::stdStringToSystemString(res->getString("fullname"));
            this->tbxIDImport->Text = this->billImportObject->getId().ToString();
            this->tbxDate->Text = MyUtils::stdStringToSystemString(this->billImportObject->getDate());
            this->tbxTotalMoney->Text = this->billImportObject->getTotalPrice().ToString();
        }
    };
}
