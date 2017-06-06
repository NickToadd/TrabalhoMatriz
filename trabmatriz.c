#include <stdio.h>

int main()
{
 int ma[4][4], mb[4][4], ms[4][4], msa[4][4], mm[4][4];
 int l, c, e, b, i, j, m, n, linha, coluna;
  
 printf("\nOlá. Meu nome é Nícolas e minha matrícula da Unilasalle é 0050013943!\n");
 printf("\nEntre com a matriz A de 4 linhas e 4 colunas\n");
  
 for(l=0; l<=3; l++)
 {
   for(c=0; c<=3; c++)
   {
     printf("\nMatriz A - Entre com a linha %d, coluna %d: ", l+1, c+1);
     scanf("%d", &ma[l][c]);
      if (c == (4 - 1 - l ))
      {
        msa[l][c] = ma[l][c];
      }
     else{msa[l][c] = 0;}
     
   }
}
     printf("\nEntre com a matriz B de 4 linhas e 4 colunas\n");
  
  for(e=0; e<=3; e++)
 {
   for(b=0; b<=3; b++)
   {
     printf("\nMatriz B - Entre com a linha %d, coluna %d: ", e+1, b+1);
     scanf("%d", &mb[e][b]);
   }
}
  
for (i=0; i<=3; i++)
{
  for(j=0; j<=3; j++)
  {
    ms[i][j] = ma[i][j] + mb[i][j];
  }
}
  
printf("\n\nA soma da Matriz A e da Matriz B: \n\n");
  
for (i=0; i<4; i++)
{
  for(j=0; j<4;j++)
    printf("%3.d\t",ms[i][j]);
    printf("\n\n");
}  

printf("\n\n");
  
  
printf("\n\nA diagonal secundária da Matriz A é: \n\n");
  
for (m=0; m<4; m++)
{
  for(n=0; n<4;n++)
    printf("%3.d\t",msa[m][n]);
    printf("\n\n");
}  

printf("\n\n");
  
  
  for (m=0; m<=3; m++)
{
  for(n=0; n<=3; n++)
  {
    mm[m][n] = ma[m][n] * mb[m][n];
  }
}
  
printf("\n\nA multiplicação da Matriz A e da Matriz B: \n\n");
  
for (m=0; m<4; m++)
{
  for(n=0; n<4;n++)
    printf("%3.d\t",mm[m][n]);
    printf("\n\n");
}  

printf("\n\n");
  
printf("A minha maior dificuldade foi fazer a matriz secundária, porém,  acabou que no final era apenas erro simples. Mas até descobrir...");
printf("\nJá que ainda não possuo muita segurança sobre a programação, decidi criar várias variáveis para denominar linhas e colunas ao invés de só duas. Creio que pude evitar problemas desnessessários.\n\n\n");
return 0;
}