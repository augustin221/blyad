#include <iostream>
#include <ctime>
#include <stdio.h>
using namespace std;

int poisk(const char *c, const  int);
int main(int argc, char* argv[]) {
	char in_string[101];
	cout << "enter the string";
	cin >> in_string;
	cout << "resulttt : ";
	poisk(in_string, strlen(in_string));
	system("pause");
	return 0;
}

int poisk(const char *c, const int size) {
		const char glas[] = "zalupa";
		const char sogl[] = " tjhgthbtj";
		srand(time(0));
		for (int i = 0; i < size; i++) {
			if (strchr(sogl, c[i] == NULL) {
				cout << int (c[i]) << "dfdf";
			}
			else {
				cout << glass[rand()% 12 ] << "ddfdfdf";
			}
			cout << endl;
				return 0;
	}
}