#include<iostream>
#include<mylib.h>
#include<iomanip>
using namespace std;
class fraction
{
	private:
		int numerator;
		int denominator;
	public:
		fraction()
		{
			numerator=0;
			denominator=1;
		}
		int getnumerator()	
		{
			return numerator;
		}
		int getdenominator()	
		{
			return denominator;
		}
		void setfraction(int a, int b)
		{
			numerator = a;
			if (a == 0)
				denominator = 1;
			else
				denominator = b;
		}
		void multiply(fraction a, fraction b)
		{
			numerator=a.numerator*b.numerator;
			denominator=a.denominator*b.denominator;
		}
	
		int hcf(int numerator, int denominator)
		{
			numerator=abs(numerator);denominator=abs(denominator);
			if(numerator*denominator==0) return 1;
			while(numerator!=denominator)
	     	{
			 if(numerator>denominator) numerator=numerator-denominator;
			 else denominator=denominator-numerator;
			}
	     	
	     	return numerator;
		}
		int simplify()
		{
			int u;
			u=hcf(numerator,denominator);
			numerator=numerator/u;
			denominator=denominator/u;
		}
		void show()
		{
			if(denominator == 1)
				cout << numerator;
			else
				cout << setw(denominator<10?5:4) << numerator<< '/' << denominator;
		}
};
int main()
{
	int d, i, j;
	fraction x;
	cout << "denomination: ";
	cin >> d;
	fraction f[d-1];
	for(i = 0; i < d-1; ++i)
	{
		f[i].setfraction(i+1,d);
		f[i].simplify();
		f[i].show();
	}
	cout<<endl;
	cout<<"--------------------------------"<< endl;
	for(i =0; i< d-1; ++i)
	{
		f[i].simplify();
		f[i].show();
		for(j =0; j <d-1; ++j)
		{
			x.multiply(f[i], f[j]);
			x.simplify();
			x.show();
		}
		cout << endl;
	}
	system("pause");
	return 0;
}


