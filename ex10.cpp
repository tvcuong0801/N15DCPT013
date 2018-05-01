#include<iostream>
using namespace std;
class ship_number{
	private:
		static int count;
		int number;
	public:
		ship_number()
		{
			number=++count;
		}
		void show_ship()
		{
			cout<<number;
		}
};int ship_number::count=0;

class location
{
	private:
		int degree;
 		float minute;
 		char direction;
	public:
		void getlocation()
		{
			cout<<"Enter degree  : "; cin>>degree;
			cout<<"Enter minute : "; cin>>minute;
			cout<<"Enter direction: "; cin>>direction;
		}
		void show_location() 
		{ 
			cout<<degree<<"\xF8"<<minute<<"\'"<<direction<< endl;
		}
};

class ship{
	private:
		ship_number s;
		location a;
	public:
		void getlocation() 
		{ 
			a.getlocation(); 
		}
		void show()
		{
			cout<< " ship's number: ";
			s.show_ship();
			cout<< " ship's position: ";
			a.show_location();
		}
};


int main()
{
 ship s[3];
 char x;
 do
 {
  for(int i=0; i<3; i++) 
  {
  	s[i].getlocation();
  }
  for(int j=0; j<3; j++) 
  {
  	s[j].show();
  }
  cout<<"continue? (y/n)";
  cin>> x;
 }
while(x=='y');
system("pause");
return 0;
}
