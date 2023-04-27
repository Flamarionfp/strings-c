#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char word[100];
    char vowels[100] = "";
    char consonants[100] = "";
    char option;

    printf("Digite algo: \n");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

    printf("Escolha uma opcao: (V ou C) \n");
    scanf(" %c", &option);
    
    int i = 0;
    int vowelsCount = 0;
    int consonantsCount = 0;

    while (word[i] != '\0') {
      char c = word[i];
      
      if (isalpha(c)) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
          vowels[vowelsCount] = c;
          vowelsCount++;
        } else {
          consonants[consonantsCount] = c;
          consonantsCount++;
        }
      }

      i++;
    }

    vowels[vowelsCount] = '\0'; 
    consonants[consonantsCount] = '\0'; 

    printf("Palavra: %s\n", word);

    if (option == 'c') {
      printf("%s", strcat(consonants, " "));
      printf("%s", vowels);
    } else {
      printf("%s", strcat(vowels, " "));
      printf("%s", consonants);
    }

    return 0;
}
