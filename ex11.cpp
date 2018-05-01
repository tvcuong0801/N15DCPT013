#include<math.h>
#include<iostream>
using namespace std;
class fraction{
	private:
		int numerator, denominator;
		char dummychar;
	public:
		fraction()
		{
			numerator=0;
			denominator=1;
			dummychar='/';
		}
		void get()
		{
			cout<< "input fraction: ";
			cin>> numerator>> dummychar>> denominator;
		}
		void show()
		{
			cout<< numerator<< "/"<< denominator<< endl;	
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
			show();
		}
		void add(fraction a, fraction b)
		{
			numerator=a.numerator*b.denominator+b.numerator*a.denominator;
			denominator=a.denominator*b.denominator;
			cout<< "==add=="<<endl;
		}
		void multiply(fraction a, fraction b)
		{
			numerator=a.numerator*b.numerator;
			denominator=a.denominator*b.denominator;
			cout<< "==multiply=="<<endl;
		}
		void divide(fraction a, fraction b)
		{
			numerator=a.numerator*b.denominator;
			denominator=a.denominator*b.numerator;
			cout<< "==divide=="<<endl;
		}
		void subtract(fraction a, fraction b)
		{
			numerator=a.numerator*b.denominator-b.numerator*a.denominator;
			denominator=a.denominator*b.numerator;
			cout<< "==subtract=="<<endl;
		}
		
};
int main()
{
	fraction x1, x2, result;
	char x;
	do
	{
	x1.get();
	x2.get();
	result.multiply(x1,x2);
	result.simplify();
	result.add(x1,x2);
	result.simplify();
	result.divide(x1,x2);
	result.simplify();
	result.subtract(x1,x2);
	result.simplify();
	cout<<"continue? (y/n)";
	cin>> x;
	}while(x=='y');
	system("pause");
	return 0;
}
