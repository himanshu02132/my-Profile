#include<iostream>
using namespace std;
int main()
{
	string  c1,c2;
	cout<<"enter the first string\n";
	cin>>c1;
	cout<<"enter the second string\n";
	cin>>c2;
	int a1=c1.length();
	int a2=c2.length();
	int a3=0;
	if(a1==a2)
	{
		for(int i=0;i<a1;i++)
		{
			if(c1[i]==c2[i] || c1[i]=='?' || c2[i]=='?')
			a3++;
		}
		if(a3==a2)
		cout<<"True";
		else
		cout<<"False";
	}
	else
	cout<< "False";
	return 0;
}

