// #include <stdio.h>
// #include <math.h>
#include "fbibl.h"

// double medelv(double a, double b){
//     return (a+b)/2;
// }
// double upphojt_till(double x, int n){
//     double res = 1;
//     int i = 1;
//     if (n >= 0)
//         for ( ; i <= n; i++)
//             res = res * x;
//     else 
//         for ( ; i <= -n; i++)
//             res = res / x;
//     return res;
// }

// int siff_sum(int tal){
//     int sum = 0;
    
//     while(tal > 0){
//         sum = sum + tal % 10; // modulus 
//         tal = tal / 10;
//     }
//             char* txt_func(); { // sub function with text this text will change depending on function used in main
//             char *txt_to_print = "siff_sum_txt";
//             return txt_to_print;
//         }

//     txt_func(); // calling the sub function to display right text
//     return sum;

// }
#include <stdio.h>



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
