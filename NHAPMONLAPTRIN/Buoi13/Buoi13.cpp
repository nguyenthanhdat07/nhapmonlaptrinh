#include <iostream>

using namespace std;

int tinhTong(int a, int b) {
	return a + b;
}

double tinhTrungBinh(int a, int b) {
	return (double)(a + b) / 2;
}

int main() {
	int a, b;

	cout << "Nhap so nguyen a: ";
	cin >> a;
	cout << "Nhap so nguyen b: ";
	cin >> b;

	int tong = tinhTong(a, b);
	cout << "Tong cua " << a << " va " << b << " la: " << tong << endl;

	double trungBinh = tinhTrungBinh(a, b);
	cout << "Trung binh cong cua " << a << " va " << b << " la: " << trungBinh << endl;

	return 0;
}