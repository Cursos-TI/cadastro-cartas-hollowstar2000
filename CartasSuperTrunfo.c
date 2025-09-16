#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //AS linhas abaixo determinam as variáveis a serem utilizadas para a Carta 1 e seus tipos.

        char estado;
        char codigo[5];
        char cidade[30];
        int populacao;
        float area;
        float pib;
        int pturisticos;

    //As linhas abaixo determinam as variáveis a serem utilizadas para a Carta 2 e seus tipos.

        char estado2;
        char codigo2[5];
        char cidade2[30];
        int populacao2;
        float area2;
        float pib2;
        int pturisticos2;

  // Área para entrada de dados

  //As linhas abaixo criam o código que coletará os dados para a Carta 1 e os atribuirá às devidas variáveis.    
    
    printf("INSIRA OS DADOS PARA A CARTA 1 \n");    

        printf ("Digite o Estado: ");
            scanf ("%c", &estado);
        printf ("Digite o Código: ");
            scanf ("%s", &codigo);
        printf ("Digite a cidade: ");
            scanf ("%s", &cidade);  
        printf ("Digite a População: ");
            scanf ("%i", &populacao);
        printf ("Digite a Área: ");
            scanf ("%f", &area );
        printf ("Digite o PIB: ");
            scanf ("%f", &pib );    
        printf ("Informe Número de Pontos Turístico:");
            scanf ("%i", &pturisticos);

    
    //As linhas abaixo criam o código que coletará os dados para a Carta 2 e os atribuirá às devidas variáveis
    printf("\n\n INSIRA OS DADOS PARA CARTA 2 \n");        

        printf ("Digite o Estado: ");
            scanf ("%s", &estado2);
        printf ("Digite o Código: ");
            scanf ("%s", &codigo2);
        printf ("Digite a cidade: ");
            scanf ("%s", &cidade2);  
        printf ("Digite a População: ");
            scanf ("%i", &populacao2);
        printf ("Digite a Área: ");
            scanf ("%f", &area2 );
        printf ("Digite o PIB: ");
            scanf ("%f", &pib2 );    
        printf ("Informe Número de Pontos Turístico: ");
            scanf ("%i", &pturisticos2);

  // Área para exibição dos dados da cidade

      //As linhas abaixo deifinem o código destinado á apresentação da Carta 1.    
    
    printf ("\n\n CARTA 1 \n");   
        
        printf ("Estado: %c\n", estado);
        printf ("Código:  %s\n", codigo);
        printf ("Nome da Cidade:  %s\n", cidade);
        printf ("População:  %i\n", populacao);
        printf ("Área:  %f Km²\n", area);
        printf ("PIB:  %f Bilhões de Reais\n", pib);
        printf ("Número de Pontos Turísticos:  %i\n", pturisticos);
    
    //As linhas abaixo definem o código destinado a apresentação da Carta 2    
    printf("\n\n CARTA2\n");

        printf ("Estado:  %c\n", estado2);
        printf ("Código:  %s\n", codigo2);
        printf ("Nome da Cidade:  %s\n", cidade2);
        printf ("População:  %i\n", populacao2);
        printf ("Área:  %f Km²\n", area2);
        printf ("PIB:  %f Bilhões de Reais\n", pib2);
        printf ("Número de Pontos Turísticos:  %i\n", pturisticos2);
    

return 0;
} 
