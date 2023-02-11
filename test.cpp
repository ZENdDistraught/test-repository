#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double a, b;
	cout << "Введите через пробел значения: ";
	cin >> a >> b;

	int c = a;
	int d = b;

	if (b == 0) {
		cout << "введите значение не равное 0: ";
		cin >> b;
		if (b == 0) {
			cout << "На 0 делить нельзя!!!";
		}
		else
		{
			cout << a / b << endl
				 << c / d << endl;
		}
	} else {
		cout << a / b << endl
			 << c / d << endl;
	};
}