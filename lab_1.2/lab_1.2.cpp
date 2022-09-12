#include <iostream>
using namespace std;
int main() {
	float n, m, a, b, c;
	cin >> n;
	cin >> m;
	a = ++n * ++m; // (++)перед исполнением кода увелич знач на единицу 
	cout << "\n1)" << a;
	cout << "\n";
	b = m++ < n;  =
	cout << "\n2)" << b;
	cout << "\n";
	c = n++ > m;
	cout << "\n3)" << c;
	cout << "\n";
}
