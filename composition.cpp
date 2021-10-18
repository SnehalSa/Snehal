#include<iostream>
using namespace std;

class Hello
{
	public:
	int x;
	 void fun()
	 {
		 cout<<"Inside fun\n";
	 }
	 
};
class Demo
{
	public:
	int iNo;
	Hello hobj;
	
	void gun()
	{
		cout<<"Inside gun\n";
	}
}; 
 int main()
 {
	 Demo dobj;
	 dobj.hobj.fun();
	 dobj.gun();
	 return 0;
 }
	