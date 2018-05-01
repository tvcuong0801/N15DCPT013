#include<iostream>
using namespace std;
class count{
	private:
		int number;
		static int c;
	public:
		count()
		{
			static int c=0;
			number=++c;
		}
		void show()
		{
			cout<< "object: "<< number<< endl;
		}
};
int main()
{
	count count[3];
	for(int i=0; i<3; i++)
	{
		count[i].show();
	}
	system ("pause");
	return 0;
}
