#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define f(x) (1 / (2 + x * x))

float main() {
    float a, upper, inte = 0.0, h, k;
    int i, n;

    printf("Enter lower limit of integration: ");
    scanf("%f", &a);

    printf("Enter upper limit of integration: ");
    scanf("%f", &upper);

    printf("Enter no of subinterval: ");
    scanf("%d", &n);

    h = (upper - a) / n;
    inte = f(a) + f(upper);

    for (i = 1; i <= n - 1; i++) {
        k = a + i * h;
        if (i % 2 == 0)
            inte = inte + 2 * f(k);
        else
            inte = inte + 4 * f(k);
    }

    inte = inte * (h / 3);

    printf("\n Required value: %0.4f\n", inte);

    return 0;
}

/*
Sample Output
Enter lower limit of integration: 0
Enter upper limit of integration: 6
Enter no of subinterval: 6

Required value: 1.3662
*/