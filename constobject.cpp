#include<iostream>
using namespace std;

class Demo
{
	public:
	int i;
	 int j;
	
	
	Demo()
	
	{
		i=0,j=0;
		cout<<"Default"<<"\n";
	}
	Demo(int x,int y)
	{
		i=x,j=y;
		cout<<"Parametrised\n";
	}
};
int main()
{
     Demo bobj;
	Demo obj1(10,20);
    const Demo obj2(10,20);
	obj1.i++;
	//obj2.i++;
	
	
	return 0;
}
