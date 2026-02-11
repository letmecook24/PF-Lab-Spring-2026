include <stdio.h>
int main() {
    int i;
    float f;
    char c;
    printf("Enter an integer: ");
    scanf("%d", &i);
    printf("Enter a float: ");
    scanf("%f", &f);
    printf("Enter a character: ");
    scanf(" %c", &c);
    printf("Integer: %d\n", i);
    printf("Float: %f\n", f);
    printf("Character: %c\n", c);
    return 0; }
