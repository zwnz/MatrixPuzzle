
 #include <stdio.h>
int main()
{ int a,b,N;
  printf("please iuput N=");
 scanf("%d", &N);
   for(a=1;a<=N;a++) //外层循环  a为行数，b为列数，N为循环次数 
   {for(b=1;b<=N;b++) //内层循环 
    if(b<=N+1-a)       //对角线的上半部分 
		 if (a<=b) printf("%-4d",a); //比较a,b 输出最小值 
		 else printf("%-4d",b);
	else 	  //对角线的下半部分 
		  if(a>b)  //比较a,b 输出 N-？+1 
		  printf("%-4d",N-a+1);
		  else printf("%-4d",N-b+1);
		  printf("\n");
   }    
    return 0;
}
