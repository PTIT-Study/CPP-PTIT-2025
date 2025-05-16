#include <iostream>
using namespace std;


void printLine() {
	cout << "\n========================================\n";
}

void ClearScreen()
{
#ifdef _WIN32
    std::system("cls");
#else
    std::system("clear");
#endif
}
