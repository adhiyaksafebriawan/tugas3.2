#include <iostream>
using namespace std;

int main()
{
	int data, ganjil = 0, genap = 0;
	cout << "Masukan jumlah data:"; cin >> data;

	for (int i = 0; i <= data; i++) {
		if (i % 2 == 0) {
			genap += i;
		}else {
			ganjil += i;
		}
	}

	cout << "Jumlah total bilangan ganjil: " << ganjil;
	cout << "\nJumlah total bilangan genap :s" << genap;

	return 0;
}