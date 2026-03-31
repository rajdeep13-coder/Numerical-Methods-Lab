/*
Program: Sum of Each Column in a 3x4 Matrix

Algorithm:
1. Start
2. Declare a 3x4 matrix and variables i, j, sum
3. Input all 12 elements of the matrix
4. For each column, initialize sum = 0
5. Add elements of that column from all rows
6. Print column sum
7. Repeat for all columns
8. Stop

Enter elements:
1 2 3 4
5 6 7 8
9 1 2 3
Sum of each column:
Column 1 = 15
Column 2 = 9
Column 3 = 12
Column 4 = 15
*/

#include <stdio.h>

int main() {
    int arr[3][4], i, j, sum;

    printf("Enter elements:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Sum of each column:\n");
    for(j = 0; j < 4; j++) {
        sum = 0;
        for(i = 0; i < 3; i++) {
            sum += arr[i][j];
        }
        printf("Column %d = %d\n", j+1, sum);
    }

    return 0;
}