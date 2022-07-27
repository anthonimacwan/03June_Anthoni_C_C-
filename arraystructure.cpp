#include<stdio.h>
#include<conio.h>
struct s1
{
int id_no; 
char fname[20]; 
char lname[20]; 
}newstudent [10];
int main()
{
	
	int i,n;
	printf("Enter total numbers of student:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	printf("\nEnter student id :");
	scanf("%d",&newstudent[i].id_no);
	printf("\nEnter student firstname :");
	scanf("%s",&newstudent[i].fname);
	printf("\nEnter student lastname : ");
	scanf("%s",&newstudent[i].lname );
	
	for(i=0;i<n;i++)
	     printf("\nstudent id:%d",newstudent[i].id_no);
	     printf("\nstudent firstname :%s",newstudent[i].fname);
	     printf("\nEnter student Lastname :%s",newstudent[i].lname);
	         
    
	getch();
	
}