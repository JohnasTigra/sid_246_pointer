#include <stdio.h>
#include <math.h>
#include "medelv.h"

// _Bool rotter(double a, double b, double *rot1, double *rot2){
//     double d = a*a/4-b;
//     if (d < 0)
//         return 0;
//     else {
//         *rot1 = -a / 2 + sqrt(d);
//         *rot2 = -a / 2 - sqrt(d);
//         return 1;
//     }
// }

// int main() {
//     double a, b, rot1, rot2;
//     printf("p? ");
//     scanf("%lf", &a);
//     printf("q? ");
//     scanf("%lf", &b);
//     if (rotter(a, b, &rot1, &rot2))
//         printf("rötterna är %f och %f\n", rot1, rot2);
//     else    
//         printf("reela rötter saknas");
// }

double medelv(double, double);

int main() {
    double x, y;
    printf("det första talet ?");
    scanf("%lf", &x);
    printf("det andra talet ?");
    scanf("%lf", &y);
    double mv = medelv(x, y);
    printf("medlevärdet: %f", mv);
}