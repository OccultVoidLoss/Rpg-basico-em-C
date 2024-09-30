#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int vida = 3;
void gameover (){
    if (vida <= 0) {
        printf("\n Voce Morreu!Tente denovo \n");
    }
    exit(0);
}
//função que checa se a vida chegou a zero, ou seja se o jogador morreu

int main(){
    srand(time(NULL));
    
    while (1) // basicamente um loop infinito que vai ficar rolando até o player morrer
    {
        char nome[20];
        int classe;
        int tesouro = 0;
        
        
        printf("Digite seu nome: ");
        gets(nome);
        
        printf("Escolha sua classe: \n");
        printf("1- Guerreiro \n");
        printf("2- Ladino \n");
        printf("3- Mago \n");
        printf("4- Clerigo \n");
        scanf("%d", &classe);
        
        int resultado2 = (rand() % 2 ) +1; // cria um numero aleatorio entre 1 e 2
        int escolha2 = 0;
        printf("Voce anda por um caminho escuro e encontra uma porta, apos abri-la voce ve algo\n");
        if (classe == 1){
            printf("Voce encontra um esconderijo com varios soldados ao lado de corpos de seus companheiros, soldados que aparentemente estão tentando fugir da peste, deseja conversar com eles? \n");
            printf("Digite 1 para conversar e 2 para seguir em frente\n");
            scanf("%d", &escolha2);
            if (escolha2 == 1){
                if (resultado2 == 1){
                    printf("Um deles te da oi e te explica que eles estao fugindo da peste, tentando sobreviver porem eles afirmam que estao perto de morrer e te entregam uma espada que parece ter sido feita por um ferreiro muito experiente e apos isso voce segue em frente \n");
                    tesouro = 1;
                }
                else if(resultado2 == 2){
                    printf("Eles se mostram agressivos, tomados pela loucura e decidem te atacar, com sorte voce foge sem muitos danos");
                    vida --;
                }
            }

        }
        
        else if (classe == 2){
            printf("Voce encontra um bau que parece ser importante, talvez haja alguma armadilha, deseja arriscar?\n");
            printf("Digite 1 para abrir e 2 para seguir em frente\n");
            scanf("%d", &escolha2);
            if (escolha2 == 1){
                if (resultado2 == 1){
                    printf("Voce encontra encontra uma adaga ornamentado feito de ossos, ela parece possuir algum tipo de maldição que pode ser util apos guarda-la voce segue em frente");
                    tesouro = 1;
                }
                else if(resultado2 == 2){
                    printf("No bau havia uma armadilha! Assim que voce tenta abri-lo, ele se fecha rapidamente na sua mao agora com espinhos, causando feridas leves em voce");
                    vida --;
                }
            }

        }
        
        else if (classe == 3){
            printf("Voce encontra uma biblioteca que parece ter livros de um tema especifico, a peste, deseja ler eles?\n");
            printf("Digite 1 para ler e 2 para seguir em frente\n");
            scanf("%d", &escolha2);
            if (escolha2 == 1){
                if (resultado2 == 1){
                    printf("Voce le o livro e encontra uma magia que parece muito util, e entao voce leva o livro com voce conforme segue em frente");
                    tesouro = 1;
                }
                else if(resultado2 == 2){
                    printf("Ao abrir o livro voce percebe que esse nao é qualquer livro, ele e o necromicon e conforme voce folheia as paginas sua mente se corroe com tais conhecimentos, essa dor psicologica se torna fisica");
                    vida --;
                }
            }

        }
        
        else if (classe == 4){
            printf("Voce encontra uma estatua destruida do seu deus, deseja rezar nela para ganhar sorte mas com o risco de enfurecer seu deus? \n");
            printf("Digite 1 para rezar e 2 para seguir em frente \n");
            scanf("%d", &escolha2);
            if (escolha2 == 1){
                if (resultado2 == 1){
                    printf("Voce reza e seu deus ouve suas preces, ele te abençoa voce se sente mais forte e assim voce segue em frente");
                    tesouro = 1;
                }
                else if(resultado2 == 2){
                    printf("Seu deus se enfurece e lanca uma maldicao em voce, voce se ajoelha sentindo o peso de seus pecados te esmagar, te machucando, mas isso tudo para alguma hora, ele se acalmou mas tudo isso foi real");
                    vida --;
                }
            }
            }
        int vidainimigo = 3;
        int escolha3;
        printf("\n Enquanto trilha seu caminho, voce encontra um esqueleto, ele empunha uma cimitarra e nao parece ser amigavel \n o que voce faz?");
        while (vidainimigo >0){
            int resultado3 = (rand() % 2 ) +1;
            int resultadoinimigo = (rand() % 2)+1;
            printf("\n 1- Atacar");
            printf("\n 2- Fugir \n");
            scanf("%d", &escolha3);
            if (escolha3 == 2){
                if (resultado3 == 1) {
                    printf("\n Voce foge daquele lugar amaldicoado porem os pesadelos que voce viu nunca fugirao da sua mente perturbada ");
                }
                else{
                    printf("\n Voce tenta fugir porem enquanto corre o esqueleto te ataca e consegue te acertar, fincando sua cimitarra em sua perna");
                    vida --;
                }
            }
            else {
                if (classe == 1 && resultado3 == 1){
                    if (tesouro == 1){
                        printf("Voce acerta o esqueleto com sua espada sagrada, que solta uma luz forte que danifica ainda mais o inimigo, porem apos esse uso voce sente que a bencao da espada se foi \n");
                        vidainimigo = vidainimigo -2 ;
                        tesouro = 0;

                    }
                    else if (tesouro == 0){
                        printf("Voce acerta o esqueleto com a sua espada, causando um estrago nele, contudo a batalha ainda nao acabou \n");
                        vidainimigo --;
                    }
                }
                else if(classe ==1 && resultado3 == 2){
                    printf("Voce tenta acertar o esqueleto porem seu ataque erra \n");
                }
                
                
                if (classe == 2 && resultado3 == 1){
                    if (tesouro == 1){
                        printf("Voce acerta o esqueleto com sua adaga amaldiçoada, apos o acerto parece que os ossos do esqueleto começam a se enfraquecer, voce sente que a maldicao da adaga se gastou \n");
                        vidainimigo = vidainimigo -2 ;
                        tesouro = 0;

                    }
                    else if (tesouro == 0){
                        printf("Voce acerta o esqueleto com a sua adaga, causando um estrago nele, contudo a batalha ainda nao acabou \n");
                        vidainimigo --;
                    }
                }
                else if(classe ==2 && resultado3 == 2){
                    printf("Voce tenta acertar o esqueleto porem seu ataque erra \n");
                }
                
                
                if (classe == 3 && resultado3 == 1){
                    if (tesouro == 1){
                        printf("Voce acerta o esqueleto com uma tempestade de raios que o danificam imensamente, porem voce sente que nao podera usar essa magia novamente \n");
                        vidainimigo = vidainimigo -2 ;
                        tesouro = 0;

                    }
                    else if (tesouro == 0){
                        printf("Voce acerta o esqueleto com uma bola de fogo, causando um estrago nele, contudo a batalha ainda nao acabou \n");
                        vidainimigo --;
                    }
                }
                else if(classe ==3 && resultado3 == 2){
                    printf("Voce tenta acertar o esqueleto porem seu ataque erra \n");
                }
                
                
                if (classe == 4 && resultado3 == 1){
                    if (tesouro == 1){
                        printf("Voce acerta o esqueleto com sua estrela da manha, e por conta da bencao que foi lhe dada seu ataque causa um dano maior ao esqueleto, porem sua bencao acabou seu deus nao pode te ajudar para sempre \n");
                        vidainimigo = vidainimigo -2 ;
                        tesouro = 0;

                    }
                    else if (tesouro == 0){
                        printf("Voce acerta o esqueleto com a sua estrela da manha, causando um estrago nele, contudo a batalha ainda nao acabou \n");
                        vidainimigo --;
                    }
                }
                else if(classe ==4 && resultado3 == 2){
                    printf("Voce tenta acertar o esqueleto porem seu ataque erra \n");
                }
                if (resultadoinimigo == 1){
                    printf("O esqueleto te acerta com sua cimitarra, voce perde 1 de vida");
                    vida --;
                }
                else if (resultadoinimigo == 2){
                    printf("O esqueleto tenta te atacar mas voce consegue desviar dele");
                }
                gameover();
            }
        }
        if (vidainimigo <= 0 && vida > 0){
            printf(" \n Voce conseguiu! \n");
        }
        
        system("pause"); // pausa o programa pra ele nao fechar qnd acabar
        return 0;

    }
}
