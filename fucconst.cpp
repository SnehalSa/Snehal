#include<iostream>
using namespace std;
class Demo
{
	public:
	int i;int j;
        Demo()
	{
		i=0,j=0;
	}
	Demo(int x,int y)
	{
		i=x;j=y;
	}
	void fun(int a)
	{
		i++;
		j++;
	}
	void gun (int a, int b)const
	{
		int no=10;
		const int x=20;
		a++;
		no++;
b++;
	}
	
};
int main()
{
const Demo obj(10,20);
//obj.gun(11,21);
Demo obj2(10,20);
obj2.fun(11);
obj2.gun(11,21);
return 0;
}
		
		
	
	