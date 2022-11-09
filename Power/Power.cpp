#include<iostream>


using namespace std;


double power(double a, int n);

#define POWER

void main()
{
	setlocale(LC_ALL, "");

#ifdef POWER
	double a;
	int n;
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введитете показатель степени: "; cin >> n;
	cout << power(a, n) << endl;
#endif // POWER
}
	double power(double a, int n)
	{
		if (n == 0)return 1;
		else if (n > 0)return a * power(a, n - 1);
		else return 1 / a * power(a, n + 1);
		
	}
