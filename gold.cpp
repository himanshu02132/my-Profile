#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,c,x;
	cout<<"enter the number of the test \n";
	cin>>n;

	for(i=0;i<n;i++)
	{
		cout<<"\nenter the no. of gold coin\n";
		cin>>x;
	
		j=1;
		c=0;
		while(x>=j)
		{
			++c;
			x=x-j;
			j++;	
		}
		cout<<"The no. of maximum row created by the gold coin : "<<c;
   }

	return 0;
}
