#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char word[1000];
    char formattedString[1000];
    int length, i, j;

    printf("Digite uma frase ou palavra: ");
    fgets(word, sizeof(word), stdin);
    length = strlen(word);

    for (i = 0, j = 0; i < length; i++) {
        if (isalpha(word[i])) {
            formattedString[j] = tolower(word[i]);
            j++;
        }
    }

    formattedString[j] = '\0'; 

    length = strlen(formattedString);
    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (formattedString[i] != formattedString[j]) {
            printf("%s nao e um palindromo!\n", word);
            return 0;
        }
    }

    printf("%s e um palindromo!\n", word);

    return 0;
}
