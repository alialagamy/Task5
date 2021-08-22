//preprocessing part.
#include<stdio.h>
#include<stdlib.h>
//Define Course structure .
struct course 
{
	int credit_hours_math;
	int credit_hours_prog;
	float student_score_math; 
	float student_score_prog;
};
//Define Student structure .
struct student
{
	char *arr[10];
	//calculate GPA.
	float gpa(float student_score_math , float student_score_prog , int credit_hours_math , int credit_hours_prog)
	{
		return ((student_score_math*credit_hours_math) + (student_score_prog*credit_hours_prog))/(credit_hours_math+credit_hours_prog);
	}
};

int main()
{
	int m,p;
	float r1,r2,GPA;
	//declare variable name C data type struct course
	struct course C;
	//declare variable name S data type struct Student
	struct student S;
	S.arr[0]={"Mathematics"};
	S.arr[1]={"Programming"};
	m = C.credit_hours_math=3;
	p = C.credit_hours_prog=4;
	
	// take user's score in math.
	printf("Enter Your score in math (out of 4) :\n");
	scanf("%f",&C.student_score_math);
	r1=C.student_score_math;
	
	// take user's score in programming.
	printf("Enter Your score in programming (out of 4) :\n");
	scanf("%f",&C.student_score_prog);
	r2=C.student_score_prog;
	
	//check score no higher than 4 and call GPA.
	  if (r1>4 || r2>4)
    {
    	printf("\tNo grade higher than 4\n");
    	
	}else
	{
	GPA=S.gpa(r1,r2,m,p);
    printf("\nYour GPA is : %f \n" , GPA);
	}
	system("pause");
	return 0;
}
