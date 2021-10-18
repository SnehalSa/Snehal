#include<iostream>
using namespace std;

class Demo
{
	public:
	int Addition(int iNo1, int iNo2)
	{
		return iNo1+iNo2;
	}



    
	int Addition(double iNo1,int iNo2)
	{
		return iNo1+iNo2;
	}
};
int main()
{
	Demo obj;
	int iret=0;
	iret=obj.Addition(10,20);
	cout<<iret;
	iret=obj.Addition(10,20);
	cout<<iret;
	
	return 0;
}