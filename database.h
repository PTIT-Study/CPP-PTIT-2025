#ifndef DATABASE_H
#define DATABASE_H

#include "libs/sqlite3.h"
#include <string>

class UserDB {
    private:
	sqlite3* db;
	public:
        UserDB(char* filename);
        int addAccount(std::string username, std::string password);
};
#endif // DATABASE_H
