#include <iostream>
using namespace std;
int main()
{
	int b=1,N;
	cout<<"ÊäÈëN£º";
	cin>>N;
	int **number=new int *[N];
	for(int t=0;t<N;t++)
	{
		number[t]=new int[N];
	}
	if(N%2!=0)
	{
		number[N/2][N/2]=N/2+1;		
	}	
	for(int i=0;i<N/2;i++)
	{
		for(int k=0;k<N/2;k++)
		{
			if(i>k)
			{
				number[i][k]=b;
				b++;
			}
			else
			{
				number[i][k]=b;
			}
			number[i][N-1-k]=number[i][k];
			number[N-1-i][k]=number[i][k];
			number[N-1-i][N-1-k]=number[i][k];
			if(N%2!=0)
			{
				number[i][N/2]=i+1;
				number[N-1-i][N/2]=i+1;
				number[N/2][k]=k+1;
				number[N/2][N-1-k]=k+1;
			}
		}
		b=1;
	}
	for(int m=0;m<N;m++)
	{
		for(int n=0;n<N;n++)
		{
			cout<<number[m][n];
		}
		cout<<endl;
	}
	delete[] number;
	return 0;
}
