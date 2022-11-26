# Função Principal: main()


O arquivo `main.cpp` contém referência à biblioteca `hello_world.h`. Nela codificaremos funções (ex.: `hello()`) contendo os nossos algoritmos. 

Para invocar a função `hello()` dentro do namespace `hello_world`, chamamos `hello_world::hello()`.

```
#include "hello_world.h"
#include <iostream>


int main()
{
    std::cout << hello_world::hello() << std::endl;
    return 0;
}
```

# Arquivo de definições .h

O arquivo de definições apresenta uma interface de comunicação entre o código existente e as novas funcionalidades codificadas pelo programador.

Veja que o arquivo de definições cria um namespace `hello_world` e nele define a função `hello()` que retorna o tipo `std::string` 

```
#if !defined(HELLO_WORLD_H)
#define HELLO_WORLD_H
#include <string>

namespace hello_world 
{

std::string hello();

}  // namespace hello_world

#endif
```

# Arquivo de implementação .cpp

No arquivo .cpp implementamos as assinaturas das funções presentes no arquivo de definições .h.

Nesse exemplo, implementamos a função `hello()`. 

```
#include "hello_world.h"


std::string hello_world::hello()
{
    return "Hello World";
}
```

# Compilação

A compilação e linkedição do código fonte se dá através do compilador `g++`:

```
g++ main.cpp hello_world.cpp -o main.exe
```

Para isso, certifique-se que o compilador `g++` está instalado em sua máquina ([baixar aqui](https://www.mingw-w64.org/downloads/)) e o seu diretório indicado na variável `PATH` do sistema.