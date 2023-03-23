//Menna Osama Elminshawy 20217011- Mariam Ashraf 20216140
//problem 2
#include <iostream>
using namespace std ;
void read()
{
    cout<<"Welcome to FCI bank! \n";
    cout<<"Hello user , please choose an option from menu below \n";
    cout<<"1) show your current accounts \n ";
    cout<< "2)create new account \n";
    cout<< "3)withdraw/deposit money \n";
    cout<< "4)Exit \n";
}
void newaccount(int& code,long int& account,int& newcod ) {
       int currency, type;
       string curr, typ;
     cout<<"pleas choose the currency 1) EGP 2) USD \n";
    cin>>currency;

    cout << "Please specify amount you well deposit for initial balance \n";
    cin >> account;

    cout << "Please specify type of account 1-savings/2-recurring deposit \n";
    cin >> type;
    if(currency==1)
        curr= "EGP";
    else
        curr="USD";

    if (type == 1) {
        typ = "savings";
    } else {
        typ = "deposit";
    }
    newcod++;
    code = (011*newcod);
    cout << "You have successfully created a bank account! its details as follows:\n";
    cout << "currency:" << curr << " balance: " << account << " type :" << typ <<"your code is " <<code<<endl;
    cout<<endl;
}
void  withdraw(int &code,long int& account , int& newcod){
    int  amount,choice;
    int **p= new int *[4];
    for(int i=0;i<4;i++){
        p[i]= new int [3];
    }
    p[newcod][1]=account;
    p[newcod][0]=code;
    cout<<"Please specify account code that’ll withdraw/deposit from";
    cin>>code;
    cout<<"Please specify either you’ll 1-withdraw or 2-deposit";
    cin>>choice;
    cout<<"Please specify amount";
    cin>>amount;
    int sum=0;
    if(choice==1)
    {
        for(int i=0;i<4;i++)
        {
            if (code == p[i][0])
            {
        sum=p[i][1]-amount;
            }
        }
    }
    else if(choice==2){
        for(int i=0;i<4;i++) {
            if (code == p[i][0]) {
                sum = p[i][1] + amount;
            }
        }


    }
    cout<<"you have successfully added your amount your current balance is "<< sum<<endl;
    account=sum;
}
int main() {
    int option ;
    long int account ;
       option=0;

    int code,newcod;
    newcod=0;
    while (option!=4)
    {
        read();
        cin >> option;
        if (option == 1) {
            cout << "your current is " << account << " EGP " << " & " << account / 18.61 << " USD ";
        } else if (option == 2) {
            newaccount(code,account,newcod);
        } else if (option == 3) {
            withdraw(code,account,newcod);
        } else if (option == 4) {
            cout << "EXIT \n";
        } else { cout << "choose a correct option \n \n"; }
    }
}
