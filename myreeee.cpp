#include<stdio.h>

	struct student
	{
		char name[20];
		int age;
		char department[20];
		int rollno;
		int mark1;
		int mark2;
		int mark3;
		
		};
int main()
{
struct student s[100];
int i,n;
printf("enter the number of students: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("****ENTER THE STUDENT DETAILS****");
printf("\n enter your name:");
scanf("%s",s[i].name);
printf(" enter your age:");
scanf("%d",&s[i].age);
printf(" enter your department:");
scanf("%s",s[i].department);
printf(" enter your rollno:");
scanf("%d",&s[i].rollno);
printf(" enter your mark1:");
scanf("%d",&s[i].mark1);
printf(" enter your mark2:");
scanf("%d",&s[i].mark2);
printf(" enter your mark3:");
scanf("%d",&s[i].mark3);
}
printf("\nthe details of students marks is: ");
for(i=0;i<n;i++)
{
	printf("\nstudent report of SLNO.%d\n",i);
printf(" name:%s\n",s[i].name);
printf(" age:%d\n",s[i].age);
printf(" department:%s\n",s[i].department);
printf(" roll no:%d\n",s[i].rollno);
printf(" mark1:%d\n",s[i].mark1);
printf(" mark2:%d\n",s[i].mark2);
printf(" mark3:%d\n",s[i].mark3);

}
return 0;
}
