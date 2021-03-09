#include<stdio.h>
#include<stdlib.h>

int main(void) {
  
  float nota1,snota1, nota2,snota2, nota3,snota3, nota4,snota4, media,smedia;

  nota1 = 8.4;
  nota2 = 7.9;
  nota3 = 4.6;
  nota4 = 9.9;

  printf("notas de exemplo: \n");

  printf("Notas:\n%.1f\n%.1f\n%.1f\n%.1f\n",nota1,nota2,nota3,nota4);

  media = (nota1 + nota2 + nota3 + nota4) /4;

  printf("Sua média é: %.1f\n",media);

  printf("insira sua primeira nota: ");
  scanf("%f",&snota1);

  printf("insira sua segunda nota: ");
  scanf("%f",&snota2);

    printf("insira sua terceira nota: ");
  scanf("%f",&snota3);

  printf("insira sua quarta nota: ");
  scanf("%f",&snota4);

  smedia = (snota1 + snota2 + snota3 + snota4) /4;

  printf("Sua média é: %.1f",smedia);
  
}