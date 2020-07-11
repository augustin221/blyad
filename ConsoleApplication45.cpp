#include <iostream>
#include <list>

using namespace std;

int main() {
	{
		list L;
		for (int i = 0; i < 10; i++)
			L.push_back(i + 1);
		L.print();
	}
	return 0;
}