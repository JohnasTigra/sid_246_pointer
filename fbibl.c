#include <stdio.h>
#include <math.h>
#include "fbibl.h"

void processUserChoice(int choice) {
    switch (choice) {
        case 1:
            int tal;
            printf("the first number plz ?");
            scanf("%lf", &tal);
            int siff_sum(tal);
            printf("this is the value for siff_sum?");
            printf("%f", siff_sum(tal));
            break;
    }
}

double medelv(double a, double b) {
return (a + b) / 2;
}

double upphojt_till(double x, int n) {
double res = 1;
int i = 1;
if (n >= 0)
for (; i <= n; i++)
res = res * x;
else
for (; i <= -n; i++)
res = res / x;
return res;
}

int siff_sum(tal) {
int x;
int sum = 0;
while (x > 0) {
sum = sum + x % 10; // modulus
x = x / 10;
return x;
}

}
