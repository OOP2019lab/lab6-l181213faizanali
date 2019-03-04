#include"q1_l181213.h"
using namespace std;
int main()
{
student s1;
s1.addQuizScore(10);
s1.addQuizScore(3);
s1.addQuizScore(7);
s1.print();
student s2(3,2);
s2.addQuizScore(9);
s2.addQuizScore(4);
s2.addQuizScore(6);
s2.print();
student s3(s1);
s3.updateScore(1,3);
s3.updateScore(10,3);
s3.setGPA(3);
cout<<s3.compare(s1);
s3.print();
cout<<endl;
s1.print();
system("pause");
return 0;
}