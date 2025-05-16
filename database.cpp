#include "database.h"
#include <stdexcept>
#include <string>
#include <iostream>
using namespace std;

UserDB::UserDB(char* filename) {
	if (sqlite3_open(filename, &db) != SQLITE_OK)
	{
		throw std::runtime_error("Khong mo duoc DB");
	}
}
UserDB::~UserDB() {
	sqlite3_close(db);
}

int UserDB::addAccount(string username, string password) {
//	string sql = "INSERT INTO users (username, password) VALUES ('" + username + "', '" + password + "');";
//	char* errMsg = nullptr;
//	int rc = sqlite3_exec(db, sql.c_str(), nullptr, nullptr, &errMsg);
//	if (rc != SQLITE_OK) {
//		cout << "Loi khi dang ky: " << errMsg << endl;
//		sqlite3_free(errMsg);
//		return 1;
//	}
//	return 0;
}


