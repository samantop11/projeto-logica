#incluir <stdio.h>

int principal()
{
float calor_emprestimo;
float taxa_juros_anual;
float montante;
float prestação;
int num_parcelas;
float taxa_juros

printf("digite valor do emprestimo: ");
scanf("%f", &valor_emprestimo);

printf("digite taxa de juros anual: ");
scanf("%f", &taxa_juros_anual);

printf("digite numero de parcelas:");
scanf("%d", &num_parcelas);

taxa_juros_mensal=taxa_juros_anual /12;

float juros_total=valor_emprestimo*(taxa_juros_mensal/100);
float valor_final=valor_emprestimo +juros_total;
prestacao=valor_final/num_parcelas;

pritf("o valor de cada parcela é:%.2f\n", prestacao)

  retur 0;
}


