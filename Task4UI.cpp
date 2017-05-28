#include <iostream>

using namespace std;

int findDifferentRepresentations(int number)
{
	int k = 0;
	int a = number - 1;
	int b;

	while (a > number / 2)
	{
		b = number - a;
		k += 1 + findDifferentRepresentations(b);
		a -= 1;
	}

	return k;
}

int main()
{
	int n;

	cout << "Enter a natural number: ";
	cin >> n;

	while (true)
	{
		if (n > 0)
			break;

		cout << "Wrong input! Enter a natural number: ";
		cin >> n;
	}

	cout << "Number of different representations of " << n << ": " << findDifferentRepresentations(n) << endl;

	system("pause");
	return 0;
}