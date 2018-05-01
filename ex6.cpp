#include<iostream>
using namespace std;
class employee{
	private:
		int day, month, year, number;
		double comp;
		char x;
	public:
		employee()
		{
			day=0;
			month=0;
			year=0;
			number=0;
			comp=0;
			x='a';
		}
		int setemploy()
		{
			char dummychar;
			cout<<" date hired: ";
			cin>> day >> dummychar >> month >> dummychar >> year;
			cout<<" employee's number': ";
			cin>> number;
			cout<<" employee's compensation: ";
			cin>> comp;
			cout<< " employee's type: ";
			cin>> x;
		}
		void show()
		{
			cout<< "=====employee information====="<< endl;
			cout<< "date hired: "<< day << "/"<<month<<"/"<<year<<endl;
			cout<< "number: "<< number<< endl;
			cout<< "compensation: "<< comp<< endl;
			cout<< "type: ";
			if (x=='l') cout<< "laborer"<< endl;
			if (x=='s') cout<< "secretary"<< endl;
			if (x=='m') cout<< "manager"<< endl;
		}
};
int main()
{
	employee e1, e2, e3;
	cout<< "input employee_1's information"<< endl;
	e1.setemploy();
	cout<< "input employee_2's information"<< endl;
	e2.setemploy();
	cout<< "input employee_2's information"<< endl;
	e3.setemploy();
	e1.show();
	e2.show();
	e3.show();
	system("pause");
	return 0;
}
