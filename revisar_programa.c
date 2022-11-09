/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
/* Propram to perform definite integration of a given function between
 two boundary limits input by user. Feel free to use and modify it, but
 please do not remove this comment.
 source: C for Engineering, http://c4engineering.hypermart.net */

#define N 1000

void main(void) {
 float i, a, b, y, x ,  sum = 0;
 printf("nThis program will integrate a function between two boundary limits.");
 printf("nnEnter the first boundary limit:");
 scanf("%f", &a);
 printf("nEnter the second boundary limit:");
 scanf("%f", &b);
 if (a > b) {
  i = a;
  a = b;
  b = i;
 }

 for (i = a; i < b; i += (b - a) / N) {
  /* Define your function below, and include the suitable header files */
  y = x * x + 2 * x - 4;
  sum += y * (b - a) / N;
 }

 printf("nnValue of integration is:%.3f", sum);
 //getch();
 return;
}
