#include<stdio.h>

void main()

{
float acumxxx, acumx1, acumx2, acumx3, acumx, acumy,acumxx, acumxx1, acumxx2 ,acumxx3 ,acumyy, acumyy1, acumyy2 ,acumyy3,acumy1, acumy2, acumy3;
int terminos ,i,j, b, c, d, m, p, x, y; //la variable d es la constante
//printf("\n Favor de intruducir las constantes de la ecuacion (a, b, c, d) y sus exponentes (n, m, p) \n");
//printf("\n aX^n+bX^m+cX^p+d\n");
//printf("aX^n+bX^m+cX^p+d");
printf("\n Proporcione la cantidad de terminos\n");
scanf("%d",&terminos);
int a[terminos];
int n[terminos];
for (i=0;i<terminos;i++)
{
printf("\n Favor de proporcionar la constante del termino %d \n", i+1); // carga de exponentes y constantes
scanf("%d",&a[i]);

printf("\n Favor de proporcionar el exponente ""n"" \n");
scanf("%d",&n[i]);
}
}
