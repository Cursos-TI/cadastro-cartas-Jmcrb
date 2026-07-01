#include <stdio.h>

    int main(){
        //DECLARAR VARIAVEIS PRODUTO, U I ESTOQUE, DOUBLE VALOR UNITARIO, DOUBLE VALOR TOTAL
        // UI QUANTIDADE MINIMA
        char produtoA[30] = "Produto A";
        char produtoB[30] = "Produto B";

        unsigned int estoqueA = 1000;
        unsigned int estoqueB = 2000;

        float valorA = 10.50;
        float valorB = 20.40;

        unsigned int estoqueMininoA = 500;
        unsigned int estoqueMininoB = 2500;

        double ValorTotalA;
        double ValorTotalB;

        int resultadoA, resultadoB;
       
         // EXIBIR INFORMAÇÕES DOS PRODUTOS
        printf("Produto %s tem estoque %u e o valor unitario é R$ %.2f\n", produtoA, estoqueA, valorA);
        printf("Produto %s tem estoque %u e o valor unitario é R$ %.2f\n", produtoB, estoqueB, valorB);

        //COMPARAÇÕES COM O VALOR MINIMO DE ESTOQUE
        resultadoA = estoqueA > estoqueMininoA;
        resultadoB = estoqueB > estoqueMininoB;

        printf("O produto %s tem estoque minimo %d\n", produtoA, resultadoA);
        printf("O produto %s tem estoque minimo %d\n", produtoB, resultadoB);
        //COMPARAÇÃO ENTRE VALORES TOTAIS DOS PRODUTOS

        printf("O valor total de A (R$ %2.f) é maior que o valor total de B (R$ %2.f)? %d\n",
                                        estoqueA * valorA, 
                                        estoqueB * valorB,
                                        (estoqueA * valorA) > (estoqueB * valorB));









    }