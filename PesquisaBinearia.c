int PesquisaBinaria (int Elem, int V[], int tam) {
    int inicio = 0, fim = tam - 1, meio, k = -1;
    while ((inicio <= fim) && (k == -1)) {
        meio = (inicio + fim) / 2;
        if (V[meio] == Elem) 
            k = meio; // Elemento encontrado, retorna o índice
        else if (V[meio] < Elem) 
            inicio = meio + 1; // Continua a busca na metade direita
        else 
            fim = meio - 1; // Continua a busca na metade esquerda
    }
    return k; // Retorna o índice do elemento encontrado ou -1 se não encontrado
         
}