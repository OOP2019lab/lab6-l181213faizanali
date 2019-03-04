#include<iostream>
using namespace std;
class student
{
private:
	
	static int counter;
	int ID; 
	float *quizScore;
	int quizCapacity; 
	int quizTaken; 
	float GPA;  

public:
	student(); //defult constructor
	student(int x,float y);//parametrized constructor
	student(const student& x);//copy constructor
	~student();//delete the pointer(destructor)
	void addQuizScore(float x);//set score
	void setGPA(float x);//set gpa
	float getGPA() const; //get gpa
	void print() const; //print all the value
	bool compare(student);//compare the two object

	void updateScore(int x, float y); //increment or update the score
};