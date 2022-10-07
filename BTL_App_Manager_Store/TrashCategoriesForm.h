#include "Database.h"
#include "Utils.h"
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
	/// Summary for TrashCategoriesForm
	/// </summary>
	public ref class TrashCategoriesForm : public System::Windows::Forms::Form
	{
	public:
		TrashCategoriesForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		TrashCategoriesForm(MyDatabase* const MyDB)
		{
			InitializeComponent();
			this->MyDB = MyDB;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TrashCategoriesForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnRestore;
	private: System::Windows::Forms::Button^ btnPermanentlyDelete;
	private: System::Windows::Forms::ImageList^ listIcon;
	private: System::Windows::Forms::DataGridView^ dataTable;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ idCategory;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ titleCategory;
	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TrashCategoriesForm::typeid));
			   this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->btnPermanentlyDelete = (gcnew System::Windows::Forms::Button());
			   this->listIcon = (gcnew System::Windows::Forms::ImageList(this->components));
			   this->btnRestore = (gcnew System::Windows::Forms::Button());
			   this->dataTable = (gcnew System::Windows::Forms::DataGridView());
			   this->idCategory = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->titleCategory = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			   this->tableLayoutPanel1->Size = System::Drawing::Size(425, 616);
			   this->tableLayoutPanel1->TabIndex = 0;
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
			   this->panel1->Size = System::Drawing::Size(419, 94);
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
			   this->btnPermanentlyDelete->ImageList = this->listIcon;
			   this->btnPermanentlyDelete->Location = System::Drawing::Point(254, 0);
			   this->btnPermanentlyDelete->Name = L"btnPermanentlyDelete";
			   this->btnPermanentlyDelete->Size = System::Drawing::Size(97, 94);
			   this->btnPermanentlyDelete->TabIndex = 1;
			   this->btnPermanentlyDelete->UseVisualStyleBackColor = false;
			   this->btnPermanentlyDelete->Click += gcnew System::EventHandler(this, &TrashCategoriesForm::btnPermanentlyDelete_Click);
			   // 
			   // listIcon
			   // 
			   this->listIcon->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"listIcon.ImageStream")));
			   this->listIcon->TransparentColor = System::Drawing::Color::Transparent;
			   this->listIcon->Images->SetKeyName(0, L"delete-icon.png");
			   this->listIcon->Images->SetKeyName(1, L"restore-icon.png");
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
			   this->btnRestore->ImageList = this->listIcon;
			   this->btnRestore->Location = System::Drawing::Point(76, 0);
			   this->btnRestore->Name = L"btnRestore";
			   this->btnRestore->Size = System::Drawing::Size(97, 94);
			   this->btnRestore->TabIndex = 0;
			   this->btnRestore->UseVisualStyleBackColor = false;
			   this->btnRestore->Click += gcnew System::EventHandler(this, &TrashCategoriesForm::btnRestore_Click);
			   // 
			   // dataTable
			   // 
			   this->dataTable->AllowUserToAddRows = false;
			   this->dataTable->AllowUserToDeleteRows = false;
			   this->dataTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			   this->dataTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				   this->idCategory,
					   this->titleCategory
			   });
			   this->dataTable->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->dataTable->Location = System::Drawing::Point(3, 103);
			   this->dataTable->MultiSelect = false;
			   this->dataTable->Name = L"dataTable";
			   this->dataTable->ReadOnly = true;
			   this->dataTable->RowHeadersWidth = 62;
			   this->dataTable->RowTemplate->Height = 28;
			   this->dataTable->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			   this->dataTable->Size = System::Drawing::Size(419, 510);
			   this->dataTable->TabIndex = 1;
			   this->dataTable->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TrashCategoriesForm::dataTable_CellClick);
			   this->dataTable->Sorted += gcnew System::EventHandler(this, &TrashCategoriesForm::dataTable_Sorted);
			   // 
			   // idCategory
			   // 
			   this->idCategory->HeaderText = L"ID";
			   this->idCategory->MinimumWidth = 8;
			   this->idCategory->Name = L"idCategory";
			   this->idCategory->ReadOnly = true;
			   // 
			   // titleCategory
			   // 
			   this->titleCategory->HeaderText = L"Title";
			   this->titleCategory->MinimumWidth = 8;
			   this->titleCategory->Name = L"titleCategory";
			   this->titleCategory->ReadOnly = true;
			   // 
			   // TrashCategoriesForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(425, 616);
			   this->Controls->Add(this->tableLayoutPanel1);
			   this->MaximizeBox = false;
			   this->MaximumSize = System::Drawing::Size(447, 672);
			   this->MinimumSize = System::Drawing::Size(447, 672);
			   this->Name = L"TrashCategoriesForm";
			   this->ShowInTaskbar = false;
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Trash Categories";
			   this->Load += gcnew System::EventHandler(this, &TrashCategoriesForm::TrashCategoriesForm_Load);
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
		MyObjects::Category* categoryObject;
		// Biến này lưu row index hiện select hiện tại của `dataTable`
		int currentIndexRowSelect;

		// ****** Các hàm ta tự định nghĩa ******

	private:
		// Hàm lấy giá trị biến currentIndexRowSelect (đồng thời kiểm tra biến này có phù hợp luôn hay không)
		int getCurrentIndexRowSelect() {
			if (this->currentIndexRowSelect >= this->dataTable->Rows->Count) this->currentIndexRowSelect = this->dataTable->Rows->Count - 1;
			else if (this->currentIndexRowSelect < 0) this->currentIndexRowSelect = 0;
			return this->currentIndexRowSelect;
		}
		// Hàm load dữ liệu trong database ra `dataTable` trong form
		void loadDataToDatatable(std::string query) {
			this->dataTable->Rows->Clear(); // Xóa dữ liệu cũ trong dataTable
			sql::ResultSet* res = this->MyDB->ReadQuery(query);
			while (res->next())
				this->dataTable->Rows->Add(
					MyUtils::stdStringToSystemString(res->getString("id")),
					MyUtils::stdStringToSystemString(res->getString("title"))
				);
		}
		// Hàm này lấy id của hàng thông qua rowIndex
		int getIdByRowIndex(int rowIndex) {
			return std::stoi(MyUtils::systemStringToStdString(this->dataTable->Rows[rowIndex]->Cells[0]->Value->ToString()));
		}


		// ****** Các hàm xử lý sự kiện (event) trong form này ******

		// Hàm này chạy khi Form tải
	private: System::Void TrashCategoriesForm_Load(System::Object^ sender, System::EventArgs^ e) {
		loadDataToDatatable("SELECT * FROM `tb_prods_categories` WHERE (`isDelete` = true)");
		this->categoryObject = new MyObjects::Category(this->MyDB);
	}
		   // Hàm này chạy khi nút Restore click, thực hiện khôi phục lại những Category đã bị xóa
	private: System::Void btnRestore_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->dataTable->Rows->Count != 0) {
			// xử lý khôi phục Category
			unsigned int id = getIdByRowIndex(this->getCurrentIndexRowSelect());
			this->categoryObject->setId(id);
			this->categoryObject->Restore();
			this->dataTable->Rows->RemoveAt(this->getCurrentIndexRowSelect());
		}
		else MessageBox::Show("Error, Data Empty!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
		   // Hàm này chạy khi nút Delete click, thực hiện xóa (vĩnh viễn) Category
	private: System::Void btnPermanentlyDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->dataTable->Rows->Count != 0) {
			System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to `Permanently` delete this Category", "Delete Category", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
			if (result == System::Windows::Forms::DialogResult::Yes) {
				// xử lý xóa (vĩnh viễn) Category
				unsigned int id = getIdByRowIndex(this->getCurrentIndexRowSelect());
				this->categoryObject->setId(id);
				this->categoryObject->Delete();
				this->dataTable->Rows->RemoveAt(this->getCurrentIndexRowSelect());
			}
		}
		else MessageBox::Show("Error, Data Empty!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
		   // Hàm này chạy khi 1 cell nào đó tròn dataTable được select
	private: System::Void dataTable_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		// Cập nhật lại biến currentIndexRowSelect mỗi khi cell của dataTable đc select
		this->currentIndexRowSelect = e->RowIndex;
	}
		   // Hàm này chạy khi dataTable sắp xếp 1 cột nào đó
		   System::Void dataTable_Sorted(System::Object^ sender, System::EventArgs^ e) {
			   this->dataTable->ClearSelection(); // Clear các hàng đang được chọn
		   }
	};
}
