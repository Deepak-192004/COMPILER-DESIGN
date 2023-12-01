#include <stdio.h>
#include <string.h>
int checkGrammar(const char *input) {
    if (strncmp(input, "Hello", 5) != 0) {
        return 0;
    }
    size_t len = strlen(input);
    if (len == 0 || input[len - 1] != '!') {
        return 0;
    }
    return 1; 
}
int main() {
    char input[100];
    printf("Enter a sentence: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    if (checkGrammar(input)) {
        printf("The sentence satisfies the grammar rule.\n");
    } else {
        printf("The sentence does not satisfy the grammar rule.\n");
    }
    return 0;
}

