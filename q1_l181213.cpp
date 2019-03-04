#include"q1_l181213.h"
using namespace std;
int student::counter=0;
student::student()
{
	counter++;
	ID=counter;
     quizScore=nullptr;
     quizCapacity=3; 
	 quizScore=new float[quizCapacity];
     quizTaken=0; 
     GPA=-1;  
}
student::student(int x,float y)
{
	counter++;
	 quizCapacity=x;
	if(y<=4 && y>=0)
	{
	 GPA=y;
	}
	 quizTaken=0; 
     ID=counter;
     quizScore=nullptr;
     quizScore=new float[quizCapacity];
}

student::student(const student & x)
{
ID=x.ID;
quizCapacity=x.quizCapacity;
quizTaken=x.quizTaken;
quizScore=new float[quizCapacity];
for(int i=0;i<quizCapacity;i++)
{
	quizScore[i]=x.quizScore[i];
	
}
GPA=x.GPA;
}
student::~student()
{
	delete[]quizScore;
	quizScore=nullptr;
}
void student::addQuizScore(float x)
{
	if(quizTaken<quizCapacity)
	{
		quizScore[quizTaken]=x;
		quizTaken++;
	}
}
void student:: setGPA(float x)
{
	if(x>0)
	{
	GPA=x;
}
	else
		cout<<"gpa must be positive";
}
float student :: getGPA() const
{
return GPA;
}
void student:: print() const
{
	cout<<"student ID is:";
	cout<<ID<<endl;
	cout<<"student gpa is:";
	cout<<GPA<<endl;
	cout<<"NO. of quiz taken is:";
	cout<<quizTaken<<endl;
 
	for(int i=0;i<quizCapacity;i++)
	{
		cout<<"quiz"<<i<<" is:";
		cout<<quizScore[i]<<endl;
	}
}
	bool student:: compare(student s)
	{
	bool flag=true;
	if(s.GPA>GPA)
	{
		flag=true;

	}
	else
		flag=false;
	return flag;
		cout<<endl;
	}
	void student:: updateScore(int x, float y)
	{
		if(x<=quizTaken)
		{
			quizScore[x-1]=y;
	}
		else
			cout<<"the quiz was not taken"<<endl;
	}