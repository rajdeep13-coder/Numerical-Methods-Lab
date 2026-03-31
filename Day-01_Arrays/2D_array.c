/*
Program: 2D Array Creation and Printing

Algorithm:
1. Start
2. Declare 2D array and variables n, m
3. Input number of rows (n) and columns (m)
4. Input all elements of the 2D array
5. Print the 2D array row by row
6. Stop

Sample Input:
2 3
1 2 3
4 5 6

Sample Output:
1 2 3
4 5 6
*/

#include<stdio.h>

int main() {
    int arr[20][20], n, m, i, j;

    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d", arr[i][j]);
            if (j < m - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
