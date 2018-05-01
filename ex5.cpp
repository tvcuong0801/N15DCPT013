#include<iostream>
using namespace std;
class date{
	private:
		int day, month, year;
	public:
		date()
		{
			day=0;
			month=0;
			year=0;
		}
		int setdate()
		{
			char dummychar;
			cin>> day >> dummychar >> month >> dummychar >> year;
			return day,month,year;
		}
		void show()
		{
			cout<< day<< "/"<< month<< "/"<< year<< endl; 
		}
};
int main()
{
	date date;
	cout<< "input date: ";
	date.setdate();
	date.show();
	system("pause");
	return 0;
}
