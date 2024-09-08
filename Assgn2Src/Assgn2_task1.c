#include <stdio.h>
int main() {
    //Local Variable declaration
    char name_str[50],roll_str[50],dept_str[50],sch_str[50],add_str[50];
    //Getting scanfs
    printf("Name:");
    scanf("%s", name_str);
    printf("Roll No:");
    scanf("%s", roll_str);
    printf("Department:");
    scanf("%s", dept_str);
    printf("School:");
    scanf("%s", sch_str);
    printf("Address:");
    //As adress is not a single word
    scanf("%[^\n]s", add_str);

    //Sending printfs
    printf("Your information is: ");
    printf("\nName: %s", name_str);
    printf("\nRoll No: %s", roll_str);
    printf("\nDepartment: %s", dept_str);
    printf("\nSchool: %s", sch_str);
    printf("\nAddress: %s", add_str);
 
    return 0;
}