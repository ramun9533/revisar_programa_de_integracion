 #include<stdio.h>
 void main()
 {
printf("**********************************************************************************************************************************\n");
printf("                           **********                   *****************              **********         *****\n");
printf("                           **********        ******       ***************               *********         *****\n");
printf("                           **********        ******        **************                ********         *****\n");
printf("********         ********************        *******       **************                 *******         *****\n");
printf("********         ********************        *******       **************                  ******         *****\n");
printf("********         ********************        ******        **************         *         *****         *****\n");
printf("********         ********************        *****       ****************         **         ****         *****\n");
printf("********         ********************                    ****************         ***         ***         *****\n");
printf("********         ********************                  ******************         ****         **         *****\n");
printf("********         ********************             ***********************         *****         *         *****\n");
printf("********         ********************         ***************************         ******                  *****\n");
printf("********         ********************         ***************************         *******                 *****\n");
printf("********         ********************         ***************************         ********                *****\n");
printf("********         ********************         ***************************         *********               *****\n");
printf("********         ********************         ***************************         **********              *****\n");
printf("                           **********         ***************************         ***********             *****\n");
printf("                           **********         ***************************         ************            *****\n");
printf("                           **********         ***************************         *************           *****\n");
// printf("***************************************************************************************************************************************************************************************\n");


 }
// #include <stdio.h>
// #include <math.h>
 
// #define DEFINE_R (10U) /* El tamaño se puede personalizar */
// #define SQUARE(a)		(a * a)
 
// int main(int argc,char* argv[])
// {
// 	int r = DEFINE_R;
// 	double x,y;
 
// 	 for (y = r; y>=0; y = y-2) {/* El bucle de los dos semicírculos de arriba. */
//  /* Por qué el eje Y se resta de 2, porque hay un espacio entre líneas después de que el carácter se ajusta. Si no se resta de 2, el corazón es muy largo y no lo suficientemente redondo. */
// 		for(int i = 0;i < 2;i++){
//  /* Bucle dos veces para dibujar dos semicírculos. */
// 			for(x = r; fabs(x) <= r;x--){
// 				if((SQUARE(x) + SQUARE(y)) > SQUARE(r)){
// 					printf(" ");
// 				}else{
// 					printf("♥");
// 				}
// 			}
// 		}
// 		printf("\n");
// 	}
	
// 	 for (y = 0; y <= 3 * r; y = y + 2) 
// 	 {/* La parte inferior, el sector izquierdo. */
//  /* Por qué el eje Y se resta de 2, porque hay un espacio entre líneas después de que el carácter se ajusta. Si no se resta de 2, el corazón es muy largo y no lo suficientemente redondo. */
// 		for(x = 3*r;fabs(x) >= r;x--){
// 			if((SQUARE(x) + SQUARE(y)) > SQUARE(3 * r)){
// 				printf(" ");
// 			}else{
// 				printf("♥");
// 			}
			
// 		}
		
// 		 for (x=0-r;fabs(x)<=3*r;x--) 
// 		 {/* La parte inferior, el sector derecho. */
// 			if((SQUARE(x)+SQUARE(y))>SQUARE(3*r))
// 			{
// 				printf(" ");
// 			}else{
// 				printf("♥");
// 			}
// 		}
// 		printf("\n");
// 	}
	
// 	return 0;
// }