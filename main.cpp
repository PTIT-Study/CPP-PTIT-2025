#define NOMINMAX
#include <iostream>
#include <string>

using namespace std;


int isLoggedIn = 0;
int isAdmin = 0;
int isSuperAdmin = 0;
int isGuest = 0;
char charInput;


int homePage() {
	char ch;
	//cout << "\033[2J\033[1;1H";
	cout << "=============================\n";
	cout << "He thong quan ly diem thuong! \n";
	cout << "1. Dang nhap \n";
	cout << "2. Dang ky \n";
	cout << "3. Quen mat khau \n";
	cout << "4. Thoat \n";
	cout << "=============================\n";

	cout << "Vui long nhap so ban muon: \n";
	cin >> ch;
	cout << "\n;;;;;;;;;;;;;;;;;;;;;;;;";
	if (!isdigit(ch))
	{
		cout << "Khong phai so";
		return false;
		// In ra thong bao loi khi nhap vao ki tu khong phai so
	}
	else
	{
		return ch;
	}
}

int register() {
	char username, password;
	cout << 'Nhap ten tai khoan: \n';
	cin >> username;
	cout << 'Nhap mat khau: \n';
}


int main() {
	bool closeApp = false;
	while (true) {
		charInput = homePage();
		cout << charInput;
		if (charInput)
		{
			break;
		}
	}
	cout << "Xuong day";
	switch (charInput)
	{
	case '1':
		cout << "Nhap 1";
		break;
	case '2':
		cout << "Nhap 2";
		//register();
		//return main();
	case '3':
		return main();
	default:
		break;
	}
	return 0;
		
}