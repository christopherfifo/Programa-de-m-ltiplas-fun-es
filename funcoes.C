#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/******************************************************************************************************************************/
int potencia_base() 
{
    double numero;  // Variável para armazenar o número fornecido pelo usuário
    int expoente;   // Variável para armazenar o expoente fornecido pelo usuário
    double resultado; // Variável para armazenar o resultado da operação

    // Solicita ao usuário o número
    printf("Digite o número a ser multiplicado pela potência de base 10: ");
    scanf("%lf", &numero);

    // Solicita ao usuário o expoente
    printf("Digite o valor do expoente para a base 10: ");
    scanf("%d", &expoente);

    // Calcula a potência de base 10
    resultado = numero * pow(10, expoente); //função da biblioteca math.h

    // Imprime o resultado
    printf("Resultado de %.2lf * 10^%d = %.2lf\n", numero, expoente, resultado);

    return 0;
}

/*********************************************************/
int caculadora_soma_simples()
{
    int n1 = 0;
    int n2 = 0;
    int total = 0;
    int tipo = 0;
    int resto = 0;
    
    printf("\nEscolha o tipo de operação que você deseja fazer:\n\n1 - Adição\n2 - Subtração\n3 - multiplicação\n4 - Divisão\n5 - potência\n\n ");
    scanf("%d", &tipo);
    
    if(tipo != 5)
    {
    printf ("\nnumero 1:");
    scanf("%d", &n1);
    printf ("numero 2:");
    scanf("%d", &n2);

    resto = n1 % n2;
    }  
    
    switch(tipo)
    {
        case 1:
        total =  n1 + n2;
        printf("\nTotal: %d", total);
        break;
        
        case 2:
        total =  n1 - n2;
        printf("\nTotal: %d", total);
        break;
        
        case 3:
        total =  n1 * n2;
        printf("\nTotal: %d", total);
        break;
        
        case 4:
        if (n1 < n2)
        {
            float divi =  (float) n1 / (float) n2;
            printf ("\nTotal: %.2f", divi);
            break;
        }
        else
        {
            total = n1 / n2;
            printf("\nTotal: %d", total);
            printf("\nResto: %d", resto);
            break;       
        }
        
        case 5:
        potencia_base();
        break;
        
        default:
    }
    
    return 0;
    
}
/******************************************************************************************************************************/
int imposto_do_amor()
{
    int salario = 0;
    int imposto = 300;

    printf("digite o seu salario:");
    scanf("%d", &salario);
    
    int i=0;

    for( i=salario ; i > 600; i = i - imposto)
    {

        printf("\n%d", i);
    }


    return 0;
}
/******************************************************************************************************************************/

int operadores_logicos()
{
    float media=0;
    int faltas=0;
    
    printf("Operadores logicos\n\n");
    
    printf("Digite a sua media:");
    scanf("%f", &media);
    
    printf("Digite as suas faltas:");
    scanf("%d", &faltas);
    
    
    printf("Operadores logicos\n\n");
    if (media > 6 && faltas<18)
    printf("aprovado\n");
    else
    printf("Reprovado\n");
    
    
     if (media > 6 && ! faltas<18)
    printf("Como você conseguiu?\n");
    else
    printf("Corno\n");
    
    
     if (media > 6 || faltas<18)
    printf("Parabens, passou pelo conselho\n");
    else
    printf("Reprovado\n");
    
    return 0;
}
/*************************************************************************************************************/
int descontos_salario ()
{

  float salariob = 0;
  float IR = 0;
  float iNSS = 0;
  float descontos = 0;
  float salariol = 0;

  printf ("digite seu salario bruto:");
  scanf ("%f", &salariob);

  iNSS = salariob * 0.14;

  if (salariob > 7000)
	{
	  IR = salariob * 0.10;
	}
  else
	{
	  IR = salariob * 0.05;
	}

  descontos = IR + iNSS;

  salariol = salariob - descontos;
  
  printf("\nSeu salario é: %.2f\n", salariol);
  printf("Seu iR é: %.2f\n", IR);
  printf("Seu INSS é: %.2f\n", iNSS);
  printf("Seus descontos são: %.2f", descontos);
  
  return 0;
}
/***********************************************************************************************************/
int media_nota()
{
 
    int cont, quant = 0;
    float nota, notas = 0.0, media = 0.0;// Inicializa `notas` com 0.0
 
    printf("Quantidades de notas a serem somadas:");
    scanf("%d", &quant);
 
    for(cont = 1; cont <= quant; cont++)
    {
        printf("\ndigite a %d nota:", cont);
        scanf("%f", &nota);
        notas += nota;
    }
    
    if (quant > 0) 
    { // Verifica se `quant` é maior que 0 para evitar divisão por zero
        media = notas / quant; 
    } 
    else 
    {
        printf("Número inválido de notas.\n");
        return 1; // Retorna um valor diferente de zero para indicar erro
    }
     
    printf("\nSua média é: %.2f", media);
     
    if(media > 5.9)
    {
        printf("\nSituação: Aprovado");
    }
    else if(media<4)
    {
        printf("\nSituação: Reprovado");
    }
    else
    {
        printf("\nSituação: Exame");
    }
    
    return 0;
}
/************************************************************************************************************************************/
int contador_de_letras() 
{
    char palavra[25];
    char letra;
    int cont = 0;     // Variável para contar as ocorrências da letra
    int k = 0;        // Contador para o loop
    
    printf("Olá, esse é o contador de letras. Digite uma palavra: ");
    scanf("%24s", palavra);
    
    printf("\nAgora digite a letra que você quer saber: ");
    scanf(" %c", &letra); // O espaço antes de %c é para ignorar qualquer espaço em branco residual, %c lê uma unica caractere
    
    // Loop para percorrer cada caractere da palavra
    while (palavra[k] != '\0') 
    { // Continua até o final da string, verifica se o caractere atual (palavra[k]) não é o terminador nulo \0, que indica o fim da string.
    
        if (palavra[k] == letra) 
        { // Parte da primeira posição da arry, verifica se o caractere atual é igual à letra fornecida
            cont++;
        }
        
        k++; // Incrementa o contador do loop
    }
    
    printf("\nLetras '%c' : %d\n", letra, cont);

    return 0;
}
/******************************************************************************************************************************/
int main()
{
    int resultado=0;
    char nome [100];
    char resp = 's';
    
    printf("Qual é o seu primeiro nome?: ");
    scanf("%s", nome);
    
    printf("\033[2J");// apaga tudo para tras, mas fica flutuando a informação
    printf("\033[1;2H");//primeira linha, segubda coluna
    
    while(resultado == 0 || resp == 's')
    {
        printf("\nEntao %s qual programa você vai querer usar?\n\n1 - imposto_do_amor\n2 - caculadora de soma simples\n3 - operadores logicos\n4 - contador de letras\n", nome);
        printf("5 - descontos do salario\n6 - média de nota\n\n");
        scanf("%d", &resultado);
    
        switch(resultado)
        {
            case 1:
            system("clear");
            imposto_do_amor();
            break;
            
            case 2:
            system("clear");
            caculadora_soma_simples();
            break;
            
            case 3:
            system("clear");
            operadores_logicos();
            break;
            
            case 4:
            system("clear");
            contador_de_letras();
            break;
            
            case 5:
            system("clear");
            descontos_salario();
            break;
            
            case 6:
            system("clear");
            media_nota();
            break;
            
            default:
            system("clear");
            resultado=0;
        }
        
        printf("\nDeseja continuar? (s/n):");
        scanf(" %c", &resp);
        system("clear");
    }

return 0;
}





