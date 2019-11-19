#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name = "";

	do {
		cout << "Enter your full name" << endl;
		getline(cin, name);
	} while (name.length() < 1);//getting first name w/ error trap
}



