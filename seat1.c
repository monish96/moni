#include<stdio.h>
int main()
{
    int rows,cols,rollno;
    printf("\nEnter the number of rows");
    scanf("%d",&rows);
    printf("\nEnter the number of columns");
    scanf("%d",&cols);
    printf("\nEnter the roll number of the student");
    scanf("%d",&rollno);
    if(rollno<=cols||rollno%cols==1||rollno%cols==0)
    printf("\nyes");
    else
    printf("\nno");
    return 0;
}
