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
	/// Summary for ImportNewProductsForm
	/// </summary>
	public ref class ImportNewProductsForm : public System::Windows::Forms::Form
	{
	public:
		ImportNewProductsForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		ImportNewProductsForm(MyDatabase* const MyDB)
		{
			InitializeComponent();
			this->MyDB = MyDB;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ImportNewProductsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ComboBox^ cbProducts;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::NumericUpDown^ numQuantity;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataTable;
	private: System::Windows::Forms::Button^ btnRemove;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Button^ btnImport;
	private: System::Windows::Forms::Label^ lbMoney;
	private: System::Windows::Forms::Label^ lbTotal;
	private: System::Windows::Forms::Label^ titleForm;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productPrice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productQuantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ totalMoney;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::TextBox^ tbxEmployeeName;
	private: System::Windows::Forms::Label^ lbEmployeeName;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
	private: System::Windows::Forms::TextBox^ tbxDate;
	private: System::Windows::Forms::Label^ lbDate;
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
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnImport = (gcnew System::Windows::Forms::Button());
			this->lbMoney = (gcnew System::Windows::Forms::Label());
			this->lbTotal = (gcnew System::Windows::Forms::Label());
			this->dataTable = (gcnew System::Windows::Forms::DataGridView());
			this->productID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productQuantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->totalMoney = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->cbProducts = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->numQuantity = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tbxDate = (gcnew System::Windows::Forms::TextBox());
			this->lbDate = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tbxEmployeeName = (gcnew System::Windows::Forms::TextBox());
			this->lbEmployeeName = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->BeginInit();
			this->tableLayoutPanel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numQuantity))->BeginInit();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->titleForm, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->dataTable, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel4, 0, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 70)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 70)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(978, 610);
			this->tableLayoutPanel1->TabIndex = 0;
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
			this->titleForm->Text = L"New Import Products";
			this->titleForm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel3->ColumnCount = 3;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				180)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				220)));
			this->tableLayoutPanel3->Controls->Add(this->btnImport, 2, 0);
			this->tableLayoutPanel3->Controls->Add(this->lbMoney, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->lbTotal, 0, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 543);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(972, 64);
			this->tableLayoutPanel3->TabIndex = 2;
			// 
			// btnImport
			// 
			this->btnImport->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnImport->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnImport->Location = System::Drawing::Point(782, 9);
			this->btnImport->Margin = System::Windows::Forms::Padding(30, 9, 30, 9);
			this->btnImport->Name = L"btnImport";
			this->btnImport->Size = System::Drawing::Size(160, 46);
			this->btnImport->TabIndex = 6;
			this->btnImport->Text = L"Import";
			this->btnImport->UseVisualStyleBackColor = true;
			this->btnImport->Click += gcnew System::EventHandler(this, &ImportNewProductsForm::btnImport_Click);
			// 
			// lbMoney
			// 
			this->lbMoney->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbMoney->AutoSize = true;
			this->lbMoney->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbMoney->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->lbMoney->Location = System::Drawing::Point(183, 0);
			this->lbMoney->Name = L"lbMoney";
			this->lbMoney->Size = System::Drawing::Size(566, 64);
			this->lbMoney->TabIndex = 1;
			this->lbMoney->Text = L"0 (VND)";
			this->lbMoney->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbTotal
			// 
			this->lbTotal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbTotal->AutoSize = true;
			this->lbTotal->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTotal->Location = System::Drawing::Point(3, 0);
			this->lbTotal->Name = L"lbTotal";
			this->lbTotal->Size = System::Drawing::Size(174, 64);
			this->lbTotal->TabIndex = 0;
			this->lbTotal->Text = L"Total Amount:";
			this->lbTotal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->dataTable->Name = L"dataTable";
			this->dataTable->ReadOnly = true;
			this->dataTable->RowHeadersWidth = 62;
			this->dataTable->RowTemplate->Height = 28;
			this->dataTable->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataTable->Size = System::Drawing::Size(972, 344);
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
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 4;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				220)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				158)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				158)));
			this->tableLayoutPanel2->Controls->Add(this->btnRemove, 3, 0);
			this->tableLayoutPanel2->Controls->Add(this->panel1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->panel2, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->btnAdd, 2, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 123);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(972, 64);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// btnRemove
			// 
			this->btnRemove->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnRemove->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRemove->Location = System::Drawing::Point(834, 9);
			this->btnRemove->Margin = System::Windows::Forms::Padding(20, 9, 20, 9);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(118, 46);
			this->btnRemove->TabIndex = 6;
			this->btnRemove->Text = L"Remove";
			this->btnRemove->UseVisualStyleBackColor = true;
			this->btnRemove->Click += gcnew System::EventHandler(this, &ImportNewProductsForm::btnRemove_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->cbProducts);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(430, 58);
			this->panel1->TabIndex = 3;
			// 
			// cbProducts
			// 
			this->cbProducts->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cbProducts->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbProducts->FormattingEnabled = true;
			this->cbProducts->Location = System::Drawing::Point(101, 15);
			this->cbProducts->Margin = System::Windows::Forms::Padding(30, 18, 30, 3);
			this->cbProducts->Name = L"cbProducts";
			this->cbProducts->Size = System::Drawing::Size(317, 28);
			this->cbProducts->TabIndex = 2;
			this->cbProducts->SelectedIndexChanged += gcnew System::EventHandler(this, &ImportNewProductsForm::cbProducts_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Product:";
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->Controls->Add(this->numQuantity);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(439, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(214, 58);
			this->panel2->TabIndex = 4;
			// 
			// numQuantity
			// 
			this->numQuantity->Location = System::Drawing::Point(118, 16);
			this->numQuantity->Name = L"numQuantity";
			this->numQuantity->Size = System::Drawing::Size(62, 26);
			this->numQuantity->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Quantity:";
			// 
			// btnAdd
			// 
			this->btnAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(676, 9);
			this->btnAdd->Margin = System::Windows::Forms::Padding(20, 9, 20, 9);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(118, 46);
			this->btnAdd->TabIndex = 5;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ImportNewProductsForm::btnAdd_Click);
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
			this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel6, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel5, 0, 0);
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
			this->tableLayoutPanel5->Size = System::Drawing::Size(480, 48);
			this->tableLayoutPanel5->TabIndex = 6;
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
			this->lbEmployeeName->Size = System::Drawing::Size(168, 48);
			this->lbEmployeeName->TabIndex = 0;
			this->lbEmployeeName->Text = L"Employee Name";
			this->lbEmployeeName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ImportNewProductsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(978, 610);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"ImportNewProductsForm";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"New Import Products";
			this->Load += gcnew System::EventHandler(this, &ImportNewProductsForm::ImportNewProductsForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->EndInit();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numQuantity))->EndInit();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

