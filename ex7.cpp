#include<iostream>
using namespace std;

class location{
	 private:
			int degree;
			float minute;
			char direction;
	 public:
			location(int degree, float minute, char direction)
      {
			degree=0;
			minute=0;
			direction=0;
      }
	  void getlocation(int d, float m, char di)
	  {
			degree=d;
			minute=m;
			direction=di;
	  }
	  void show()
	  {
	  		cout << degree << "\xF8" << minute << "\'" << direction << endl;
	  }
};

int main()
{
 location loca(0,0,0);
 int degree; float minute; char direction;
 cout<<"Enter degrees  : ";
 cin>>degree;
 cout<<"Enter minutes  : ";
 cin>>minute;
 cout<<"Enter direction: ";
 cin>>direction;
 loca.getlocation(degree, minute, direction);
 loca.show();
 system("pause");
	return 0;
}
