
#include <stdio.h>

int main(void)
{
    char name[19] ="ZAKIR";
    int age =25;
    double gpa =3.7;
    char grade = 'A';

    printf("STUDENT NAME : %s\n", name );
    printf("STUDENT AGE  : %d\n", age);
    printf("GPA   : %.2f\n", gpa);
    printf("GRADE : %C\n", grade);

    return 0;
}