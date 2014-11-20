#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    string a,b;
	unsigned int i;
	int icon=0;
	unsigned int numa[1020]={0},numb[1023]={0},numab[1020]={0};
	cin>>a;
	cin>>b;
	stringstream ssa[1020];
	stringstream ssb[1020];

	for(i=0;i<a.length();i++)
	{
		ssa[i]<<a[a.length()-i-1];
		ssa[i]>>numa[i];
	}
	for(i=0;i<b.length();i++)
	{
		ssb[i]<<b[b.length()-i-1];
		ssb[i]>>numb[i];
	}
	for(i=0;i<1000;i++)
	{
		numab[i]=numa[i]+numb[i]+icon;
		icon=0;
		if(numab[i]>=10)
			{
				icon=1;
				numab[i]-=10;
		}
	}
	int k=1019;
	while(numab[k]==0)
		k--;
	if(k<0)
		cout<<numab[0];
	else
	{
	for(int j=k;j>=0;j--)
	cout<<numab[j];
	}
	system("pause");
	return 0;
}