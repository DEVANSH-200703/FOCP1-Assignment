#include <stdio.h>
int main(){
    int n,flag=0;

    printf("number of students whose record is to be added in marks array: ");
    scanf("%d",&n);

    int marks[n];

    for(int i=0;i<n;i++){
        printf("Enter marks: ");
        scanf("%d",&marks[i]);
    }

    for(int j=0;j<n;j++){
        if(marks[j]==99){
            flag+=1;
            printf("Student %d  scored 99 marks\n",j+1);
        }
    }
    printf("Total Number of students that scored 99 are %d",flag);

    return 0;

}
