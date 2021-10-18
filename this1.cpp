#include<iostream>
using namespace std;

class Demo
{
	public:
	int iNo1;
	int iNo2;
	
	Demo(int i=10,int j=20)
	{
		 this->iNo1=i;
		this->iNo2=j;
	}
	void Display(int X)
	{
		cout<<"Value of No1 is:"<<this->iNo1;
		cout<<"Value of No2 is:"<<this->iNo2;
		cout<<"Value of X is:"<<X;
	}
};
int main()
{
	Demo obj1;
	Demo obj2(11);
	Demo obj3(11,21);
	
	obj1.Display(51);
	obj2.Display(51);
	obj3.Display(51);
    
	return 0;
}
			