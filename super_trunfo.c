#include <stdio.h>

int main(){
    int populacao, npt; //npt=  numero de pontos turisiticos
    char estado[8];
    char cidade[30], codigo[10];
    float pib, area;
    float dp, pibper;
    //dp= densidade populacional
    //pibper= pib per capita

    printf("População:\n");
    scanf("%d", &populacao);
    
    printf("Pontos turisiticos:\n");
    scanf("%d", &npt);

    printf("Cidade:\n");
    scanf("%s", &cidade);

    printf("Código:\n");
    scanf("%s", &codigo);

    printf("Pib:\n");
    scanf("%f", &pib);

    printf("Área:\n");
    scanf("%f", &area); 

    printf("Estado:\n");
    scanf("%s", &estado);


    dp = (populacao / area);
    pibper = (pib / populacao);

    printf("Carta1:\n");


    
    

    printf("População: %d\n", populacao);
    printf("Pontos Turísticos: %d\n", npt);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade );
    printf("Código: %s\n", codigo);
    printf("Pib: %f\n", pib);
    printf("Área: %f\n", area);
    printf("Densidade populacional: %fhab/km²\n", dp);
    printf("PIB per Capita: %freais\n", pibper);

    printf("População:\n");
    scanf("%d", &populacao);
    
    printf("Pontos turisiticos:\n");
    scanf("%d", &npt);

    printf("Cidade:\n");
    scanf("%s", &cidade);

    printf("Código:\n");
    scanf("%s", &codigo);

    printf("Pib:\n");
    scanf("%f", &pib);

    printf("Área:\n");
    scanf("%f", &area); 

    printf("Estado:\n");
    scanf("%s", &estado);


    dp = (populacao / area);
    pibper = (pib / populacao);

    printf("Carta2:\n");


    
    

    printf("População: %d\n", populacao);
    printf("Pontos Turísticos: %d\n", npt);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade );
    printf("Código: %s\n", codigo);
    printf("Pib: %f\n", pib);
    printf("Área: %f\n", area);
    printf("Densidade populacional: %fhab/km²\n", dp);
    printf("PIB per Capita: %freais\n", pibper);



    return 0;




}

