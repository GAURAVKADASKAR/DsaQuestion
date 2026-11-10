#include<iostream>
using namespace std;
#include<string>

int main()
{
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    int count = 0;

    for(char c : str)
    {
        c = tolower(c);
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        {
            count++;
        }
    }
    cout<<"Number of vowels : "<<count;
}