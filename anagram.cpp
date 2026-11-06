#include<iostream>
#include<string>
using namespace std;


int main()
{
    string str1;
    string str2;
    cout<<"Enter first string : ";
    getline(cin,str1);
    cout<<"Enter second string : ";
    getline(cin,str2);

    if (str1.length() != str2.length()) {
        cout<<"No";
        return 0;
    }
    
    int count[256] = {0};
    for(int i=0; i<str1.length(); i++)
    {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    for(int i=0; i<256; i++)
    {
        if(count[i]!=0)
        {
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;

}