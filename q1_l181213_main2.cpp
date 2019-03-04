#include"q1_l181213.h"
using namespace std;
int main()
{
	student arrobj[3]={student(3,2.0),student(3,3.0),student(4,2.33)};
	arrobj[0].addQuizScore(1);
	arrobj[0].addQuizScore(4);
	arrobj[0].addQuizScore(10);
	arrobj[1].addQuizScore(10);
	arrobj[1].addQuizScore(4);
    arrobj[1].addQuizScore(9);
	arrobj[2].addQuizScore(9);
	arrobj[2].addQuizScore(8);
	arrobj[2].addQuizScore(7);
	for(int i=0;i<3;i++)
	{
	arrobj[i].print();
	}
	system("pause");
	return 0;

}