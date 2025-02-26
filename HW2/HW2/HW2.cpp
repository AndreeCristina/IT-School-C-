#include <iostream>
using namespace std;

int main() {
// 1. Sa se afiseze pe ecran daca anul citit de la tastatura este bisect sau nu. 
	/*int year;

	cout << "Introduceti un an de la tastatura: ";
	cin >> year;

	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
		cout << "Anul " << year << " este bisect.";
	} else {
		cout << "Anul " << year << " nu este bisect.";
	}*/


// 2. Sa se calculeze 5!(factorial) fara a folosi bucle. 
	/*int result = 5 * 4 * 3 * 2 * 1;
	cout << "5! este egal cu: " << result;
	*/

// 3. Sa se implementeze o expresie logica folosind operatorii logici &&, ||, si sa se afiseze rezultatul. 
	/*int a, b, c;
	cout << "Introduceti trei numere de la tastatura: ";
	cin >> a >> b >> c;
	if ((a < b && b < c) || (c > b && b > a)) {
		cout << "Numarul " << c << " este cel mai mare numar din cele trei numere introduse.";
	} else {
		cout << "Numarul " << c << " nu este cel mai mare numar din cele trei numere introduse.";
	}
	*/
// 4. Sa se foloseasca operatori aritmetici si operatori de atribuire compusi (+=, -=, *=, /=) 
// pentru a actualiza valoarea unei variabile in functie de o expresie aritmetica (o operatie matematica la alegere)
	int a = 6, b = 3;

	a += b;
	cout << "Valoarea lui a dupa a += b este: " << a << "\n";

	a -= b;
	cout << "Valoarea lui a dupa a -= b este: " << a << "\n";

	a *= b;
	cout << "Valoarea lui a dupa a *= b este: " << a << endl;

	a /= b; 
	cout << "Valoarea lui a dupa a /= b este: " << a << endl;

	return 0;
}