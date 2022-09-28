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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ImageList^ ListIcon;
	private: System::Windows::Forms::DataGridView^ dgvProducts;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->ListIcon = (gcnew System::Windows::Forms::ImageList(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dgvProducts = (gcnew System::Windows::Forms::DataGridView());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->panel1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->dgvProducts, 0, 1);
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
			// dgvProducts
			// 
			this->dgvProducts->AllowUserToAddRows = false;
			this->dgvProducts->AllowUserToDeleteRows = false;
			this->dgvProducts->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProducts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->idProduct,
					this->nameProduct, this->categoryProduct, this->quantity, this->unit, this->position, this->importPrice, this->sellPrice
			});
			this->dgvProducts->Location = System::Drawing::Point(3, 103);
			this->dgvProducts->Name = L"dgvProducts";
			this->dgvProducts->ReadOnly = true;
			this->dgvProducts->RowHeadersWidth = 62;
			this->dgvProducts->RowTemplate->Height = 28;
			this->dgvProducts->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvProducts->Size = System::Drawing::Size(1094, 516);
			this->dgvProducts->TabIndex = 3;
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
			this->tableLayoutPanel1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
