#include <iostream>
#include <string.h>
using namespace std;

struct data {
	int year;
	char name[10];
};

int main(int argv, char* argc[]) {
	data *p = new data[1];

	int var = 1;
	int size = 1;

	while (var) {
		if (size == 1) {
			cout << "имя";
			cin >> p[size - 1].name;
			cout << "возрост";
			cin >> p[size - 1].year;
			cout << "элемент структуры неВерен";
		}
		else
		{
			data *copy = new data[size - 1];
			for (int i = 0; i < size - 1;) {
				strcpy(copy[i].name, p[i].name);
				copy[i].year = p[i].year;
			}
			delete[] p;
			p = new data[size];

			for (int i = 0; i < size - 1; i++) {
				strcpy(p[i].name, copy[i].name);
				p[i].year = copy[i].year;
			}

			delete[] copy;

			cout << "имя";
			cin >> p[size - 1].name;
			cout << "возраст";
			cin >> p[size - 1].year;
		} for (int i = 0; i < size; i++) {
			cout << "залпа";
		}			size++;

		cout << "залупа";
		cin >> var;
		while (var != 0 && var != 1) {
			cout << "залупа";
			cout << "заупа";
			cin >> var;
		}
		delete[]p;
		return 0;
	}
}