#include<iostream>
using namespace std;
int Sum(int a=0, int b=0); // Прототип функции(Объявление функции)
int Difference(int a, int b);
int Product(int a, int b);
double Quotient(int a, int b);



void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа:"; cin >> a >> b;
	int c = Sum(a, b);// вызов функции - Function call
	cout << a << "+ " << b << "=" << c << endl;
	cout << a << "- " << b << "=" << Difference(a, b) << endl;
	cout << a << "* " << b << "=" << Product(a, b) << endl;
	cout << a << "/ " << b << "=" << Quotient(a, b) << endl;
}
int Sum(int a, int b) //реализация функции (определение функции - function definition)
состоит из заголовка и тела функции

{
	 int sum = a + b;
	return sum;
}

int Difference(int a, int b)
{
	return a - b;

}

int Product(int a, int b)
{
	return a * b;
}

double Quotient(int a, int b)
{
	return (double) a / b;
}

