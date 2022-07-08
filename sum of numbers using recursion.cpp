#include<iostream>
using namespace std;
int sum(int num);

int main()
{
	int num,result;
	cout<<"Enter the number to get sum from 0 to that number\n";
	cin>>num;
	result=sum(num);
	cout<<"The sum of the number from 0 to "<<num<<" is : "<<result;
	return 0;
}

int res=0;

int sum(int num)
{
	while(num>0)
	{
	 res=res+num;
	 num--;
	 return sum(num);	
	}
	return res;
}
