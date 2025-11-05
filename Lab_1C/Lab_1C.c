//Poorva_Jain  IT-B-114   3rd sem    Reg no: 24070855

#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int rollNumber;
    int age;
    float avgMarks;
};
void bubbleSort(struct student students[], int n) {
    int i, j;
    struct student temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (students[j].avgMarks < students[j + 1].avgMarks) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}
void printStudents(struct student students[], int n) {
    int i;
    printf("\nStudent list (sorted by average marks):\n");
    for (i = 0; i < n; i++) {
        printf("\nName: %s\n", students[i].name);
        printf("Roll No: %d\n", students[i].rollNumber);
        printf("Age: %d\n", students[i].age);
        printf("Average Marks: %f\n", students[i].avgMarks);
    }
}
int main() {
    int n;
    printf("\n  Code by - Poorva_Jain  IT-B-114   3rd sem    Reg no: 24070855\n");
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct student students[n];

    printf("\nEnter details of each student:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s",students[i].name); 
        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Enter age: ");
        scanf("%d", &students[i].age);
        printf("Enter average marks: ");
        scanf("%f", &students[i].avgMarks);
    }
    bubbleSort(students, n);
    printStudents(students, n);
    printf("\n  Code by - Poorva_Jain  IT-B-114   3rd sem    Reg no: 24070855");
    return 0;
}