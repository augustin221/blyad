#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus"); // ��������� � �������
	double x; // �������� ��� ������
	cout << "������� x: ";
	cin >> x;

	double yi = x, // ��������� �������� y
		yi1 = 0; // �������� yi+1

	while (true)
	{
		yi1 = 0.5 * (yi + 3 * x / (2 * yi * yi + x / yi)); // ������������ ������� ���������� ����� �����������

		if (abs(yi1 - yi) < pow(10.0, -5.0)) // ������� ��������� ��������
			break; // ����� �� �����

		yi = yi1; // ��������� ������� �������� y
	}

	cout << yi << endl;

	system("pause");
