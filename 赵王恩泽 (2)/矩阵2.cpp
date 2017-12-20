#include <stdio.h>
main()
{
	int n,nMax,a1,a2; 
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
				if(i>(n-i-1))    
				{
					a1=i;
				}
				else
					a1=n-i-1;
				
				if(j>(n-j-1))
				{
					a2=j;
				}
        		else
        			a2=n-j-1;
				
				if(a1>a2)
					nMax=a1;
					
				else
					nMax=a2;
						
			printf("%d",nMax+1);
		}
		printf("\n");
	 } 
	}  
 } 
