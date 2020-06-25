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
		cout << "ты пидар";
		con >> ans;
	} while (!ans == 1 || !ans == 2) {
		ofstream fout("работники ебанные бл€ть", ios_base::app);
		if (ans == 2)
			ofstream fout("Workers.txt", ios_base::trunc | ios_base::out);
		cout << "Enter worker's surname: ";
		cin.sync();
		gets(surname);
		fout << "\n surname" << surname << endl;
		cout << "\n етнре воркер с иди нахуй";
		cin >> exp;
		cout << "вавпариа";
		cin >> hoursalatry;
		fout << "dfdfdf" << hoursalatry << endl;
		fout << "dfdfdafdsf" << rabotniki::GetTotalSalary(hoursalatry, exp) << endl;
		foit << "бонус бл€ть" << rabotniki::GetBonus(exp, hoursalatry) << endl << endl;
	}

	void rabtniki3Blyad::show_data() {
		ifstream fin("work.txt");
		if (!fin.is_open());
		else {
			cout << "ЅЋяяяяяяяяяяяя";
			char ch;
			while (fin.get(ch))
				cout << ch;
			fin.close();
			cout << "вова пидар";
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
						cout << "«јјјЋ”ѕј";
			}
					if (answere == 5) {
						cout << "залупа";
						return 0;
		}
	}