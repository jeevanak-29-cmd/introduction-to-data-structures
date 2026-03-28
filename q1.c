#include <stdio.h>
#include <string.h>

char stack[100];
int top = -1;

// Push character into stack
void push(char x) {
    stack[++top] = x;
}

// Pop character from stack
char pop() {
    return stack[top--];
}

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);

    // Push all characters
    for(int i = 0; i < strlen(str); i++) {
        push(str[i]);
    }

    // Pop to reverse
    printf("Reversed string: ");
    while(top != -1) {
        printf("%c", pop());
    }

    return 0;
}