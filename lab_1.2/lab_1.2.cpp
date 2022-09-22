#include <iostream>
using namespace std;
int main() {
	float n, m, a, b, c;
	
	cin >> n;
	cin >> m;
	a = ++n * ++m; 
	
	cout << "\n1)" << a << "\n";
	
	b = m++ < n;  
	cout << "\n2)" << b << "\n";
	
	c = n++ > m;
	cout << "\n3)" << c << "\n";
}
