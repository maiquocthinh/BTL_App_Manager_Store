#include "HomePageForm.h"
#include "ProductsPageForm.h"
#include "CategoriesPageForm.h"
#include "EmployeesPageForm.h"
#include "CustomersPageForm.h"
#include "BillsPageForm.h"

#pragma once

namespace BTLAppManagerStore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindows
	/// </summary>
	public ref class MainWindows : public System::Windows::Forms::Form
	{


	private: System::Windows::Forms::ImageList^ ListIconSidebar;

	private: System::Windows::Forms::ImageList^ ListIconArrow;

	private: System::Windows::Forms::ImageList^ ListIcon24x24;
	private: System::Windows::Forms::Panel^ pnlSidebarHead;
	private: System::Windows::Forms::Label^ positionUser;
	private: System::Windows::Forms::Label^ nameUser;
	private: System::Windows::Forms::PictureBox^ avatarUser;
	private: System::Windows::Forms::Panel^ pnlNavHome;
	private: System::Windows::Forms::PictureBox^ iconNavHome;
	private: System::Windows::Forms::Button^ btnNavHome;
	private: System::Windows::Forms::Panel^ pnlNavDropdownProds;
	private: System::Windows::Forms::Button^ btnNavCategoryProds;
	private: System::Windows::Forms::Button^ btnNavListProds;
	private: System::Windows::Forms::PictureBox^ iconNavProds;
	private: System::Windows::Forms::Button^ btnNavProds;
	private: System::Windows::Forms::Panel^ pnlNavDropdownPerson;
	private: System::Windows::Forms::Button^ btnNavCustomers;
	private: System::Windows::Forms::Button^ btnNavEmployees;
	private: System::Windows::Forms::PictureBox^ iconNavPerson;
	private: System::Windows::Forms::Button^ btnNavPerson;
	private: System::Windows::Forms::Panel^ pnlNavBills;
	private: System::Windows::Forms::PictureBox^ iconNavBills;
	private: System::Windows::Forms::Button^ btnNavBills;
	private: System::Windows::Forms::Panel^ pnlNavLogout;
	private: System::Windows::Forms::PictureBox^ iconNavLogout;
	private: System::Windows::Forms::Button^ btnNavLogout;
	private: System::Windows::Forms::Panel^ pnlSiderbarNav;
	private: System::Windows::Forms::Panel^ pnlMain;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;






















	private: System::ComponentModel::IContainer^ components;



	public:
		MainWindows(void)
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
		~MainWindows()
		{
			if (components)
			{
				delete components;
			}
		}


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindows::typeid));
			this->ListIcon24x24 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->ListIconArrow = (gcnew System::Windows::Forms::ImageList(this->components));
			this->ListIconSidebar = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pnlSidebarHead = (gcnew System::Windows::Forms::Panel());
			this->positionUser = (gcnew System::Windows::Forms::Label());
			this->nameUser = (gcnew System::Windows::Forms::Label());
			this->avatarUser = (gcnew System::Windows::Forms::PictureBox());
			this->pnlNavHome = (gcnew System::Windows::Forms::Panel());
			this->iconNavHome = (gcnew System::Windows::Forms::PictureBox());
			this->btnNavHome = (gcnew System::Windows::Forms::Button());
			this->pnlNavDropdownProds = (gcnew System::Windows::Forms::Panel());
			this->btnNavCategoryProds = (gcnew System::Windows::Forms::Button());
			this->btnNavListProds = (gcnew System::Windows::Forms::Button());
			this->iconNavProds = (gcnew System::Windows::Forms::PictureBox());
			this->btnNavProds = (gcnew System::Windows::Forms::Button());
			this->pnlNavDropdownPerson = (gcnew System::Windows::Forms::Panel());
			this->btnNavCustomers = (gcnew System::Windows::Forms::Button());
			this->btnNavEmployees = (gcnew System::Windows::Forms::Button());
			this->iconNavPerson = (gcnew System::Windows::Forms::PictureBox());
			this->btnNavPerson = (gcnew System::Windows::Forms::Button());
			this->pnlNavBills = (gcnew System::Windows::Forms::Panel());
			this->iconNavBills = (gcnew System::Windows::Forms::PictureBox());
			this->btnNavBills = (gcnew System::Windows::Forms::Button());
			this->pnlNavLogout = (gcnew System::Windows::Forms::Panel());
			this->iconNavLogout = (gcnew System::Windows::Forms::PictureBox());
			this->btnNavLogout = (gcnew System::Windows::Forms::Button());
			this->pnlSiderbarNav = (gcnew System::Windows::Forms::Panel());
			this->pnlMain = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pnlSidebarHead->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->avatarUser))->BeginInit();
			this->pnlNavHome->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconNavHome))->BeginInit();
			this->pnlNavDropdownProds->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconNavProds))->BeginInit();
			this->pnlNavDropdownPerson->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconNavPerson))->BeginInit();
			this->pnlNavBills->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconNavBills))->BeginInit();
			this->pnlNavLogout->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconNavLogout))->BeginInit();
			this->pnlSiderbarNav->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// ListIcon24x24
			// 
			this->ListIcon24x24->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"ListIcon24x24.ImageStream")));
			this->ListIcon24x24->TransparentColor = System::Drawing::Color::Transparent;
			this->ListIcon24x24->Images->SetKeyName(0, L"left-arrow-icon.png");
			this->ListIcon24x24->Images->SetKeyName(1, L"right-arrow-icon.png");
			// 
			// ListIconArrow
			// 
			this->ListIconArrow->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"ListIconArrow.ImageStream")));
			this->ListIconArrow->TransparentColor = System::Drawing::Color::Transparent;
			this->ListIconArrow->Images->SetKeyName(0, L"arrow-down.png");
			this->ListIconArrow->Images->SetKeyName(1, L"arrow-up.png");
			// 
			// ListIconSidebar
			// 
			this->ListIconSidebar->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"ListIconSidebar.ImageStream")));
			this->ListIconSidebar->TransparentColor = System::Drawing::Color::Transparent;
			this->ListIconSidebar->Images->SetKeyName(0, L"bill-icon.png");
			this->ListIconSidebar->Images->SetKeyName(1, L"home-icon.png");
			this->ListIconSidebar->Images->SetKeyName(2, L"logout-icon.png");
			this->ListIconSidebar->Images->SetKeyName(3, L"person-icon.png");
			this->ListIconSidebar->Images->SetKeyName(4, L"product-icon.png");
			// 
			// pnlSidebarHead
			// 
			this->pnlSidebarHead->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->pnlSidebarHead->Controls->Add(this->tableLayoutPanel1);
			this->pnlSidebarHead->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlSidebarHead->Location = System::Drawing::Point(0, 0);
			this->pnlSidebarHead->Name = L"pnlSidebarHead";
			this->pnlSidebarHead->Size = System::Drawing::Size(348, 122);
			this->pnlSidebarHead->TabIndex = 1;
			// 
			// positionUser
			// 
			this->positionUser->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->positionUser->AutoSize = true;
			this->positionUser->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->positionUser->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->positionUser->Location = System::Drawing::Point(3, 58);
			this->positionUser->Name = L"positionUser";
			this->positionUser->Size = System::Drawing::Size(232, 58);
			this->positionUser->TabIndex = 2;
			this->positionUser->Text = L"Manager";
			this->positionUser->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// nameUser
			// 
			this->nameUser->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->nameUser->AutoSize = true;
			this->nameUser->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameUser->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->nameUser->Location = System::Drawing::Point(3, 0);
			this->nameUser->Name = L"nameUser";
			this->nameUser->Size = System::Drawing::Size(232, 58);
			this->nameUser->TabIndex = 1;
			this->nameUser->Text = L"admin";
			this->nameUser->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// avatarUser
			// 
			this->avatarUser->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->avatarUser->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->avatarUser->ImageLocation = L"https://cdn-icons-png.flaticon.com/512/5249/5249351.png";
			this->avatarUser->Location = System::Drawing::Point(12, 20);
			this->avatarUser->Margin = System::Windows::Forms::Padding(12, 20, 12, 20);
			this->avatarUser->Name = L"avatarUser";
			this->avatarUser->Size = System::Drawing::Size(80, 82);
			this->avatarUser->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->avatarUser->TabIndex = 0;
			this->avatarUser->TabStop = false;
			// 
			// pnlNavHome
			// 
			this->pnlNavHome->BackColor = System::Drawing::Color::Transparent;
			this->pnlNavHome->Controls->Add(this->iconNavHome);
			this->pnlNavHome->Controls->Add(this->btnNavHome);
			this->pnlNavHome->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlNavHome->Location = System::Drawing::Point(0, 122);
			this->pnlNavHome->Name = L"pnlNavHome";
			this->pnlNavHome->Size = System::Drawing::Size(348, 100);
			this->pnlNavHome->TabIndex = 3;
			// 
			// iconNavHome
			// 
			this->iconNavHome->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iconNavHome.Image")));
			this->iconNavHome->Location = System::Drawing::Point(30, 16);
			this->iconNavHome->Name = L"iconNavHome";
			this->iconNavHome->Size = System::Drawing::Size(60, 60);
			this->iconNavHome->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->iconNavHome->TabIndex = 4;
			this->iconNavHome->TabStop = false;
			this->iconNavHome->Click += gcnew System::EventHandler(this, &MainWindows::btnNavHome_Click);
			// 
			// btnNavHome
			// 
			this->btnNavHome->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnNavHome->FlatAppearance->BorderSize = 0;
			this->btnNavHome->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnNavHome->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnNavHome->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNavHome->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNavHome->ForeColor = System::Drawing::Color::White;
			this->btnNavHome->Location = System::Drawing::Point(0, 0);
			this->btnNavHome->Name = L"btnNavHome";
			this->btnNavHome->Size = System::Drawing::Size(348, 100);
			this->btnNavHome->TabIndex = 0;
			this->btnNavHome->Text = L"          HOME";
			this->btnNavHome->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnNavHome->UseVisualStyleBackColor = true;
			this->btnNavHome->Click += gcnew System::EventHandler(this, &MainWindows::btnNavHome_Click);
			// 
			// pnlNavDropdownProds
			// 
			this->pnlNavDropdownProds->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pnlNavDropdownProds->Controls->Add(this->btnNavCategoryProds);
			this->pnlNavDropdownProds->Controls->Add(this->btnNavListProds);
			this->pnlNavDropdownProds->Controls->Add(this->iconNavProds);
			this->pnlNavDropdownProds->Controls->Add(this->btnNavProds);
			this->pnlNavDropdownProds->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlNavDropdownProds->Location = System::Drawing::Point(0, 222);
			this->pnlNavDropdownProds->MaximumSize = System::Drawing::Size(348, 252);
			this->pnlNavDropdownProds->MinimumSize = System::Drawing::Size(348, 100);
			this->pnlNavDropdownProds->Name = L"pnlNavDropdownProds";
			this->pnlNavDropdownProds->Size = System::Drawing::Size(348, 100);
			this->pnlNavDropdownProds->TabIndex = 0;
			// 
			// btnNavCategoryProds
			// 
			this->btnNavCategoryProds->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnNavCategoryProds->FlatAppearance->BorderSize = 0;
			this->btnNavCategoryProds->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnNavCategoryProds->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnNavCategoryProds->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNavCategoryProds->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNavCategoryProds->ForeColor = System::Drawing::Color::White;
			this->btnNavCategoryProds->ImageKey = L"right-arrow-icon.png";
			this->btnNavCategoryProds->ImageList = this->ListIcon24x24;
			this->btnNavCategoryProds->Location = System::Drawing::Point(0, 176);
			this->btnNavCategoryProds->Name = L"btnNavCategoryProds";
			this->btnNavCategoryProds->Size = System::Drawing::Size(348, 76);
			this->btnNavCategoryProds->TabIndex = 3;
			this->btnNavCategoryProds->Text = L"Category Products";
			this->btnNavCategoryProds->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnNavCategoryProds->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnNavCategoryProds->UseVisualStyleBackColor = true;
			this->btnNavCategoryProds->Click += gcnew System::EventHandler(this, &MainWindows::btnNavCategoryProds_Click);
			// 
			// btnNavListProds
			// 
			this->btnNavListProds->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnNavListProds->FlatAppearance->BorderSize = 0;
			this->btnNavListProds->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnNavListProds->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnNavListProds->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNavListProds->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNavListProds->ForeColor = System::Drawing::Color::White;
			this->btnNavListProds->ImageKey = L"right-arrow-icon.png";
			this->btnNavListProds->ImageList = this->ListIcon24x24;
			this->btnNavListProds->Location = System::Drawing::Point(0, 100);
			this->btnNavListProds->Name = L"btnNavListProds";
			this->btnNavListProds->Size = System::Drawing::Size(348, 76);
			this->btnNavListProds->TabIndex = 2;
			this->btnNavListProds->Text = L"List Products";
			this->btnNavListProds->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnNavListProds->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnNavListProds->UseVisualStyleBackColor = true;
			this->btnNavListProds->Click += gcnew System::EventHandler(this, &MainWindows::btnNavListProds_Click);
			// 
			// iconNavProds
			// 
			this->iconNavProds->BackColor = System::Drawing::Color::Transparent;
			this->iconNavProds->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iconNavProds.Image")));
			this->iconNavProds->Location = System::Drawing::Point(30, 20);
			this->iconNavProds->Name = L"iconNavProds";
			this->iconNavProds->Size = System::Drawing::Size(60, 60);
			this->iconNavProds->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->iconNavProds->TabIndex = 1;
			this->iconNavProds->TabStop = false;
			this->iconNavProds->Click += gcnew System::EventHandler(this, &MainWindows::btnNavProds_Click);
			// 
			// btnNavProds
			// 
			this->btnNavProds->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnNavProds->FlatAppearance->BorderSize = 0;
			this->btnNavProds->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnNavProds->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnNavProds->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNavProds->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNavProds->ForeColor = System::Drawing::Color::White;
			this->btnNavProds->ImageKey = L"arrow-down.png";
			this->btnNavProds->ImageList = this->ListIconArrow;
			this->btnNavProds->Location = System::Drawing::Point(0, 0);
			this->btnNavProds->Name = L"btnNavProds";
			this->btnNavProds->Size = System::Drawing::Size(348, 100);
			this->btnNavProds->TabIndex = 0;
			this->btnNavProds->Text = L"        PRODUCTS";
			this->btnNavProds->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnNavProds->UseVisualStyleBackColor = true;
			this->btnNavProds->Click += gcnew System::EventHandler(this, &MainWindows::btnNavProds_Click);
			// 
			// pnlNavDropdownPerson
			// 
			this->pnlNavDropdownPerson->BackColor = System::Drawing::Color::Transparent;
			this->pnlNavDropdownPerson->Controls->Add(this->btnNavCustomers);
			this->pnlNavDropdownPerson->Controls->Add(this->btnNavEmployees);
			this->pnlNavDropdownPerson->Controls->Add(this->iconNavPerson);
			this->pnlNavDropdownPerson->Controls->Add(this->btnNavPerson);
			this->pnlNavDropdownPerson->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlNavDropdownPerson->Location = System::Drawing::Point(0, 322);
			this->pnlNavDropdownPerson->MaximumSize = System::Drawing::Size(348, 252);
			this->pnlNavDropdownPerson->MinimumSize = System::Drawing::Size(348, 100);
			this->pnlNavDropdownPerson->Name = L"pnlNavDropdownPerson";
			this->pnlNavDropdownPerson->Size = System::Drawing::Size(348, 100);
			this->pnlNavDropdownPerson->TabIndex = 2;
			// 
			// btnNavCustomers
			// 
			this->btnNavCustomers->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnNavCustomers->FlatAppearance->BorderSize = 0;
			this->btnNavCustomers->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnNavCustomers->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnNavCustomers->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNavCustomers->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNavCustomers->ForeColor = System::Drawing::Color::White;
			this->btnNavCustomers->ImageKey = L"right-arrow-icon.png";
			this->btnNavCustomers->ImageList = this->ListIcon24x24;
			this->btnNavCustomers->Location = System::Drawing::Point(0, 176);
			this->btnNavCustomers->Name = L"btnNavCustomers";
			this->btnNavCustomers->Size = System::Drawing::Size(348, 76);
			this->btnNavCustomers->TabIndex = 5;
			this->btnNavCustomers->Text = L"Customers";
			this->btnNavCustomers->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnNavCustomers->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnNavCustomers->UseVisualStyleBackColor = true;
			this->btnNavCustomers->Click += gcnew System::EventHandler(this, &MainWindows::btnNavCustomers_Click);
			// 
			// btnNavEmployees
			// 
			this->btnNavEmployees->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnNavEmployees->FlatAppearance->BorderSize = 0;
			this->btnNavEmployees->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnNavEmployees->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnNavEmployees->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNavEmployees->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNavEmployees->ForeColor = System::Drawing::Color::White;
			this->btnNavEmployees->ImageKey = L"right-arrow-icon.png";
			this->btnNavEmployees->ImageList = this->ListIcon24x24;
			this->btnNavEmployees->Location = System::Drawing::Point(0, 100);
			this->btnNavEmployees->Name = L"btnNavEmployees";
			this->btnNavEmployees->Size = System::Drawing::Size(348, 76);
			this->btnNavEmployees->TabIndex = 4;
			this->btnNavEmployees->Text = L"Employees";
			this->btnNavEmployees->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnNavEmployees->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnNavEmployees->UseVisualStyleBackColor = true;
			this->btnNavEmployees->Click += gcnew System::EventHandler(this, &MainWindows::btnNavEmployees_Click);
			// 
			// iconNavPerson
			// 
			this->iconNavPerson->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iconNavPerson.Image")));
			this->iconNavPerson->Location = System::Drawing::Point(30, 16);
			this->iconNavPerson->Name = L"iconNavPerson";
			this->iconNavPerson->Size = System::Drawing::Size(60, 60);
			this->iconNavPerson->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->iconNavPerson->TabIndex = 3;
			this->iconNavPerson->TabStop = false;
			this->iconNavPerson->Click += gcnew System::EventHandler(this, &MainWindows::btnNavPerson_Click);
			// 
			// btnNavPerson
			// 
			this->btnNavPerson->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnNavPerson->FlatAppearance->BorderSize = 0;
			this->btnNavPerson->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnNavPerson->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnNavPerson->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNavPerson->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNavPerson->ForeColor = System::Drawing::Color::White;
			this->btnNavPerson->ImageKey = L"arrow-down.png";
			this->btnNavPerson->ImageList = this->ListIconArrow;
			this->btnNavPerson->Location = System::Drawing::Point(0, 0);
			this->btnNavPerson->Name = L"btnNavPerson";
			this->btnNavPerson->Size = System::Drawing::Size(348, 100);
			this->btnNavPerson->TabIndex = 1;
			this->btnNavPerson->Text = L"        PERSON    ";
			this->btnNavPerson->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btnNavPerson->UseVisualStyleBackColor = true;
			this->btnNavPerson->Click += gcnew System::EventHandler(this, &MainWindows::btnNavPerson_Click);
			// 
			// pnlNavBills
			// 
			this->pnlNavBills->BackColor = System::Drawing::Color::Transparent;
			this->pnlNavBills->Controls->Add(this->iconNavBills);
			this->pnlNavBills->Controls->Add(this->btnNavBills);
			this->pnlNavBills->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlNavBills->Location = System::Drawing::Point(0, 422);
			this->pnlNavBills->Name = L"pnlNavBills";
			this->pnlNavBills->Size = System::Drawing::Size(348, 100);
			this->pnlNavBills->TabIndex = 4;
			// 
			// iconNavBills
			// 
			this->iconNavBills->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iconNavBills.Image")));
			this->iconNavBills->Location = System::Drawing::Point(29, 16);
			this->iconNavBills->Name = L"iconNavBills";
			this->iconNavBills->Size = System::Drawing::Size(60, 60);
			this->iconNavBills->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->iconNavBills->TabIndex = 5;
			this->iconNavBills->TabStop = false;
			this->iconNavBills->Click += gcnew System::EventHandler(this, &MainWindows::btnNavBills_Click);
			// 
			// btnNavBills
			// 
			this->btnNavBills->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnNavBills->FlatAppearance->BorderSize = 0;
			this->btnNavBills->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnNavBills->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnNavBills->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNavBills->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNavBills->ForeColor = System::Drawing::Color::White;
			this->btnNavBills->Location = System::Drawing::Point(0, 0);
			this->btnNavBills->Name = L"btnNavBills";
			this->btnNavBills->Size = System::Drawing::Size(348, 100);
			this->btnNavBills->TabIndex = 0;
			this->btnNavBills->Text = L"          BILLS";
			this->btnNavBills->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnNavBills->UseVisualStyleBackColor = true;
			this->btnNavBills->Click += gcnew System::EventHandler(this, &MainWindows::btnNavBills_Click);
			// 
			// pnlNavLogout
			// 
			this->pnlNavLogout->BackColor = System::Drawing::Color::Transparent;
			this->pnlNavLogout->Controls->Add(this->iconNavLogout);
			this->pnlNavLogout->Controls->Add(this->btnNavLogout);
			this->pnlNavLogout->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlNavLogout->Location = System::Drawing::Point(0, 522);
			this->pnlNavLogout->Name = L"pnlNavLogout";
			this->pnlNavLogout->Size = System::Drawing::Size(348, 100);
			this->pnlNavLogout->TabIndex = 5;
			// 
			// iconNavLogout
			// 
			this->iconNavLogout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iconNavLogout.Image")));
			this->iconNavLogout->Location = System::Drawing::Point(30, 16);
			this->iconNavLogout->Name = L"iconNavLogout";
			this->iconNavLogout->Size = System::Drawing::Size(60, 60);
			this->iconNavLogout->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->iconNavLogout->TabIndex = 5;
			this->iconNavLogout->TabStop = false;
			this->iconNavLogout->Click += gcnew System::EventHandler(this, &MainWindows::btnNavLogout_Click);
			// 
			// btnNavLogout
			// 
			this->btnNavLogout->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnNavLogout->FlatAppearance->BorderSize = 0;
			this->btnNavLogout->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnNavLogout->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnNavLogout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNavLogout->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNavLogout->ForeColor = System::Drawing::Color::White;
			this->btnNavLogout->Location = System::Drawing::Point(0, 0);
			this->btnNavLogout->Name = L"btnNavLogout";
			this->btnNavLogout->Size = System::Drawing::Size(348, 100);
			this->btnNavLogout->TabIndex = 0;
			this->btnNavLogout->Text = L"          LOGOUT";
			this->btnNavLogout->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnNavLogout->UseVisualStyleBackColor = true;
			this->btnNavLogout->Click += gcnew System::EventHandler(this, &MainWindows::btnNavLogout_Click);
			// 
			// pnlSiderbarNav
			// 
			this->pnlSiderbarNav->AutoScroll = true;
			this->pnlSiderbarNav->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnlSiderbarNav.BackgroundImage")));
			this->pnlSiderbarNav->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pnlSiderbarNav->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlSiderbarNav->Controls->Add(this->pnlNavLogout);
			this->pnlSiderbarNav->Controls->Add(this->pnlNavBills);
			this->pnlSiderbarNav->Controls->Add(this->pnlNavDropdownPerson);
			this->pnlSiderbarNav->Controls->Add(this->pnlNavDropdownProds);
			this->pnlSiderbarNav->Controls->Add(this->pnlNavHome);
			this->pnlSiderbarNav->Controls->Add(this->pnlSidebarHead);
			this->pnlSiderbarNav->Dock = System::Windows::Forms::DockStyle::Left;
			this->pnlSiderbarNav->Location = System::Drawing::Point(0, 0);
			this->pnlSiderbarNav->Name = L"pnlSiderbarNav";
			this->pnlSiderbarNav->Size = System::Drawing::Size(350, 721);
			this->pnlSiderbarNav->TabIndex = 2;
			// 
			// pnlMain
			// 
			this->pnlMain->AutoScroll = true;
			this->pnlMain->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnlMain.BackgroundImage")));
			this->pnlMain->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pnlMain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlMain->Location = System::Drawing::Point(350, 0);
			this->pnlMain->Name = L"pnlMain";
			this->pnlMain->Size = System::Drawing::Size(877, 721);
			this->pnlMain->TabIndex = 4;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				70)));
			this->tableLayoutPanel1->Controls->Add(this->avatarUser, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 1, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(348, 122);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->positionUser, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->nameUser, 0, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(107, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(238, 116);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// MainWindows
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1227, 721);
			this->Controls->Add(this->pnlMain);
			this->Controls->Add(this->pnlSiderbarNav);
			this->MinimumSize = System::Drawing::Size(1249, 777);
			this->Name = L"MainWindows";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainWindows";
			this->Load += gcnew System::EventHandler(this, &MainWindows::MainWindows_Load);
			this->pnlSidebarHead->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->avatarUser))->EndInit();
			this->pnlNavHome->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconNavHome))->EndInit();
			this->pnlNavDropdownProds->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconNavProds))->EndInit();
			this->pnlNavDropdownPerson->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconNavPerson))->EndInit();
			this->pnlNavBills->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconNavBills))->EndInit();
			this->pnlNavLogout->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconNavLogout))->EndInit();
			this->pnlSiderbarNav->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		// ############## Từ Đây Trở Xuống Sẽ Là Nơi Chúng Ta Viết Code #################
	private:
		Form^ homePageForm = gcnew BTLAppManagerStore::HomePageForm();
		Form^ productsPageForm = gcnew BTLAppManagerStore::ProductsPageForm();
		Form^ categoriesPageForm = gcnew BTLAppManagerStore::CategoriesPageForm();
		Form^ employeesPageForm = gcnew BTLAppManagerStore::EmployeesPageForm();
		Form^ customersPageForm = gcnew BTLAppManagerStore::CustomersPageForm();
		Form^ billsPageForm = gcnew BTLAppManagerStore::BillsPageForm();
		System::Drawing::Color activeColorSidebar = System::Drawing::Color::FromArgb(18, 79, 139);

		// Các hàm tự định nghĩa 
	private:
		// Hàm xóa trạng thái active của Menu
		void clearActiveSidebar() {
			if (btnNavHome->BackColor == this->activeColorSidebar)
				btnNavHome->BackColor = Color::Transparent;
			else if (btnNavBills->BackColor == this->activeColorSidebar)
				btnNavBills->BackColor = Color::Transparent;
			else if (btnNavListProds->BackColor == this->activeColorSidebar)
				btnNavListProds->BackColor = Color::Transparent;
			else if (btnNavCategoryProds->BackColor == this->activeColorSidebar)
				btnNavCategoryProds->BackColor = Color::Transparent;
			else if (btnNavEmployees->BackColor == this->activeColorSidebar)
				btnNavEmployees->BackColor = Color::Transparent;
			else if (btnNavCustomers->BackColor == this->activeColorSidebar)
				btnNavCustomers->BackColor = Color::Transparent;
		}
		// Hàm load 1 Form khác vào trong Form MainWindows
		void loadFormToPnlmain(System::Windows::Forms::Form^ form) {
			if (this->pnlMain->Controls->Count > 0)
				this->pnlMain->Controls->RemoveAt(0);
			form->TopLevel = false;
			form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			form->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlMain->Controls->Add(form);
			this->pnlMain->Tag = form;
			form->Show();
		}
		// Xử lý các trạng thái click của Menu có Menu Con xổ xuống
	private:
		bool isCollapseNavProds = true;
		bool isCollapseNavPerson = true;
		System::Void btnNavProds_Click(System::Object^ sender, System::EventArgs^ e) {
			isCollapseNavPerson = true;
			this->pnlNavDropdownPerson->Height = 60;
			this->btnNavProds->ImageKey = L"arrow-up.png";
			if (isCollapseNavProds) {
				this->pnlNavDropdownProds->Height = 252;
				this->btnNavProds->ImageKey = L"arrow-up.png";
			}
			else {
				this->pnlNavDropdownProds->Height = 60;
				this->btnNavProds->ImageKey = L"arrow-down.png";
			}
			isCollapseNavProds = !isCollapseNavProds;
		}
		System::Void btnNavPerson_Click(System::Object^ sender, System::EventArgs^ e) {
			isCollapseNavProds = true;
			this->pnlNavDropdownProds->Height = 60;
			this->btnNavProds->ImageKey = L"arrow-down.png";
			if (isCollapseNavPerson) {
				this->pnlNavDropdownPerson->Height = 252;
				this->btnNavPerson->ImageKey = L"arrow-up.png";
			}
			else {
				this->pnlNavDropdownPerson->Height = 60;
				this->btnNavPerson->ImageKey = L"arrow-down.png";
			}
			isCollapseNavPerson = !isCollapseNavPerson;
		}
		// Xử lý load Form thích hợp vào Form MainWindows khi bấm các nút tương ứng trên Menu
	private: System::Void btnNavHome_Click(System::Object^ sender, System::EventArgs^ e) {
		if (btnNavHome->BackColor != this->activeColorSidebar) {
			clearActiveSidebar();
			btnNavHome->BackColor = this->activeColorSidebar;
			loadFormToPnlmain(homePageForm);
		}
	}
	private: System::Void btnNavBills_Click(System::Object^ sender, System::EventArgs^ e) {
		if (btnNavBills->BackColor != this->activeColorSidebar) {
			clearActiveSidebar();
			btnNavBills->BackColor = this->activeColorSidebar;
			loadFormToPnlmain(billsPageForm);
		}
	}
	private: System::Void btnNavListProds_Click(System::Object^ sender, System::EventArgs^ e) {
		if (btnNavListProds->BackColor != this->activeColorSidebar) {
			clearActiveSidebar();
			btnNavListProds->BackColor = this->activeColorSidebar;
			loadFormToPnlmain(productsPageForm);
		}
	}
	private: System::Void btnNavCategoryProds_Click(System::Object^ sender, System::EventArgs^ e) {
		if (btnNavCategoryProds->BackColor != this->activeColorSidebar) {
			clearActiveSidebar();
			btnNavCategoryProds->BackColor = this->activeColorSidebar;
			loadFormToPnlmain(categoriesPageForm);
		}
	}
	private: System::Void btnNavEmployees_Click(System::Object^ sender, System::EventArgs^ e) {
		if (btnNavEmployees->BackColor != this->activeColorSidebar) {
			clearActiveSidebar();
			btnNavEmployees->BackColor = this->activeColorSidebar;
			loadFormToPnlmain(employeesPageForm);
		}
	}
	private: System::Void btnNavCustomers_Click(System::Object^ sender, System::EventArgs^ e) {
		if (btnNavCustomers->BackColor != this->activeColorSidebar) {
			clearActiveSidebar();
			btnNavCustomers->BackColor = this->activeColorSidebar;
			loadFormToPnlmain(customersPageForm);
		}
	}
	private: System::Void btnNavLogout_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Are you sure logout!", "Logout", MessageBoxButtons::OKCancel, MessageBoxIcon::Question);
	}

		   // Xử lý các sự kiện còn lại
			   // Khi Form MainWindows tải xong
	private: System::Void MainWindows_Load(System::Object^ sender, System::EventArgs^ e) {
		// Load Form HomePageForm.h và active tương ứng trên Menu
		btnNavHome->BackColor = this->activeColorSidebar;
		loadFormToPnlmain(homePageForm);
	}
	};

}
