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
		void sum(fraction a, fraction b)
		{
			numerator=a.numerator*b.denominator+b.numerator*a.denominator;
			denominator=a.denominator*b.denominator;
			show();
		}
};
int main()
{
	fraction x1, x2, sum;
	char x;
	do
	{
	x1.get();
	x2.get();
	sum.sum(x1,x2);
	cout<<"continue? (y/n)";
	cin>> x;
	}while(x=='y');
	system("pause");
	return 0;
}
