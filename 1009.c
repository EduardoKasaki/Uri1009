#include <stdio.h>
 int main(void) { 


  char vendedor[8]; 

   double salario, tvendas, total, comissao;

   scanf("%s%lf%lf", vendedor ,&salario, &tvendas); 

   comissao = tvendas * 0.15;

   total = salario + comissao;

   printf("TOTAL = R$ %.2lf\n", total); 

   return 0;
 }

