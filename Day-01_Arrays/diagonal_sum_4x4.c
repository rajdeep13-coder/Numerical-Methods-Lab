/*
Program: Sum of Diagonal Elements of a 4x4 Matrix

Algorithm:
1. Start
2. Declare a 4x4 matrix and variables i, j, sum
3. Initialize sum = 0
4. Input all 16 elements of the matrix
5. Traverse the matrix
6. If row index equals column index, add element to sum
7. Print sum
8. Stop

Sample Input:
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

Sample Output:
34
*/

#include <stdio.h>

int main() {
    int arr[4][4], i, j, sum;

    sum = 0;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i == j) {
                sum = sum + arr[i][j];
            }
        }
    }

    printf("%d", sum);

    return 0;
}
