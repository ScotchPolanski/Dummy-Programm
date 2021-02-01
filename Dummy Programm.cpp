#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
		// Deklarationen

		int varInt = 123456;
		string varString = "DefaultString";
		char arrChar[128] = "Long char array right there ->";
		int* ptr2int = &varInt;
		int** ptr2ptr = &ptr2int;
		int*** ptr2ptr2 = &ptr2ptr;

		// Konsolenausgabe

	do
	{
		cout << "Process ID: " << GetCurrentProcessId() << endl;
		cout << endl;
		cout << "varInt (0x" << &varInt << ") = " << varInt << endl;
		cout << "varString (0x" << &varString << ") = " << varString << endl;
		cout << "arrChar[128] (0x" << &arrChar << ") = " << arrChar << endl;
		cout << endl;
		cout << "ptr2int (0x" << &ptr2int << ") = " << ptr2int << endl;
		cout << "ptr2ptr (0x" << &ptr2ptr << ") = " << ptr2ptr << endl;
		cout << "ptr2ptr2 (0x" << &ptr2ptr2 << ") = " << ptr2ptr2 << endl;
		cout << endl;
		cout << "Press ENTER to print again.\n";
		cout << endl;
		cout << endl;
		cout << "----------------------------------------------------------\n";
		getchar();

	} while (true);
}