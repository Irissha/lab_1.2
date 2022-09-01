#include <iostream>
using namespace std;
int main()
{
	float n, m, a, b, c;
	cin >> n;
	cin >> m;
	a = ++n * ++m; // (++n)перед исполнением кода увелич знач на единицу 
	cout << a << endl;

	cin >> n;
	cin >> m;
	b = m++ < n; // (m++)после исполнением кода увелич знач на единицу
	cout << b << endl;

	cin >> n;
	cin >> m;
	c = n++ > m;
	cout << c << endl;
}
