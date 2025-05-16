#include "user.h"
#include <iostream>
#include <string>

using namespace std;

int User::registerAccount(string* notifyHomepage) {
	
	cout << "Register Account\n";
	cout << "Register Account\n";
	string username, password;
	cout << "Nhap ten tai khoan: \n";
	cin.ignore(10000, '\n');
	getline(cin, username);
	cout << "Nhap mat khau: \n";
	cin.ignore(10000, '\n');
	getline(cin, password);
    *notifyHomepage = "Da dang ky voi ten: " + username + " va mat khau: " + password;
	return 0;
}
