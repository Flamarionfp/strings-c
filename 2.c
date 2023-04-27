#include <stdio.h>
#include <string.h>

int main() {
  char fullName[100];
  char caracter = ' ';
  int generalCount = 0;
  int localCount = 0;
  int wordCount = 0;
  char splitedWord[10][100];

  printf("Digite o seu nome completo: ");
  fgets(fullName, 100, stdin); 
  fullName[strcspn(fullName, "\n")] = '\0';
 
  while (caracter != '\0') {
    caracter = fullName[generalCount];
    splitedWord[wordCount][localCount] = caracter;

    localCount++;
    generalCount++;

    if (caracter == ' ') {
      splitedWord[wordCount][localCount-1] = '\0';
      localCount = 0;
      wordCount++;
    }
  }
  splitedWord[wordCount][localCount-1] = '\0';

  wordCount = wordCount + 1;

  printf("%d\n", wordCount);

  for (int i = wordCount; i > 0; i--) {
    printf("%s ", splitedWord[i - 1]);
  }

  return 0;
}
