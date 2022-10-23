#include "NewBillForm.h"
#include "BillDetailForm.h"
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
	/// Summary for BillsPageForm
	/// </summary>
	public ref class BillsPageForm : public System::Windows::Forms::Form
	{
	public:
		BillsPageForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		BillsPageForm(MyDatabase* const MyDB)
		{
			InitializeComponent();
			this->MyDB = MyDB;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BillsPageForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataTable;
	protected:




	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TextBox^ tbxSearch;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ cbSearch;
	private: System::Windows::Forms::Button^ btnRefresh;
	private: System::Windows::Forms::Button^ btnNewBill;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ billID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ billNameEmployee;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ billNameCustomer;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ billDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ billTotalMoney;

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
			this->dataTable = (gcnew System::Windows::Forms::DataGridView());
			this->billID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->billNameEmployee = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->billNameCustomer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->billDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->billTotalMoney = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tbxSearch = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->cbSearch = (gcnew System::Windows::Forms::ComboBox());
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->btnNewBill = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->BeginInit();
			this->tableLayoutPanel2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataTable
			// 
			this->dataTable->AllowUserToAddRows = false;
			this->dataTable->AllowUserToDeleteRows = false;
			this->dataTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->billID, this->billNameEmployee,
					this->billNameCustomer, this->billDate, this->billTotalMoney
			});
			this->dataTable->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataTable->Location = System::Drawing::Point(3, 83);
			this->dataTable->MultiSelect = false;
			this->dataTable->Name = L"dataTable";
			this->dataTable->ReadOnly = true;
			this->dataTable->RowHeadersWidth = 62;
			this->dataTable->RowTemplate->Height = 28;
			this->dataTable->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataTable->Size = System::Drawing::Size(1201, 565);
			this->dataTable->TabIndex = 1;
			this->dataTable->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BillsPageForm::dataTable_CellDoubleClick);
			this->dataTable->Sorted += gcnew System::EventHandler(this, &BillsPageForm::dataTable_Sorted);
			// 
			// billID
			// 
			this->billID->HeaderText = L"ID";
			this->billID->MinimumWidth = 8;
			this->billID->Name = L"billID";
			this->billID->ReadOnly = true;
			// 
			// billNameEmployee
			// 
			this->billNameEmployee->HeaderText = L"Name Employee";
			this->billNameEmployee->MinimumWidth = 8;
			this->billNameEmployee->Name = L"billNameEmployee";
			this->billNameEmployee->ReadOnly = true;
			// 
			// billNameCustomer
			// 
			this->billNameCustomer->HeaderText = L"Name Customer";
			this->billNameCustomer->MinimumWidth = 8;
			this->billNameCustomer->Name = L"billNameCustomer";
			this->billNameCustomer->ReadOnly = true;
			// 
			// billDate
			// 
			this->billDate->HeaderText = L"Date";
			this->billDate->MinimumWidth = 8;
			this->billDate->Name = L"billDate";
			this->billDate->ReadOnly = true;
			// 
			// billTotalMoney
			// 
			this->billTotalMoney->HeaderText = L"Total Money";
			this->billTotalMoney->MinimumWidth = 8;
			this->billTotalMoney->Name = L"billTotalMoney";
			this->billTotalMoney->ReadOnly = true;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 5;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				170)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				160)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				160)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				200)));
			this->tableLayoutPanel2->Controls->Add(this->tbxSearch, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->groupBox1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->btnRefresh, 3, 0);
			this->tableLayoutPanel2->Controls->Add(this->btnNewBill, 3, 0);
			this->tableLayoutPanel2->Controls->Add(this->btnSearch, 2, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1201, 74);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// tbxSearch
			// 
			this->tbxSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbxSearch->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbxSearch->Location = System::Drawing::Point(188, 14);
			this->tbxSearch->Margin = System::Windows::Forms::Padding(18, 14, 18, 18);
			this->tbxSearch->Name = L"tbxSearch";
			this->tbxSearch->Size = System::Drawing::Size(475, 38);
			this->tbxSearch->TabIndex = 2;
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
			this->groupBox1->Size = System::Drawing::Size(164, 68);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Search";
			// 
			// cbSearch
			// 
			this->cbSearch->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbSearch->FormattingEnabled = true;
			this->cbSearch->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"ID", L"Date" });
			this->cbSearch->Location = System::Drawing::Point(6, 21);
			this->cbSearch->Name = L"cbSearch";
			this->cbSearch->Size = System::Drawing::Size(132, 26);
			this->cbSearch->TabIndex = 0;
			this->cbSearch->SelectedIndexChanged += gcnew System::EventHandler(this, &BillsPageForm::cbSearch_SelectedIndexChanged);
			// 
			// btnRefresh
			// 
			this->btnRefresh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnRefresh->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRefresh->Location = System::Drawing::Point(853, 12);
			this->btnRefresh->Margin = System::Windows::Forms::Padding(12);
			this->btnRefresh->Name = L"btnRefresh";
			this->btnRefresh->Size = System::Drawing::Size(136, 50);
			this->btnRefresh->TabIndex = 4;
			this->btnRefresh->Text = L"Refresh";
			this->btnRefresh->UseVisualStyleBackColor = true;
			this->btnRefresh->Click += gcnew System::EventHandler(this, &BillsPageForm::btnRefresh_Click);
			// 
			// btnNewBill
			// 
			this->btnNewBill->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnNewBill->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNewBill->Location = System::Drawing::Point(1013, 12);
			this->btnNewBill->Margin = System::Windows::Forms::Padding(12);
			this->btnNewBill->Name = L"btnNewBill";
			this->btnNewBill->Size = System::Drawing::Size(176, 50);
			this->btnNewBill->TabIndex = 5;
			this->btnNewBill->Text = L"New Bill";
			this->btnNewBill->UseVisualStyleBackColor = true;
			this->btnNewBill->Click += gcnew System::EventHandler(this, &BillsPageForm::btnNewBill_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSearch->Location = System::Drawing::Point(693, 12);
			this->btnSearch->Margin = System::Windows::Forms::Padding(12);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(136, 50);
			this->btnSearch->TabIndex = 3;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &BillsPageForm::btnSearch_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->dataTable, 0, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 80)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1207, 651);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// BillsPageForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1207, 651);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"BillsPageForm";
			this->Text = L"BillsPageForm";
			this->Load += gcnew System::EventHandler(this, &BillsPageForm::BillsPageForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->EndInit();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

// ############## Từ Đây Trở Xuống Sẽ Là Nơi Chúng Ta Viết Code #################

		// ****** Các biến sẽ được khai báo tập trung ở đây ******
	private:
		// Biến MyDB để thực hiện các tương tác đến Database
		MyDatabase* MyDB = new MyDatabase();
		// Biến object của BillCustomer
		MyObjects::BillCustomer* billCustomerObject;
		// Biến này lưu tên của column (trong DB) mà ta thực hiện tìm kiếm
		System::String^ searchColumnName;
		MyObjects::SList<MyStructs::Employee>* ListEmployee = new MyObjects::SList<MyStructs::Employee>();
		MyObjects::SList<MyStructs::Customer>* ListCustomer = new MyObjects::SList<MyStructs::Customer>();

	// ****** Các hàm ta tự định nghĩa ******
	private:
		// Load tất cả data trong Database ra Table
		void loadAllDataToTable() {
			this->dataTable->Rows->Clear(); // Xóa dữ liệu cũ trong dataTable
			std::string query = "SELECT * FROM `tb_bills` ORDER BY `id` DESC";
			sql::ResultSet* res = this->MyDB->ReadQuery(query);
			while (res->next()) {
				MyObjects::Node<MyStructs::Employee>* employeeNode = this->ListEmployee->getNodeByID(res->getInt("employee_id"));
				MyObjects::Node<MyStructs::Customer>* customerNode = this->ListCustomer->getNodeByID(res->getInt("customer_id"));
				std::string nameEmployee = (employeeNode == NULL) ? "Unknown" : employeeNode->data.fullName;
				std::string nameCustomer = (customerNode == NULL) ? u8"Khách vãng lai" : customerNode->data.fullName;
				this->dataTable->Rows->Add(
					res->getInt("id"),
					MyUtils::stdStringToSystemString(nameEmployee),
					MyUtils::stdStringToSystemString(nameCustomer),
					MyUtils::stdStringToSystemString(res->getString("date")),
					MyUtils::stdStringToSystemString(res->getString("total_money"))
				);
			}
			this->dataTable->ClearSelection();
		}
		// Load các data trùng với từ khóa tìm kiếm trong Database ra Table
		void loadSearchDataToTable(std::string searchKey) {
			this->dataTable->Rows->Clear(); // Xóa dữ liệu cũ trong dataTable
			std::string query = "SELECT * FROM `tb_bills` WHERE (`" + MyUtils::systemStringToStdString(this->searchColumnName) + "` LIKE '%" + searchKey + "%') ORDER BY `id` DESC";
			sql::ResultSet* res = this->MyDB->ReadQuery(query);
			while (res->next()) {
				MyObjects::Node<MyStructs::Employee>* employeeNode = this->ListEmployee->getNodeByID(res->getInt("employee_id"));
				MyObjects::Node<MyStructs::Customer>* customerNode = this->ListCustomer->getNodeByID(res->getInt("customer_id"));
				std::string nameCustomer = (customerNode == NULL) ? u8"Khách vãng lai" : customerNode->data.fullName;
				this->dataTable->Rows->Add(
					res->getInt("id"),
					MyUtils::stdStringToSystemString(employeeNode->data.fullName),
					MyUtils::stdStringToSystemString(nameCustomer),
					MyUtils::stdStringToSystemString(res->getString("date")),
					MyUtils::stdStringToSystemString(res->getString("total_money"))
				);
			}
			this->dataTable->ClearSelection();
		}
		void fillListEmployee() {
			sql::ResultSet* res = this->MyDB->ReadQuery("SELECT `id`, `fullname` FROM `tb_employees` WHERE (`isDelete` = 0)");
			while (res->next())
			{
				MyStructs::Employee employee;
				employee.id = res->getInt("id");
				employee.fullName = res->getString("fullname");
				this->ListEmployee->addFirst(employee);
			}
		}
		void fillListCustomer() {
			sql::ResultSet* res = this->MyDB->ReadQuery("SELECT `id`, `fullname` FROM `tb_customers` WHERE (`isDelete` = 0)");
			while (res->next())
			{
				MyStructs::Customer customer;
				customer.id = res->getInt("id");
				customer.fullName = res->getString("fullname");
				this->ListCustomer->addFirst(customer);
			}
		}


	// ****** Các hàm xử lý sự kiện (event) trong form này ******
	private:
		System::Void BillsPageForm_Load(System::Object^ sender, System::EventArgs^ e) {
			fillListEmployee();
			fillListCustomer();
			loadAllDataToTable();
			this->cbSearch->SelectedIndex = 0;
			this->billCustomerObject = new MyObjects::BillCustomer(this->MyDB);
		}
		// Khi nút New Bill click thì Show lên Form NewBill
		System::Void btnNewBill_Click(System::Object^ sender, System::EventArgs^ e) {
			BTLAppManagerStore::NewBillForm^ NewBillForm = gcnew BTLAppManagerStore::NewBillForm(this->MyDB);
			NewBillForm->ShowDialog();
			delete NewBillForm;
		}
		System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->tbxSearch->Text == "") // Nếu thanh tìm kiếm chưa nhập gì
				loadAllDataToTable(); // load tất cả data trong DB ra Table 
			else { // Ngược lại, nếu thanh tìm kiếm đã được nhập
				std::string searchKey = MyUtils::systemStringToStdString(this->tbxSearch->Text); // lấy từ khóa từ thanh tìm kiếm
				loadSearchDataToTable(searchKey); // load các data trong DB mà trùng với từ khóa ra Table
			}
		}
		System::Void btnRefresh_Click(System::Object^ sender, System::EventArgs^ e) {
			this->tbxSearch->Text = "";
			loadAllDataToTable();
		}
		System::Void dataTable_Sorted(System::Object^ sender, System::EventArgs^ e) {
		}
		System::Void cbSearch_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			if (this->cbSearch->SelectedItem->ToString() == "ID") this->searchColumnName = "id";
			else if (this->cbSearch->SelectedItem->ToString() == "Date") this->searchColumnName = "date";
		}
		System::Void dataTable_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			unsigned int billID = std::stoi(MyUtils::systemStringToStdString(this->dataTable->Rows[e->RowIndex]->Cells[0]->Value->ToString()));
			this->billCustomerObject->Read(billID);
			BTLAppManagerStore::BillDetailForm^ BillDetailForm = gcnew BTLAppManagerStore::BillDetailForm(this->MyDB);
			BillDetailForm->billCustomerObject = this->billCustomerObject;
			BillDetailForm->ShowDialog();
			delete BillDetailForm;
		}
	};
}
