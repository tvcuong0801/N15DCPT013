#include<iostream>
using namespace std;
class time{
	private:
		unsigned int hour;
		unsigned int minute;
		unsigned int second;
	public:
		time()
		{
			hour=0;
			minute=0;
			second=0;
		}
		unsigned int gethour()
		{
			return hour;
		}
		unsigned int getminute()
		{
			return minute;
		}
		unsigned int getsecond()
		{
			return second;
		}
		
		time(unsigned int hours, unsigned int minutes, unsigned int seconds )
		{
			hour=hours;
			minute=minutes;
			second=seconds;
		}
		void show()
		{
			cout<< hour<<":"<< minute<<":"<<second<<""<< endl; 
		}
		time addtime(time t1,time t2)
		{
			second=(t1.getsecond()+t2.getsecond())%60;
			minute=(t1.getminute()+t2.getminute()+t1.getsecond()/60+t2.getsecond()/60)%60;
			hour=(t1.gethour()+t2.gethour()+((t1.getminute()+t2.getminute())/60)+(t1.getsecond()+t2.getsecond())/3600)%25;
			if(hour==24) hour=hour-24;
		}
};
int main()
{
time t1(33,00,60);
time t2(0,65,00);
time t3;
t3.addtime(t1,t2);
t3.show();
return 0;
}
