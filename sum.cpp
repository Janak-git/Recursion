#include <iostream>
#include <windows.h>

int sumarr(int arr[], int n) {
    if (n == 0) {
        return 0;
    }
    return (arr[0] + sumarr(arr + 1, n - 1));
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    std::cout << sumarr(arr, n) << std::endl;
    return 0;
}