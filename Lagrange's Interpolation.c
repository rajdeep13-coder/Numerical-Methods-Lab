#include <stdio.h>

int main() {
    int n, i, j;
    float x[10], y[10], xp, yp = 0, p;

    printf("Enter number of data points: ");
    scanf("%d", &n);

    printf("Enter x and y values:\n");
    for(i = 0; i < n; i++) {
        scanf("%f %f", &x[i], &y[i]);
    }

    printf("Enter value of x to interpolate: ");
    scanf("%f", &xp);

    for(i = 0; i < n; i++) {
        p = 1;
        for(j = 0; j < n; j++) {
            if(i != j) {
                p = p * (xp - x[j]) / (x[i] - x[j]);
            }
        }
        yp = yp + p * y[i];
    }

    printf("Interpolated value = %.2f", yp);

    return 0;
}


/*Output
Enter number of data points: 3
Enter x and y values:
1 1
2 4
3 9
Enter value of x to interpolate: 2.5
Interpolated value = 6.25
*/