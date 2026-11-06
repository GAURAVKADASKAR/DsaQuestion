#include<iostream>
#include<string>
using namespace std;


int main()
{
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    int count[256] = {0};

    for(int i=0; i<str.length(); i++)
    {
        count[(unsigned char)str[i]]++;
    }

    for(int i=0; i<256; i++)
    {
        if(count[str[i]] == 1)
        {
            cout<<str[i];
            return 0;
        }
    }
    return 0;
}