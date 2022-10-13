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
	/// Summary for TrashCustomerForm
	/// </summary>
	public ref class TrashCustomerForm : public System::Windows::Forms::Form
	{
	public:
		TrashCustomerForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		TrashCustomerForm(MyDatabase* const MyDB)
		{
			InitializeComponent();
			this->MyDB = MyDB;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TrashCustomerForm()
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

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ customerID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ customerFullName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ customerPhone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ customerAddress;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ customerSex;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ customerPoint;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TrashCustomerForm::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->dataTable = (gcnew System::Windows::Forms::DataGridView());
			this->customerID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->customerFullName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->customerPhone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->customerAddress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->customerSex = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->customerPoint = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnPermanentlyDelete = (gcnew System::Windows::Forms::Button());
			this->ListIcon = (gcnew System::Windows::Forms::ImageList(this->components));
			this->btnRestore = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->dataTable, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->panel1, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1100, 622);
			this->tableLayoutPanel1->TabIndex = 2;
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
			this->dataTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->customerID,
					this->customerFullName, this->customerPhone, this->customerAddress, this->customerSex, this->customerPoint
			});
			this->dataTable->Location = System::Drawing::Point(3, 103);
			this->dataTable->Name = L"dataTable";
			this->dataTable->ReadOnly = true;
			this->dataTable->RowHeadersWidth = 62;
			this->dataTable->RowTemplate->Height = 28;
			this->dataTable->Size = System::Drawing::Size(1094, 516);
			this->dataTable->TabIndex = 5;
			this->dataTable->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TrashCustomerForm::dataTable_CellClick);
			this->dataTable->Sorted += gcnew System::EventHandler(this, &TrashCustomerForm::dataTable_Sorted);
			// 
			// customerID
			// 
			this->customerID->HeaderText = L"ID";
			this->customerID->MinimumWidth = 8;
			this->customerID->Name = L"customerID";
			this->customerID->ReadOnly = true;
			// 
			// customerFullName
			// 
			this->customerFullName->HeaderText = L"Full Name";
			this->customerFullName->MinimumWidth = 8;
			this->customerFullName->Name = L"customerFullName";
			this->customerFullName->ReadOnly = true;
			// 
			// customerPhone
			// 
			this->customerPhone->HeaderText = L"Phone";
			this->customerPhone->MinimumWidth = 8;
			this->customerPhone->Name = L"customerPhone";
			this->customerPhone->ReadOnly = true;
			// 
			// customerAddress
			// 
			this->customerAddress->HeaderText = L"Address";
			this->customerAddress->MinimumWidth = 8;
			this->customerAddress->Name = L"customerAddress";
			this->customerAddress->ReadOnly = true;
			// 
			// customerSex
			// 
			this->customerSex->HeaderText = L"Sex";
			this->customerSex->MinimumWidth = 8;
			this->customerSex->Name = L"customerSex";
			this->customerSex->ReadOnly = true;
			// 
			// customerPoint
			// 
			this->customerPoint->HeaderText = L"Points";
			this->customerPoint->MinimumWidth = 8;
			this->customerPoint->Name = L"customerPoint";
			this->customerPoint->ReadOnly = true;
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
			this->btnPermanentlyDelete->Click += gcnew System::EventHandler(this, &TrashCustomerForm::btnPermanentlyDelete_Click);
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
			this->btnRestore->Click += gcnew System::EventHandler(this, &TrashCustomerForm::btnRestore_Click);
			// 
			// TrashCustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1100, 622);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1122, 678);
			this->MinimumSize = System::Drawing::Size(1122, 678);
			this->Name = L"TrashCustomerForm";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Trash Customers";
			this->Load += gcnew System::EventHandler(this, &TrashCustomerForm::TrashCustomerForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

// ############## Từ Đây Trở Xuống Sẽ Là Nơi Chúng Ta Viết Code #################

	// ****** Các biến sẽ được khai báo tập trung ở đây ******
	private:
		// Biến MyDB để thực hiện các tương tác đến Database
		MyDatabase* MyDB = new MyDatabase();
		// Biến object của Customer
		MyObjects::Customer* customerObject;
		// Biến này lưu row index hiện select hiện tại của `dataTable`
		int currentIndexRowSelect;

	// ****** Các hàm ta tự định nghĩa ******
	// Hàm lấy giá trị biến currentIndexRowSelect (đồng thời kiểm tra biến này có phù hợp luôn hay không)
		int getCurrentIndexRowSelect() {
			if (this->currentIndexRowSelect >= this->dataTable->Rows->Count) this->currentIndexRowSelect = this->dataTable->Rows->Count - 1;
			else if (this->currentIndexRowSelect < 0) this->currentIndexRowSelect = 0;
			return this->currentIndexRowSelect;
		}
		// Hàm load dữ liệu trong database ra `dataTable` trong form
		void loadAllDataToTable() {
			this->dataTable->Rows->Clear(); // Xóa dữ liệu cũ trong dataTable
			std::string query = "SELECT * FROM `tb_customers` WHERE (`isDelete` = 1)";
			sql::ResultSet* res = this->MyDB->ReadQuery(query);
			while (res->next())
				this->dataTable->Rows->Add(
					res->getInt("id"),
					MyUtils::stdStringToSystemString(res->getString("fullname")),
					MyUtils::stdStringToSystemString(res->getString("sex")),
					MyUtils::stdStringToSystemString(res->getString("address")),
					MyUtils::stdStringToSystemString(res->getString("phone")),
					res->getInt("points")
				);
			this->dataTable->ClearSelection();
		}
		// Hàm này lấy id của hàng thông qua rowIndex
		int getIdByRowIndex(int rowIndex) {
			return std::stoi(MyUtils::systemStringToStdString(this->dataTable->Rows[rowIndex]->Cells[0]->Value->ToString()));
		}

	// ****** Các hàm xử lý sự kiện (event) trong form này ******
	private: 
		//khi form tải 
		System::Void TrashCustomerForm_Load(System::Object^ sender, System::EventArgs^ e) {
			loadAllDataToTable();
			this->customerObject = new MyObjects::Customer(this->MyDB);
		}
		// Hàm này chạy khi nút Restore click, thực hiện khôi phục lại những Customer đã bị xóa
		System::Void btnRestore_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->dataTable->Rows->Count != 0) {
				// xử lý khôi phục Customer
				unsigned int id = getIdByRowIndex(this->getCurrentIndexRowSelect());
				this->customerObject->setId(id);
				this->customerObject->Restore();
				this->dataTable->Rows->RemoveAt(this->getCurrentIndexRowSelect());
			}
			else MessageBox::Show("Error, Data Empty!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		// Hàm này chạy khi nút Delete click, thực hiện xóa (vĩnh viễn) Customer
		System::Void btnPermanentlyDelete_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->dataTable->Rows->Count != 0) {
				System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to `Permanently` delete this Category", "Delete Category", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
				if (result == System::Windows::Forms::DialogResult::Yes) {
					// xử lý xóa (vĩnh viễn) Category
					unsigned int id = getIdByRowIndex(this->getCurrentIndexRowSelect());
					this->customerObject->setId(id);
					this->customerObject->Delete();
					this->dataTable->Rows->RemoveAt(this->getCurrentIndexRowSelect());
				}
			}
			else MessageBox::Show("Error, Data Empty!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		// Hàm này chạy khi 1 cell nào đó tròn dataTable được select
		System::Void dataTable_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			// Cập nhật lại biến currentIndexRowSelect mỗi khi call của dataTable đc select
			this->currentIndexRowSelect = e->RowIndex;
		}
		// Hàm này chạy khi dataTable sắp xếp 1 cột nào đó
		System::Void dataTable_Sorted(System::Object^ sender, System::EventArgs^ e) {
			this->dataTable->ClearSelection(); // Clear các hàng đang được chọn
		}
};
}
