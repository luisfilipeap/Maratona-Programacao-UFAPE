# Código para somar entradas

O código que segue soma uma sequência de pares de inteiros até que o par (0,0) seja digitado.

```
#include <iostream>


int main()
{
    int val1, val2;
    std::cin >> val1;
    std::cin >> val2;

    while (val1 != 0 && val2 != 0)
    {
        std::cout << val1+val2 << std::endl;
        std::cin >> val1;
        std::cin >> val2;
    }

    return 0;
}
```

# Redirecionando Entradas e Saídas para arquivos

Ao invés de usar o console padrão para avaliar o nosso algoritmo em novos casos de teste, podemos oferecer o seguinte arquivo `in` como fonte de dados de entrada.

```
2 3
1 2
1 3
0 0
```

Para tanto, após a compilação do código, executamos o seguinte:

```
main.exe < in
```

Para redirecionar a saída padrão de dados para - por exemplo - o arquivo `out`, fazemos:

```
main.exe < in > out
```

Dessa forma, após a execução do programa, obtemos os seguintes dados escritos em `out`:

```
5
3
4
```
