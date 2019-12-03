#include <iostream>
using namespace std;

int result = 1; 

int power(int base,int exp) {
	if (exp <= 1)
		return base;
	else {
		result = base*power(base,exp-1);
		return result;
	}
}
int main() {
	int base, exp;
	cout << "Enter base: ";
	cin >> base;
	cout << "Enter exponent: ";
	cin >> exp;
	cout << base << "^" << exp << " = " << power(base, exp);
}