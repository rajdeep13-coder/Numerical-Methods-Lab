/*
Program: Sum of All Elements in a 2D Array

Algorithm:
1. Start
2. Declare 2D array and variables n, m, sum
3. Input number of rows (n) and columns (m)
4. Initialize sum = 0
5. Input all elements of the 2D array
6. Add each element to sum
7. Print sum
8. Stop

Sample Input:
2 3
1 2 3
4 5 6

Sample Output:
21
*/

#include <stdio.h>

int main() {
    int arr[20][20], n, m, i, j, sum;

    scanf("%d %d", &n, &m);
    sum = 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
            sum = sum + arr[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}
