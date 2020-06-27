#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int answer = 0;// ответ пользователя
	char *name = new char[30];//сюда считаем Имя пользователя

	//набор поздравительных строк
	char str1[] = " ,от всей души поздравляем Вас!!!";
	char str2[] = " Все цветы у Ваших ног,  ";
	char str3[] = "!!!\nЭта музыка для Вас!!!\a\a\a\a\a\a\a\a\a\a\a\a\a";
	char congratulation[200] = {};//строка в которую скопируем весь текст поздравления

	//задаем вопрос пользователю
	cout << "Год рождения Николая Васильевича Гоголя - 1809г.? (да - 1, нет - 0): ";
	cin >> answer;

	while (answer != 1)// пока ответ не равен 1(да)
	{
		if (answer == 0) //если нажал 0(нет) выдаем подсказку
		{
			cout << "\nПодумайте внимательно :)" << endl;
			cout << "Подсказка: число заканчивается на 09" << endl;
			cout << "Год рождения Николая Васильевича Гоголя - 1809г.? (да - 1, нет - 0): ";
			cin >> answer;
		}
		else //если пользователь ввел другое число (не 0 и не 1)
		{
			cout << "\nНекорректный ввод! " << endl;
			cout << "Год рождения Николая Васильевича Гоголя - 1809г.? (да - 1, нет - 0): ";
			cin >> answer;
		}
	}

	if (answer == 1)//если ответ правильный
	{
		cout << "\n\nВы правильно ответили на вопрос!!!  Введите Ваше имя (латиницей): ";
		cin >> name;
	}

	cout << endl << endl;

	//копируем имя и все поздравления в одну строку
	strcat(congratulation, name);
	strcat(congratulation, str1);
	strcat(congratulation, str2);
	strcat(congratulation, name);
	strcat(congratulation, str3);

	//выводим поздравление на экран
	cout << congratulation;
	cout << endl << endl;

	delete[] name;//освобождаем память
	return 0;
}