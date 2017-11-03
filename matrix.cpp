#include <iostream>
using namespace std;
int main()
 {
    int N;
    cout<<"N=";
    cin>>N;
    int a[N+1][N+1];//数组下标从零计算
    int row,column,n,k,t,i,j,p;
    row=0;//排
    column=1;//列
    n=N;//代表格式的数字
    t=1;//赋值方向
    k=0;//反正就是两轮以后也就是一圈赋值完让p加一的变量每一圈的数字
    for(p=1;p<=N/2;)
    {
        if(k!=0&&k%2==0)p++;//从外往内一圈一圈的赋值
    for(i=1;i<=n;i++)
    {
        row+=t;
    a[row][column]=p;
    }//给一列赋值
     n--;//列数减一
     for(j=1;j<=n;j++)
     {
         column+=t;
         a[row][column]=p;
     }//给行赋值
    k++;
    t=-t;//换一个方向赋值
    };
    for(i=1;i<=N;++i)//输出
    {
        for(j=1;j<=N;++j)
            cout<<' '<<a[i][j];
            cout<<endl;
    }
    return 0;

}
