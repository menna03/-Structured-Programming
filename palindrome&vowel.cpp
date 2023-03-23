// problem 4
/* Menna Osama Elminshawy (20217011)
Mariam Ashraf Ezzat (20216140)
s4 */
#include <iostream>
#include<cstring>
using namespace std;
void word (char vowel[100],int constant) {
    int a = 0;//count the vowels
    int numword=1;//count num of words
    constant =0;
    cout << "please enter a string " << endl;
    cin.get(vowel, 100);
    for (int i = 0; i < strlen(vowel); i++) {
        if (vowel[i] == 'a' || vowel[i] == 'e' || vowel[i] == 'i' || vowel[i] == 'o' || vowel[i] == 'u' ||
            vowel[i] == 'A' || vowel[i] == 'E' || vowel[i] == 'I' || vowel[i] == 'O' || vowel[i] == 'U')
            a++;
        else if ( vowel[i] == ' ' || i==(strlen(vowel)) )
        {
            cout << "number of vowels in word " <<numword <<" is "<< a << endl;
            cout << "number of constant in word " <<numword <<" is "<< constant << endl;
            a=0;//count new num of vowels and constant in nex word
            constant=0;
            numword++;
            continue;
        }
        else {
            constant++;
        }
    }
    //count if one word is given
    cout << "number of vowels in word " <<numword <<" is "<< a << endl;
    cout << "number of constant in word " <<numword <<" is "<< constant << endl;
}
void palindrome(char vowel[100]){
    int len=strlen(vowel);
    int pal=0;
    for(int i=0;i<strlen(vowel);i++)
    {
        if(vowel[i]!=vowel[len-1-i])
        {//check if palindrom
            pal = 1;
            break;
        }
    }
    if(pal==0){
        cout<<"this is a palindrome"<<endl;
    }
    else {
        cout << "this is not a palindrome" << endl;
    }
}
int main(){
    char vowel[100];
    int constant;
    word(vowel,constant);
    palindrome(vowel);
}
