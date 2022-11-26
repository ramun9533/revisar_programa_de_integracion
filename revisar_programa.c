#include<stdio.h>

void main()

{
float p, x, y, acumxxx, acumx1, acumx2, acumx3, acumy,acumxx, acumxx1, acumxx2 ,acumxx3 ,acumyy, acumyy1, acumyy2 ,acumyy3,acumy1, acumy2, acumy3;
int terminos, potencia ,i,j, b, c, d, m; //la variable d es la constante
printf("\n Favor de intruducir las constantes de la ecuacion (a, b, c, d) y sus exponentes (n, m, p) \n");
printf("\n aX^n+bX^m+cX^p+d\n");
printf("\n Proporcione la cantidad de terminos\n");
scanf("%d",&terminos);
float a[terminos];
int n[terminos]; //solo potencias enteras, para potencias fraccionarias  se necesita sacar raices
float acumx[terminos];
//Se asigna valores a acomuladores, constante "a" y la potencia "n"
for (i=0;i<terminos;i++)
{
// printf("\n Favor de proporcionar la constante del termino %d \n", i+1); // carga de exponentes y constantes
// scanf("%d",&a[i]);

printf("\n Favor de proporcionar el exponente ""n"" del termino %d \n" , i+1); // Coloco  "i+1" porque si coloco "i" comenzara a aparecer desde "0"

scanf("%d",&n[i]); //cargando datos al vector "n" por medio del contador "i"

}

printf("\n Favor dar los limites de la integral\n");
printf("\n Favor de proporcionar limite Siperior \n"); // carga de Limites
scanf("%f",&x);
// float a[terminos];
// float n[terminos];
// float acumx[terminos];
//int terminos, potencia ,i,j, b, c, d, m;
//p=1;


acumx1=0; //acomulador suma
//Este for cin variable i es de los terminos, funciona
for (i=0;i<=terminos;i++)
{
    acumx1=acumx1+acumx3;
    acumx2=1; //acomulador multiplicadora
    acumx3=0; //acomulador suma
    //Este for cin variable  es de los potencia, funciona
    for (j=0;j<n[i]+1;j++) // Al agregar n[i]+1 me eleva la potencia
{
    acumx2=acumx2*x; //la variable "p" se esta uasando `para prueba

}
acumx3=((acumx2+acumx3)/(n[i]+1));
     printf("hola %f\n", acumx3);
}
printf("%f", acumx1);
}
