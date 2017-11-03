//Mike Huang 2017.11.3
#include <iostream>

using namespace std;


int main() {
    cout << "Hello, World!" << endl;
    int N = 0, M = 0, layer = 0;//N：有多少行；M：有多少层；layer:目前这个位置应该输出多少或者这个位置的层数
    while (N <= 0) {//输入数据
        cout << "Please input N which greater than 0！！！" << endl;
        cin >> N;
    }
    if (N % 2 == 1) {//判断层数
        M = N / 2 + 1;
    } else {
        M = N / 2;
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {//将这个位置固定并写入数据
            layer = 1;
            while (layer <= M) {//找出这个位置适合的层数
                if (i == layer - 1 || i == N - layer || j == layer - 1 || j == N - layer) {//如果找到了相应的层数，退出
                    break;
                }
                layer++;
            }
            cout << layer << " ";//输出数据
        }
        cout << endl;
    }
    return 0;
}