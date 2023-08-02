#include <stdio.h>
#include <math.h>
#include "fbibl.h"



void processUserChoice(int choice) {
    double tal = 0;
    double tal2 = 0;
  
    switch (choice) {
        case 1:
            printf("the first number plz ?");
            scanf("%d", &tal);
            //siff_sum(tal);
            printf("this is the value for siff_sum ");
            printf("%d", siff_sum(&tal)); // & gives address to return value , by using pointers
            break;
        case 2:
            printf("the first integer plz ?");
            scanf("%lf", &tal);
            printf("the second integer plz ?");
            scanf("%lf", &tal2);
            printf("this is the value for medelv ");
            printf("%.2lf", medelv(&tal, &tal2));
            break;
        case 3:
            printf("the first integer plz ?");
            scanf("%lf", &tal);
            printf("the second integer plz ?");
            scanf("%lf", &tal2);
            printf("this is the value for medelv ");
            printf("%.2lf", upphojt_till(tal, tal2));
            break;    
        default:
            printf("Please enter number 1 to 4 .\n");
            break;

    }
}

double medelv(double *p_tal, double *p_tal2){ 
return  ((*p_tal + *p_tal2) * .5);
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

int siff_sum(int *p_tal) {
int sum = 0;
while (*p_tal> 0) {
sum = sum + *p_tal % 10; // modulus
*p_tal = *p_tal / 10;
return *p_tal;
    }
}