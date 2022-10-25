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
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ usernameLable;
	private: System::Windows::Forms::TextBox^ usernameInput;
	private: System::Windows::Forms::TextBox^ passwordInput;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ loginBtn;
	private: System::Windows::Forms::Button^ btnShowHide;
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
			this->usernameLable = (gcnew System::Windows::Forms::Label());
			this->usernameInput = (gcnew System::Windows::Forms::TextBox());
			this->passwordInput = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->btnShowHide = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// usernameLable
			// 
			this->usernameLable->AutoSize = true;
			this->usernameLable->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameLable->Location = System::Drawing::Point(225, 242);
			this->usernameLable->Name = L"usernameLable";
			this->usernameLable->Size = System::Drawing::Size(124, 26);
			this->usernameLable->TabIndex = 1;
			this->usernameLable->Text = L"User Name";
			this->usernameLable->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// usernameInput
			// 
			this->usernameInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameInput->Location = System::Drawing::Point(110, 285);
			this->usernameInput->Name = L"usernameInput";
			this->usernameInput->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->usernameInput->Size = System::Drawing::Size(340, 35);
			this->usernameInput->TabIndex = 2;
			this->usernameInput->Tag = L"";
			this->usernameInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// passwordInput
			// 
			this->passwordInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordInput->Location = System::Drawing::Point(110, 389);
			this->passwordInput->Name = L"passwordInput";
			this->passwordInput->Size = System::Drawing::Size(340, 35);
			this->passwordInput->TabIndex = 4;
			this->passwordInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->passwordInput->UseSystemPasswordChar = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(225, 346);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 26);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Password";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// loginBtn
			// 
			this->loginBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->loginBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginBtn->Location = System::Drawing::Point(181, 520);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(198, 85);
			this->loginBtn->TabIndex = 5;
			this->loginBtn->Text = L"Login";
			this->loginBtn->UseVisualStyleBackColor = true;
			this->loginBtn->Click += gcnew System::EventHandler(this, &LoginForm::loginBtn_Click);
			// 
			// btnShowHide
			// 
			this->btnShowHide->AutoSize = true;
			this->btnShowHide->Location = System::Drawing::Point(242, 435);
			this->btnShowHide->Name = L"btnShowHide";
			this->btnShowHide->Size = System::Drawing::Size(75, 46);
			this->btnShowHide->TabIndex = 6;
			this->btnShowHide->Text = L"Show";
			this->btnShowHide->UseVisualStyleBackColor = true;
			this->btnShowHide->Click += gcnew System::EventHandler(this, &LoginForm::btnShowHide_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"https://cdn-icons-png.flaticon.com/512/1177/1177568.png";
			this->pictureBox1->Location = System::Drawing::Point(205, 21);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 150);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(538, 704);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnShowHide);
			this->Controls->Add(this->loginBtn);
			this->Controls->Add(this->passwordInput);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->usernameInput);
			this->Controls->Add(this->usernameLable);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(560, 760);
			this->MinimumSize = System::Drawing::Size(560, 760);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		
// ############## Từ Đây Trở Xuống Sẽ Là Nơi Chúng Ta Viết Code #################
	private:
		// Xử lý ẩn hiện password
		System::Void btnShowHide_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->passwordInput->UseSystemPasswordChar) {
				this->passwordInput->UseSystemPasswordChar = !this->passwordInput->UseSystemPasswordChar;
				this->btnShowHide->Text = "Hiden";
			}
			else {
				this->passwordInput->UseSystemPasswordChar = !this->passwordInput->UseSystemPasswordChar;
				this->btnShowHide->Text = "Show";
			}
		}
		// Xử lý login
		System::Void loginBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			std::string username = MyUtils::toStdString(this->usernameInput->Text);
			std::string password = MyUtils::toStdString(this->passwordInput->Text);
			std::string query = "SELECT `id` FROM `tb_employees`  WHERE (`username` = '" + username + "') AND (`password` = '" + password + "') AND (`isDelete` = 0) LIMIT 1";
			sql::ResultSet* res = APP_SESSION::MyDB->ReadQuery(query);
			if (res->next()) {
				APP_SESSION::currentUser->Read(res->getInt("id"));
				APP_SESSION::isLogin = true;
				this->Close();
			}
			else {
				MessageBox::Show("Wrong username or password!!!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	};
}