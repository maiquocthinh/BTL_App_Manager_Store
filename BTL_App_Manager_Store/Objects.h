#include <string> 
#pragma once
namespace MyObjects {
	using namespace std;

	class Product {
		// Properties
	private:
		unsigned int id, quantity, categoryID, importPrice, sellPrice;
		string name, image, description, position, unit;
		// Constructor and Destructor
	public:
		Product()
		{
			this->name = this->image = this->description = this->position = this->unit = "";
			this->id = this->categoryID = this->quantity = this->importPrice = this->sellPrice = 0;
		}
		~Product()
		{
			this->name = this->image = this->description = this->position = this->unit = "";
			this->id = this->categoryID = this->quantity = this->importPrice = this->sellPrice = 0;
		}
		// Setter and Getter of properties
	public:
		unsigned int getId() {
			return this->id;
		}
		void setId(unsigned int id) {
			this->id = id;
		}
		unsigned int getQuantity() {
			return this->quantity;
		}
		void setQuantity(unsigned int quantity) {
			this->quantity = quantity;
		}
		unsigned int getCategoryID() {
			return this->categoryID;
		}
		void setCategoryID(unsigned int categoryID) {
			this->categoryID = categoryID;
		}
		string getName() {
			return this->name;
		}
		void setName(string name) {
			this->name = name;
		}
		string getImage() {
			return this->image;
		}
		void setImage(string image) {
			this->image = image;
		}
		string getDescription() {
			return this->description;
		}
		void setDescription(string description) {
			this->description = description;
		}
		string getPosition() {
			return this->position;
		}
		void setPosition(string position) {
			this->position = position;
		}
		string getUnit() {
			return this->unit;
		}
		void setUnit(string unit) {
			this->unit = unit;
		}
		long int getImportPrice() {
			return this->importPrice;
		}
		void setImprotPrice(long int importPrice) {
			this->importPrice = importPrice;
		}
		long int getSellPrice() {
			return this->sellPrice;
		}
		void setsellPrice(long int sellPrice) {
			this->sellPrice = sellPrice;
		}
	};

	class Person {
		// Properties
	protected:
		string fullName, address, phone;
		bool sex; // true is male, false is female
	// Constructor and Destructor
	public:
		Person() {
			this->fullName = this->address = this->phone = "";
			this->sex = true;
		}
		~Person() {
			this->fullName = this->address = this->phone = "";
			this->sex = true;
		}
		// Setter and Getter of properties
	public:
		string getFullName() {
			return this->fullName;
		}
		void setFullName(string fullName) {
			this->fullName = fullName;
		}
		bool getSex() {
			return this->sex;
		}
		void setSex(bool sex) {
			this->sex = sex;
		}
		string getAddress() {
			return this->address;
		}
		void setAddress(string address) {
			this->address = address;
		}
		string getPhone() {
			return this->phone;
		}
		void setPhone(string phone) {
			this->phone = phone;
		}
	};

	class Employee : public Person {
		// Properties
	private:
		unsigned short int position; // 0 is manager, 1 is employee
	// Constructor and Destructor
	public:
		Employee() {
			this->position = 0;
		}
		~Employee() {
			this->position = 0;
		}
		// Setter and Getter of properties
	public:
		unsigned short int getPosition() {
			return this->position;
		}
		void setPosition(unsigned short int position) {
			this->position = position;
		}
	};

	class Customer : public Person {
		// Properties
	private:
		unsigned int points;
		// Constructor and Destructor
	public:
		Customer() {
			this->points = 0;
		}
		~Customer() {
			this->points = 0;
		}
		// Setter and Getter of properties
	public:
		unsigned int getPoints() {
			return this->points;
		}
		void setPoints(unsigned int points) {
			this->points = points;
		}
	};

	class Bill {
		// Properties
	protected: string employeeID, date, productIDs, quantityProducts;
			 unsigned int id, totalPrice;
			 // Constructor and Destructor
	public:
		Bill() {
			this->employeeID = this->date = this->productIDs = this->quantityProducts = "";
			this->id = this->totalPrice = 0;
		}
		~Bill() {
			this->employeeID = this->date = this->productIDs = this->quantityProducts = "";
			this->id = this->totalPrice = 0;
		}
		// Setter and Getter of properties
	public:
		string getEmployeeID() {
			return this->employeeID;
		}
		void setEmployeeID(string employeeID) {
			this->employeeID = employeeID;
		}
		string getDate() {
			return this->date;
		}
		void setDate(string date) {
			this->date = date;
		}
		string getProductIDs() {
			return this->productIDs;
		}
		void setProductIDs(string productIDs) {
			this->productIDs = productIDs;
		}
		string getQuantityProducts() {
			return this->quantityProducts;
		}
		void setQuantityProducts(string quantityProducts) {
			this->quantityProducts = quantityProducts;
		}
		int getTotalPrice() {
			return this->totalPrice;
		}
		void setTotalPrice(int totalPrice) {
			this->totalPrice = totalPrice;
		}
	};

	class BillCustomer : public Bill {
		// Properties
	private:
		unsigned int customerID, discountByPoints, discountEachProducts;
		// Constructor and Destructor
	public:
		BillCustomer() {
			this->customerID = this->discountByPoints = this->customerID = 0;
		}
		~BillCustomer() {
			this->customerID = this->discountByPoints = this->customerID = 0;
		}
		// Setter and Getter of properties
	public:
		unsigned int getCustomerID() {
			return this->customerID;
		}
		void setCustomerID(unsigned int customerID) {
			this->customerID = customerID;
		}
		unsigned int getDiscountByPoints() {
			return this->discountByPoints;
		}
		void setDiscountByPoints(unsigned int discountByPoints) {
			this->discountByPoints = discountByPoints;
		}
		unsigned int getDiscountEachProducts() {
			return this->discountEachProducts;
		}
		void setDiscountEachProducts(unsigned int discountEachProducts) {
			this->discountEachProducts = discountEachProducts;
		}
	};

	class BillImport : public Bill {
		// Constructor and Destructor
	public:
		BillImport() {}
		~BillImport() {}
	};

	class Category {
		// Properties
	private:
		unsigned int id;
		string title;
		// Constructor and Destructor
	public:
		Category() {}
		~Category() {}
	};
}