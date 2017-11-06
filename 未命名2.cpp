#include <iostream>
using namespace std;
int main()
{
	for (int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		if( i > 0 && i <4 && j>0 && j<4)
		if(i==2 && j==2)
		printf("3");
		else printf("2");
		else printf("1");
		printf("\n");
	}
	return 0;
}
