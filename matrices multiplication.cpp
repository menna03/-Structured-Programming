
#include <iostream>
using namespace std ;
int checkMmatMultip (int c1 ,int r2  )
{ //check if matrices can be mulitiply
    if(c1==r2)
        return 1 ;
    else
        return 0 ;
}
void calmat(  int  c1, int c2,int  r1,int  r2, int mat1[5][5],int mat2[5][5],int multip[5][5]);

int main() {
    int r2, c1, c2, r1 ,value;
    int mat1[5][5];
    int mat2[5][5];
    int multip[5][5];
    cout << "please enter first matrix dimensiond ";
    cin >> r1 >> c1;
    cout << "please enter second matrix dimensiond ";
    cin >> r2 >> c2;
    value= checkMmatMultip ( c1, r2);
    if(value==1)
    {
        cout << "please enter first matrix dimensions \n";
        for (int i = 1; i <= r1; i++) {
            for (int j = 1; j <= c1; j++) {
                cout << " enter row " << i << " in colom " << j << endl;
                cin >> mat1[i][j];
            }
        }
        cout << "please enter second matrix dimensions \n";
        for (int i = 1; i <= r2; i++) {
            for (int j = 1; j <= c2; j++) {
                cout << "enter row " << i << "in colom " << j << endl;
                cin >> mat2[i][j];
            }
        }

        calmat(c1, c2, r1, r2, ( mat1), (mat2), (multip));
    }
    else
    {
        cout<<"ERROR the two matrices can not be multiolied \n";

    }

    return 0;
}

void calmat(  int  c1, int c2,int  r1,int  r2, int mat1[5][5],int mat2[5][5],int multip[5][5])
{
    // mat multiplication
    for(int i = 1; i <=r1; ++i)
    {// puting all values zero so no junk num be multiplied
        for(int j = 1; j <= c2; ++j)
        {
            multip[i][j] = 0;
        }
    }

    for (int i = 1; i <= r2; i++)
    {// multiplying mat
        for (int j = 1; j <= c2; j++)
        {
            for (int k = 1; k <= c1; k++)
            {
                multip[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    for (int i = 1; i <= r1; i++)
    {
        for (int j = 1; j <= c2; j++)
        {// output
            cout << multip[i][j] << "\t";
        }
        cout << endl;

    }
}
