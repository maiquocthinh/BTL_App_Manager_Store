#include <iostream>
#include <string>
#include <cstdio>
#include <windows.h>
#include <mysql_connection.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/statement.h>
#include <cppconn/resultset.h>
#pragma once

#define HOST "sql8.freesqldatabase.com"
#define PORT 3306
#define USER "sql8522767"
#define DBNAME "sql8522767"
#define PASS "DTJFCFAR1n"

class MyDatabase {
private:
	sql::Driver* driver = NULL;
	sql::Connection* con = NULL;
	sql::Statement* stmt = NULL;
	sql::ResultSet* res = NULL;

public:
	MyDatabase();
	~MyDatabase();
	void Connect();
	void Close();
	void CUDQuery(std::string query);
	sql::ResultSet* ReadQuery(std::string query);
};

MyDatabase::MyDatabase() {}
MyDatabase::~MyDatabase() {
	delete this->stmt;
	delete this->res;
	delete this->con;
}

void MyDatabase::Connect() {
	try
	{
		sql::ConnectOptionsMap connection_properties;
		connection_properties["hostName"] = HOST;
		connection_properties["userName"] = USER;
		connection_properties["password"] = PASS;
		connection_properties["schema"] = DBNAME;
		connection_properties["port"] = PORT;
		connection_properties["OPT_CHARSET_NAME"] = "utf8";
		connection_properties["characterSetResults"] = "utf8";

		this->driver = get_driver_instance();
		this->con = this->driver->connect(connection_properties);
		this->con->setSchema(DBNAME);
		std::cout << "Database Connected!" << std::endl;
	}
	catch (sql::SQLException& e) {
		using namespace std;
		cout << "# ERR: " << e.what();
		cout << " (MySQL error code: " << e.getErrorCode();
		cout << ", SQLState: " << e.getSQLState() << " )" << endl;
	}
}

void MyDatabase::Close() {
	this->con->close();
	std::cout << "Database Disconnected!" << std::endl;
}

sql::ResultSet* MyDatabase::ReadQuery(std::string query) {
	SetConsoleOutputCP(CP_UTF8);
	try
	{
		this->stmt = this->con->createStatement();
		this->res = this->stmt->executeQuery(query);
		return this->res;
	}
	catch (sql::SQLException& e) {
		using namespace std;
		cout << "# ERR: " << e.what();
		cout << " (MySQL error code: " << e.getErrorCode();
		cout << ", SQLState: " << e.getSQLState() << " )" << endl;
	}

}

void MyDatabase::CUDQuery(std::string query) {
	try
	{
		this->stmt = this->con->createStatement();
		this->stmt->execute(query);
	}
	catch (sql::SQLException& e) {
		using namespace std;
		cout << "# ERR: " << e.what();
		cout << " (MySQL error code: " << e.getErrorCode();
		cout << ", SQLState: " << e.getSQLState() << " )" << endl;
	}
}
