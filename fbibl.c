#include <stdio.h>
#include <math.h>
#include "fbibl.h"



void processUserChoice(int choice) {
    int tal = 0;
    int tal2 = 0;
    switch (choice) {
        case 1:
            printf("the first number plz ?");
            scanf("%d", &tal);
            //siff_sum(tal);
            printf("this is the value for siff_sum ");
            printf("%d", siff_sum(tal));
            break;
        case 2:
            printf("the first integer plz ?");
            scanf("%d", &tal);
            printf("the second integer plz ?");
            scanf("%d", &tal2);
            printf("this is the value for medelv ");
            printf("%.2lf", medelv(tal, tal2));
            break;
        case 3:
            printf("the first integer plz ?");
            scanf("%d", &tal);
            printf("the second integer plz ?");
            scanf("%d", &tal2);
            printf("this is the value for medelv ");
            printf("%.2lf", upphojt_till(tal, tal2));
            break;    
        default:
            printf("Please enter number 1 to 4 .\n");
            break;

    }
}

double medelv(double num, double num2){
return  ((num + num2) / 2.0);
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

int siff_sum(int x) {
int sum = 0;
while (x > 0) {
sum = sum + x % 10; // modulus
x = x / 10;
return x;
    }
}