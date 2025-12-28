#include<iostream>

using namespace std;

int main()
{
	int a,b,temp=0;
	cout<<"\n Enter Two numbers : ";
	cin>>a>>b;
	temp=a;
	a=b;
	b=temp;
	cout<<"\n After Swaping Number 1 :"<<a<<" Number 2 : "<<b;
}