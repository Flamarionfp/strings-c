#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char fullName[100];
    int generalCount = 0;
    int localCount = 0;
    int wordCount = 0;
    char splitedWord[10][100];

    printf("Digite o seu nome completo: ");
    fgets(fullName, 100, stdin); 
    fullName[strcspn(fullName, "\n")] = '\0';

    while (fullName[generalCount] != '\0') {
        if (fullName[generalCount] == ' ') {
            splitedWord[wordCount][localCount] = '\0';
            localCount = 0;
            wordCount++;
        }
        else {
            splitedWord[wordCount][localCount] = toupper(fullName[generalCount]);
            localCount++;
        }
        generalCount++;
    }
    splitedWord[wordCount][localCount] = '\0';

    printf("%s", strcat(splitedWord[wordCount], ", "));
    printf("%s\n", splitedWord[0]);
    
    return 0;
}

