#include<stdio.h>
int main()
{
    int rows,cols,rollno;
    printf("Enter the number of rows\n");
    scanf("%d",&rows);
    printf("Enter the number of columns\n");
    scanf("%d",&cols);
    printf("Enter the roll number of the student\n");
    scanf("%d",&rollno);
    if((rollno<=rows)||(rollno%rows==1)||((rollno>(cols*rows-rows))&&(rollno<=(cols*rows))))
    printf("yes");
    else
    printf("no");
    return 0;
}
