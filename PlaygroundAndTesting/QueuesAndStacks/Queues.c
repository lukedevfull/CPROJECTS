#include <stdio.h>
#include <stdlib.h>


//Função DIDATICA, PARA ENTENDIMENTO DE FILAS E INSERÇÃO POR LOGICA CIRCULAR    
//QUEUE INSERTION
void inserir (Fila *f, int valor) {
    if (filaCheia(f)) return; //se a fila estiver cheia, retorna
    f->vetor[f->fim] = valor; //insere o valor na posição do fim
    f->fim = (f->fim +1 ) % MAXTAM; //atualiza o fim
    f->tamanho++; //atualiza o tamanho
}

//QUEUE DELETION
Elemento remover(Fila *f){
    Elemento vazio = {-1}; //definindo valor para retorno se lista vazia
    if (filaVazia(f)) return vazio; //se a fila estiver vazia, retorna o valor definido
    Elemento e = f->vetor[f->inicio]; //pega o elemento da posição do inicio
    f->inicio = (f->inicio + 1) % MAXTAM; //atualiza o inicio
    f->tamanho--; //atualiza o tamanho
    return e; //retorna o elemento removido
}
//PEEK (OLHAR O PRIMEIRO ELEMENTO DA FILA, sem alterar)
Elemento espiar(Fila *f){
    Elemento vazio = {-1}; //definindo valor para retorno se lista vazia
    if (FilaVazia(f)) return vazio;//se a fila estiver vazia, retorna o valor definido
    return f->vetor[f->inicio];//retorna o elemento da posição do inicio
}
int main() {

    return 0;
}