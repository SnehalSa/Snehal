#include<iostream>
using namespace std;

class Demo
{
	public:
	int i;
	const int j;
	
	
	Demo()
	{
		cout<<"Default\n";
	}
	Demo(int x,int y):i(x),j(y)
	{
		cout<<"Parametrised\n";
	}
};
int main()
{
	Demo obj1;
//	obj1.j++;
	Demo obj2(11,21);
	return 0;
}


