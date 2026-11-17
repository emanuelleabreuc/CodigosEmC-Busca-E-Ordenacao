int PesquisaExaustiva (int Elem, int v[], int tam) {
    int i = 0; //só aponta q começa no inicio
    while ((i < tam) && (Elem != v[i])) //anda até achar o valor ou acabar o vetor
        i = i + 1;
    if (i == tam) return (-1); //chegou ao fim, então retorna -1. Senão, retorna i
    else          return (i);
}