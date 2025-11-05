//Poorva_Jain  IT-B-114   3rd sem    Reg no: 24070855
/* AIM: Design, Develop and Implement a menu driven Program in C for the following operations on QUEUE of Characters (Array Implementation of Queue with maximum size MAX)
a. Insert an Element on to QUEUE
b. Delete an Element from QUEUE
c. Demonstrate Overflow and Underflow situations on QUEUE
d. Display the status of QUEUE
e. Exit
Support the program with appropriate functions for each of the above operations.
*/
#include <stdio.h>
#include <stdlib.h>   

#define MAX 5         

int queue[MAX];
int front = -1, rear = -1;

void insert() {
    int item;
    if (rear == MAX - 1) {
        printf("Queue Overflow! Cannot insert more elements.\n");
        return;
    }

    printf("Enter the number to insert: ");
    scanf("%d", &item);
    if (front == -1)
        front = 0;
    rear++;
    queue[rear] = item;
    printf("Inserted %d into the queue.\n", item);
}

void delete() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow! No element to delete.\n");
        return;
    }
    printf("Deleted %d from the queue.\n", queue[front]);
    front++;
    if (front > rear)
        front = rear = -1;
}

void display() {
    if (front == -1) {
        printf("Queue is empty!\n");
        return;
    }

    printf("Queue elements are: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
}
int main() {
    int choice;
    while (1) {
        printf("\n  Code by - Poorva_Jain  IT-B-114   3rd sem    Reg no: 24070855");
        printf("\nQUEUE Menu:\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Display the queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program...\n");
                printf("\n  Code by - Poorva_Jain  IT-B-114   3rd sem    Reg no: 24070855");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
