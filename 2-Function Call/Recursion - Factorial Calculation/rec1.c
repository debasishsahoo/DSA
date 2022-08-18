#include <stdio.h>
void main() {
    printf("ENTER THE SENTENCE ");
    reverseSentence();
}
int reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
return 0;
}
