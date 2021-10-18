#include<iostream>
using namespace std;

class Demo
{
	public:
	int ino1;
	int iNo2;
	
	Demo()
	{
		cout<<"Constructor\n";
	}
	~Demo()
	{
		cout<<"Destructor\n";
	}
	void fun(int x)
	{
		cout<<"inside fun\n";
	}
};
int main()
{
	Demo obj;
	Demo*p=NULL;
	p=(Demo*)malloc(sizeof (Demo));
	free(p);
	
	
	8
	return 0;
}
		
		
		
	
