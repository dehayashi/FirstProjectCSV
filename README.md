# FirstProjectCSV
# **Primeiro projeto da Mentoria Conquiste sua Vaga Turma 26 do https://github.com/pedromarins**
Este programa em C é um conversor de temperatura que converte a temperatura em Fahrenheit para Celsius. Ele faz uso das funções de entrada e saída padrão do C para ler e escrever dados na tela do computador.

<p> Vou explicar cada parte do código passo a passo:</p>
  #include <stdio.h>
<p> Esta linha inclui a biblioteca padrão de entrada e saída do C, que contém funções para realizar operações de entrada e saída no console.</p>
  int main() {
<p> Esta linha inicia a função principal do programa em C.</p>
  float fahrenheit, celsius;
<p> Estas duas linhas declaram duas variáveis do tipo float, fahrenheit e celsius, que serão usadas para armazenar a temperatura em Fahrenheit e Celsius, respectivamente.</p>
  printf("Enter temperature in Fahrenheit: ");
<p> Esta linha imprime uma mensagem na tela do console pedindo que o usuário insira a temperatura em Fahrenheit.</p>
   scanf("%f", &fahrenheit);
<p> Esta linha usa a função scanf() para ler o valor da temperatura em Fahrenheit digitado pelo usuário e armazená-lo na variável fahrenheit.</p>
  celsius = (fahrenheit - 32) * 5 / 9;
<p> Esta linha converte a temperatura em Fahrenheit para Celsius usando a fórmula (°F - 32) * 5 / 9 e armazena o resultado na variável celsius.</p>
   printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);
<p> Esta linha imprime o resultado da conversão na tela do console. A primeira parte da string imprime o valor da temperatura em Fahrenheit com duas casas decimais, a palavra "Fahrenheit" e um sinal de igual. A segunda parte da string imprime o valor da temperatura em Celsius com duas casas decimais e a palavra "Celsius".</p>
   return 0;
<p> Esta linha encerra a função principal do programa em C e retorna 0 para indicar que o programa foi executado com sucesso.</p>
<p> No geral, este programa é uma implementação simples e funcional de um conversor de temperatura em C que converte Fahrenheit para Celsius. É um bom exemplo de como as funções de entrada e saída padrão podem ser usadas em um programa C básico.</p>