// ############## Từ Đây Trở Xuống Sẽ Là Nơi Chúng Ta Viết Code #################

	// ****** Các biến sẽ được khai báo tập trung ở đây ******
	public:
		// Biến object của BillImport
		MyObjects::BillImport* billImportObject;
	private:
		// Biến MyDB để thực hiện các tương tác đến Database
		MyDatabase* MyDB = new MyDatabase();
		MyObjects::SList<MyStructs::Product>* ListProducts = new MyObjects::SList<MyStructs::Product>();
		MyStructs::Product* currentProduct;

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
				this->ListProducts->addFirst(pd);
			}
		}
		void loadCBProducts() {
			for (MyObjects::Node<MyStructs::Product>* i = this->ListProducts->getHead(); i != NULL; i = i->next)
			{
				this->cbProducts->Items->Add(MyUtils::stdStringToSystemString(i->data.name));
			}
		}
		void calcTotalMoney() {
			unsigned int sum = 0;
			for (int i = 0; i < this->dataTable->Rows->Count; i++)
			{
				sum += std::stoi(MyUtils::systemStringToStdString(this->dataTable->Rows[i]->Cells[4]->Value->ToString()));
			}
			this->lbMoney->Text = sum.ToString() + " (VND)";
		}
		int getCurrentRowSelectedIndex() {
			int currentRowsIndex = (int)this->dataTable->CurrentRow->Index;
			if (currentRowsIndex >= this->dataTable->Rows->Count) return this->dataTable->Rows->Count - 1;
			return currentRowsIndex;
		}
		MyStructs::Product* getProductByName(std::string name) {
			for (MyObjects::Node<MyStructs::Product>* i = this->ListProducts->getHead(); i != NULL; i = i->next)
			{
				if (i->data.name == name) {
					return &(i->data);
				}
			}
		}
		void updateQuantityProducts(std::string quantities, std::string productIDs) {
			std::vector<std::string> vtQuantities, vtProductIDs;
			vtProductIDs = MyUtils::split(productIDs, ",");
			vtQuantities = MyUtils::split(quantities, ",");
			for (int i = 0; i < vtProductIDs.size() - 1; i++)
			{
				this->MyDB->CUDQuery("UPDATE `tb_products` SET `quantity` = `quantity` + " + vtQuantities[i] + " WHERE (`id` = " + vtProductIDs[i] + ")");
			}
		}

		// ****** Các hàm xử lý sự kiện (event) trong form này ******
	private:
		System::Void ImportNewProductsForm_Load(System::Object^ sender, System::EventArgs^ e) {
			this->billImportObject = new MyObjects::BillImport(this->MyDB);
			fillListProducts();
			loadCBProducts();
			this->tbxEmployeeName->Text = MyUtils::stdStringToSystemString(APP_SESSION::currentUser->getFullName());
			this->tbxDate->Text = DateTime::Now.ToString("yyyy-MM-dd");
		}
		System::Void cbProducts_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			std::string nameProductSeleted = MyUtils::systemStringToStdString(this->cbProducts->SelectedItem->ToString());
			this->currentProduct = getProductByName(nameProductSeleted);
		}
		System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
			this->dataTable->Rows->Add(
				this->currentProduct->id,
				MyUtils::stdStringToSystemString(this->currentProduct->name),
				this->currentProduct->importPrice,
				this->numQuantity->Value,
				this->numQuantity->Value * this->currentProduct->importPrice
			);
			calcTotalMoney();
		}
		System::Void btnRemove_Click(System::Object^ sender, System::EventArgs^ e) {
			this->dataTable->Rows->RemoveAt(this->getCurrentRowSelectedIndex());
			calcTotalMoney();
		}
		System::Void btnImport_Click(System::Object^ sender, System::EventArgs^ e) {
			std::string productIDs = "", quantities = "";
			std::string date = MyUtils::systemStringToStdString(DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
			unsigned int totalPrice = std::stoi(MyUtils::systemStringToStdString(this->lbMoney->Text));
			for (int i = 0; i < this->dataTable->Rows->Count; i++)
			{
				productIDs += MyUtils::systemStringToStdString(this->dataTable->Rows[i]->Cells[0]->Value->ToString()) + ",";
				quantities += MyUtils::systemStringToStdString(this->dataTable->Rows[i]->Cells[3]->Value->ToString()) + ",";
			}
			this->billImportObject->setTotalPrice(totalPrice);
			this->billImportObject->setProductIDs(productIDs);
			this->billImportObject->setQuantityProducts(quantities);
			this->billImportObject->setDate(date);
			this->billImportObject->setEmployeeID(APP_SESSION::currentUser->getId());
			this->billImportObject->Create();

			updateQuantityProducts(quantities, productIDs);

			MessageBox::Show(L"Import Products Success", L"SUCCESS", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();
		}
	};
}
