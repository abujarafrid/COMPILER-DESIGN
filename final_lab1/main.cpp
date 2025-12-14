#include <stdio.h>
#include <string.h>

int RE1(char s[]) {
    for (int i = 0; i < strlen(s); i++)
        if (s[i] != 'a') return 0;
    return 1;
}

int RE2(char s[]) {
    return (strlen(s) == 1 && (s[0] == 'a' || s[0] == 'b'));
}

int RE3(char s[]) {
    for (int i = 0; i < strlen(s); i++)
        if (s[i] != 'a' && s[i] != 'b') return 0;
    return 1;
}

int RE4(char s[]) {
    if (strlen(s) == 0) return 0;
    for (int i = 0; i < strlen(s); i++)
        if (s[i] != 'a' && s[i] != 'b') return 0;
    return 1;
}

int main() {
    FILE *fp;
    char s[100];

    fp = fopen("string.txt", "r");
    if (fp == NULL) {
        printf("File not found\n");
        return 0;
    }

    while (fscanf(fp, "%s", s) != EOF) {
        printf("String: %s\n", s);

        printf("  RE1 (a*)           : %s\n", RE1(s) ? "VALID" : "INVALID");
        printf("  RE2 (a+b)          : %s\n", RE2(s) ? "VALID" : "INVALID");
        printf("  RE3 (a+b)*         : %s\n", RE3(s) ? "VALID" : "INVALID");
        printf("  RE4 (a+b)*(a+b)    : %s\n\n", RE4(s) ? "VALID" : "INVALID");
    }

    fclose(fp);
    return 0;
}
