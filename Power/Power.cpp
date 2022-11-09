#include<iostream>


using namespace std;


double power(double a, int n);
double ch = 1; //переменная для цикла
int i = 1;     //переменная для цикла
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
		if (n == 0)
		{
			a = 1;
		}
			
		else 
		if (n < 0)
			return 1 / a * power(a, n + 1);

		

		if (n>0)
		
		 {
			for (i = 1; i <= n; i++)
				
			ch = ch * a;
		
	     }
		return ch; 


		
	    
	     
	    
		 
		 
		

		
		
	}
