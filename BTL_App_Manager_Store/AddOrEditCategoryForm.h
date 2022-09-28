﻿#pragma once

namespace BTLAppManagerStore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddOrEditCategoryForm
	/// </summary>
	public ref class AddOrEditCategoryForm : public System::Windows::Forms::Form
	{
	private: bool isEditMode;

	public:
		AddOrEditCategoryForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		AddOrEditCategoryForm(bool isEditMode)
		{
			this->isEditMode = isEditMode;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddOrEditCategoryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ inputTitle;
	private: System::Windows::Forms::Button^ btnAddorSave;
	private: System::Windows::Forms::Button^ btnCancel;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->inputTitle = (gcnew System::Windows::Forms::TextBox());
			this->btnAddorSave = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(66, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Title";
			// 
			// inputTitle
			// 
			this->inputTitle->Location = System::Drawing::Point(140, 76);
			this->inputTitle->Name = L"inputTitle";
			this->inputTitle->Size = System::Drawing::Size(299, 26);
			this->inputTitle->TabIndex = 1;
			// 
			// btnAddorSave
			// 
			this->btnAddorSave->Location = System::Drawing::Point(270, 160);
			this->btnAddorSave->Name = L"btnAddorSave";
			this->btnAddorSave->Size = System::Drawing::Size(90, 42);
			this->btnAddorSave->TabIndex = 2;
			this->btnAddorSave->Text = L"Add";
			this->btnAddorSave->UseVisualStyleBackColor = true;
			// 
			// btnCancel
			// 
			this->btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnCancel->Location = System::Drawing::Point(390, 160);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(90, 42);
			this->btnCancel->TabIndex = 3;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// AddOrEditCategoryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->btnCancel;
			this->ClientSize = System::Drawing::Size(518, 234);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnAddorSave);
			this->Controls->Add(this->inputTitle);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(540, 290);
			this->MinimumSize = System::Drawing::Size(540, 290);
			this->Name = L"AddOrEditCategoryForm";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Add Category";
			this->Load += gcnew System::EventHandler(this, &AddOrEditCategoryForm::AddOrEditCategoryForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
// ############## Từ Đây Trở Xuống Sẽ Là Nơi Chúng Ta Viết Code #################
	private: System::Void AddOrEditCategoryForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// Chuyển giữa Form tạo mới và Form chỉnh sửa
		if (this->isEditMode) {
			this->Text = L"Edit Category";
			this->btnAddorSave->Text = "Save";
		}
	}
	};
}