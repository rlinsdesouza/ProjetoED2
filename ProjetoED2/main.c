#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include "arvore.h"

void pausaLinux () {
  printf("\nPressione ENTER \n");
  getchar();
}

int main(){

  char opcao='w';
  int issn;
  tavl indice;

  criar(&indice);

  for (;;) {
    while (!strchr("ipacxels", opcao)) {
             printf("\e[H\e[2J");
             system("cls");
             printf("Indexação de periódicos v1.1\n");
             printf("=====================================\n");
             printf("(i) Importar arquivo CSV\n");
             printf("(p) Exportar tabela de índice\n");
             printf("(a) Adiconar manualmente um períodico\n");
             printf("(c) Consultar um periódico\n");
             printf("(x) Excluir um períodico\n");
             printf("(e) Eliminar todos os períodos\n");
             printf("(l) Listar Dados\n");
             printf("(s) Sair\n");
             printf("=====================================\n");
             printf("Favor informar uma opcao valida:[ ]\b\b");
             scanf("%[^\n]c",&opcao);
             getchar();
             opcao = tolower(opcao);
         }

    switch (opcao) {
        case 'i': {
            printf("Funçao (i) menu ok");
            pausaLinux ();
            system("pause");
            break;
        }
        case 'p': {
            vazia(indice) ? printf("Tabela de índice vazia!!!\n") : exibirArvore(indice);
            exibir(indice);
            pausaLinux ();
            system("pause");
            break;
        }
        case 'a': {
            printf("Favor informar um ISSN que deseja acrescentar na base: ");
            scanf("%d",&issn);
            if (!busca (indice, issn)) {
              (inserir(&indice, issn));
              printf("Valor %d adicionado com sucesso!!!\n",issn);
            }else{
              printf("ISSN não pode ser inserido: Já existente na base!\n");
            }
            getchar();
            pausaLinux ();
            system("pause");
            break;
        }
        case 'c': {
            printf("Funçao (c) menu ok");
            pausaLinux ();
            system("pause");
            break;
        }
        case 'x': {
          printf("Favor informar um ISSN que deseja REMOVER da base: ");
          scanf("%d",&issn);
          if (busca (indice, issn)) {
            (remover(&indice, issn));
            printf("Valor %d REMOVIDO com sucesso!!!\n",issn);
          }else{
            printf("ISSN não pode ser removido: Não existente na base!\n");
          }
          getchar();
          pausaLinux ();
          system("pause");
          break;
        }
        case 'e': {
            esvaziar(&indice);
            printf("Todos os periódicos eliminados com sucesso!!!!\n");
            pausaLinux ();
            system("pause");
            break;
        }
        case 'l': {
            printf("Funçao (l) menu ok");
            pausaLinux ();
            system("pause");
            break;
        }
        case 's': {
            return 0;
        }
    }
    opcao = 'w';
  }
}
