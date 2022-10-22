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
	/// Summary for TrashEmployeeForm
	/// </summary>
	public ref class TrashEmployeeForm : public System::Windows::Forms::Form
	{
	public:
		TrashEmployeeForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		TrashEmployeeForm(MyDatabase* const MyDB)
		{
			InitializeComponent();
			this->MyDB = MyDB;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TrashEmployeeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnPermanentlyDelete;

	private: System::Windows::Forms::Button^ btnRestore;

	private: System::Windows::Forms::ImageList^ ListIcon;
	private: System::Windows::Forms::DataGridView^ dataTable;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ employeeID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ employeeFullName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ employeeAddress;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ employeeSex;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ employeePhone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ employeePosition;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TrashEmployeeForm::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->dataTable = (gcnew System::Windows::Forms::DataGridView());
			this->employeeID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->employeeFullName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->employeeAddress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->employeeSex = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->employeePhone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->employeePosition = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->tableLayoutPanel1->TabIndex = 3;
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
				this->employeeID,
					this->employeeFullName, this->employeeAddress, this->employeeSex, this->employeePhone, this->employeePosition
			});
			this->dataTable->Location = System::Drawing::Point(3, 103);
			this->dataTable->MultiSelect = false;
			this->dataTable->Name = L"dataTable";
			this->dataTable->ReadOnly = true;
			this->dataTable->RowHeadersWidth = 62;
			this->dataTable->RowTemplate->Height = 28;
			this->dataTable->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataTable->Size = System::Drawing::Size(1094, 516);
			this->dataTable->TabIndex = 5;
			// 
			// employeeID
			// 
			this->employeeID->HeaderText = L"ID";
			this->employeeID->MinimumWidth = 8;
			this->employeeID->Name = L"employeeID";
			this->employeeID->ReadOnly = true;
			// 
			// employeeFullName
			// 
			this->employeeFullName->HeaderText = L"Full Name";
			this->employeeFullName->MinimumWidth = 8;
			this->employeeFullName->Name = L"employeeFullName";
			this->employeeFullName->ReadOnly = true;
			// 
			// employeeAddress
			// 
			this->employeeAddress->HeaderText = L"Address";
			this->employeeAddress->MinimumWidth = 8;
			this->employeeAddress->Name = L"employeeAddress";
			this->employeeAddress->ReadOnly = true;
			// 
			// employeeSex
			// 
			this->employeeSex->HeaderText = L"Sex";
			this->employeeSex->MinimumWidth = 8;
			this->employeeSex->Name = L"employeeSex";
			this->employeeSex->ReadOnly = true;
			// 
			// employeePhone
			// 
			this->employeePhone->HeaderText = L"Phone";
			this->employeePhone->MinimumWidth = 8;
			this->employeePhone->Name = L"employeePhone";
			this->employeePhone->ReadOnly = true;
			// 
			// employeePosition
			// 
			this->employeePosition->HeaderText = L"Position";
			this->employeePosition->MinimumWidth = 8;
			this->employeePosition->Name = L"employeePosition";
			this->employeePosition->ReadOnly = true;
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
			this->btnPermanentlyDelete->Click += gcnew System::EventHandler(this, &TrashEmployeeForm::btnPermanentlyDelete_Click);
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
			this->btnRestore->Click += gcnew System::EventHandler(this, &TrashEmployeeForm::btnRestore_Click);
			// 
			// TrashEmployeeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1100, 622);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1122, 678);
			this->MinimumSize = System::Drawing::Size(1122, 678);
			this->Name = L"TrashEmployeeForm";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Trash Employees";
			this->Load += gcnew System::EventHandler(this, &TrashEmployeeForm::TrashEmployeeForm_Load);
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
		// Biến object của Employee
		MyObjects::Employee* employeeObject;

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
		// Hàm load dữ liệu trong database ra `dataTable` trong form
		void loadAllDataToTable() {
			this->dataTable->Rows->Clear(); // Xóa dữ liệu cũ trong dataTable
			std::string query = "SELECT * FROM `tb_employees` WHERE (`isDelete` = 1)";
			sql::ResultSet* res = this->MyDB->ReadQuery(query);
			while (res->next())
				this->dataTable->Rows->Add(
					res->getInt("id"),
					MyUtils::stdStringToSystemString(res->getString("fullname")),
					MyUtils::stdStringToSystemString(res->getString("address")),
					MyUtils::stdStringToSystemString(res->getString("phone")),
					MyUtils::stdStringToSystemString(res->getString("sex")),
					res->getInt("position")
				);
		}
		
	// ****** Các hàm xử lý sự kiện (event) trong form này ******
	private:
		// Khi form tai
		System::Void TrashEmployeeForm_Load(System::Object^ sender, System::EventArgs^ e) {
			loadAllDataToTable();
			this->employeeObject = new MyObjects::Employee(this->MyDB);
		}
		// Hàm này chạy khi nút Restore click, thực hiện khôi phục lại những Customer đã bị xóa
		System::Void btnRestore_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->dataTable->Rows->Count != 0) {
				// Xử lý khôi phục Emloyee
				unsigned int id = getIdByRowIndex(this->getCurrentRowsIndexSelected());
				this->employeeObject->setId(id);
				this->employeeObject->Restore();
				this->dataTable->Rows->RemoveAt(this->getCurrentRowsIndexSelected());
			}
			else MessageBox::Show("Error, Data Empty!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		System::Void btnPermanentlyDelete_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->dataTable->Rows->Count != 0) {
				System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to `Permanently` delete this Employee", "Delete Permanently Employee", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
				if (result == System::Windows::Forms::DialogResult::Yes) {
					// xử lý xóa (vĩnh viễn) Employee
					unsigned int id = getIdByRowIndex(this->getCurrentRowsIndexSelected());
					this->employeeObject->setId(id);
					this->employeeObject->Delete();
					this->dataTable->Rows->RemoveAt(this->getCurrentRowsIndexSelected());
				}
			}
			else MessageBox::Show("Error, Data Empty!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
};
}

