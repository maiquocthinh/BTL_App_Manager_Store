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
	protected:
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::Button^ btnTrashCategory;
	private: System::Windows::Forms::Button^ btnAddCategory;
	private: System::Windows::Forms::Button^ btnEditCategory;
	private: System::Windows::Forms::Button^ btnDeleteCategory;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ btnRefresh;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::TextBox^ tbxSearch;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ customerID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ customerFullName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ customerPhone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ customerAddress;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ customerSex;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ customerPoint;

	protected:

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
			this->btnTrashCategory = (gcnew System::Windows::Forms::Button());
			this->btnAddCategory = (gcnew System::Windows::Forms::Button());
			this->btnEditCategory = (gcnew System::Windows::Forms::Button());
			this->btnDeleteCategory = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->tbxSearch = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->tableLayoutPanel1->Controls->Add(this->dataGridView1, 0, 1);
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
			this->tableLayoutPanel5->Controls->Add(this->btnTrashCategory, 0, 3);
			this->tableLayoutPanel5->Controls->Add(this->btnAddCategory, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->btnEditCategory, 0, 1);
			this->tableLayoutPanel5->Controls->Add(this->btnDeleteCategory, 0, 2);
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
			// btnTrashCategory
			// 
			this->btnTrashCategory->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnTrashCategory->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnTrashCategory.BackgroundImage")));
			this->btnTrashCategory->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnTrashCategory->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnTrashCategory->FlatAppearance->BorderSize = 0;
			this->btnTrashCategory->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnTrashCategory->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnTrashCategory->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTrashCategory->ImageKey = L"(none)";
			this->btnTrashCategory->Location = System::Drawing::Point(30, 496);
			this->btnTrashCategory->Margin = System::Windows::Forms::Padding(30, 40, 30, 40);
			this->btnTrashCategory->Name = L"btnTrashCategory";
			this->btnTrashCategory->Size = System::Drawing::Size(134, 75);
			this->btnTrashCategory->TabIndex = 3;
			this->btnTrashCategory->UseVisualStyleBackColor = true;
			// 
			// btnAddCategory
			// 
			this->btnAddCategory->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnAddCategory->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAddCategory.BackgroundImage")));
			this->btnAddCategory->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnAddCategory->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAddCategory->FlatAppearance->BorderSize = 0;
			this->btnAddCategory->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnAddCategory->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnAddCategory->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddCategory->ImageKey = L"(none)";
			this->btnAddCategory->Location = System::Drawing::Point(30, 40);
			this->btnAddCategory->Margin = System::Windows::Forms::Padding(30, 40, 30, 40);
			this->btnAddCategory->Name = L"btnAddCategory";
			this->btnAddCategory->Size = System::Drawing::Size(134, 72);
			this->btnAddCategory->TabIndex = 0;
			this->btnAddCategory->UseVisualStyleBackColor = true;
			// 
			// btnEditCategory
			// 
			this->btnEditCategory->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnEditCategory->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEditCategory.BackgroundImage")));
			this->btnEditCategory->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnEditCategory->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEditCategory->FlatAppearance->BorderSize = 0;
			this->btnEditCategory->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnEditCategory->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnEditCategory->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEditCategory->ImageKey = L"(none)";
			this->btnEditCategory->Location = System::Drawing::Point(30, 192);
			this->btnEditCategory->Margin = System::Windows::Forms::Padding(30, 40, 30, 40);
			this->btnEditCategory->Name = L"btnEditCategory";
			this->btnEditCategory->Size = System::Drawing::Size(134, 72);
			this->btnEditCategory->TabIndex = 1;
			this->btnEditCategory->UseVisualStyleBackColor = true;
			// 
			// btnDeleteCategory
			// 
			this->btnDeleteCategory->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnDeleteCategory->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDeleteCategory.BackgroundImage")));
			this->btnDeleteCategory->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnDeleteCategory->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDeleteCategory->FlatAppearance->BorderSize = 0;
			this->btnDeleteCategory->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnDeleteCategory->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnDeleteCategory->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDeleteCategory->ImageKey = L"(none)";
			this->btnDeleteCategory->Location = System::Drawing::Point(30, 344);
			this->btnDeleteCategory->Margin = System::Windows::Forms::Padding(30, 40, 30, 40);
			this->btnDeleteCategory->Name = L"btnDeleteCategory";
			this->btnDeleteCategory->Size = System::Drawing::Size(134, 72);
			this->btnDeleteCategory->TabIndex = 2;
			this->btnDeleteCategory->UseVisualStyleBackColor = true;
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
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"ID", L"Full Name", L"Phone", L"Address" });
			this->comboBox1->Location = System::Drawing::Point(6, 21);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(132, 26);
			this->comboBox1->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->customerID,
					this->customerFullName, this->customerPhone, this->customerAddress, this->customerSex, this->customerPoint
			});
			this->dataGridView1->Location = System::Drawing::Point(3, 83);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(992, 605);
			this->dataGridView1->TabIndex = 4;
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
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
