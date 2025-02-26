#include <iostream>
using namespace std;

int main() {
	int x;
	cout << "Introdu un numar de la tastatura:";
	cin >> x;
	float discount = x * (19 / 100);
	cout << discount;
}