#include "AddOrEditProductForm.h"
#include "TrashProductsForm.h"
#include "ImportProductsForm.h"
#pragma once

namespace BTLAppManagerStore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ProductsPageForm
	/// </summary>
	public ref class ProductsPageForm : public System::Windows::Forms::Form
	{
	public:
		ProductsPageForm(void)
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
		~ProductsPageForm()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
    private: System::Windows::Forms::Button^ btnTrashProds;
    private: System::Windows::Forms::Button^ btnDeleteProds;
    private: System::Windows::Forms::Button^ btnEditProds;
    private: System::Windows::Forms::Button^ btnAddProds;
    private: System::Windows::Forms::Button^ btnImportProds;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
    private: System::Windows::Forms::DataGridView^ dgvProducts;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ idProduct;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ nameProduct;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ categoryProduct;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ quantity;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ unit;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ position;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ importPrice;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ sellPrice;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
    private: System::Windows::Forms::Button^ btnRefresh;
    private: System::Windows::Forms::Button^ btnSearch;
    private: System::Windows::Forms::TextBox^ tbxSearch;
    private: System::Windows::Forms::GroupBox^ groupBox1;
    private: System::Windows::Forms::ComboBox^ comboBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProductsPageForm::typeid));
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->btnTrashProds = (gcnew System::Windows::Forms::Button());
            this->btnDeleteProds = (gcnew System::Windows::Forms::Button());
            this->btnEditProds = (gcnew System::Windows::Forms::Button());
            this->btnAddProds = (gcnew System::Windows::Forms::Button());
            this->btnImportProds = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->dgvProducts = (gcnew System::Windows::Forms::DataGridView());
            this->idProduct = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->nameProduct = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->categoryProduct = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->unit = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->position = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->importPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->sellPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->btnRefresh = (gcnew System::Windows::Forms::Button());
            this->btnSearch = (gcnew System::Windows::Forms::Button());
            this->tbxSearch = (gcnew System::Windows::Forms::TextBox());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->tableLayoutPanel1->SuspendLayout();
            this->tableLayoutPanel2->SuspendLayout();
            this->tableLayoutPanel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->BeginInit();
            this->tableLayoutPanel4->SuspendLayout();
            this->groupBox1->SuspendLayout();
            this->SuspendLayout();
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->BackColor = System::Drawing::SystemColors::Control;
            this->tableLayoutPanel1->ColumnCount = 2;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                200)));
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 0, 0);
            this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 1;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(1179, 648);
            this->tableLayoutPanel1->TabIndex = 2;
            // 
            // tableLayoutPanel2
            // 
            this->tableLayoutPanel2->ColumnCount = 1;
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel2->Controls->Add(this->btnTrashProds, 0, 4);
            this->tableLayoutPanel2->Controls->Add(this->btnDeleteProds, 0, 2);
            this->tableLayoutPanel2->Controls->Add(this->btnEditProds, 0, 1);
            this->tableLayoutPanel2->Controls->Add(this->btnAddProds, 0, 0);
            this->tableLayoutPanel2->Controls->Add(this->btnImportProds, 0, 3);
            this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel2->Location = System::Drawing::Point(982, 3);
            this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
            this->tableLayoutPanel2->RowCount = 5;
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
            this->tableLayoutPanel2->Size = System::Drawing::Size(194, 642);
            this->tableLayoutPanel2->TabIndex = 3;
            // 
            // btnTrashProds
            // 
            this->btnTrashProds->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnTrashProds->BackColor = System::Drawing::Color::Transparent;
            this->btnTrashProds->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnTrashProds.BackgroundImage")));
            this->btnTrashProds->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->btnTrashProds->FlatAppearance->BorderSize = 0;
            this->btnTrashProds->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->btnTrashProds->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->btnTrashProds->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnTrashProds->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnTrashProds->Location = System::Drawing::Point(30, 542);
            this->btnTrashProds->Margin = System::Windows::Forms::Padding(30);
            this->btnTrashProds->Name = L"btnTrashProds";
            this->btnTrashProds->Size = System::Drawing::Size(134, 70);
            this->btnTrashProds->TabIndex = 5;
            this->btnTrashProds->UseVisualStyleBackColor = false;
            this->btnTrashProds->Click += gcnew System::EventHandler(this, &ProductsPageForm::btnTrashProds_Click);
            // 
            // btnDeleteProds
            // 
            this->btnDeleteProds->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnDeleteProds->BackColor = System::Drawing::Color::Transparent;
            this->btnDeleteProds->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDeleteProds.BackgroundImage")));
            this->btnDeleteProds->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->btnDeleteProds->FlatAppearance->BorderSize = 0;
            this->btnDeleteProds->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->btnDeleteProds->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->btnDeleteProds->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnDeleteProds->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnDeleteProds->Location = System::Drawing::Point(30, 286);
            this->btnDeleteProds->Margin = System::Windows::Forms::Padding(30);
            this->btnDeleteProds->Name = L"btnDeleteProds";
            this->btnDeleteProds->Size = System::Drawing::Size(134, 68);
            this->btnDeleteProds->TabIndex = 2;
            this->btnDeleteProds->UseVisualStyleBackColor = false;
            this->btnDeleteProds->Click += gcnew System::EventHandler(this, &ProductsPageForm::btnDeleteProds_Click);
            // 
            // btnEditProds
            // 
            this->btnEditProds->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnEditProds->BackColor = System::Drawing::Color::Transparent;
            this->btnEditProds->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEditProds.BackgroundImage")));
            this->btnEditProds->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->btnEditProds->FlatAppearance->BorderSize = 0;
            this->btnEditProds->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->btnEditProds->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->btnEditProds->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnEditProds->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnEditProds->Location = System::Drawing::Point(30, 158);
            this->btnEditProds->Margin = System::Windows::Forms::Padding(30);
            this->btnEditProds->Name = L"btnEditProds";
            this->btnEditProds->Size = System::Drawing::Size(134, 68);
            this->btnEditProds->TabIndex = 1;
            this->btnEditProds->UseVisualStyleBackColor = false;
            this->btnEditProds->Click += gcnew System::EventHandler(this, &ProductsPageForm::btnEditProds_Click);
            // 
            // btnAddProds
            // 
            this->btnAddProds->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnAddProds->BackColor = System::Drawing::Color::Transparent;
            this->btnAddProds->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAddProds.BackgroundImage")));
            this->btnAddProds->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->btnAddProds->CausesValidation = false;
            this->btnAddProds->FlatAppearance->BorderSize = 0;
            this->btnAddProds->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->btnAddProds->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->btnAddProds->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnAddProds->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAddProds->ImageKey = L"add_icon.png";
            this->btnAddProds->Location = System::Drawing::Point(30, 30);
            this->btnAddProds->Margin = System::Windows::Forms::Padding(30);
            this->btnAddProds->Name = L"btnAddProds";
            this->btnAddProds->Size = System::Drawing::Size(134, 68);
            this->btnAddProds->TabIndex = 0;
            this->btnAddProds->UseVisualStyleBackColor = false;
            this->btnAddProds->Click += gcnew System::EventHandler(this, &ProductsPageForm::btnAddProds_Click);
            // 
            // btnImportProds
            // 
            this->btnImportProds->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnImportProds->BackColor = System::Drawing::Color::Transparent;
            this->btnImportProds->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnImportProds.BackgroundImage")));
            this->btnImportProds->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->btnImportProds->FlatAppearance->BorderSize = 0;
            this->btnImportProds->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->btnImportProds->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->btnImportProds->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnImportProds->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnImportProds->Location = System::Drawing::Point(30, 414);
            this->btnImportProds->Margin = System::Windows::Forms::Padding(30);
            this->btnImportProds->Name = L"btnImportProds";
            this->btnImportProds->Size = System::Drawing::Size(134, 68);
            this->btnImportProds->TabIndex = 4;
            this->btnImportProds->UseVisualStyleBackColor = false;
            this->btnImportProds->Click += gcnew System::EventHandler(this, &ProductsPageForm::btnImportProds_Click);
            // 
            // tableLayoutPanel3
            // 
            this->tableLayoutPanel3->ColumnCount = 1;
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel3->Controls->Add(this->dgvProducts, 0, 1);
            this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel4, 0, 0);
            this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel3->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
            this->tableLayoutPanel3->RowCount = 2;
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 80)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
            this->tableLayoutPanel3->Size = System::Drawing::Size(973, 642);
            this->tableLayoutPanel3->TabIndex = 1;
            // 
            // dgvProducts
            // 
            this->dgvProducts->AllowUserToAddRows = false;
            this->dgvProducts->AllowUserToDeleteRows = false;
            this->dgvProducts->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->dgvProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dgvProducts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
                this->idProduct,
                    this->nameProduct, this->categoryProduct, this->quantity, this->unit, this->position, this->importPrice, this->sellPrice
            });
            this->dgvProducts->Location = System::Drawing::Point(3, 83);
            this->dgvProducts->Name = L"dgvProducts";
            this->dgvProducts->ReadOnly = true;
            this->dgvProducts->RowHeadersWidth = 62;
            this->dgvProducts->RowTemplate->Height = 28;
            this->dgvProducts->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
            this->dgvProducts->Size = System::Drawing::Size(967, 556);
            this->dgvProducts->TabIndex = 4;
            // 
            // idProduct
            // 
            this->idProduct->HeaderText = L"ID";
            this->idProduct->MinimumWidth = 8;
            this->idProduct->Name = L"idProduct";
            this->idProduct->ReadOnly = true;
            this->idProduct->Width = 150;
            // 
            // nameProduct
            // 
            this->nameProduct->HeaderText = L"Name";
            this->nameProduct->MinimumWidth = 8;
            this->nameProduct->Name = L"nameProduct";
            this->nameProduct->ReadOnly = true;
            this->nameProduct->Width = 150;
            // 
            // categoryProduct
            // 
            this->categoryProduct->HeaderText = L"Category";
            this->categoryProduct->MinimumWidth = 8;
            this->categoryProduct->Name = L"categoryProduct";
            this->categoryProduct->ReadOnly = true;
            this->categoryProduct->Width = 150;
            // 
            // quantity
            // 
            this->quantity->HeaderText = L"Quantity";
            this->quantity->MinimumWidth = 8;
            this->quantity->Name = L"quantity";
            this->quantity->ReadOnly = true;
            this->quantity->Width = 150;
            // 
            // unit
            // 
            this->unit->HeaderText = L"Unit";
            this->unit->MinimumWidth = 8;
            this->unit->Name = L"unit";
            this->unit->ReadOnly = true;
            this->unit->Width = 150;
            // 
            // position
            // 
            this->position->HeaderText = L"Position";
            this->position->MinimumWidth = 8;
            this->position->Name = L"position";
            this->position->ReadOnly = true;
            this->position->Width = 150;
            // 
            // importPrice
            // 
            this->importPrice->HeaderText = L"Import Price";
            this->importPrice->MinimumWidth = 8;
            this->importPrice->Name = L"importPrice";
            this->importPrice->ReadOnly = true;
            this->importPrice->Width = 150;
            // 
            // sellPrice
            // 
            this->sellPrice->HeaderText = L"Sell Price";
            this->sellPrice->MinimumWidth = 8;
            this->sellPrice->Name = L"sellPrice";
            this->sellPrice->ReadOnly = true;
            this->sellPrice->Width = 150;
            // 
            // tableLayoutPanel4
            // 
            this->tableLayoutPanel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel4->ColumnCount = 4;
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                150)));
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                150)));
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                150)));
            this->tableLayoutPanel4->Controls->Add(this->btnRefresh, 3, 0);
            this->tableLayoutPanel4->Controls->Add(this->btnSearch, 2, 0);
            this->tableLayoutPanel4->Controls->Add(this->tbxSearch, 1, 0);
            this->tableLayoutPanel4->Controls->Add(this->groupBox1, 0, 0);
            this->tableLayoutPanel4->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
            this->tableLayoutPanel4->RowCount = 1;
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel4->Size = System::Drawing::Size(967, 74);
            this->tableLayoutPanel4->TabIndex = 3;
            // 
            // btnRefresh
            // 
            this->btnRefresh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnRefresh->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnRefresh->Location = System::Drawing::Point(829, 12);
            this->btnRefresh->Margin = System::Windows::Forms::Padding(12);
            this->btnRefresh->Name = L"btnRefresh";
            this->btnRefresh->Size = System::Drawing::Size(126, 50);
            this->btnRefresh->TabIndex = 3;
            this->btnRefresh->Text = L"Refresh";
            this->btnRefresh->UseVisualStyleBackColor = true;
            // 
            // btnSearch
            // 
            this->btnSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnSearch->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnSearch->Location = System::Drawing::Point(679, 12);
            this->btnSearch->Margin = System::Windows::Forms::Padding(12);
            this->btnSearch->Name = L"btnSearch";
            this->btnSearch->Size = System::Drawing::Size(126, 50);
            this->btnSearch->TabIndex = 2;
            this->btnSearch->Text = L"Search";
            this->btnSearch->UseVisualStyleBackColor = true;
            // 
            // tbxSearch
            // 
            this->tbxSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbxSearch->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbxSearch->Location = System::Drawing::Point(168, 14);
            this->tbxSearch->Margin = System::Windows::Forms::Padding(18, 14, 18, 18);
            this->tbxSearch->Name = L"tbxSearch";
            this->tbxSearch->Size = System::Drawing::Size(481, 38);
            this->tbxSearch->TabIndex = 1;
            // 
            // groupBox1
            // 
            this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->groupBox1->Controls->Add(this->comboBox1);
            this->groupBox1->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->groupBox1->Location = System::Drawing::Point(3, 3);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(144, 68);
            this->groupBox1->TabIndex = 0;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"Search";
            // 
            // comboBox1
            // 
            this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"ID", L"Name", L"Quantity", L"Position" });
            this->comboBox1->Location = System::Drawing::Point(6, 21);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(132, 26);
            this->comboBox1->TabIndex = 0;
            // 
            // ProductsPageForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1179, 648);
            this->Controls->Add(this->tableLayoutPanel1);
            this->Name = L"ProductsPageForm";
            this->Text = L"ProductsPageForm";
            this->tableLayoutPanel1->ResumeLayout(false);
            this->tableLayoutPanel2->ResumeLayout(false);
            this->tableLayoutPanel3->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->EndInit();
            this->tableLayoutPanel4->ResumeLayout(false);
            this->tableLayoutPanel4->PerformLayout();
            this->groupBox1->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion


    private: System::Void btnAddProds_Click(System::Object^ sender, System::EventArgs^ e) {
        Form^ AddProductForm = gcnew BTLAppManagerStore::AddOrEditProductForm();
        AddProductForm->ShowDialog();
        delete AddProductForm;
    }
    private: System::Void btnEditProds_Click(System::Object^ sender, System::EventArgs^ e) {
        Form^ EditProductForm = gcnew BTLAppManagerStore::AddOrEditProductForm(true);
        EditProductForm->ShowDialog();
        delete EditProductForm;
    }
    private: System::Void btnDeleteProds_Click(System::Object^ sender, System::EventArgs^ e) {
        System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to delete this Product", "Delete Product", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
        if (result == System::Windows::Forms::DialogResult::Yes) {
            // xu ly xoa Product
        }
    }
    private: System::Void btnTrashProds_Click(System::Object^ sender, System::EventArgs^ e) {
        Form^ TrashProductsForm = gcnew BTLAppManagerStore::TrashProductsForm();
        TrashProductsForm->ShowDialog();
        delete TrashProductsForm;
    }
    private: System::Void btnImportProds_Click(System::Object^ sender, System::EventArgs^ e) {
        Form^ ImportProductsForm = gcnew BTLAppManagerStore::ImportProductsForm();
        ImportProductsForm->ShowDialog();
        delete ImportProductsForm;
    }
	};
}
