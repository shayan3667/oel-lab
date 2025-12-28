#include<iostream>

using namespace std;

void Avg(int a,int b, int c);
void High(int s,int h,int y);

int main()
{
	int d,e,f,std;
	
	cout<<"\n How many student's data wil you enter : ";
	cin>>std;
	
	int i=std;
	while(i!=0)
	{
		cout<<"\n Enter Marks of Student's 3 subjects : ";
		cin>>d>>e>>f;
		if(d<=100&&e<=100&&f<=100)
		{
			High(d,e,f);
			Avg(d,e,f);i--;
		}
		else
		{
			cout<<"\n You Entered Outranged number  'Enter Again'";
		}
	}
}
void Avg(int a,int b,int c)
{	int avg=0;
	avg =(a+b+c)/3;
	cout<<"\n His Average = "<<avg;
	
}
void High(int s,int h,int y)
{
	if(s>h&&s>y)
	{
		cout<<"\n Highest Marks = "<<s;
	}
	if(h>s&&h>y)
	{
		cout<<"\n Highest Marks = "<<h;
	}
	else
	{
		cout<<"\n Highest Marks = "<<y;
	}
	
	
	//change 2
	
}