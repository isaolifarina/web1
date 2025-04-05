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
