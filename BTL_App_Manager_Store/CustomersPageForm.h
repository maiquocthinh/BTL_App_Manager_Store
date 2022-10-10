#include "AddOrEditCustomerForm.h"
#include "TrashCustomerForm.h"
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
	/// Summary for CustomersPageForm
	/// </summary>
	public ref class CustomersPageForm : public System::Windows::Forms::Form
	{
	public:
		CustomersPageForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		CustomersPageForm(MyDatabase* const MyDB)
		{
			InitializeComponent();
			this->MyDB = MyDB;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CustomersPageForm()
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


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ customerID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ customerFullName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ customerPhone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ customerAddress;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ customerSex;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ customerPoint;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CustomersPageForm::typeid));
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
			this->customerID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->customerFullName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->customerPhone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->customerAddress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->customerSex = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->customerPoint = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->tableLayoutPanel1->Size = System::Drawing::Size(1198, 691);
			this->tableLayoutPanel1->TabIndex = 1;
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
			this->tableLayoutPanel5->Location = System::Drawing::Point(1001, 40);
			this->tableLayoutPanel5->Margin = System::Windows::Forms::Padding(3, 40, 3, 40);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 4;
			this->tableLayoutPanel1->SetRowSpan(this->tableLayoutPanel5, 2);
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(194, 611);
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
			this->btnTrash->Location = System::Drawing::Point(30, 496);
			this->btnTrash->Margin = System::Windows::Forms::Padding(30, 40, 30, 40);
			this->btnTrash->Name = L"btnTrash";
			this->btnTrash->Size = System::Drawing::Size(134, 75);
			this->btnTrash->TabIndex = 3;
			this->btnTrash->UseVisualStyleBackColor = true;
			this->btnTrash->Click += gcnew System::EventHandler(this, &CustomersPageForm::btnTrash_Click);
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
			this->btnAdd->Size = System::Drawing::Size(134, 72);
			this->btnAdd->TabIndex = 0;
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &CustomersPageForm::btnAdd_Click);
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
			this->btnEdit->Location = System::Drawing::Point(30, 192);
			this->btnEdit->Margin = System::Windows::Forms::Padding(30, 40, 30, 40);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(134, 72);
			this->btnEdit->TabIndex = 1;
			this->btnEdit->UseVisualStyleBackColor = true;
			this->btnEdit->Click += gcnew System::EventHandler(this, &CustomersPageForm::btnEdit_Click);
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
			this->btnDelete->Location = System::Drawing::Point(30, 344);
			this->btnDelete->Margin = System::Windows::Forms::Padding(30, 40, 30, 40);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(134, 72);
			this->btnDelete->TabIndex = 2;
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &CustomersPageForm::btnDelete_Click);
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
			this->tableLayoutPanel2->Size = System::Drawing::Size(992, 74);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// btnRefresh
			// 
			this->btnRefresh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnRefresh->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRefresh->Location = System::Drawing::Point(854, 12);
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
			this->btnSearch->Location = System::Drawing::Point(704, 12);
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
			this->tbxSearch->Size = System::Drawing::Size(506, 38);
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
			this->cbSearch->TabIndex = 0;
			this->cbSearch->SelectedIndexChanged += gcnew System::EventHandler(this, &CustomersPageForm::cbSearch_SelectedIndexChanged);
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
			this->dataTable->Location = System::Drawing::Point(3, 83);
			this->dataTable->Name = L"dataTable";
			this->dataTable->ReadOnly = true;
			this->dataTable->RowHeadersWidth = 62;
			this->dataTable->RowTemplate->Height = 28;
			this->dataTable->Size = System::Drawing::Size(992, 605);
			this->dataTable->TabIndex = 4;
			this->dataTable->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CustomersPageForm::dataTable_CellClick);
			this->dataTable->Sorted += gcnew System::EventHandler(this, &CustomersPageForm::dataTable_Sorted);
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
			// CustomersPageForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1198, 691);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"CustomersPageForm";
			this->Text = L"CustomersPageForm";
			this->Load += gcnew System::EventHandler(this, &CustomersPageForm::CustomersPageForm_Load);
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
	
	// ****** Các biến sẽ được khai báo tập trung ở đây ******
	private:
		// Biến MyDB để thực hiện các tương tác đến Database
		MyDatabase* MyDB = new MyDatabase();

	// ****** Các hàm ta tự định nghĩa ******


	// ****** Các hàm xử lý sự kiện (event) trong form này ******
	private: 
		// Khi form tải
		System::Void CustomersPageForm_Load(System::Object^ sender, System::EventArgs^ e) {
		}
		// Khi nút thêm Customer click thì Show lên Form thêm Customer
		System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
			Form^ AddCustomerForm = gcnew BTLAppManagerStore::AddOrEditCustomerForm();
			AddCustomerForm->ShowDialog();
			delete AddCustomerForm;
		}
		// Khi nút sửa Customer click thì Show lên Form sửa Customer
		System::Void btnEdit_Click(System::Object^ sender, System::EventArgs^ e) {
			Form^ EditCustomerForm = gcnew BTLAppManagerStore::AddOrEditCustomerForm(true);
			EditCustomerForm->ShowDialog();
			delete EditCustomerForm;
		}
		// Khi nút xóa Customer click thì sẽ hỏi có xóa hay ko, nếu xóa thì xử lý xóa ở bên trong hàm này
		System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
			System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to delete this Customer", "Delete Customer", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
			if (result == System::Windows::Forms::DialogResult::Yes) {
				// xử lý xóa Customer
			}
		}
		// Khi nút xem thùng rác (các Customer đã xóa) click thì show Form danh sách Customer đã xóa
		System::Void btnTrash_Click(System::Object^ sender, System::EventArgs^ e) {
			Form^ TrashCustomerForm = gcnew BTLAppManagerStore::TrashCustomerForm();
			TrashCustomerForm->ShowDialog();
			delete TrashCustomerForm;
		}
		System::Void dataTable_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		}
		System::Void dataTable_Sorted(System::Object^ sender, System::EventArgs^ e) {
		}
		System::Void cbSearch_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		}
};
}
