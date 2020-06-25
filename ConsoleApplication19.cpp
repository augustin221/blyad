#include <iostream>
#include <cassert>
using namespace std;

struct Time
{
	int sec;
	int min;
	int hour;
};

Time inTime();

int main()
{
	Time myTime = inTime();

	int numSec;
	cout << "Введите количество секунд: ";
	cin >> numSec;
	assert(numSec >= 0);

	int res = (myTime.sec + (myTime.min * 60) + (myTime.hour * 3600) - numSec); // перевод в секунды
	myTime.hour = res / 3600;
	myTime.min = (res %= 3600) / 60;
	myTime.sec = res % 60;
	cout << "Оставшееся время: " << myTime.hour << ":" << myTime.min << ":" << myTime.sec << endl;

	cout << "Введите первый момент времени\n";
	Time myTime1 = inTime();
	cout << "Введите второй момент времени\n";
	Time myTime2 = inTime();

	int sec1 = (myTime1.sec + (myTime1.min * 60) + (myTime1.hour * 3600)),
		sec2 = (myTime2.sec + (myTime2.min * 60) + (myTime2.hour * 3600));

	if (sec1 > sec2)
		sec1 -= sec2;
	else
		sec1 = sec2 - sec1;

	cout << "Количество секунд между введенными моментами времени: " << sec1 << endl;

	return 0;
}

// ввод времени
Time inTime()
{
	Time t;
	cout << "Введите значения времени!\n>> часы: ";
	cin >> t.hour;
	assert(t.hour >= 0 && t.hour <= 24);

	cout << ">>минуты: ";
	cin >> t.min;
	assert(t.min >= 0 && t.min < 60);

	cout << ">>секунды: ";
	cin >> t.sec;
	assert(t.sec >= 0 && t.sec < 60);
	return t;
}