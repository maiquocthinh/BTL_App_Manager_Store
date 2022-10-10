#include "AddOrEditProductForm.h"
#include "TrashProductsForm.h"
#include "ImportProductsForm.h"
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
        ProductsPageForm(MyDatabase* const MyDB)
        {
            InitializeComponent();
            this->MyDB = MyDB;
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
    private: System::Windows::Forms::Button^ btnTrash;

    private: System::Windows::Forms::Button^ btnDelete;

    private: System::Windows::Forms::Button^ btnEdit;

    private: System::Windows::Forms::Button^ btnAdd;
    private: System::Windows::Forms::Button^ btnImport;


    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
    private: System::Windows::Forms::DataGridView^ dataTable;

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
    private: System::Windows::Forms::ComboBox^ cbSearch;


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
            this->btnTrash = (gcnew System::Windows::Forms::Button());
            this->btnDelete = (gcnew System::Windows::Forms::Button());
            this->btnEdit = (gcnew System::Windows::Forms::Button());
            this->btnAdd = (gcnew System::Windows::Forms::Button());
            this->btnImport = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->dataTable = (gcnew System::Windows::Forms::DataGridView());
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
            this->cbSearch = (gcnew System::Windows::Forms::ComboBox());
            this->tableLayoutPanel1->SuspendLayout();
            this->tableLayoutPanel2->SuspendLayout();
            this->tableLayoutPanel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->BeginInit();
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
            this->tableLayoutPanel2->Controls->Add(this->btnTrash, 0, 4);
            this->tableLayoutPanel2->Controls->Add(this->btnDelete, 0, 2);
            this->tableLayoutPanel2->Controls->Add(this->btnEdit, 0, 1);
            this->tableLayoutPanel2->Controls->Add(this->btnAdd, 0, 0);
            this->tableLayoutPanel2->Controls->Add(this->btnImport, 0, 3);
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
            // btnTrash
            // 
            this->btnTrash->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnTrash->BackColor = System::Drawing::Color::Transparent;
            this->btnTrash->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnTrash.BackgroundImage")));
            this->btnTrash->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->btnTrash->FlatAppearance->BorderSize = 0;
            this->btnTrash->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->btnTrash->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->btnTrash->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnTrash->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnTrash->Location = System::Drawing::Point(30, 542);
            this->btnTrash->Margin = System::Windows::Forms::Padding(30);
            this->btnTrash->Name = L"btnTrash";
            this->btnTrash->Size = System::Drawing::Size(134, 70);
            this->btnTrash->TabIndex = 5;
            this->btnTrash->UseVisualStyleBackColor = false;
            this->btnTrash->Click += gcnew System::EventHandler(this, &ProductsPageForm::btnTrash_Click);
            // 
            // btnDelete
            // 
            this->btnDelete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnDelete->BackColor = System::Drawing::Color::Transparent;
            this->btnDelete->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDelete.BackgroundImage")));
            this->btnDelete->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->btnDelete->FlatAppearance->BorderSize = 0;
            this->btnDelete->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->btnDelete->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnDelete->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnDelete->Location = System::Drawing::Point(30, 286);
            this->btnDelete->Margin = System::Windows::Forms::Padding(30);
            this->btnDelete->Name = L"btnDelete";
            this->btnDelete->Size = System::Drawing::Size(134, 68);
            this->btnDelete->TabIndex = 2;
            this->btnDelete->UseVisualStyleBackColor = false;
            this->btnDelete->Click += gcnew System::EventHandler(this, &ProductsPageForm::btnDelete_Click);
            // 
            // btnEdit
            // 
            this->btnEdit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnEdit->BackColor = System::Drawing::Color::Transparent;
            this->btnEdit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEdit.BackgroundImage")));
            this->btnEdit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->btnEdit->FlatAppearance->BorderSize = 0;
            this->btnEdit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->btnEdit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->btnEdit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnEdit->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnEdit->Location = System::Drawing::Point(30, 158);
            this->btnEdit->Margin = System::Windows::Forms::Padding(30);
            this->btnEdit->Name = L"btnEdit";
            this->btnEdit->Size = System::Drawing::Size(134, 68);
            this->btnEdit->TabIndex = 1;
            this->btnEdit->UseVisualStyleBackColor = false;
            this->btnEdit->Click += gcnew System::EventHandler(this, &ProductsPageForm::btnEdit_Click);
            // 
            // btnAdd
            // 
            this->btnAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnAdd->BackColor = System::Drawing::Color::Transparent;
            this->btnAdd->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAdd.BackgroundImage")));
            this->btnAdd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->btnAdd->CausesValidation = false;
            this->btnAdd->FlatAppearance->BorderSize = 0;
            this->btnAdd->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->btnAdd->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnAdd->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAdd->ImageKey = L"add_icon.png";
            this->btnAdd->Location = System::Drawing::Point(30, 30);
            this->btnAdd->Margin = System::Windows::Forms::Padding(30);
            this->btnAdd->Name = L"btnAdd";
            this->btnAdd->Size = System::Drawing::Size(134, 68);
            this->btnAdd->TabIndex = 0;
            this->btnAdd->UseVisualStyleBackColor = false;
            this->btnAdd->Click += gcnew System::EventHandler(this, &ProductsPageForm::btnAdd_Click);
            // 
            // btnImport
            // 
            this->btnImport->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnImport->BackColor = System::Drawing::Color::Transparent;
            this->btnImport->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnImport.BackgroundImage")));
            this->btnImport->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->btnImport->FlatAppearance->BorderSize = 0;
            this->btnImport->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->btnImport->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->btnImport->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnImport->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnImport->Location = System::Drawing::Point(30, 414);
            this->btnImport->Margin = System::Windows::Forms::Padding(30);
            this->btnImport->Name = L"btnImport";
            this->btnImport->Size = System::Drawing::Size(134, 68);
            this->btnImport->TabIndex = 4;
            this->btnImport->UseVisualStyleBackColor = false;
            this->btnImport->Click += gcnew System::EventHandler(this, &ProductsPageForm::btnImport_Click);
            // 
            // tableLayoutPanel3
            // 
            this->tableLayoutPanel3->ColumnCount = 1;
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel3->Controls->Add(this->dataTable, 0, 1);
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
            // dataTable
            // 
            this->dataTable->AllowUserToAddRows = false;
            this->dataTable->AllowUserToDeleteRows = false;
            this->dataTable->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->dataTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
                this->idProduct,
                    this->nameProduct, this->categoryProduct, this->quantity, this->unit, this->position, this->importPrice, this->sellPrice
            });
            this->dataTable->Location = System::Drawing::Point(3, 83);
            this->dataTable->Name = L"dataTable";
            this->dataTable->ReadOnly = true;
            this->dataTable->RowHeadersWidth = 62;
            this->dataTable->RowTemplate->Height = 28;
            this->dataTable->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
            this->dataTable->Size = System::Drawing::Size(967, 556);
            this->dataTable->TabIndex = 4;
            this->dataTable->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductsPageForm::dataTable_CellClick);
            this->dataTable->Sorted += gcnew System::EventHandler(this, &ProductsPageForm::dataTable_Sorted);
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
            this->groupBox1->Controls->Add(this->cbSearch);
            this->groupBox1->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->groupBox1->Location = System::Drawing::Point(3, 3);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(144, 68);
            this->groupBox1->TabIndex = 0;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"Search";
            // 
            // cbSearch
            // 
            this->cbSearch->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->cbSearch->FormattingEnabled = true;
            this->cbSearch->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"ID", L"Name", L"Quantity", L"Position" });
            this->cbSearch->Location = System::Drawing::Point(6, 21);
            this->cbSearch->Name = L"cbSearch";
            this->cbSearch->Size = System::Drawing::Size(132, 26);
            this->cbSearch->TabIndex = 0;
            this->cbSearch->SelectedIndexChanged += gcnew System::EventHandler(this, &ProductsPageForm::cbSearch_SelectedIndexChanged);
            // 
            // ProductsPageForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1179, 648);
            this->Controls->Add(this->tableLayoutPanel1);
            this->Name = L"ProductsPageForm";
            this->Text = L"ProductsPageForm";
            this->Load += gcnew System::EventHandler(this, &ProductsPageForm::ProductsPageForm_Load);
            this->tableLayoutPanel1->ResumeLayout(false);
            this->tableLayoutPanel2->ResumeLayout(false);
            this->tableLayoutPanel3->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->EndInit();
            this->tableLayoutPanel4->ResumeLayout(false);
            this->tableLayoutPanel4->PerformLayout();
            this->groupBox1->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion

