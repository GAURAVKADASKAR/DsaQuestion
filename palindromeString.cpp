#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main()
{
    string str;
    string cleanStr = "";
    cout<<"Enter a string : ";
    getline(cin,str);
    for(char chr : str)
    {
        if(isalnum(chr))
        {
            cleanStr+= tolower(chr);
        }
    }
    int start = 0;
    int end = cleanStr.length()-1;
    bool isPalindrome = true;

    while(start<end)
    {
        if(cleanStr[start] != cleanStr[end])
        {
            isPalindrome = false;
        }
        start++;
        end--;
    }

    if(isPalindrome)
    {
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }


}