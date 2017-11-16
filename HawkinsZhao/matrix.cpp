//
//  main.cpp
//  matrix
//
//  Created by Hawkins Zhao on 07/11/2017.
//  Copyright © 2017 iosclub. All rights reserved.
//

#include <iostream>
#include <cmath>

const int N = 6;

void matrixPrint(int arr[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void mathApproach() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << fmin(fmin(i + 1, N - i), fmin(j + 1, N - j));
        }
        std::cout << std::endl;
    }
}

void geometryApproach() {
    int arr[N][N];
    int mid = int(double(N) / 2 + 0.5);
    memset(arr, 0, sizeof(arr));
    
    for (int i = 0; i < mid; i++) {
        for (int j = i; j < mid; j++) {
            arr[i][j] = i + 1;
            arr[i][N - j - 1] = i + 1;
            arr[N - i - 1][j] = i + 1;
            arr[N - i - 1][N - j - 1] = i + 1;
            
            arr[j][i] = i + 1;
            arr[j][N - i - 1] = i + 1;
            arr[N - j - 1][i] = i + 1;
            arr[N - j - 1][N - i - 1] = i + 1;
        }
    }
    
    matrixPrint(arr);
}

void observeApproach() {
    int arr[N][N];
    memset(arr, 0, sizeof(arr));
    
    for (int i = 0; i < N; i++) {
        int target = fmin(i + 1, N - i);
        arr[i][i] = target;
        for (int j = 0; j < i; j++) {
            arr[j][i] = fmin(j + 1, target);
            arr[i][j] = fmin(j + 1, target);
        }
    }
    
    matrixPrint(arr);
}

int main(int argc, const char * argv[]) {
    mathApproach();
    geometryApproach();
    observeApproach();
    return 0;
}
