
#include <iostream>
using namespace std;
int knapsack(int num , int maxweight,  int value[10],int weight[10])
{
    int max1 , max2 , output ;
    if (num == 0 || maxweight==0)
        //there will be no weight so we cannot but in a value
        return 0 ;
    else if (weight[num]>maxweight)
        return knapsack( num -1, maxweight,  value,weight);
    // we will cal the next weight if >50
    else
    {
        max1 = knapsack( num -1, maxweight,  value,weight);
        max2= value[num] + knapsack( num -1, (maxweight-weight[num]),  value,weight);
        // look for the max value
        if(max1>max2)
            output=max1;
        else
            output=max2;
    }
    return output;
}
int main() {
    int value[10];
    int weight[10];

    int  num,maxweight;
    //input of value and weight
    cout<<"enter num of items \n" ;
    cin>>num ;
    for(int i = 1 ; i<=num ; i++ )
    {
        cout << "please enter value "<<i << " of array \n";
        cin>>value[i];
    }
    for(int i = 1 ; i<=num ; i++ )
    {
        cout << "please enter weight "<<i << " of array \n";
        cin>>weight[i];

    }
    cout<<"please enter the maximum weight \n";
    cin>>maxweight ;

   cout<< "the answer is "<<knapsack( num , maxweight,  value,weight);
}
