#include "ImportNewProductsForm.h"
#include "ImportProductsDetailForm.h"
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
	/// Summary for ImportProductsForm
	/// </summary>
	public ref class ImportProductsForm : public System::Windows::Forms::Form
	{
	public:
		ImportProductsForm(void)
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
		~ImportProductsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TextBox^ tbxSearch;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ cbSearch;
	private: System::Windows::Forms::Button^ btnRefresh;
	private: System::Windows::Forms::Button^ btnImport;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::DataGridView^ dataTable;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ importID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ importEmployee;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ importDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ importToatlMoney;
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
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tbxSearch = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->cbSearch = (gcnew System::Windows::Forms::ComboBox());
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->btnImport = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->dataTable = (gcnew System::Windows::Forms::DataGridView());
			this->importID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->importEmployee = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->importDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->importToatlMoney = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->BeginInit();
			this->SuspendLayout();
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
			this->tableLayoutPanel1->Size = System::Drawing::Size(1168, 644);
			this->tableLayoutPanel1->TabIndex = 3;
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
			this->tableLayoutPanel2->Controls->Add(this->btnImport, 3, 0);
			this->tableLayoutPanel2->Controls->Add(this->btnSearch, 2, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1162, 74);
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
			this->tbxSearch->Size = System::Drawing::Size(436, 38);
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
			this->cbSearch->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"ID", L"Employee", L"Date", L"Total Money" });
			this->cbSearch->Location = System::Drawing::Point(6, 21);
			this->cbSearch->Name = L"cbSearch";
			this->cbSearch->Size = System::Drawing::Size(132, 26);
			this->cbSearch->TabIndex = 0;
			// 
			// btnRefresh
			// 
			this->btnRefresh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnRefresh->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRefresh->Location = System::Drawing::Point(814, 12);
			this->btnRefresh->Margin = System::Windows::Forms::Padding(12);
			this->btnRefresh->Name = L"btnRefresh";
			this->btnRefresh->Size = System::Drawing::Size(136, 50);
			this->btnRefresh->TabIndex = 4;
			this->btnRefresh->Text = L"Refresh";
			this->btnRefresh->UseVisualStyleBackColor = true;
			this->btnRefresh->Click += gcnew System::EventHandler(this, &ImportProductsForm::btnRefresh_Click);
			// 
			// btnImport
			// 
			this->btnImport->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnImport->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnImport->Location = System::Drawing::Point(974, 12);
			this->btnImport->Margin = System::Windows::Forms::Padding(12);
			this->btnImport->Name = L"btnImport";
			this->btnImport->Size = System::Drawing::Size(176, 50);
			this->btnImport->TabIndex = 5;
			this->btnImport->Text = L"Import";
			this->btnImport->UseVisualStyleBackColor = true;
			this->btnImport->Click += gcnew System::EventHandler(this, &ImportProductsForm::btnImport_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSearch->Location = System::Drawing::Point(654, 12);
			this->btnSearch->Margin = System::Windows::Forms::Padding(12);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(136, 50);
			this->btnSearch->TabIndex = 3;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &ImportProductsForm::btnSearch_Click);
			// 
			// dataTable
			// 
			this->dataTable->AllowUserToAddRows = false;
			this->dataTable->AllowUserToDeleteRows = false;
			this->dataTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->importID, this->importEmployee,
					this->importDate, this->importToatlMoney
			});
			this->dataTable->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataTable->Location = System::Drawing::Point(3, 83);
			this->dataTable->MultiSelect = false;
			this->dataTable->Name = L"dataTable";
			this->dataTable->ReadOnly = true;
			this->dataTable->RowHeadersWidth = 62;
			this->dataTable->RowTemplate->Height = 28;
			this->dataTable->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataTable->Size = System::Drawing::Size(1162, 558);
			this->dataTable->TabIndex = 1;
			this->dataTable->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ImportProductsForm::dataTable_CellDoubleClick);
			// 
			// importID
			// 
			this->importID->HeaderText = L"ID";
			this->importID->MinimumWidth = 8;
			this->importID->Name = L"importID";
			this->importID->ReadOnly = true;
			// 
			// importEmployee
			// 
			this->importEmployee->HeaderText = L"Employee";
			this->importEmployee->MinimumWidth = 8;
			this->importEmployee->Name = L"importEmployee";
			this->importEmployee->ReadOnly = true;
			// 
			// importDate
			// 
			this->importDate->HeaderText = L"Date";
			this->importDate->MinimumWidth = 8;
			this->importDate->Name = L"importDate";
			this->importDate->ReadOnly = true;
			// 
			// importToatlMoney
			// 
			this->importToatlMoney->HeaderText = L"Total Money";
			this->importToatlMoney->MinimumWidth = 8;
			this->importToatlMoney->Name = L"importToatlMoney";
			this->importToatlMoney->ReadOnly = true;
			// 
			// ImportProductsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1168, 644);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1190, 700);
			this->Name = L"ImportProductsForm";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Import Products";
			this->Load += gcnew System::EventHandler(this, &ImportProductsForm::ImportProductsForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

// ############## Từ Đây Trở Xuống Sẽ Là Nơi Chúng Ta Viết Code #################

	// ****** Các biến sẽ được khai báo tập trung ở đây ******
	private:
		// Biến object của BillImport
		MyObjects::BillImport* billImportObject;


	// ****** Các hàm ta tự định nghĩa ******
	private:
		// Load tất cả data trong Database ra Table
		void loadAllDataToTable() {
			this->dataTable->Rows->Clear(); // Xóa dữ liệu cũ trong dataTable
			std::string query = "SELECT tb_imports.*,tb_employees.fullname AS 'name_employee' FROM `tb_imports` "
								"LEFT JOIN `tb_employees` ON tb_imports.employee_id = tb_employees.id ORDER BY `id` DESC";
			sql::ResultSet* res = APP_SESSION::MyDB->ReadQuery(query);
			while (res->next()) {
				this->dataTable->Rows->Add(
					res->getInt("id"),
					MyUtils::toSystemString(res->getString("name_employee") == "" ? "Unknown" : res->getString("name_employee")),
					MyUtils::toSystemString(res->getString("date")),
					MyUtils::toSystemString(res->getString("total_money"))
				);
			}
		}
		// Load các data trùng với từ khóa tìm kiếm trong Database ra Table
		void loadSearchDataToTable(std::string searchKey) {
			this->dataTable->Rows->Clear(); // Xóa dữ liệu cũ trong dataTable
			std::string query = "SELECT tb_imports.*,tb_employees.fullname AS 'name_employee' FROM `tb_imports` "
								"LEFT JOIN `tb_employees` ON tb_imports.employee_id = tb_employees.id "
								"WHERE (" + getSearchColumnName() + " LIKE '%" + searchKey + "%') ORDER BY `id` DESC";
			sql::ResultSet* res = APP_SESSION::MyDB->ReadQuery(query);
			while (res->next()) {
				this->dataTable->Rows->Add(
					res->getInt("id"),
					MyUtils::toSystemString(res->getString("name_employee") == "" ? "Unknown" : res->getString("name_employee")),
					MyUtils::toSystemString(res->getString("date")),
					MyUtils::toSystemString(res->getString("total_money"))
				);
			}
		}
		std::string getSearchColumnName() {
			if (this->cbSearch->SelectedItem->ToString() == "ID") return "tb_imports.id";
			else if (this->cbSearch->SelectedItem->ToString() == "Employee") return "tb_employees.fullname";
			else if (this->cbSearch->SelectedItem->ToString() == "Date") return "tb_imports.date";
			else if (this->cbSearch->SelectedItem->ToString() == "Total Money") return "tb_imports.total_money";
		}

	// ****** Các hàm xử lý sự kiện (event) trong form này ******
	private:
		// Khi form tải
		System::Void ImportProductsForm_Load(System::Object^ sender, System::EventArgs^ e) {
			loadAllDataToTable();
			this->cbSearch->SelectedIndex = 0;
			this->billImportObject = new MyObjects::BillImport(APP_SESSION::MyDB);
		}
		// Khi nút search click thì thực hiện load data trùng với từ khóa vào dataTable
		System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->tbxSearch->Text == "") // Nếu thanh tìm kiếm chưa nhập gì
				loadAllDataToTable(); // load tất cả data trong DB ra Table 
			else { // Ngược lại, nếu thanh tìm kiếm đã được nhập
				std::string searchKey = MyUtils::toStdString(this->tbxSearch->Text); // lấy từ khóa từ thanh tìm kiếm
				loadSearchDataToTable(searchKey); // load các data trong DB mà trùng với từ khóa ra Table
			}
		}
		// Hàm này chạy khi nút refresh click, sẽ load lại dữ liệu vào `dataTable`
		System::Void btnRefresh_Click(System::Object^ sender, System::EventArgs^ e) {
			this->tbxSearch->Text = ""; // clear thanh tìm kiêm
			loadAllDataToTable(); // load tất cả data trong DB ra Table 
		}
		// Khi nút Import click thì Show lên Form ImportNewProducts
		System::Void btnImport_Click(System::Object^ sender, System::EventArgs^ e) {
			Form^ ImportNewProductsForm = gcnew BTLAppManagerStore::ImportNewProductsForm();
			ImportNewProductsForm->ShowDialog();
			delete ImportNewProductsForm;
		}
		System::Void dataTable_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			unsigned int id = std::stoi(MyUtils::toStdString(this->dataTable->Rows[e->RowIndex]->Cells[0]->Value->ToString()));
			this->billImportObject->Read(id);
			BTLAppManagerStore::ImportProductsDetailForm^ ImportProductsDetailForm = gcnew BTLAppManagerStore::ImportProductsDetailForm();
			ImportProductsDetailForm->billImportObject = this->billImportObject;
			ImportProductsDetailForm->ShowDialog();
			delete ImportProductsDetailForm;
		}
	};
}
