#include<stdio.h>
int main()
{
    float avg;
    int math,phy,che,A,B,C,D,E,F,q;
    printf("Enter Math: ");
    scanf("%d", &math);
    printf("Enter Physics: ");
    scanf("%d",&phy); 
    printf("Enter Chem: ");
    scanf("%d",&che);
    avg = (math+phy+che)/3;
    A=(avg >= 85);
    B= (avg>= 75 && avg< 85);
    C=(avg>= 65 && avg< 75);
    D=(avg>= 50 && avg< 65);
    E=(avg>= 30 && avg< 50);
    F=(avg<30 && avg>=0);
    q=1*A+2*B+3*C+4*D+5*E+6*F;
    switch(q)
    {
        case 0:
        printf("invalid score, SCORE CANT BE NEGATIVE!!!");
        break;
        case 1:
        printf("\nGrade is A");
        break;
        case 2:
        printf("\nGrade is B");
        break;
        case 3:
        printf("\nGrade is C");
        break;
        case 4:
        printf("\nGrade is D");
        break;
        case 5:
        printf("\nGrade is E");
        break;
        case 6:
        printf("\nGrade is F");
        break;
    }
}