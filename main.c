#include <stdio.h>
#include <math.h>
#include "fbibl.h"

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

// double medelv(double, double);
// double upphojt_till(double x, int n);
// const char* txt_func();
// void processUserChoice(int choice); 
// siff_sum(tal);

// MEDLEV,
// UPPHOJT_TILL,


//int main() {
     
    //double x, y;
    // printf("the first number plz ?");
    // scanf("%lf", &x);
    // // printf("the second number plz ?");
    // // scanf("%lf", &y);
    // double mv = siff_sum(x);   // medelv
    // printf("%f", mv);
    // printf("%s", txt_func());
    
int main() {
    printf("Admin menu\n");
    printf("1. calculate siff_sum modulus of 10\n");
    printf("2. calculate medelv\n");
    printf("3. calculate upphojt_till\n");
    printf("4. Exit\n");
    int choice;
    char input[100];

    fgets(input, sizeof(input), stdin);
    if (sscanf(input, "%d", &choice) != 1) {
        printf("Please enter a number.\n");
        return -1; 
    }
    
    processUserChoice(choice);

   

   
   
}

