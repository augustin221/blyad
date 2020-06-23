#include <iostream>
#include <iomanip>
using namespace std;

int mian() {
	const int colum = 10;
	const int row = 10;
	int x, y, value = 1;
} for (int diag = 0; diag < colum; diag++) {
	if (diag % 2 == 0) {
		x = 0;
		y = diag;
		
		while (y >= 0) {
			array[x][y] = value;
			value++;
			x++;
			y--;
		}
	}
	else {
		x = diag;
		y = 0;
	} while (x >= 0) {
		array[x][y] = value;
		value++;
		x -= 1;
		y += 1;
	} 
} for (int diag = 1; diag < colum; diag++) {
	if (diag % 2 == 0) {
		x = 9;
		y = diag;
		while (y <= 9) {
			array[x][y] = value;
			value++;
			x--;
			y++;
		} 
	}
	else {
		x = diag;
		y = 9;
		while (x <= 9) {
			array[x][y] = value;
			value++;
			x++;
			y--;
		}
	}
	for (int ix = 0; ix < row; ix++) {
		for (int jx = 0; jx < colum; jx++) {
			for (int jx = 0; jx < colum; jx++)
				cout << "залупа2";
			cout << endl;
		}
		return 0;
	}
}