#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int n = 3;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                sum += arr[i][j];
            }
        }
    }
    printf("Tong cac phan tu tren duong bien la: %d\n", sum);

    return 0;
}

