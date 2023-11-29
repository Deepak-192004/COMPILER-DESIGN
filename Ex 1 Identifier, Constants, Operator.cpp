#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main() {
    int i, ic = 0, m, cc = 0, oc = 0, j;
    char b[30], id[30], cons[30], ops[30];
    
    printf("Enter the string: ");
    scanf("%[^\n]s", &b);

    for (i = 0; i < strlen(b); i++) {
        if (isspace(b[i])) continue;
        else if (isalpha(b[i])) id[ic++] = b[i];
        else if (isdigit(b[i])) {
            m = (b[i] - '0');
            while (isdigit(b[++i])) m = m * 10 + (b[i] - '0');
            cons[cc++] = m;
        }
        else {
            if (b[i] == '*' || b[i] == '-' || b[i] == '+' || b[i] == '=') ops[oc++] = b[i];
        }
    }

    printf("Identifiers: ");
    for (j = 0; j < ic; j++) printf("%c ", id[j]);

    printf("\nConstants: ");
    for (j = 0; j < cc; j++) printf("%d ", cons[j]);

    printf("\nOperators: ");
    for (j = 0; j < oc; j++) printf("%c ", ops[j]);

    return 0;
}
