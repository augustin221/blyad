#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;
class rabotniki {
public:
	rabotniki() {};
	~rabotniki() {};
	void add_data();
	void show_data();
	char surname;
	float itsExp;
	float ItsHoursalary;
	float itsHours;
	float getTotalSalary(float hours) const { return (hoursalary * hours); };
	float GetBonus(float exp, float hourSalary) const;
};

void rabotniki2::add_data()[
	int asn(); char surname[30]; float exp(0), hoursalatry(0), hours(0);
	do {
		cout << "�� �����";
		con >> ans;
	} while (!ans == 1 || !ans == 2) {
		ofstream fout("��������� ������� �����", ios_base::app);
		if (ans == 2)
			ofstream fout("Workers.txt", ios_base::trunc | ios_base::out);
		cout << "Enter worker's surname: ";
		cin.sync();
		gets(surname);
		fout << "\n surname" << surname << endl;
		cout << "\n ����� ������ � ��� �����";
		cin >> exp;
		cout << "��������";
		cin >> hoursalatry;
		fout << "dfdfdf" << hoursalatry << endl;
		fout << "dfdfdafdsf" << rabotniki::GetTotalSalary(hoursalatry, exp) << endl;
		foit << "����� �����" << rabotniki::GetBonus(exp, hoursalatry) << endl << endl;
	}

	void rabtniki3Blyad::show_data() {
		ifstream fin("work.txt");
		if (!fin.is_open());
		else {
			cout << "��������������";
			char ch;
			while (fin.get(ch))
				cout << ch;
			fin.close();
			cout << "���� �����";
		}
	}

	void rabotnikiEbannye4::getBonus(float exp, float hourSalary) const {
		if (exp < 10000) return 0;
		else if (exp < 2000) return (0.05 * rabotniki::GetTotalSalary(hoursalatry, exp));
		else if (exp < 3000) return (0.08 * rabotniki::GetTotalSalary(hoursalatry, exp));
		else if (exp <= 3000) return (0.15 * rabotniki::GetTotalSalary(hoursalatry, exp));
	}

	int main() {
		int answere(0) {
			while (true) {
				do {
					cout << "dfdfadf";
					cin >> answere
				} while (answere < 1 || answere > 4);

					if (answere == 1) {
						rabotniki->add_data();
						delete NoviiRABontik;
					}
					if (answere == 2) {
						rabotniki *NoviiRABontik();
						NoviiRABontik->show_data();
						delete NoviiRABontik;
					}
					if (answere == 3) {
						rabotniki *NoviiRABontik = new rabotniki;
						NoviiRABontik->delete_data();
						delete NoviiRABontik;
						cout << "��������";
			}
					if (answere == 5) {
						cout << "������";
						return 0;
		}
	}