#include "header.h"


int main() {
	cout << "Hello GIT";
	int a, b;
	cout << "Enter 2 n - ";
	cin >> a >> b;
	int choose;
	cin >> choose;
	cout << "1.a+b\n";
	cout << "2.a-b\n";
	cout << "3.a*b\n";
	cout << "4.a/b\n";
	switch (choose)
	{
	case 1:
		int res_sum = sum(a, b);
		cout << res_sum;
	case 2:
		int res_min = dif(a, b);
		cout << res_min;
	case 3:
		int res_multy = multy(a, b);
		cout << res_multy;
	case 1:
		int res_dis = dis(a, b);
		cout << res_dis;
	default:
		break;
	}

}