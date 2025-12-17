#include <iostream>
using namespace std;

void cau11() {
	int sotien;
	cout << "Nhap so tien: ";
	cin >> sotien;
	for (int i = 0; i <= 100; i++) {
		for (int j = 0;j <= 100; j++) {
			for (int k = 0;k <= 100; k++) {
				if (i * 10000 + j * 20000 + k * 50000 == sotien) {
					cout << i << "x10000+" << j << "x20000+" << k << "x50000" << endl;
				}
			}
		}
	}
}