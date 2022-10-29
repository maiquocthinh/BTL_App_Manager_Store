#include <string> 
#include "Database.h"
#include "Utils.h"
#pragma once
namespace MyObjects {
	using namespace std;

	class Product {
	// Properties
	private:
		MyDatabase* MyDB;
		unsigned int id, quantity, categoryID, importPrice, sellPrice;
		string name, image, description, position, unit;
	// Constructor and Destructor
	public:
		Product(MyDatabase* const MyDB)
		{
			this->MyDB = MyDB;
			this->name = this->image = this->description = this->position = this->unit = "";
			this->id = this->categoryID = this->quantity = this->importPrice = this->sellPrice = 0;
		}
		~Product()
		{
			delete this->MyDB;
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
		// Functions interactive with Database
	public:
		void Read(unsigned int id) {
			this->id = id;
			sql::ResultSet* res = this->MyDB->ReadQuery("SELECT * FROM `tb_products` WHERE (`id` = " + MyUtils::intToStdString(this->id) + ") LIMIT 1");
			if (res->next()) {
				this->name = res->getString("name");
				this->image = res->getString("image");
				this->description = res->getString("description");
				this->position = res->getString("position");
				this->unit = res->getString("unit");
				this->quantity = res->getInt("quantity");
				this->categoryID = res->getInt("category_id");
				this->importPrice = res->getInt("import_price");
				this->sellPrice = res->getInt("sell_price");
			}
		}
		void Create() {
			this->MyDB->CUDQuery("INSERT INTO `tb_products` (`name`, `description`, `image`, `quantity`, `import_price`, `sell_price`, `unit`, `category_id`, `position`) VALUES ('" + this->name + "','" + this->description + "','" + this->image + "','0','" + MyUtils::intToStdString(this->importPrice) + "','" + MyUtils::intToStdString(this->sellPrice) + "','" + this->unit + "','" + MyUtils::intToStdString(this->categoryID) + "','" + this->position + "');");
		}
		void Update() {
			this->MyDB->CUDQuery("UPDATE `tb_products` SET `name`='" + this->name + "', `description`='" + this->description + "', `image`='" + this->image + "', `quantity`='" + MyUtils::intToStdString(this->quantity) + "', `import_price`='" + MyUtils::intToStdString(this->importPrice) + "', `sell_price`='" + MyUtils::intToStdString(this->sellPrice) + "', `category_id`='" + MyUtils::intToStdString(this->categoryID) + "', `unit`='" + this->unit + "', `position`='" + this->position + "' WHERE (`id` = " + MyUtils::intToStdString(this->id) + ")");
		}
		void MoveToTrash() {
			this->MyDB->CUDQuery("UPDATE `tb_products` SET `isDelete`=true WHERE (`id` = " + MyUtils::intToStdString(this->id) + ")");
		}
		void Restore() {
			this->MyDB->CUDQuery("UPDATE `tb_products` SET `isDelete`=false WHERE (`id` = " + MyUtils::intToStdString(this->id) + ")");
		}
		void Delete() {
			this->MyDB->CUDQuery("DELETE FROM `tb_products` WHERE (`id` = " + MyUtils::intToStdString(this->id) + ")");
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
	// Functions interactive with Database
	public:
		virtual void Read(unsigned int id) = 0;
		virtual void Create() = 0;
		virtual void Update() = 0;
		virtual void MoveToTrash() = 0;
		virtual void Restore() = 0;
		virtual void Delete() = 0;
	};

	class Employee : public Person {
		// Properties
	private:
		MyDatabase* MyDB;
		unsigned int id;
		unsigned short int position; // 0 is manager, 1 is employee
		string username, password, image;
	// Constructor and Destructor
	public:
		Employee(MyDatabase* const MyDB) {
			this->MyDB = MyDB;
			this->position = 0;
		}
		~Employee() {
			delete this->MyDB;
			this->position = 0;
		}
	// Setter and Getter of properties
	public:
		unsigned int getId() {
			return this->id;
		}
		void setId(unsigned int id) {
			this->id = id;
		}
		unsigned short int getPosition() {
			return this->position;
		}
		void setPosition(unsigned short int position) {
			this->position = position;
		}
		string getUsername() {
			return this->username;
		}
		void setUsername(string username) {
			this->username = username;
		}
		void setPassword(string password) {
			this->password = password;
		}
		string getImage() {
			return this->image;
		}
		void setImage(string image) {
			this->image = image;
		}
	// Functions interactive with Database
	public:
		void Read(unsigned int id) {
			this->id = id;
			sql::ResultSet* res = this->MyDB->ReadQuery("SELECT * FROM `tb_employees` WHERE (`id` = " + MyUtils::intToStdString(this->id) + ") LIMIT 1");
			if (res->next()) {
				this->fullName = res->getString("fullname");
				this->sex = res->getBoolean("sex");
				this->address = res->getString("address");
				this->phone = res->getString("phone");
				this->position = res->getInt("position");
				this->image = res->getString("image");
				this->username = res->getString("username");
			}
		}
		void Create() {
			this->MyDB->CUDQuery("INSERT INTO `tb_employees` (`fullname`, `position`, `sex`, `address`, `phone`, `image`, `username`, `password`) VALUES ('" + this->fullName + "','" + MyUtils::intToStdString(this->position) + "','" + MyUtils::intToStdString(this->sex) + "','" + this->address + "','" + this->phone + "','" + this->image + "','" + this->username + "',MD5('" + this->password + "'))");
		}
		void Update() {
			this->MyDB->CUDQuery("UPDATE `tb_employees` SET `fullname`='" + this->fullName + "', `position`='" + MyUtils::intToStdString(this->position) + "', `sex`='" + MyUtils::intToStdString(this->sex) + "', `address`='" + this->address + "', `phone`='" + this->phone + "', `image`='" + this->image + "', `username`='" + this->username + "', `password`=MD5('" + this->password + "') WHERE (`id` = " + MyUtils::intToStdString(this->id) + ")");
		}
		void MoveToTrash() {
			this->MyDB->CUDQuery("UPDATE `tb_employees` SET `isDelete`=true WHERE (`id` = " + MyUtils::intToStdString(this->id) + ")");

		}
		void Restore() {
			this->MyDB->CUDQuery("UPDATE `tb_employees` SET `isDelete`=false WHERE (`id` = " + MyUtils::intToStdString(this->id) + ")");
		}
		void Delete() {
			this->MyDB->CUDQuery("DELETE FROM `tb_employees` WHERE (`id` = " + MyUtils::intToStdString(this->id) + ")");
		}
	};

	class Customer : public Person {
		// Properties
	private:
		MyDatabase* MyDB;
		unsigned int id, points;
		// Constructor and Destructor
	public:
		Customer(MyDatabase* const MyDB) {
			this->MyDB = MyDB;
			this->points = 0;
		}
		~Customer() {
			delete this->MyDB;
			this->points = 0;
		}
		// Setter and Getter of properties
	public:
		unsigned int getId() {
			return this->id;
		}
		void setId(unsigned int id) {
			this->id = id;
		}
		unsigned int getPoints() {
			return this->points;
		}
		void setPoints(unsigned int points) {
			this->points = points;
		}
		// Functions interactive with Database
	public:
		void Read(unsigned int id) {
			this->id = id;
			sql::ResultSet* res = this->MyDB->ReadQuery("SELECT * FROM `tb_customers` WHERE (`id` = " + MyUtils::intToStdString(this->id) + ") LIMIT 1");
			if (res->next()) {
				this->fullName = res->getString("fullname");
				this->sex = res->getBoolean("sex");
				this->address = res->getString("address");
				this->phone = res->getString("phone");
				this->points = res->getInt("points");
			}
		}
		void Create() {
			this->MyDB->CUDQuery("INSERT INTO `tb_customers` (`fullname`, `points`, `sex`, `address`, `phone`) VALUES ('" + this->fullName + "','" + MyUtils::intToStdString(this->points) + "','" + MyUtils::intToStdString(this->sex) + "','" + this->address + "','" + this->phone + "')");
		}
		void Update() {
			this->MyDB->CUDQuery("UPDATE `tb_customers` SET `fullname`='" + this->fullName + "', `points`='" + MyUtils::intToStdString(this->points) + "', `sex`='" + MyUtils::intToStdString(this->sex) + "', `address`='" + this->address + "', `phone`='" + this->phone + "' WHERE (`id` = " + MyUtils::intToStdString(this->id) + ")");
		}
		void MoveToTrash() {
			this->MyDB->CUDQuery("UPDATE `tb_customers` SET `isDelete`=true WHERE (`id` = " + MyUtils::intToStdString(this->id) + ")");

		}
		void Restore() {
			this->MyDB->CUDQuery("UPDATE `tb_customers` SET `isDelete`=false WHERE (`id` = " + MyUtils::intToStdString(this->id) + ")");
		}
		void Delete() {
			this->MyDB->CUDQuery("DELETE FROM `tb_customers` WHERE (`id` = " + MyUtils::intToStdString(this->id) + ")");
		}
	};

	class Bill {
		// Properties
	protected: string date, productIDs, quantityProducts;
			 unsigned int id, employeeID, totalPrice;
			 // Constructor and Destructor
	public:
		Bill() {
			this->date = this->productIDs = this->quantityProducts = "";
			this->id = this->employeeID = this->totalPrice = 0;
		}
		~Bill() {
			this->date = this->productIDs = this->quantityProducts = "";
			this->id = this->employeeID = this->totalPrice = 0;
		}
		// Setter and Getter of properties
	public:
		unsigned int getId() {
			return this->id;
		}
		void setId(unsigned int id) {
			this->id = id;
		}
		unsigned int getEmployeeID() {
			return this->employeeID;
		}
		void setEmployeeID(unsigned int employeeID) {
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
		MyDatabase* MyDB;
		unsigned int customerID;
		signed int discountByPoints;
		// Constructor and Destructor
	public:
		BillCustomer(MyDatabase* const MyDB) {
			this->MyDB = MyDB;
			this->customerID = this->discountByPoints = this->customerID = 0;
		}
		~BillCustomer() {
			delete this->MyDB;
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
		signed int getDiscountByPoints() {
			return this->discountByPoints;
		}
		void setDiscountByPoints(signed int discountByPoints) {
			this->discountByPoints = discountByPoints;
		}
		// Functions interactive with Database
	public:
		void Read(unsigned int id) {
			this->id = id;
			sql::ResultSet* res = this->MyDB->ReadQuery("SELECT * FROM `tb_bills` WHERE (`id` = " + MyUtils::intToStdString(this->id) + ") LIMIT 1");
			if (res->next()) {
				this->employeeID = res->getInt("employee_id");
				this->customerID = res->getInt("customer_id");
				this->productIDs = res->getString("product_ids");
				this->quantityProducts = res->getString("quantities");
				this->discountByPoints = res->getInt("discount");
				this->totalPrice = res->getInt("total_money");
				this->date = res->getString("date");
			}
		}
		void Create() {
			this->MyDB->CUDQuery("INSERT INTO `tb_bills` (`product_ids`, `quantities`, `total_money`, `employee_id`, `date`, `discount`, `customer_id`) VALUES ('" + this->productIDs + "','" + this->quantityProducts + "','" + MyUtils::intToStdString(this->totalPrice) + "','" + MyUtils::intToStdString(this->employeeID) + "','" + this->date + "','" + MyUtils::intToStdString(this->discountByPoints) + "','" + MyUtils::intToStdString(this->customerID) + "')");
		}
		void Delete() {
			this->MyDB->CUDQuery("DELETE FROM `tb_bills` WHERE (`id` = " + MyUtils::intToStdString(this->id) + ")");
		}
	};

	class BillImport : public Bill {
		// Properties
	private:
		MyDatabase* MyDB;
		// Constructor and Destructor
	public:
		BillImport(MyDatabase* const MyDB) {
			this->MyDB = MyDB;
		}
		~BillImport() {
			delete this->MyDB;
		}
		// Functions interactive with Database
	public:
		void Read(unsigned int id) {
			this->id = id;
			sql::ResultSet* res = this->MyDB->ReadQuery("SELECT * FROM `tb_imports` WHERE (`id` = " + MyUtils::intToStdString(this->id) + ") LIMIT 1");
			if (res->next()) {
				this->employeeID = res->getInt("employee_id");
				this->productIDs = res->getString("product_ids");
				this->quantityProducts = res->getString("quantities");
				this->totalPrice = res->getInt("total_money");
				this->date = res->getString("date");
			}
		}
		void Create() {
			this->MyDB->CUDQuery("INSERT INTO `tb_imports` (`product_ids`, `employee_id`, `quantities`, `total_money`, `date`) VALUES ('" + this->productIDs + "','" + MyUtils::intToStdString(this->employeeID) + "','" + this->quantityProducts + "','" + MyUtils::intToStdString(this->totalPrice) + "','" + this->date + "')");
		}
		void Delete() {
			this->MyDB->CUDQuery("DELETE FROM `tb_imports` WHERE (`id` = " + MyUtils::intToStdString(this->id) + ")");
		}
	};

	class Category {
		// Properties
	private:
		MyDatabase* MyDB;
		unsigned int id;
		string title;
		// Constructor and Destructor
	public:
		Category(MyDatabase* const MyDB) {
			this->MyDB = MyDB;
			this->id = 0;
			this->title = "";
		}
		~Category() {
			delete this->MyDB;
			this->id = 0;
			this->title = "";
		}
		// Setter and Getter of properties
	public:
		void setId(unsigned int id) {
			this->id = id;
		}
		unsigned int getId() {
			return this->id;
		}
		void setTitle(string title) {
			this->title = title;
		}
		string getTitle() {
			return this->title;
		}
		// Functions interactive with Database
	public:
		void Read(unsigned int id) {
			this->id = id;
			sql::ResultSet* res = this->MyDB->ReadQuery("SELECT * FROM `tb_prods_categories` WHERE (`id` = " + MyUtils::intToStdString(this->id) + ") LIMIT 1");
			if (res->next())
				this->title = res->getString("title");

		}
		void Create() {
			this->MyDB->CUDQuery("INSERT INTO `tb_prods_categories` (`title`) VALUES ('" + this->title + "')");
		}
		void Update() {
			this->MyDB->CUDQuery("UPDATE `tb_prods_categories` SET `title`='" + this->title + "' WHERE (`id` = " + MyUtils::intToStdString(this->id) + ")");
		}
		void MoveToTrash() {
			this->MyDB->CUDQuery("UPDATE `tb_prods_categories` SET `isDelete`=true WHERE (`id` = " + MyUtils::intToStdString(this->id) + ")");
		}
		void Restore() {
			this->MyDB->CUDQuery("UPDATE `tb_prods_categories` SET `isDelete`=false WHERE (`id` = " + MyUtils::intToStdString(this->id) + ")");
		}
		void Delete() {
			this->MyDB->CUDQuery("DELETE FROM `tb_prods_categories` WHERE (`id` = " + MyUtils::intToStdString(this->id) + ")");
		}
	};

	template <typename T>
	struct Node {
		T data;
		Node* next;
	};

	template <typename T>
	class LinkedList {
	private:
		Node<T>* head;
		long size;
	public:
		LinkedList() {
			this->head = NULL;
			this->size = 0;
		}
		~LinkedList() {}
		Node<T>* CreateNode(T v) {
			Node<T>* newNode = new Node<T>;
			newNode->data = v;
			newNode->next = NULL;
			return newNode;
		}
		void addFirst(const T v) {
			Node<T>* newNode = this->CreateNode(v);
			if (this->head == NULL)
				this->head = newNode;
			else {
				newNode->next = this->head;
				this->head = newNode;
			}
			this->size++;
		}
		Node<T>* getNodeByID(unsigned int id) {
			for (Node<T>* i = this->head; i != NULL; i = i->next)
			{
				if (i->data.id == id) {
					return i;
				}
			}
			return NULL;
		}
		Node<T>* getHead() {
			return this->head;
		}
		void clearLinkedList() {
			if (this->size > 0) {
				Node<T> *temp = this->head, *next;
				while (temp->next != NULL)
				{
					next = temp->next;
					delete temp;
					temp = next;
				}
				this->size = 0;
				this->head = NULL;
			}

		}
	};

}


namespace MyStructs {

	using namespace std;

	struct Product {
		unsigned int id, importPrice, sellPrice, quantity;
		string name;
	};
	struct Employee {
		string fullName;
		unsigned int id;
	};
	struct Customer {
		string fullName;
		unsigned int id;
		signed int points;
	};
	struct Category {
		unsigned int id;
		string title;
	};
}


class APP_SESSION {
public:
	static MyDatabase* MyDB;
	static MyObjects::Employee* currentUser;
	static bool isLogin;
	static MyObjects::LinkedList<MyStructs::Product> ListProducts;
	static MyObjects::LinkedList<MyStructs::Employee> ListEmployees;
	static MyObjects::LinkedList<MyStructs::Customer> ListCustomers;
	static MyObjects::LinkedList<MyStructs::Category> ListCategories;
public:
	APP_SESSION() {
		this->MyDB->Connect();
		this->currentUser = new MyObjects::Employee(this->MyDB);
		this->currentUser->setId(0);
		fillListProducts();
		fillListEmployees();
		fillListCustomers();
		fillListCategories();
	}
	~APP_SESSION() {}
	static void fillListProducts() {
		APP_SESSION::ListProducts.clearLinkedList();
		sql::ResultSet* res = APP_SESSION::MyDB->ReadQuery("SELECT `id`, `name`, `quantity`, `import_price`, `sell_price` FROM `tb_products` WHERE (`isDelete` = 0)");
		while (res->next())
		{
			MyStructs::Product Product;
			Product.id = res->getInt("id");
			Product.name = res->getString("name");
			Product.quantity = res->getInt("quantity");
			Product.importPrice = res->getInt("import_price");
			Product.sellPrice = res->getInt("sell_price");
			APP_SESSION::ListProducts.addFirst(Product);
		}
	}
	static void fillListEmployees() {
		APP_SESSION::ListEmployees.clearLinkedList();
		sql::ResultSet* res = APP_SESSION::MyDB->ReadQuery("SELECT `id`, `fullname`, `sex`, `address`, `phone` FROM `tb_employees` WHERE (`isDelete` = 0)");
		while (res->next())
		{
			MyStructs::Employee employee;
			employee.id = res->getInt("id");
			employee.fullName = res->getString("fullname");
			APP_SESSION::ListEmployees.addFirst(employee);
		}
	}
	static void fillListCustomers() {
		APP_SESSION::ListCustomers.clearLinkedList();
		sql::ResultSet* res = APP_SESSION::MyDB->ReadQuery("SELECT `id`, `fullname`, `points` FROM `tb_customers` WHERE (`isDelete` = 0)");
		while (res->next())
		{
			MyStructs::Customer customer;
			customer.id = res->getInt("id");
			customer.fullName = res->getString("fullname");
			customer.points = res->getInt("points");
			APP_SESSION::ListCustomers.addFirst(customer);
		}
	}
	static void fillListCategories() {
		APP_SESSION::ListCategories.clearLinkedList();
		sql::ResultSet* res = APP_SESSION::MyDB->ReadQuery("SELECT `id`, `title` FROM `tb_prods_categories` WHERE (`isDelete` = 0)");
		while (res->next())
		{
			MyStructs::Category category;
			category.id = res->getInt("id");
			category.title = res->getString("title");
			APP_SESSION::ListCategories.addFirst(category);
		}
	}
};
MyDatabase* APP_SESSION::MyDB = new MyDatabase();
MyObjects::Employee* APP_SESSION::currentUser;
bool APP_SESSION::isLogin = false;
MyObjects::LinkedList<MyStructs::Product> APP_SESSION::ListProducts;
MyObjects::LinkedList<MyStructs::Employee> APP_SESSION::ListEmployees;
MyObjects::LinkedList<MyStructs::Customer> APP_SESSION::ListCustomers;
MyObjects::LinkedList<MyStructs::Category> APP_SESSION::ListCategories;
