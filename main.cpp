//cl .\main.cpp libs\sqlite3.c / Ilibs / Fe:main.exe / EHsc
//cl main.cpp user.cpp libs\sqlite3.c / Ilibs / Fe:main.exe / EHsc; .\main.exe
#include <iostream>
#include <string>
#include "user.h"
#include "helpers/terminal.h"

using namespace std;


int isLoggedIn = 0;
int isAdmin = 0;
int isSuperAdmin = 0;
int isGuest = 0;
char charInput;
bool clrScr = false;
string msgNoti = "";
string *ptrNoti = &msgNoti;

int homePage(bool clear = false) {
	cin.clear();
	char ch;
	if (clear)
	{
		ClearScreen();
	}
	if (*ptrNoti != "") {
        printLine();
        cout << *ptrNoti;
//        printLine();
	}
	printLine();
	cout << "He thong quan ly diem thuong! \n";
	cout << "1. Dang nhap \n";
	cout << "2. Dang ky \n";
	cout << "3. Quen mat khau \n";
	cout << "4. Thoat \n";
	printLine();

	cout << "Vui long nhap so ban muon: \n";
	cin >> ch;
	//cin.ignore(1000, '\n');
	if (!isdigit(ch))
	{
		cout << "Khong phai so";
		ch = false;
		// In ra thong bao loi khi nhap vao ki tu khong phai so
	}

	return ch;
}


int main() {
	User user;
	bool closeApp = false;
	charInput = homePage(clrScr);
	cout << charInput;
	cout << "\nBen tren la charInput\n";
	switch (charInput)
	{
	case '1':
		cout << "Nhap 1";
		break;
	case '2':
		cout << "Nhap 2\n";
		int rrrr;
		rrrr = user.registerAccount(ptrNoti);
		clrScr = true;
		return main();
	case '3':
		return main();
	case '4':
		return 0;
	default:
		printLine();
		cout << "Thao tac khong ton tai, vui long nhap lai";
		printLine();
		return main();
		break;
	}
	return 0;

}
