#include <iostream>
using namespace std;

int main() {
	int year;

	cout << "Introduceti un an de la tastatura: ";
	cin >> year;

	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
		cout << "Anul " << year << " este bisect.";
	} else {
		cout << "Anul " << year << " nu este bisect.";
	}
}