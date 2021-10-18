#include<iostream>
using namespace std;
int MaxI(int x,int y)
{
	
if(x>y)
{
return x;
}
else
{
return y;
}
}	
int MaxD(double x,double y)
{
	
if(x>y)
{
return x;
}
else
{
return y;
}
}	
	
	
	
	

int main()
{
	
	int i=20,j=20;int iRet=0;
	
	iRet=MaxI(i,j);
	
	cout<<"Max is:"<<iRet<<"\n";
	
	double a=3.10,b=6.10,bRet;
	bRet=MaxD(a,b);
	cout<<"Max is:"<<bRet<<"\n";
	
	return 0;
}