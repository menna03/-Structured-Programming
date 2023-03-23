// TASK 2
/* Menna Osama Elminshawy (20217011)
Mariam Ashraf Ezzat (20216140)
s4 */
#include <iostream>
#include<string>

using namespace std;
int isValid(long int number);
void cardType(long int number)
{
  
   while (number >= 100)
     {
       number = number / 10;
     }
 if (number >= 40 && number < 50)
        cout << "it is visa card" << endl;
 else if (number >= 50 && number < 60)
        cout << "it is master card" << endl;
 else if (number == 37)
        cout << "it is amercan express card" << endl;
 else if (number >= 60 && number < 70)
        cout << "it is discover card" << endl;
 else
        cout << "we dont have this card" << endl;
    
}
int odd(long int num)
{   
    int n=1;
    int sum=0;
    while(num>0)
    {
     sum+= num%10;
     
     num = num / 100;
    
        
    }

    return sum;
}
int sumofdouble(long int num)
{
    
    int sum,v;
    sum =0;
    num=num/10;
    while (num > 0)
    {
        long int remander;
        remander=num%10;
        
        remander = remander * 2;
        if (num > 10);
        {
            int n;
            for( n=0;n<2;n++);
                v = remander %10;
                sum+=v;
                remander=remander/10;
                
                
        }
        num=num/100;
        sum = remander + sum;
        
    
    }
 
    return sum;
}

int main()
{
    int count = 0 ;
    long int number;
    long int num;
    int num1,num2,sum,value;
    cout<<" please enter card"<<endl;
    cin >> number;
    num==number;
    count=isValid(number);
 if (count >= 13 && count <= 16)
    {
        cout<<"your card is TRUE"<<endl;
        cardType(number);
        num1= odd(num);
        num2=(sumofdouble(num));
        cout<<"sum of doubelis "<<num1<<endl;
        cout<<"sum of odd plasces is "<<num2<<endl;
        
        sum=(num1+num2);
        cout<<"total sum is "<<sum<<endl;
        if(sum%10==0)
         cout<<"it is valud"<<endl;
         else
          cout<<"invalid"<<endl;
    }
    else
    {
        cout<<"your card DONT EXSEST"<<endl;
       
    }
    return 0 ;
    
}

int isValid(long int number)
{
    int count,value;
    count = 0;
 while (number > 0)
    {
        number = number / 10;
        count = count + 1;
    }
 return count ;
}