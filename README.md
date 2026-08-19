# ED2 — Sorting — Lista 01

# Atividade Prática - Algoritmos de Ordenação (C++)

Este repositório contém a resolução da primeira etapa da atividade prática da disciplina de Estrutura de Dados II. O projeto é composto por uma série de exercícios focados na implementação, simulação e adaptação de algoritmos clássicos de ordenação (Bubble Sort, Selection Sort e Insertion Sort) utilizando a linguagem C++.

## 📂 Estrutura do Repositório

O repositório está organizado de forma centralizada. Todo o código-fonte encontra-se dentro do diretório `src/`, dividido em projetos independentes do **Code::Blocks** para facilitar a correção e a execução isolada de cada algoritmo:

* `src/` - Diretório principal contendo as soluções.
  * `Questao_01/` - Implementação estrita do Bubble Sort para ordenação de caracteres.
  * `Questao_02/` - Adaptação do Selection Sort para ordenação decrescente.
  * `Questao_03/` - Simulação parcial do Selection Sort (estado do vetor após *k* trocas).
  * `Questao_04/` - Contagem de deslocamentos na ordenação com Insertion Sort.
  * `Questao_05/` - Adaptação do Insertion Sort construindo a sublista ordenada no final do vetor.

---

## ⚙️ Pré-requisitos

Para compilar e executar os projetos, é necessário ter instalado:
* **Code::Blocks IDE** (versão com compilador embutido recomendada).
* **Compilador GCC/MinGW** (suporte a C++11 ou superior).

---

## 🚀 Como Compilar e Executar

Existem duas formas de executar os projetos deste repositório: utilizando a interface gráfica do Code::Blocks ou através de linha de comando.

### Opção A: Pelo Code::Blocks (Recomendado)

1. Faça o clone deste repositório na sua máquina local:
   ```bash
   git clone <https://github.com/MateusTeodoro/ed2-elementary-sorting-list01-cpp.git>

2. Abra o Code::Blocks.

3. Vá em File > Open... e navegue até a pasta da questão que deseja testar (ex: Questao_01).

4. Selecione o arquivo de projeto com a extensão .cbp (ex: Questao_01.cbp) e clique em abrir.

5. Na barra superior, clique no ícone de engrenagem com um triângulo verde ou pressione a tecla F9 (Build and Run).

6. O terminal será aberto aguardando a entrada dos dados.

---

### Opção B: Pelo Terminal (G++)

Caso prefira compilar os arquivos de código-fonte (.cpp) diretamente via terminal:

1. Navegue até a pasta da questão desejada:

```
cd Questao_01
```

2. Compile o arquivo utilizando o G++:

```
g++ main.cpp -o executavel -O2
```

3. Execute o programa gerado:

No Windows: ``` .\executavel.exe ```

No Linux/Mac: ``` ./executavel ```

---

## 🧪 Como Testar

Os códigos foram desenvolvidos no formato padrão de juízes online (como Beecrowd/URI), ou seja, não há mensagens interativas (ex: "Digite um número:"). O programa aguarda diretamente os dados de entrada e cospe apenas o resultado final exigido na saída.

Para testar o correto funcionamento, siga estes passos:

1. Execute o programa da questão desejada.

2. Copie os dados do "Exemplo de Entrada" descritos no PDF da atividade.

3. Cole-os diretamente no terminal do programa e pressione Enter.

4. A saída gerada no terminal deverá ser idêntica ao "Exemplo de Saída" correspondente.
