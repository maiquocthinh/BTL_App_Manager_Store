﻿#include "AddOrEditEmployeeForm.h"
#include "TrashEmployeeForm.h"
#pragma once

namespace BTLAppManagerStore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EmployeesPageForm
	/// </summary>
	public ref class EmployeesPageForm : public System::Windows::Forms::Form
	{
	public:
		EmployeesPageForm(void)
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
		~EmployeesPageForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::Button^ btnTrash;

	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnEdit;
	private: System::Windows::Forms::Button^ btnDelete;



	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ btnRefresh;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::TextBox^ tbxSearch;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ cbSearch;

	private: System::Windows::Forms::DataGridView^ dataTable;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ employeeID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ employeeFullName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ employeeAddress;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ employeeSex;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ employeePhone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ employeePosition;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EmployeesPageForm::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnTrash = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->tbxSearch = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->cbSearch = (gcnew System::Windows::Forms::ComboBox());
			this->dataTable = (gcnew System::Windows::Forms::DataGridView());
			this->employeeID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->employeeFullName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->employeeAddress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->employeeSex = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->employeePhone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->employeePosition = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				200)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel5, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->dataTable, 0, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 80)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1225, 713);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel5->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel5->ColumnCount = 1;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel5->Controls->Add(this->btnTrash, 0, 3);
			this->tableLayoutPanel5->Controls->Add(this->btnAdd, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->btnEdit, 0, 1);
			this->tableLayoutPanel5->Controls->Add(this->btnDelete, 0, 2);
			this->tableLayoutPanel5->Location = System::Drawing::Point(1028, 40);
			this->tableLayoutPanel5->Margin = System::Windows::Forms::Padding(3, 40, 3, 40);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 4;
			this->tableLayoutPanel1->SetRowSpan(this->tableLayoutPanel5, 2);
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(194, 633);
			this->tableLayoutPanel5->TabIndex = 3;
			// 
			// btnTrash
			// 
			this->btnTrash->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnTrash->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnTrash.BackgroundImage")));
			this->btnTrash->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnTrash->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnTrash->FlatAppearance->BorderSize = 0;
			this->btnTrash->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnTrash->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnTrash->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTrash->ImageKey = L"(none)";
			this->btnTrash->Location = System::Drawing::Point(30, 514);
			this->btnTrash->Margin = System::Windows::Forms::Padding(30, 40, 30, 40);
			this->btnTrash->Name = L"btnTrash";
			this->btnTrash->Size = System::Drawing::Size(134, 79);
			this->btnTrash->TabIndex = 3;
			this->btnTrash->UseVisualStyleBackColor = true;
			this->btnTrash->Click += gcnew System::EventHandler(this, &EmployeesPageForm::btnTrash_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnAdd->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAdd.BackgroundImage")));
			this->btnAdd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnAdd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAdd->FlatAppearance->BorderSize = 0;
			this->btnAdd->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnAdd->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->ImageKey = L"(none)";
			this->btnAdd->Location = System::Drawing::Point(30, 40);
			this->btnAdd->Margin = System::Windows::Forms::Padding(30, 40, 30, 40);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(134, 78);
			this->btnAdd->TabIndex = 0;
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &EmployeesPageForm::btnAdd_Click);
			// 
			// btnEdit
			// 
			this->btnEdit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnEdit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEdit.BackgroundImage")));
			this->btnEdit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnEdit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEdit->FlatAppearance->BorderSize = 0;
			this->btnEdit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnEdit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnEdit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEdit->ImageKey = L"(none)";
			this->btnEdit->Location = System::Drawing::Point(30, 198);
			this->btnEdit->Margin = System::Windows::Forms::Padding(30, 40, 30, 40);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(134, 78);
			this->btnEdit->TabIndex = 1;
			this->btnEdit->UseVisualStyleBackColor = true;
			this->btnEdit->Click += gcnew System::EventHandler(this, &EmployeesPageForm::btnEdit_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnDelete->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDelete.BackgroundImage")));
			this->btnDelete->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnDelete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDelete->FlatAppearance->BorderSize = 0;
			this->btnDelete->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnDelete->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDelete->ImageKey = L"(none)";
			this->btnDelete->Location = System::Drawing::Point(30, 356);
			this->btnDelete->Margin = System::Windows::Forms::Padding(30, 40, 30, 40);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(134, 78);
			this->btnDelete->TabIndex = 2;
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &EmployeesPageForm::btnDelete_Click);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 4;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				150)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				150)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				150)));
			this->tableLayoutPanel2->Controls->Add(this->btnRefresh, 3, 0);
			this->tableLayoutPanel2->Controls->Add(this->btnSearch, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->tbxSearch, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->groupBox1, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1019, 74);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// btnRefresh
			// 
			this->btnRefresh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnRefresh->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRefresh->Location = System::Drawing::Point(881, 12);
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
			this->btnSearch->Location = System::Drawing::Point(731, 12);
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
			this->tbxSearch->Size = System::Drawing::Size(533, 38);
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
			this->cbSearch->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"ID", L"Full Name", L"Phone", L"Address" });
			this->cbSearch->Location = System::Drawing::Point(6, 21);
			this->cbSearch->Name = L"cbSearch";
			this->cbSearch->Size = System::Drawing::Size(132, 26);
			this->cbSearch->TabIndex = 1;
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
			this->dataTable->Location = System::Drawing::Point(3, 83);
			this->dataTable->Name = L"dataTable";
			this->dataTable->ReadOnly = true;
			this->dataTable->RowHeadersWidth = 62;
			this->dataTable->RowTemplate->Height = 28;
			this->dataTable->Size = System::Drawing::Size(1019, 627);
			this->dataTable->TabIndex = 4;
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
			// EmployeesPageForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1225, 713);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"EmployeesPageForm";
			this->Text = L"EmployeesPageForm";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
// ############## Từ Đây Trở Xuống Sẽ Là Nơi Chúng Ta Viết Code #################
	// Khi nút thêm Employee click thì Show lên Form thêm Employee
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		Form^ AddEmployeeForm = gcnew BTLAppManagerStore::AddOrEditEmployeeForm();
		AddEmployeeForm->ShowDialog();
		delete AddEmployeeForm;
	}
	// Khi nút sửa Employee click thì Show lên Form sửa Employee
	private: System::Void btnEdit_Click(System::Object^ sender, System::EventArgs^ e) {
		Form^ EditEmployeeForm = gcnew BTLAppManagerStore::AddOrEditEmployeeForm(true);
		EditEmployeeForm->ShowDialog();
		delete EditEmployeeForm;
	}
	// Khi nút xem thùng rác (các Employee đã xóa) click thì show Form danh sách Employee đã xóa
	private: System::Void btnTrash_Click(System::Object^ sender, System::EventArgs^ e) {
		Form^ TrashEmployeeForm = gcnew BTLAppManagerStore::TrashEmployeeForm();
		TrashEmployeeForm->ShowDialog();
		delete TrashEmployeeForm;
	}
	// Khi nút xóa Employee click thì sẽ hỏi có xóa hay ko, nếu xóa thì xử lý xóa ở bên trong hàm này
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to delete this Employee", "Delete Employee", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			// xử lý xóa Employee
		}
	}
	};
}
