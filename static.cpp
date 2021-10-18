#include<iostream>
using namespace std;

class Demo
{
	public:
	int x,y,z;
	static int no;
        void  fun()
        {
        cout<<"Inside non static fun\n";
        }
	
	static void gun()
	
	{
		cout<<"Inside static gun\n";
	}
	Demo (int a=10,int b=20,int c=30)
	{
		this->x=a;
		
		this->y=b;
		this->z=c;
	}
};
int Demo::no=51;
int main()
{
	cout<<"Value of no:"<<Demo::no<<"\n";
	Demo::gun();
	Demo obj1(1,2,3);
	Demo obj2(11,22,33);
	cout<<"sizeof object is:"<<sizeof (obj1)<<"\n";
	return 0;
}