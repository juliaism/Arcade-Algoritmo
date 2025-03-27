#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <ctype.h> 
#include <conio.h>
#include <string.h>

#define NUM_JOGADORES 7
#define NUM_CAIXAS 5

char numero;

int main ()

{
setlocale(LC_ALL, "PORTUGUESE_BRAZIL");
	
//MENU PRINCIPAL	    
menu_principal:
system("cls");
printf("**********************************************************\n");
printf("**********************************************************\n");
printf("***                                                    ***\n");
printf("***                   TRÍPLICE COROA                   ***\n"); 
printf("***                                                    ***\n");
printf("**********************************************************\n");
printf("**********************************************************\n\n");
printf("Jogos:\n");
printf("\n1) Pergunta e Resposta\n");
printf("2) Cobra na Caixa!\n");
printf("3) Gousma War\n");
printf("4) Sair\n");
printf("\nInsira a opção desejada --> ");
scanf("%c", &numero);
switch (numero)
    
    {	
	case '1':                
	
	//PERGUNTA E RESPOSTA
    
	    {
		float i, ans1, ans2, ans3, ans4, ans5;
		system("cls");
		
		//TELA INICIAL PERGUNTA E RESPOSTA
		system("cls");
		printf("**********************************************************\n");
		printf("**********************************************************\n");
		printf("***                                                    ***\n");
		printf("***         BEM VINDO AO PERGUNTA E RESPOSTA           ***\n"); 
		printf("***                                                    ***\n");
		printf("**********************************************************\n");
		printf("**********************************************************\n\n");
		printf("Esse jogo irá testar seus conhecimentos sobre o mundo dos\n");
		printf("games através de 5 perguntas com apenas 1 resposta certa!\n");
		
		printf("\n\nPressione qualquer tecla para continuar...\n\n");
   	    getch();
		system ("cls");
		
		{
		//MENU PERGUNTA
		menu_pergunta:
		
		//PERGUNTA 1	
        printf("Quem é o irmão do Mario?\n\n");
		printf("1) Yoshi\n");
		printf("2) Wario\n");
		printf("3) Luigi\n");
		printf("4) Bowser\n");
		printf("\n--> Resposta: ");
		scanf("%f", &ans1);
		
		if(ans1==3)
		
		{
	   	printf("\n<Resposta correta!>\n\n");
		printf("\n\nPressione qualquer tecla para continuar...\n\n");
   	    getch();
   	    system("cls");
		}
        
		else
		
		{
        printf("\n<Resposta incorreta! A alternativa correta é 3) Luigi>\n\n");
        printf("\n\nPressione qualquer tecla para continuar...\n\n");
   	    getch();
   	    system("cls");
		}
	 
	    //PERGUNTA 2
	    printf("Qual é a evolução do Pikachu?\n\n");
	    printf("1) Raichu\n");
	    printf("2) Pichu\n");
	    printf("3) Jolteon\n");
	    printf("4) Zapdos\n");
        printf("\n--> Resposta: ");
        scanf("%f", &ans2);
	   	
	   	if(ans2==1)
	   	
        {
	   	printf("\n<Resposta correta!>\n\n\n");
	   	printf("\n\nPressione qualquer tecla para continuar...\n\n");
   	    getch();
   	    system("cls");
	    }
	    
	    else 
	    
		{
        printf("\n<Resposta incorreta! A alternativa correta é 1) Raichu>\n\n");
	    printf("\n\nPressione qualquer tecla para continuar...\n\n");
   	    getch();
   	    system("cls");
		}
	   
	    //PERGUNTA 3
        printf("Qual a classe responsável pela cura em Overwatch?\n\n");
	    printf("1) Curandeiro\n");
	    printf("2) Suporte\n");
	    printf("3) Médico\n");
	    printf("4) DPS\n");
	    printf("\n--> Resposta: ");
        scanf("%f", &ans3);
	   	
	   	if(ans3==2)
	   	
        {
        printf("\n<Resposta correta!>\n\n\n");
	    printf("\n\nPressione qualquer tecla para continuar...\n\n");
   	    getch();
   	    system("cls");
		}
	    
	    else
			 
	    {
	   	printf("\n<Resposta incorreta! A alternativa correta é 2) Suporte>\n\n");
	    printf("\n\nPressione qualquer tecla para continuar...\n\n");
   	    getch();
   	    system("cls");
		}
	  
	    //PERUNTA 4
	    printf("Em qual ano Tetris foi lançado?\n\n");
        printf("1) 1986\n");
	    printf("2) 1983\n");
	    printf("3) 1987\n");
	    printf("4) 1984\n");
	    printf("\n--> Resposta: ");
        scanf("%f", &ans4);
	   	
	   	if(ans4==4)
	   	
        {
	   	printf("\n<Resposta correta!>\n\n\n");
	    printf("\n\nPressione qualquer tecla para continuar...\n\n");
   	    getch();
   	    system("cls");
		}
	    
	    else 
	    	
	    {
        printf("\n<Resposta incorreta! A alternativa correta é 4) 1984>\n\n");  
	    printf("\n\nPressione qualquer tecla para continuar...\n\n");
   	    getch();
   	    system("cls");
		}

		//PERGUNTA 5
	    printf("Quantos NBA 2K já foram lançados?\n\n");
	    printf("1) 25\n");
	    printf("2) 24\n");
	    printf("3) 18\n");
	    printf("4) 27\n");
	    printf("\n--> Resposta: ");
        scanf("%f", &ans5);
        
		if(ans5==4)
	   	
   		{
	   	printf("\n<Resposta correta!>\n\n\n");
	    printf("\n\nPressione qualquer tecla para continuar...\n\n");
   	    getch();
   	    system("cls");
		}
	    
	    else 
	    	
	    {	
	   	printf("\n<Resposta incorreta! A alternativa correta é 4) 27>\n\n");
        printf("\n\nPressione qualquer tecla para continuar...\n\n");
   	    getch();
   	    system("cls");
		}
        
        //MENU FIM 
        menu_final_pergunta:
		printf("Fim de jogo\n");
        printf("\nPara jogar novamente digite `1`  \nPara voltar ao menu principal digite `2`  \n--> ");
        scanf("%f", &i);
        
		if(i==2)
        {
   	    goto menu_principal;
        }
        
		if(i==1)
        { 
        system("cls");
        goto menu_pergunta;
		}  
        else
		{
		system("cls");
		goto menu_final_pergunta;	
		}
		}
		}
		
    //FIM PERGUNTAS E RESPOSTA        
         
    case '2':
  	
	//COBRA NA CAIXA
	{
        float i;
        void inicializarCaixas(char caixas[])
 	 	    {
    	    //PREENCHE CAIXAS ALEATORIAMENTE COM VAZIO ('V'), COBRA ('C') OU BOTAO ('B')
	        for (int i = 0; i < NUM_CAIXAS; i++)
        		{
		        int conteudo = rand() % 3;
	            if (conteudo == 0)
			    caixas[i] = 'V';
                else if (conteudo == 1)
	 	  	    caixas[i] = 'C'; 
                else
			    caixas[i] = 'B'; 
 	 	        }
			}

		int nomeJaEscolhido(char *nome, char escolhidos[][20], int total)
       	    {
       	    //DEFINE SE O NOME JA FOI ESCOLHIDO OU NAO	
            for (int i = 0; i < total; i++)
                {
                if (strcmp(escolhidos[i], nome) == 0)
		        {
			    return 1; //ESCOLHIDO
		        }
                }
                return 0; //DISPONIVEL
			}
        {
    	setlocale(LC_ALL, "PORTUGUESE_BRAZIL");
    	char opcoesNomes[NUM_JOGADORES][20] = {"SADDIE", "CARTER", "ZIA", "JULIUS", "RUBY", "AMOS", "KHUFU"};
    	char jogadores[NUM_JOGADORES][20];
    	char caixas[NUM_CAIXAS];
    	int jogadorAtual;

		srand(time(NULL));

		//TELA INICIAL COBRA NA CAIXA
		menu_2:		
		system("cls");
		printf("**********************************************************\n");
		printf("**********************************************************\n");
		printf("***                                                    ***\n");
		printf("***            BEM VINDO AO COBRA NA CAIXA!            ***\n"); 
		printf("***                                                    ***\n");
		printf("**********************************************************\n");
		printf("**********************************************************\n\n");
		printf("Em uma sala de uma tumba egípcia com cinco caixas secretas,\n");
		printf("deposite toda a sua sorte na caixa escolhida para salvar\n");
		printf("dois exploradores presos\n");	
	
    	printf("\n\nPressione qualquer tecla para continuar...\n\n");
   	    getch();
    
 		//MENU NOMES DE JOGADORES
 		system("cls");
	    printf("\nEscolha os nomes dos jogadores entre as opções:\n\n");
	    printf("SADDIE\n");
	    printf("CARTER\n");
	    printf("ZIA\n");
	    printf("JULIUS\n");
	    printf("RUBY\n");
	    printf("AMOS\n");
	    printf("KHUFU\n");
	    
	    //ROTINA ESCOLHA DE NOMES
			for (int i = 0; i < NUM_JOGADORES; i++)
	            {
		        char nomeEscolhido[20];
		        do
		        {
			    printf("\nJogador %d, escolha um nome: ", i + 1);
			    scanf("%s", nomeEscolhido);

			    if (nomeJaEscolhido(nomeEscolhido, jogadores, i))
			    {
				printf("\nNome já escolhido! Tente novamente.\n");
			    }
                else
			    {
				int valido = 0;   

                //VERIFICA SE O NOME E VALIDO
                for (int j = 0; j < NUM_JOGADORES; j++) 
                {
		        char opcaoTemp[20];
                strcpy(opcaoTemp, opcoesNomes[j]); 
                      
                if (strcmp(opcaoTemp, nomeEscolhido) == 0) 
				{
				valido = 1;
				break;
				}
				} 
				 
                if (!valido)
		        {
				printf("\nNome inválido! Escolha entre as opções acima.\n");
				}
				else
				{
				strcpy(jogadores[i], nomeEscolhido);
				break;
				}
     	 	    }
				}
		       
			    while (1);
	            }

	            //EXIBE NOMES ESCOLHIDOS
	            system ("cls");
	            printf("\nJogadores selecionados:\n");
                for (int i = 0; i < NUM_JOGADORES; i++) 
                
	    //ROTINA ESCOLHA QUEM COMECA
        jogadorAtual = rand() % NUM_JOGADORES;
	    printf("\n%s começa o jogo!\n", jogadores[jogadorAtual]);

	        while (1)
	            {
                //INICIALIZA CAIXAS
      	  	    inicializarCaixas(caixas);
	
				//MENU ESCOLHA CAIXA	
		        printf("\n%s, escolha uma caixa (1 a 5): ", jogadores[jogadorAtual]);
		        int escolha;
                scanf("%d", &escolha);

		        //VERIFICA CONTEUDO DA CAIXA ESCOLHIDA
		        if (escolha < 1 || escolha > 5)
                {
			    printf("\nEscolha inválida! Tente novamente.\n");
			    continue;
                }

		        char resultado = caixas[escolha - 1];
		        if (resultado == 'V') //CAIXA VAZIA
		        {
			    system ("cls");
			    printf("\nCaixa vazia. Próxima rodada!\n");
                }
                else if (resultado == 'C') //CAIXA COM COBRA
		        {
			    system ("cls");
			    printf("\nCOBRA NA CAIXA!!! <Fim de jogo> %s PERDEU!!!\n", jogadores[jogadorAtual]);
			    printf("\nPara jogar novamente digite `1`  \nPara voltar ao menu principal digite `2`  \n--> ");
                scanf("%f", &i);
                  
                if(i==2)
                {
   	            goto menu_principal;
                }
                if(i==1)
                {
                goto menu_2;
                }
                break;
		        }
		        
                else if (resultado == 'B') //CAIXA COM BOTAO
		        {
                system ("cls");
			    printf("\nVocê encontrou o botão! %s VENCEU!!!\n", jogadores[jogadorAtual]);
			    printf("\nPara jogar novamente digite `1`  \nPara voltar ao menu principal digite `2`  \n--> ");
                scanf("%f", &i);
               

		        if(i==2)
                {
   	            goto menu_principal;
                }
                if(i==1)
                {
   	            goto menu_2;
                }
			    break;
		        }

		   	    //PASSA PARA O PROXIMO JOGADOR
		        jogadorAtual = (jogadorAtual + 1) % NUM_JOGADORES;
	            }
		}
	}
    break;
		   
	//FIM COBRA NA CAIXA
							
	case '3':
		
	//GOUSMA WAR
	{
		
	//TELA INICIAL GOUSMA	
	system("cls");
	printf("**********************************************************\n");
	printf("**********************************************************\n");
	printf("***                                                    ***\n");
	printf("***            BEM VINDO AO GOUSMA WAR                 ***\n"); 
	printf("***                                                    ***\n");
	printf("**********************************************************\n");
	printf("**********************************************************\n\n");
	printf("Ataque, divida e use sua melhor estratégia para derrotar as \nGousmas inimigas \n");	
	printf("\n\nPressione qualquer tecla para continuar...\n\n");
   	getch();
			
    typedef struct 
	{
    int furia;
    int ativa;
    }
    Gousma;
	
    void atacar(Gousma *atacante, Gousma *defensor) 
    {
    if (atacante->furia > 0) 
	{
        defensor->furia += atacante->furia;
        atacante->furia = 0;

        if (defensor->furia > 5) 
		{
        printf("/nUma Gousma se desintegrou!\n");
        getch();
        defensor->ativa = 0;
        }
    }
    }

	void dividir(Gousma *original, Gousma *nova) 
	{
    if (nova->ativa == 0 && original->furia > 1) 
	{
        nova->furia = original->furia / 2;
        original->furia -= nova->furia;
        nova->ativa = 1;
    }
    else 
	{
        printf("/nNão é possível dividir essa Gousma.\n");
        getch();
    }
	}

	//MOSTRA ESTADO DAS GOUSMAS A CADA RODADA
    void mostrarEstado(Gousma jogadores[][2], int totalJogadores) 
	{
    printf("\n========================== Estado das Gousmas =========================\n\n");
    for (int i = 0; i < totalJogadores; i++) {
        printf("Jogador %d: Gousma 0 (Fúria: %d, Ativa: %d), Gousma 1 (Fúria: %d, Ativa: %d)\n",
        i + 1, jogadores[i][0].furia, jogadores[i][0].ativa, jogadores[i][1].furia, jogadores[i][1].ativa);
    }
    printf("\n=======================================================================\n\n");
    }

	//INDICA SE O JOGADOR ESTA ATIVO (1) OU ELIMINADO (0)
    {
    int totalJogadores = 4;
    Gousma jogadores[4][2] = {{{1, 1}, {1, 1}}, {{1, 1}, {1, 1}}, {{1, 1}, {1, 1}}, {{1, 1}, {1, 1}}};
    int jogadorAtivo[4] = {1, 1, 1, 1};
    int opcao, atacante, defensor, jogadorDefensor, jogadorAtual = 0;

    while (1) 
	{
        //VERIFICA SE O JOGADOR ATUAL ESTA ATIVO
        if (!jogadorAtivo[jogadorAtual]) 
		{
            jogadorAtual = (jogadorAtual + 1) % totalJogadores;
            continue;
        }
        system ("cls");
        printf("\n=======================================================================\n");
        printf("==================       Jogador %d é a sua vez       ==================\n", jogadorAtual + 1);
        printf("=======================================================================\n");

        Gousma *gousmas = jogadores[jogadorAtual];
        mostrarEstado(jogadores, totalJogadores);

        printf("\n1) Atacar");
		printf("\n2) Dividir");
		printf("\n3) Sair");
		printf("\n\nEscolha uma opção: ");
        if (scanf("%d", &opcao) != 1) 
		{
            printf("\nEntrada inválida! Tente novamente.\n");
            while (getchar() != '\n'); 
            continue;
        }

        switch (opcao) 
		{
            case 1:
                printf("Escolha a Gousma atacante (0 ou 1): ");
                scanf("%d", &atacante);
                printf("Escolha o jogador atacado (1 a %d): ", totalJogadores);
                scanf("%d", &jogadorDefensor);
                printf("Escolha a Gousma atacada (0 ou 1): ");
                scanf("%d", &defensor);

                jogadorDefensor--; 
                if (jogadorDefensor == jogadorAtual) 
				{
                    printf("\nVocê não pode atacar a si mesmo!\n");
                    getch();
                } else if (atacante >= 0 && atacante <= 1 &&
                           defensor >= 0 && defensor <= 1 &&
                           jogadorDefensor >= 0 && jogadorDefensor < totalJogadores &&
                           gousmas[atacante].ativa && jogadores[jogadorDefensor][defensor].ativa) 
						   {
                    atacar(&gousmas[atacante], &jogadores[jogadorDefensor][defensor]);
                } 
				else 
				{
                    printf("\nAtaque inválido. Certifique-se de que as Gousmas estão ativas.\n");
                    getch();
                }
                break;

            case 2:
                printf("Escolha a Gousma para dividir (0 ou 1): ");
                scanf("%d", &atacante);

                if (atacante >= 0 && atacante <= 1 && gousmas[0].ativa && gousmas[1].ativa) 
				{
                    printf("\nVocê já tem duas Gousmas ativas.\n");
                    getch();
                }
				 else if (atacante >= 0 && atacante <= 1) 
                {
                    dividir(&gousmas[atacante], &gousmas[gousmas[0].ativa ? 1 : 0]);
                } else 
				{
                    printf("\nOpção inválida para dividir.\n");
                    getch();
                }
                break;

            case 3:
                printf("\nJogo encerrado.\n");
                getch();
                goto menu_principal;
                return 0;

            default:
                printf("\nOpção inválida.\n");
                getch();
        }

        //VERIFICA SE O JOGADOR TEM GOUSMAS ATIVAS
        if (!gousmas[0].ativa && !gousmas[1].ativa) 
		{
            printf("\nJogador %d foi eliminado!\n", jogadorAtual + 1);
            getch();
            jogadorAtivo[jogadorAtual] = 0; //JOGADOR ELIMINADO
        }

        int jogadoresVivos = 0;
        for (int i = 0; i < totalJogadores; i++) 
		{
            if (jogadorAtivo[i]) 
			{
                jogadoresVivos++;
            }
        }

        if (jogadoresVivos == 1) 
		{
            for (int i = 0; i < totalJogadores; i++) 
			{
                if (jogadorAtivo[i]) 
				{
                    printf("\nJogador %d venceu!\n", i + 1);
                    getch();
                }
            }
            break;
        }

        jogadorAtual = (jogadorAtual + 1) % totalJogadores;
    }
    }
    return 0;
    }
		 
		 	 
		 case '4':
	{
	system("cls");
	printf("**********************************************************\n");
	printf("**********************************************************\n");
	printf("***                                                    ***\n");
	printf("***                     TCHAU!!!                       ***\n"); 
	printf("***                                                    ***\n");
	printf("**********************************************************\n");
	printf("**********************************************************\n\n");
		exit (0);
	}
	
	default:
	{
		goto menu_principal;
	}
    
    
   }
}
 

         