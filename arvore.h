typedef int telem;

typedef struct no {
  struct no *esq;
  telem info;
  long int endereco;
  int bal;
  struct no *dir;
} tno;

typedef tno *tavl;

void criar (tavl *T);
int vazia (tavl T);
int quantidadeNos (tavl T);
void exibirOrdemCrescente (tavl T);
tavl busca(tavl T, telem dado);
void imprimirEspacos(int x);
int numeroDeEspacos(int x);
int pw(int x, int y);
void imprimirNivel(tavl T, int nivel, int n);
void exibirArvore(tavl T);
void esvaziar(tavl *T);
void rot_dir (tavl *T);
void rot_esq_dir (tavl *T);
void rot_esq (tavl *T);
void rot_dir_esq (tavl *T);
void caso1(tavl *T);
void caso2(tavl *T);
int inserir(tavl *T, telem item, long int end);
int altura ( tavl T);
tavl remover(tavl *T, int info);
tavl balRemove (tavl *T);
void BalancRemove (tavl *T);
void removerBalanceado (tavl *T, int valor);
