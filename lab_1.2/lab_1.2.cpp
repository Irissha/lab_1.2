#include <iostream>
using namespace std;
int main() {
	float n, m, a, b, c;
	 
	setlocale(LC_ALL, "rus");

	cout << "Введите два числа: ";
	cin >> n;
	cin >> m;
	a = ++n * ++m;

	cout << " ++n * ++m => " << a << "\n";

	b = m++ < n;
	cout << " m++ < n => " << b << "\n";

	c = n++ > m;
	cout << " n++ > m => " << c << "\n";
}
