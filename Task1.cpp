#include <iostream>
using namespace std;

int sum(int a) {
	if (a <= 1)
		return 1;
	else
		return a + sum(a - 1);
}
int main() {
	int a;
	cout << "Ente a positive integer: ";
	cin >> a;
	cout << "Sum = " << sum(a);
}