#include <iostream>

using namespace std;

void printAllToN(int n) {
	int i = 1;
	while (i < n + 1)
	{
		cout << i++ << endl;
	}
}

int Sum(int n) {
	if (n > 0)
		return n + Sum(n - 1);
	else
		return 0;
}

int main()
{
	int n;
    cout << "Enter a number: ";
	cin >> n;
	cout << "From 1 to " << n << ":\n";
	printAllToN(n);
	cout << endl;
	cout << "Sum of theese numbers: " << Sum(n);
}