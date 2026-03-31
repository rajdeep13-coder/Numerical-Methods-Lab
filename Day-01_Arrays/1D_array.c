/*
Program: 1D Array Creation and Printing

Algorithm:
1. Start
2. Declare array and variable n
3. Input n
4. Input array elements
5. Print elements
6. Stop

Sample Input:
5
1 2 3 4 5

Sample Output:
1 2 3 4 5
*/

#include <stdio.h>

int main() {
    int arr[100], n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }

    return 0;
}
