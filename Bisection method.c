#include <stdio.h>
#include <math.h>

#define f(x) ((x)*(x)*(x) - (x) - 4)

int main() {
    float a, b, c, h;
    
    printf("Enter values of a and b: ");
    scanf("%f %f", &a, &b);
    
    if (f(a) * f(b) > 0) {
        printf("Invalid interval");
        return 0;
    }
    
    do {
        c = (a + b) / 2;
        if (f(c) < 0)
            a = c;
        else
            b = c;
        h = (a + b) / 2;
    } while (fabs(h - c) > 0.0001);
    
    printf("Root = %f \n", h);
    return 0;
}

/*
Sample Output
Enter values of a and b: 1 2
Root = 1.796326
*/

