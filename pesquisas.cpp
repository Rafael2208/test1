#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include<time.h>

int main(void)
{
     int i,n,j,l,soma=0,media,peso,media2,maior,maiorPosicao;
     int periodo = NULL, *vetor = NULL;




    printf(" Digite um valor para o periodo\n");//periodo
    scanf("%d", &periodo);
    printf("*****\n");

    vetor = (int *)malloc(periodo * sizeof(int));

  srand(time(NULL));

  for (i=0; i < periodo; i++){
     //gerando valores aleatórios
     n = rand() % 10 ; // valor padronizado de números
     printf("%d \n", n);
     vetor[i]=n;
  }

  for (i=0; i<periodo; i++){
    soma = soma + vetor[i];
  }

  for (i=0; i<periodo; i++){
    media = soma / periodo;
  }

  for(i=0; i<periodo; i++){
  if (vetor[i] > maior){
    maior = vetor[i];
  maiorPosicao=i; //atribui a posição do maior a i
  }
  }



  for (i=0; i<periodo; i++){
    media2 =(maiorPosicao-media)*(2/(periodo+1))+media;
  }

  if (periodo==0){
	   	printf ("Erro!! Digite outro número");
	}




  printf("\n");
  printf("\n SOMA MMS = %d\n", soma);
  printf("\n MMS Media = %d\n", media);
  printf("\n MME Media = %d\n", media2);




  return 0;
}
