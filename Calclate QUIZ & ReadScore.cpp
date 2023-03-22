#include <iostream>
using namespace std;
//this function take the number of students and the number of quiz from the user
void READQUIZ (int& student,int& quiz, float readscore[100][100])
{
    for (int i = 1; i <= student; i++)
    {
        cout << "please enter student " << i << " score \n";
        for (int j = 1; j <= quiz; j++)
        {
            cout << "please enter quiz " << j<<endl;
            cin >> readscore[i][j];
        }
    }
}
int main() {
    //readscore is an array for the score
    //avgstudent is an array for the average of quizes for each student
    //avgquiz is an array for the average each quizes for all student
    float readscore[100][100];
    float avgstudent[100];
    float avgquiz[100];
    float  sum,max;
    int student, quiz  ;
    cout<<"enter number of students \n";
    cin>>student ;
    cout<<"enter number of quiz \n";
    cin>>quiz;
    cout<<endl;
    //calling   READQUIZ function
    READQUIZ (student,quiz, readscore);
    for (int i = 1; i <= student; i++)
    {sum=0;
        for (int j = 1; j <= quiz; j++)
        {
            sum = sum + readscore[i][j];
        }
        avgstudent[i] = (sum / quiz); }
    for (int j = 1; j <= quiz; j++)
    {
        sum=0;
        for (int i = 1; i <= student; i++)
        {
            sum = sum+readscore[i][j];

        }
        avgquiz[j]= (sum / student);
    }cout<<"students \t";
    for (int j = 1; j <= quiz; j++)
    {
        cout << "quiz" <<j << "\t";
    }
    cout<<"avg/student\n";

    for (int i = 1; i <= student; i++)
    {cout<<"student "<<i<<"\t";
        for (int j = 1; j <= quiz; j++)
        {
            cout <<  readscore[i][j] << " \t ";
        }
        cout << avgstudent[i] <<endl;

    }
    cout<<endl;
    cout<<"avg/quiz\t";
    for(int i = 1; i<=quiz ;i++)
    {

        cout<< avgquiz[i]<<" \t " ;
    }
    cout<<endl;
    max=avgstudent[1] ;
    for(int i =1 ;i<=4;i++)
    {
        if (max <avgstudent[i])
        {
            max=avgstudent[i] ;
            cout<<" the student with the highest average score is "<<i ;
        }
    }
    return 0;}
