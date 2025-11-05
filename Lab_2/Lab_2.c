//Poorva_Jain  IT-B-114   3rd sem    Reg no: 24070855

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack[MAX], top = -1;

void push(int x) {
    if (top == MAX - 1)
        printf("Overflow! Stack full.\n");
    else
        stack[++top] = x, printf("%d pushed.\n", x);
}

void pop() {
    if (top == -1)
        printf("Underflow! Stack empty.\n");
    else
        printf("%d popped.\n", stack[top--]);
}

void display() {
    if (top == -1) 
       printf("Stack is empty.\n");
    else {
        printf("Stack: ");
        for (int i = top; i >= 0; i--) printf("%d ", stack[i]);
        printf("\n");
    }
}

void palindrome() {
    int n, temp, rev = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        push(temp % 10);
        temp /= 10;
    }
    while (top != -1) 
       rev = rev * 10 + stack[top--];
    if (rev == n) 
       printf("%d is Palindrome.\n", n);
    else 
       printf("%d is NOT Palindrome.\n", n);
}

int main() {
    int ch, val;
    printf("\n  Code by - Poorva_Jain  IT-B-114   3rd sem    Reg no: 24070855");
    while (1) {
        printf("\nStack Menu:");
        printf("\n1.Push\n2.Pop\n3.Display\n4.Palindrome\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: 
                printf("Enter value: "); 
                scanf("%d", &val); 
                push(val); 
                break;

            case 2: 
                pop(); 
                break;
            
            case 3: 
                display(); 
                break;
            
            case 4: 
                palindrome(); 
                break;

            case 5: 
                printf("\n  Code by - Poorva_Jain  IT-B-114   3rd sem    Reg no: 24070855");
                exit(0);
            
            default: 
                printf("Invalid choice!\n");
        }
    }
    
    return 0;
}