# ED2 — Sorting — Lista 01

# Atividade Prática - Algoritmos de Ordenação (C++)

Este repositório contém a resolução da primeira etapa da atividade prática da disciplina de Estrutura de Dados II. O projeto é composto por uma série de exercícios focados na implementação, simulação e adaptação de algoritmos clássicos de ordenação (Bubble Sort, Selection Sort e Insertion Sort) utilizando a linguagem C++.

## 📂 Estrutura do Repositório

O projeto utiliza o **CMake** como sistema de build, padronizando a compilação para qualquer sistema operacional ou IDE moderna. Todo o código-fonte está centralizado no diretório `src/`:

```
ed2-elementary-sorting-list01-cpp/
├── CMakeLists.txt         # Configuração de compilação e definição dos executáveis
├── README.md              # Documentação do projeto
├── .gitignore             # Arquivos ignorados pelo controle de versão
└── src/
    ├── Exer01_BubbleSortString.cpp
    ├── Exer02_SelectionSortDescending.cpp
    ├── Exer03_SelectionSortKSwaps.cpp
    ├── Exer04_InsertionSortShiftCount.cpp
    └── Exer05_InsertionSortDescendingTail.cpp
```

---

## ⚙️ Pré-requisitos

* IDE Recomendada: CLion (JetBrains) ou Visual Studio Code com extensão CMake Tools.

* Ferramentas: CMake (versão 3.10 ou superior) e um compilador C++ moderno (GCC, MinGW ou Clang).

---

## 🚀 Como Compilar e Executar

A arquitetura do CMakeLists.txt foi configurada para gerar um executável independente para cada exercício.

### Opção A: Pelo CLion (Interface Gráfica)

1. Faça o clone deste repositório na sua máquina local:
   ```bash
   git clone <https://github.com/MateusTeodoro/ed2-elementary-sorting-list01-cpp.git>

2. Abra o CLion e selecione Open. Navegue até a pasta raiz do projeto (ed2-elementary-sorting-list01-cpp) e clique em OK.

3. O CLion lerá o CMakeLists.txt e carregará o projeto automaticamente.

4. No canto superior direito, localize o menu suspenso de Run Configurations (ao lado do botão de Play verde).

5. Selecione o executável do exercício que deseja testar (ex: Exer01_BubbleSortString).

6. Clique no botão de Play (Shift + F10) para rodar o código. O terminal integrado abrirá na parte inferior da tela.

---

### Opção B: Pelo Terminal (Via CMake)

Caso o avaliador prefira rodar via linha de comando:

1. Na raiz do projeto, crie uma pasta de build e acesse-a:

```
mkdir build && cd build
```

2. Gere os arquivos de compilação:

```
cmake ..
```

3. Compile todos os exercícios de uma vez:

```
cmake --build .
```

4. Execute o programa desejado (exemplo no Linux/Mac):

```
./Exer01_BubbleSortString
```

(No Windows, utilize .\Exer01_BubbleSortString.exe)

---

## 🧪 Estrutura de Testes

Os códigos-fonte foram desenvolvidos com um template profissional, separando a lógica de ordenação das rotinas de entrada e saída.

Dentro de cada arquivo .cpp, a função main() possui duas chaves de execução. Por padrão, os códigos estão configurados para o modo de Testes Locais.

* runLocalTests() (Ativado): Roda casos de teste pré-definidos baseados no PDF da atividade, comparando o resultado obtido com o resultado esperado e imprimindo [PASSED] ou [FAILED] no console.

* onlineJudge() (Comentado): Modo estrito para submissão em sistemas de correção automática (como Beecrowd/The Huxley). Lê entradas diretamente da entrada padrão (teclado/arquivo) e imprime apenas a saída seca, sem textos interativos.

Para avaliar o comportamento real do algoritmo em um Juiz Online, basta inverter os comentários na função main() de qualquer exercício antes de compilar:

```
int main()
{
    IOFAST();
    // runLocalTests();  
    onlineJudge(); 

    return 0;
}
```
