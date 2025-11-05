//Poorva_Jain  IT-B-114   3rd sem    Reg no: 24070855

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct Node* insert(struct Node* root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);
    else
        printf("Duplicate value not allowed.\n");

    return root;
}
void search(struct Node* root, int key) {
    if (root == NULL) {
        printf("NULL\n");
        return;
    }
    if (root->data == key) {
        printf("Found\n");
        return;
    }
    else if (key < root->data)
        search(root->left, key);
    else
        search(root->right, key);
}
struct Node* deleteLeaf(struct Node* root, int key) {
    if (root == NULL)
        return NULL;

    if (key < root->data)
        root->left = deleteLeaf(root->left, key);
    else if (key > root->data)
        root->right = deleteLeaf(root->right, key);
    else {
        if (root->left == NULL && root->right == NULL) {
            printf("Deleted leaf node: %d\n", root->data);
            free(root);
            return NULL;
        } else {
            printf("%d is not a leaf node. Cannot delete.\n", key);
        }
    }
    return root;
}
int main() {
    struct Node* root = NULL;
    int choice, value;
    printf("\n  Code by - Poorva_Jain  IT-B-114   3rd sem    Reg no: 24070855\n");
    while (1) {
        printf("\n--- Binary Search Tree Operations ---\n");
        printf("1. Search an element\n");
        printf("2. Insert an element\n");
        printf("3. Delete a leaf element\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to search: ");
                scanf("%d", &value);
                search(root, value);
                break;

            case 2:
                printf("Enter element to insert: ");
                scanf("%d", &value);
                root = insert(root, value);
                break;

            case 3:
                printf("Enter leaf element to delete: ");
                scanf("%d", &value);
                root = deleteLeaf(root, value);
                break;

            case 4:
                printf("\n  Code by - Poorva_Jain   IT-B-114   3rd Sem   Reg No: 24070855\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
