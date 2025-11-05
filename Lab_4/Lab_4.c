//Poorva_Jain  IT-B-114   3rd sem    Reg no: 24070855

/*AIM: 4 This C program creates a linked list to store integer elements. 
        It prompts the user to enter elements and add them to the list until the user enters 0.
        It then traverses the list and prints each element and "=>" until reaching the null pointer. 
        Finally, it displays the number of nodes in the list.
        */
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
struct Node* createNode(int value) {
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
int main() {
    struct Node *head = NULL, *temp = NULL, *newNode;
    int num, count = 0;
    printf("\n  Code by - Poorva_Jain  IT-B-114   3rd sem    Reg no: 24070855\n");
    printf("Enter elements to add to the linked list (0 to stop):\n");
    while (1) {
        printf("Enter data: ");
        scanf("%d", &num);
        if (num == 0)
            break;

        newNode = createNode(num);
        count++;
        if (head == NULL) {
            head = newNode;
            temp = head;
        } 
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    printf("\nLinked List: ");
    temp = head;
    while (temp != NULL) {
        printf("%d => ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    printf("Total number of nodes: %d\n", count);
    printf("\n  Code by - Poorva_Jain  IT-B-114   3rd sem    Reg no: 24070855");
    return 0;
}
