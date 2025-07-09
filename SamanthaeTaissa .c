
#include <stdio.h>

int main()
{
    float valor_emprestimo;
    float taxa_juros_anual;
    float montante;
    float prestacao;
    int num_parcelas;
    float taxa_juros_mensal;
     
     printf("digite valor do emprestimo: ");
     scanf("%f",&valor_emprestimo);
     
     printf("digite taxa juros anual: ");
     scanf("%f", &taxa_juros_anual);
     
     printf("digite numero de parcelas: ");
     scanf("%d", &num_parcelas);
     
     //calculo
     
     taxa_juros_mensal=taxa_juros_anual /12;
     
     
     float juros_total=valor_emprestimo*(taxa_juros_mensal/100);
     float valor_final=valor_emprestimo+juros_total;
     prestacao=valor_final/num_parcelas;
     
     printf("o valor de cada parcela é:%.2f\n", prestacao);

    return 0;
}
