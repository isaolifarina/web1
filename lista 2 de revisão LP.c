#include <stdio.h> 
int main() {
int num1, num2, num3, numT;
float Me;
 printf("Diga o valor do primeiro número?");
 scanf("%d", &num1); 
 printf("Do segundo número?");
 scanf("%d", &num2);
 printf("Por último, do terceiro?"); 
 scanf("%d", &num3);
numT = 3;
Me = (float) (num1+num2+num3)/ numT; 
 printf("A média aritmética desses valores é %f", Me);
return 0;
}

#include <stdio.h> 
int main() {
float vc, vt, parcela;
 printf("Qual o valor da compra?");
 scanf("%f", &vc);
 parcela = 5;
 vt = vc / parcela;
 printf("Compra parcelada\n %.1f x %.2f = %.2f" , parcela, vt, vc); 
 return 0; 
}

#include <stdio.h> 
int main() {
int tseg, seg, hor, min; 
printf("Quantos segundos se passou até agora?");
scanf("%d", &tseg);
hor = tseg/3600;
min = hor/60;
seg = min/60;
printf("Esses %d = %d : %d : %d", tseg, hor, min, seg);
return 0; 
}

#include <stdio.h> 
#include <math.h>
int main() {
float resultado, num; 
printf ("Diga um número"); 
scanf("%f", &num);
resultado = sqrt (num);
printf("A raiz quadrada desse número é %.0f", resultado);
return 0;
}


