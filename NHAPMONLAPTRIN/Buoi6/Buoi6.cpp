#include <iostream>
using namespace std;
void cau1(){
    for (int i = 1; i < 5; i++) {
        cout << "For Xin chao: " << i << endl;
    }
    int j = 1;
    while (j <=5) {
        cout << "While Hello: " << j << endl;
        j++;
    }
    int k = 1;
    do {
        cout << "Do..While Hello :" << k << endl;
        k++;
    } while (k <= 5);
}
void cau2() {
    int n, tong = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        tong += i;
    }
    cout << "Tong: " << tong << endl;
}
void cau3() {
    int n, tich = 1;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        tich *= i;
    }
    cout << "Tich: " << tich << endl;
}
void cau4() {
    int x, n, tich = 1;
    cout << "Nhap x, n: ";
    cin >> x >> n;
    for (int i = 1; i <= n; i++) {
        tich *= x;
    }
    cout << "Tich: " << tich << endl;
}
void cau5() {
    int n;
    cout << "Nhap bang cuu chuong: ";
    cin >> n;

    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}
void cau6() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << endl;
        }
    }
}
void cau7() {
    int n, tong = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }

    cout << "Tong cac uoc: " << tong << endl;
}
void cau8() {
    int n, tong = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }

    if (tong == n) {
        cout << n << " la so hoan thien" << endl;
    }
    else {
        cout << n << " khong la so hoan thien" << endl;
    }
}

int main() {
    cau1,();
}