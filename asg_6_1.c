#include <stdio.h>
struct asg
{
    char Student_name[20];
    int Student_age;
    int Student_degreee;
    int Student_section;
} student[5];

void print(struct asg *student, int i)
{
    printf("Student name : %s \nStudent age : %d \nStudent degree : %d \nStudent section : %d ", student[i].Student_name, student[i].Student_age, student[i].Student_degreee, student[i].Student_section);

    return;
}

int main()
{
    char std;

    //
    printf("How many students (max 5): ");
    scanf("%d", &std);

    for (int i = 0; i < std && std <= 5; i++)
    {
        printf("\n\nstudent  %d \n\n", i + 1);

        printf("Name :");
        scanf(" %[^\n]", &student[i].Student_name);

        printf("Age :");
        scanf("%d", &student[i].Student_age);

        printf("Degreee :");
        scanf("%d", &student[i].Student_degreee);

        printf("Section :");
        scanf("%d", &student[i].Student_section);
    }
    printf("'''''''' students data ''''''''\n\n\n");
    for (int i = 0; i < std && std <= 5; i++)
    {
        printf("\n\nstudent  %d \n\n\n", i + 1);
        print(student, i);
    }
    return 0;
}