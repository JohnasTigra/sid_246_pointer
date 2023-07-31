// #include <stdio.h>
// #include <math.h>
#include "fbibl.h"

double medelv(double a, double b){
    return (a+b)/2;
}
double upphojt_till(double x, int n){
    double res = 1;
    int i = 1;
    if (n >= 0)
        for ( ; i <= n; i++)
            res = res * x;
    else 
        for ( ; i <= -n; i++)
            res = res / x;
    return res;
}

int siff_sum(int tal){
    int sum = 0;
    //const char siff_sum_txt[] = "modulen är";
    char siff_sum_txt[] = "modulen är";
    
    while(tal > 0){
        sum = sum + tal % 10; // lägg till sista siffran 
        tal = tal / 10;
    }
    return sum;

}
