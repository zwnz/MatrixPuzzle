#include<iostream>
using namespace std;

int main(){
	int N,a,b;                         //定义3个变量，N是矩阵边长，a是行，b是列 
	cout<<"N=";
	cin>>N;
	for(a=1;a<=N;a++)                  //每一行的循环开始 
	{for(b=1;b<=N;b++) 
	  if(b>N-a+1)                      //对角线右下部分 输出行与列最大值与边长之差+1的值 
	    if(b>a) cout<<N-b+1;
	    else cout<<N-a+1;
	  else if(a<=b) cout<<a;           //对角线左上部分输出行与列中的最小值 
	else cout<<b;
	cout<<endl;                        //每一行末尾结束换行 
	}
	
}

