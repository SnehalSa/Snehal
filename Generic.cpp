#includes<iostream>
using namespace std;
template<class T>///OOP feature
T Max(T x,T y)
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
	int i=10,j=10,iret;
	double a=3.10,b=6.10,dret;
	char ch1='G',ch2='A',cret;
	iRet=Max(i,j);
	
	cout<<"Max is:"<<iRet<<"\n";
		bRet=Max(a,b);
	cout<<"Max is:"<<bRet<<"\n";
	
	
	return 0;
}