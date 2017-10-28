/**
 *  输入n，即可输出边长为n的回形矩阵
 *
 */

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    int n = 0;
    cout << "Please input the long" << endl;
    cin >> n;
    cout << endl;

    int output[n][n] = {0};         //定义一个二维数组用来输出
    int min = 0,max = 0;            //改变传入值的上下界
    int k = 1;                      //传入值

    for(int i = 0; i < n; i++){     //定义横坐标
        if(i >= n / 2){             //对传入值上下界做判断
            min = n - i - 1;
            max = i;
        }else{
            min = i;
            max = n - i - 1;
        }

        for(int j = 0; j < n; j++){ //定义纵坐标
            output[i][j] = k;       //传入值

            if(j < min){            //利用上下界改变传入值
                k++;
            }else if(j >= max && k != 1){
                k--;
            }
        }
    }
    for(int i = 0; i < n; i++){     //打印结果
        for(int j = 0; j < n; j++){
            cout << right << setw(3) << output[i][j];
        }
        cout << endl;
    }

    getch();
    return 0;
}
