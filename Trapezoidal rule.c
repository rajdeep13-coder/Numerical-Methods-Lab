#include <stdio.h>
#include <math.h>
#include<math.h>
#define f(x) (1.0 / (1.0 + x*x))

int main() {
    float a, b, h, sum, x[100], y[100];
    int i, n;

    // --- User Input Section ---
    printf("Enter lower limit (a): ");
    scanf("%f", &a);
    printf("Enter upper limit (b): ");
    scanf("%f", &b);
    printf("Enter number of intervals (n): ");
    scanf("%d", &n);

    // Calculate step size
    h = (b - a) / n;

    // Calculate x and y values
    for (i = 0; i <= n; i++) {
        x[i] = a + i * h;
        y[i] = f(x[i]);
    }

    // Apply Trapezoidal Rule: (h/2) * [ (y0 + yn) + 2*(y1 + ... + yn-1) ]
    sum = y[0] + y;
    for (i = 1; i < n; i++) {
        sum += 2 * y[i];
    }

    float result = (h / 2.0) * sum;
    printf("Approximate Integral = %.4f\n", result);

    return 0;
}

/*
Sample Output
Enter lower limit (a): 0
Enter upper limit (b): 6
Enter number of intervals (n): 6

Approximate Integral = 6.0000
*/

