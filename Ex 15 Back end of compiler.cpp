#include <stdio.h>
void generateAssemblyCode() {

    printf("MOV R1, b\n");   
    printf("ADD R1, c\n");   
    printf("MOV a, R1\n");   
}

int main() {
    generateAssemblyCode();
    return 0;
}

