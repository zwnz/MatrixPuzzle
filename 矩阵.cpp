#include <stdio.h>
#include <math.h>
main()
{
	int n;
	int nMax;
	while(scanf("%d",&n))
	{
		if(n<=0)
		{
			break;
		}
		for(int i=0;i<n;++i)
		{
			for(int j=0;j<n;++j)
			{
				int a1=i>(n-i-1)?i:(n-i-1);
				int a2=j>(n-j-1)?j:(n-j-1);
				int nMax=a1>a2?a1:a2;
				printf("%d",nMax+1);
			}
			printf("\n");
	 	} 
	}  
 } 
