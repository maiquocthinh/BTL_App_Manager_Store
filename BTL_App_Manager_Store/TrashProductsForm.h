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
	/// Summary for TrashProductsForm
	/// </summary>
	public ref class TrashProductsForm : public System::Windows::Forms::Form
	{
	public:
		TrashProductsForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		TrashProductsForm(MyDatabase* const MyDB)
		{
			InitializeComponent();
			this->MyDB = MyDB;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TrashProductsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnPermanentlyDelete;

	private: System::Windows::Forms::Button^ btnRestore;

	private: System::Windows::Forms::ImageList^ ListIcon;
	private: System::Windows::Forms::DataGridView^ dataTable;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ idProduct;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nameProduct;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ categoryProduct;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ quantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ unit;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ position;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ importPrice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sellPrice;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TrashProductsForm::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnPermanentlyDelete = (gcnew System::Windows::Forms::Button());
			this->ListIcon = (gcnew System::Windows::Forms::ImageList(this->components));
			this->btnRestore = (gcnew System::Windows::Forms::Button());
			this->dataTable = (gcnew System::Windows::Forms::DataGridView());
			this->idProduct = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nameProduct = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->categoryProduct = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->unit = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->position = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->importPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sellPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tableLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->panel1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->dataTable, 0, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1100, 622);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->btnPermanentlyDelete);
			this->panel1->Controls->Add(this->btnRestore);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1094, 94);
			this->panel1->TabIndex = 0;
			// 
			// btnPermanentlyDelete
			// 
			this->btnPermanentlyDelete->BackColor = System::Drawing::Color::Transparent;
			this->btnPermanentlyDelete->FlatAppearance->BorderSize = 0;
			this->btnPermanentlyDelete->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnPermanentlyDelete->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnPermanentlyDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPermanentlyDelete->ImageKey = L"delete-icon.png";
			this->btnPermanentlyDelete->ImageList = this->ListIcon;
			this->btnPermanentlyDelete->Location = System::Drawing::Point(254, 0);
			this->btnPermanentlyDelete->Name = L"btnPermanentlyDelete";
			this->btnPermanentlyDelete->Size = System::Drawing::Size(97, 94);
			this->btnPermanentlyDelete->TabIndex = 1;
			this->btnPermanentlyDelete->UseVisualStyleBackColor = false;
			this->btnPermanentlyDelete->Click += gcnew System::EventHandler(this, &TrashProductsForm::btnPermanentlyDelete_Click);
			// 
			// ListIcon
			// 
			this->ListIcon->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"ListIcon.ImageStream")));
			this->ListIcon->TransparentColor = System::Drawing::Color::Transparent;
			this->ListIcon->Images->SetKeyName(0, L"delete-icon.png");
			this->ListIcon->Images->SetKeyName(1, L"restore-icon.png");
			// 
			// btnRestore
			// 
			this->btnRestore->BackColor = System::Drawing::Color::Transparent;
			this->btnRestore->FlatAppearance->BorderSize = 0;
			this->btnRestore->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnRestore->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnRestore->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRestore->ImageKey = L"restore-icon.png";
			this->btnRestore->ImageList = this->ListIcon;
			this->btnRestore->Location = System::Drawing::Point(76, 0);
			this->btnRestore->Name = L"btnRestore";
			this->btnRestore->Size = System::Drawing::Size(97, 94);
			this->btnRestore->TabIndex = 0;
			this->btnRestore->UseVisualStyleBackColor = false;
			this->btnRestore->Click += gcnew System::EventHandler(this, &TrashProductsForm::btnRestore_Click);
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
			this->dataTable->Location = System::Drawing::Point(3, 103);
			this->dataTable->Name = L"dataTable";
			this->dataTable->ReadOnly = true;
			this->dataTable->RowHeadersWidth = 62;
			this->dataTable->RowTemplate->Height = 28;
			this->dataTable->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataTable->Size = System::Drawing::Size(1094, 516);
			this->dataTable->TabIndex = 3;
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
			// TrashProductsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1100, 622);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1122, 678);
			this->MinimumSize = System::Drawing::Size(1122, 678);
			this->Name = L"TrashProductsForm";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Trash Products";
			this->Load += gcnew System::EventHandler(this, &TrashProductsForm::TrashProductsForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		// ############## Từ Đây Trở Xuống Sẽ Là Nơi Chúng Ta Viết Code #################

			// ****** Các biến sẽ được khai báo tập trung ở đây ******
	private:
		// Biến MyDB để thực hiện các tương tác đến Database
		MyDatabase* MyDB = new MyDatabase();
		// Biến object của Category
		MyObjects::Product* productObject;

		// ****** Các hàm ta tự định nghĩa ******
	private:
		// Hàm lấy giá trị biến currentIndexRowSelect (đồng thời kiểm tra biến này có phù hợp luôn hay không)
		int getCurrentRowsIndexSelected() {
			int currentRowsIndex = (int)this->dataTable->CurrentRow->Index;
			if (currentRowsIndex >= this->dataTable->Rows->Count) return this->dataTable->Rows->Count - 1;
			return currentRowsIndex;
		}
		// Hàm này lấy id của hàng thông qua rowIndex
		int getIdByRowIndex(int rowIndex) {
			return std::stoi(MyUtils::systemStringToStdString(this->dataTable->Rows[rowIndex]->Cells[0]->Value->ToString()));
		}
		// Load tất cả data (đã bị xóa) trong Database ra Table
		void loadAllDataToTable() {
			this->dataTable->Rows->Clear(); // Xóa dữ liệu cũ trong dataTable
			std::string query = "SELECT * FROM `tb_products` WHERE (`isDelete` = 1)";
			sql::ResultSet* res = this->MyDB->ReadQuery(query);
			while (res->next())
				this->dataTable->Rows->Add(
					res->getInt("id"),
					MyUtils::stdStringToSystemString(res->getString("name")),
					"",
					res->getInt("quantity"),
					MyUtils::stdStringToSystemString(res->getString("unit")),
					MyUtils::stdStringToSystemString(res->getString("position")),
					res->getInt("import_price"),
					res->getInt("sell_price")
				);
		}

		// ****** Các hàm xử lý sự kiện (event) trong form này 
	private:
		// Khi Form tải
		System::Void TrashProductsForm_Load(System::Object^ sender, System::EventArgs^ e) {
			loadAllDataToTable();
			this->productObject = new MyObjects::Product(this->MyDB);
		}
		// Hàm này chạy khi nút Restore click, thực hiện khôi phục lại những Product đã bị xóa
		System::Void btnRestore_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->dataTable->Rows->Count != 0) {
				unsigned int id = getIdByRowIndex(this->getCurrentRowsIndexSelected());
				this->productObject->setId(id);
				this->productObject->Restore();
				this->dataTable->Rows->RemoveAt(this->getCurrentRowsIndexSelected());
			}
			else MessageBox::Show("Error, Data Empty!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		// Hàm này chạy khi nút Delete click, thực hiện xóa (vĩnh viễn) Product
		System::Void btnPermanentlyDelete_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->dataTable->Rows->Count != 0) {
				System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to `Permanently` delete this Category", "Delete Category", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
				if (result == System::Windows::Forms::DialogResult::Yes) {
					unsigned int id = getIdByRowIndex(this->getCurrentRowsIndexSelected());
					this->productObject->setId(id);
					this->productObject->Delete();
					this->dataTable->Rows->RemoveAt(this->getCurrentRowsIndexSelected());
				}
			}
			else MessageBox::Show("Error, Data Empty!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	};
}
