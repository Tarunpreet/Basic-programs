#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=0;
	while(n!=1)
	{
	if(n%3==0)
	{
		n=n/3;
		count++;
    }
    else if(n%2==0)
    {
    	n=n/2;
    	count++;
    }
    else
    {
    	n=n-1;
    	count++;
    }
    }
    cout<<count;
}