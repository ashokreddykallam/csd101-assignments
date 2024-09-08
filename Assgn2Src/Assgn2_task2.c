#include <stdio.h>
int main() {
    //Local Variable declaration
    char experience_str[100];
    //Getting scanfs
    printf("Write your first experience on the console\n");
    scanf("%[^\n]s", experience_str);

    //Sending printfs
    printf("My experience as a college student are as follows:\n %s", experience_str);
    
    return 0;
}