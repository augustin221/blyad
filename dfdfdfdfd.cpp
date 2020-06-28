#include <iostream>

int àddRightDigit(int d, int& k)
{
	if (k >= 0)
		return k * 10 + d;
	if (k < 0)
		return k + d;
}

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "int max: 2147483647" << endl;
	int d, k;
	cout << "k: ";
	cin >> k;

	while (true)
	{
		cout << "d: ";
		cin >> d;
		if (d >= 0 && d <= 9)
		{
			k = àddRightDigit(d, k);
			cout << "k: " << k << endl;
		}
		else
			cout << "!!!" << endl;
	}

	system("pause");

	return 0;
}