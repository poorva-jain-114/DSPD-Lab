//Poorva_Jain  IT-B-114   3rd sem    Reg no: 24070855

/*AIM: Write a program which creates a structure Student which must have the attribute Avg Marks
        with 3 more attributes sort the list of the student in descending order using Bubble sort.
*/
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    float marks1, marks2, marks3;
    float avgMarks;
};

int main() {
    struct Student s[100], temp;
    int n;
    printf("\n  Code by - Poorva_Jain  IT-B-114   3rd sem    Reg no: 24070855\n");
    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Enter marks of 3 subjects: ");
        scanf("%f %f %f", &s[i].marks1, &s[i].marks2, &s[i].marks3);

        s[i].avgMarks = (s[i].marks1 + s[i].marks2 + s[i].marks3) / 3.0;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (s[j].avgMarks < s[j + 1].avgMarks) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("\nStudents sorted in descending order of Average Marks:\n");
    printf("Name\t\tMarks1\tMarks2\tMarks3\tAverage\n");
    for (int i = 0; i < n; i++) {
        printf("%-10s\t%.2f\t%.2f\t%.2f\t%.2f\n", 
               s[i].name, s[i].marks1, s[i].marks2, s[i].marks3, s[i].avgMarks);
    }
    printf("\n  Code by - Poorva_Jain  IT-B-114   3rd sem    Reg no: 24070855\n");
    return 0;
}
