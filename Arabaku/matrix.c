#include <stdio.h>

int main()
{
	int max,i,j,m,n,t=0;
    int length;
    printf("请输入行数：");
    scanf("%d",&length);
    // 创建 length*length 的二维数组
    int a[length][length];
    // 判断中心的最大值
    if(length%2==0){
        max=length/2;
    }
    else{
        max=(length+1)/2;
    }
    // i 循环增加到 max
	for(i=1;i<=max;i++)
	{
        // 两个 for 循环将内圈全部覆盖为 i
        for(m=t;m<length-t;m++)
        {
            for(n=t;n<length-t;n++)
            {
                a[m][n]=i;
            }
        }
        t++;
	}
    // 循环输出二维数组
    printf("结果如下：\n");
	for(i=0;i<length;i++)
	{
		for(j=0;j<length;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
    // 结束
    return 0;
}
