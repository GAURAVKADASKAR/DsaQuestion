#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    map<char,int> mp;

    for(char c : str)
    {
        mp[tolower(c)]++;
    }

    for(auto it : mp)
    {
        cout<<it.first<<":"<<it.second<<endl;
    }
}