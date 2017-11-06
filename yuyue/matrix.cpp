#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
    int N, Mini(int x, int y);
    cout << "请输入N：";
    cin >> N;
    int k = N;
    int Num[20][20];
    /*
     1. 先写出左上角的三角形
     */
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= k; j++) {
            Num[i - 1][j - 1] = Mini(i, j);
        }
        k--;
    }
    /*
     2. 将左上角的三角形赋值给右下角
     */
    for (int i = 1; i <= N - 1; i++) {
        for (int j = N - i; j <= N - 1; j++) {
            Num[i][j] = Num[N - i - 1][N - j - 1];
        }
    }
    /*
     遍历此二维数组
     */
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << Num[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}

int Mini(int x, int y) {
    if (x <= y)
        return x;
    else
        return y;
}