// ############## Từ Đây Trở Xuống Sẽ Là Nơi Chúng Ta Viết Code #################

    // ****** Các biến sẽ được khai báo tập trung ở đây ******
    private:
        // Biến MyDB để thực hiện các tương tác đến Database
        MyDatabase* MyDB = new MyDatabase();

    // ****** Các hàm ta tự định nghĩa ******


    // ****** Các hàm xử lý sự kiện (event) trong form này ******
    private:
        // Khi form tải
        System::Void ProductsPageForm_Load(System::Object^ sender, System::EventArgs^ e) {
        }
        // Khi nút thêm Product click thì Show lên Form thêm Product
        System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
            Form^ AddProductForm = gcnew BTLAppManagerStore::AddOrEditProductForm();
            AddProductForm->ShowDialog();
            delete AddProductForm;
        }
        // Khi nút sửa Product click thì Show lên Form sửa Product
        System::Void btnEdit_Click(System::Object^ sender, System::EventArgs^ e) {
            Form^ EditProductForm = gcnew BTLAppManagerStore::AddOrEditProductForm(true);
            EditProductForm->ShowDialog();
            delete EditProductForm;
        }
        // Khi nút xóa Product click thì sẽ hỏi có xóa hay ko, nếu xóa thì xử lý xóa ở bên trong hàm này
        System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
            System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to delete this Product", "Delete Product", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
            if (result == System::Windows::Forms::DialogResult::Yes) {
                // xử lý xóa Product
            }
        }
        // Khi nút xem thùng rác (các Product đã xóa) click thì show Form danh sách Product đã xóa
        System::Void btnTrash_Click(System::Object^ sender, System::EventArgs^ e) {
            Form^ TrashProductsForm = gcnew BTLAppManagerStore::TrashProductsForm();
            TrashProductsForm->ShowDialog();
            delete TrashProductsForm;
        }
        // Khi nút Import click Show lên Form Import Product
        System::Void btnImport_Click(System::Object^ sender, System::EventArgs^ e) {
            Form^ ImportProductsForm = gcnew BTLAppManagerStore::ImportProductsForm();
            ImportProductsForm->ShowDialog();
            delete ImportProductsForm;
        }
        System::Void dataTable_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
        }
        System::Void dataTable_Sorted(System::Object^ sender, System::EventArgs^ e) {
        }
        System::Void cbSearch_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
        }
};
}
