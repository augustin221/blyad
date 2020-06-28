#include <cstdlib>
#include <iostream>
using namespace std;

char str[80];
int choice, res;
int max_count(char str[80]);

int main()
{
	cout << "Menu:\n1-To enter the string\n2-To process the data\n3-To see result\n0-Exit\n";
	cin >> choice;
	while (choice) {

		switch (choice) {
		case 1:
			cout << "Enter the string:\n";
			cin.get();
			cin.getline(str, 80);
			break;
		case 2:
			cout << "Processing the data..\n";
			res = max_count(str);
			break;
		case 3:
			cout << "\nYour result: " << res << "\n";
			break;
		case 0:
			exit(1);
			break;
		default:
			cout << "\nPlease, enter 0, 1 or 2\n";
			break;
		}
		cout << "\nPlease, enter your choice: ";
		cin >> choice;
	}
	return 0;
}

int max_count(char str[80])
{
	char *p = str;
	int n;
	int maxi = 0;

	while (*p != 0) {
		n = 1;
		while (*p == *(p + 1)) {
			n++;
			p++;
		}

		if (maxi < n) {
			maxi = n;
		}
		p++;
	}
	return maxi;
}