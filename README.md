----------------------------------------------------LEIA-ME-------------------------------------------------------------------------------------------------------------------------------------- 
Os programas elaborados correspondem a um trabalho para a disciplina SSC0300 - Linguagens de Programação e Aplicações, ministrada
ao curso de Engenharia Mecânica pelo professor Adenilso Simão do Instituto de Ciências Matemáticas e Computação(ICMC - USP).

Aluno: Vitor Eiti Uekawa
Número USP: 9012671
GitHub username:vitoruekawa

1 - Informações gerais
  1.1 - Ambiente e Compilador
    Linguagem Utilizada: Linguagem C.
    Compilador Utilizado: TDM-GCC 4.9.2 64-bit Debug.
    Ambiente de compilação: Dev-C++ 5.11.
    Bibliotecas utilizadas: <stdlib.h> e <stdio.h> em todos os programas.
    Parâmetros de compilação: parâmetros padrões do ambiente Dev-C++.
    Arquitetura: Windows 8.1

  1.2 - GitHub
    A divulgação do trabalho foi feita através do GitHub, sendo que, no repositório https://github.com/vitoruekawa/Trab1LPA,
    encontrm-se os códigos-fonte(arquivos *.c) de cada programa, os executáveis de cada programa(arquivo *.exe) e um arquivo de texto
    README.txt, que instrui o usuário sobre a utilização de cada programa.

  1.3 - Compilação
    A compilação foi realizada pelo compilador TDM-GCC 4.9.2 64-bit Debug, sendo feita através do ambiente de compilação Dev-C++ 5.11
    de maneira usual, ou seja, escrevendo o código-fonte e selecionando a caixa Executar e em seguida o comando Compilar. A execução dos programas
    pode ser feita tanto através do próprio ambiente de compilação quanto através de ouros softwares como CodeBlocks.
  
2 - Programas
  2.1 - Closest Pair
    A partir de um vetor de n números, escolhido pelo usuário, o programa Closest Pair identifica os pares cuja diferença seja mínima.
    
    2.1.1 - Entrada padrão
      A entrada padrão corresponde ao conjunto dos números inteiros. A primeira entrada corresponde ao tamanho n do vetor dinâmico a ser criado,
      sendo que esse tamanho corresponde à quantidade de valores a serem digitados pelo usuário. Caso o usuário entre com um valor <=2 para n, o programa
      avisará o usuário e solicitará que o mesmo digite um valor maior do que 2, para que haja pelo menos 1 par de números.
      Após essa primeira entrada, o usuário deverá entrar com n valores(n escolhido atraves da primeira entrada), teclando a tecla "Enter" a cada número a ser entrado.
    
    2.1.2- Saída padrão
      A saída padrão do programa corresponde ao conjunto dos números inteiros. O programa irá retornar os dois números digitados pelo usuário cuja diferença
      entre eles seja a menor entre todos os outros valores. Caso haja mais de um par com a mesma diferença mínima, o programa irá retornar todos os pares.
      
      
  2.2 - Element Uniqueness
    A partir de um vetor de n números, sendo n escolhido pelo usuário, o programa Element Uniqueness identifica os números que aparecem apenas uma vez.
    
    2.2.1 - Entrada padrão
      A entrada padrão corresponde ao conjunto dos números inteiros. A primeira entrada corresponde ao tamanho n do vetor dinâmico a ser criado para armazenar os valores de entrada
      do usuário. Caso o usuário entre com um valor <1 para n, o programa avisará o usuário e solicitará que o mesmo digite um valor maior que 1. Após a primeira entrada,
      o usuário deverá entrar com n valores para preencher o vetor dinâmico criado e o programa identificará os valores que não aparecem mais de uma vez.
      
    2.2.2 - Saída padrão
      A saída padrão do programa corresponde ao conjunto dos números inteiros. O programa irá retornar os números que não foram digitados mais de uma vez.
      Caso haja vários números que não foram digitados mais de uma vez, o programa irá retornar todos.
      
  2.3 - Frequency Distribution
    A partir de um vetor de n números, sendo n escolhido pelo usuário, o programa Frequency Distribution identifica o número que foi digitado mais vezes.
    
    2.3.1 - Entrada padrão
      A entrada padrão corresponde ao conjunto dos números inteiros. A primeira entrada corresponde ao tamanho n do vetor dinâmico a ser criado para armazenar os valores de entrada
      do usuário. Caso o usuário entre com um valor <1 para n, o programa avisará o usuário e solicitará que o mesmo digite um valor maior que 1. Após a primeira entrada,
      o usuário deverá entrar com n valores para preencher o vetor dinâmico criado e o programa identificará o valor que aparece com maior frequência.
      
    2.3.2 - Saída padrão
      A saída padrão do programa corresponde ao conjunto dos números inteiros. O programa irá retornar os números que foram digitados mais vezes.
      Caso haja vários números que foram digitados a mesma quantidade máxima de vezes, o programa retornará todos.
