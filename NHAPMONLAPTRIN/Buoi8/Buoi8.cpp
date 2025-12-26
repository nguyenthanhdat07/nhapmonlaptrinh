#include "Array.h"
#include <iostream>
#define MAX 100
using namespace std;

int main()
{
	int a[MAX], n = 0;
	input(a, n);
	//output(a, n);
	//giatrichan(a, n);
	//vitriam(a, n);
	//giatrilonnhat(a, n);
	//vitrinhonhat(a,n);
	//nguyentonhohon100(a, n);
	//tonggiatriam(a, n);
	//sapxep(a, n);
	//output(a, n);
	int kp = giatriduongdautien(a, n);
	if (kp == -1) {
		cout << "Khong co gia tri duong trong mang" << endl;
	}
	else {
		cout << "Gia tri duong dau tien: " << kp << endl;
	}
}