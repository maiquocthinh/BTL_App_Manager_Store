﻿#pragma once

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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ImageList^ ListIcon;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->customerID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->customerFullName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->customerPhone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->customerAddress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->customerSex = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->customerPoint = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->ListIcon = (gcnew System::Windows::Forms::ImageList(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->dataGridView1, 0, 1);
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
			this->dataGridView1->Location = System::Drawing::Point(3, 103);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1094, 516);
			this->dataGridView1->TabIndex = 5;
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
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1094, 94);
			this->panel1->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ImageKey = L"delete-icon.png";
			this->button2->ImageList = this->ListIcon;
			this->button2->Location = System::Drawing::Point(254, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 94);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// ListIcon
			// 
			this->ListIcon->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"ListIcon.ImageStream")));
			this->ListIcon->TransparentColor = System::Drawing::Color::Transparent;
			this->ListIcon->Images->SetKeyName(0, L"delete-icon.png");
			this->ListIcon->Images->SetKeyName(1, L"restore-icon.png");
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ImageKey = L"restore-icon.png";
			this->button1->ImageList = this->ListIcon;
			this->button1->Location = System::Drawing::Point(76, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 94);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
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
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
// ############## Từ Đây Trở Xuống Sẽ Là Nơi Chúng Ta Viết Code #################
	};
}