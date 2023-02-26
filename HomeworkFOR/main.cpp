#include<iostream>
#include<Windows.h>
using namespace std;
//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4
//#define TASK_5
//#define TASK_6
//#define TASK_7
#define TASK_8
void main()
{
	setlocale(LC_ALL, "");
#ifdef TASK_1
	int n;
	cout << "Факториал числа: "; cin >> n;
	int result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	cout << "Равен: " << result << endl;
#endif // TASK_1

#ifdef TASK_2
	int n;
	cout << "Введите число: "; cin >> n;
	int a;
	cout << "Введите степень: "; cin >> a;
	int result = 1;
	for (int i = 0; i < n; i++)
	{
		result = result * a;
	}
	cout << "Результат: " << result << endl;
#endif // TASK_2

#ifdef TASK_3
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
#endif // TASK_3

#ifdef TASK_4
	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
		cout << a << "\t";
	cout << endl;
#endif // TASK_4


#ifdef TASK_5
	int n;
	cout << "Введите количество чисел из ряда Фибоначчи: "; cin >> n;
	int a = 0;
	int b = 1;
	int c = a + b;
	for (int i = 0; i < n; i++)
	{
		cout << a << "\t";
		a = b;
		b = c;
		c = a + b;
	}
#endif // TASK_5

#ifdef TASK_6
	int n;
	cout << "Введите предельноеу число: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		bool simple = true;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple)cout << i << "\t";
	}
	cout << endl;
#endif // TASK_6

#ifdef TASK_7
	for (int i = 1; i <= 10; i++)
	{
		cout << "Таблица умножения на " << i << ":\n";
		for (int j = 1; j <= 10; j++)
		{
			cout << "\t\t\t";
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i * j < 100)cout << " ";
			if (i * j < 10)cout << " ";
			cout << i * j << endl;
		}
	}
#endif // TASK_7

#ifdef TASK_8
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout.width(5);
			cout << right;
			cout << i * j;
		}
		cout << endl;
	}
#endif // TASK_8

}