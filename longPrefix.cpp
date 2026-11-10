#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main()
{
    string str;
    vector<string> strings;
    int n;
    cout<<"Enter number of string : ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter String : ";
        cin>>str;
        strings.push_back(str);
    }
    string prefix = strings[0];
    for(int i=0; i<n; i++)
    {
        while(!prefix.empty() && strings[i].compare(0, prefix.length(), prefix) != 0)
        {
            prefix.pop_back();
        }
    }
    cout<<prefix;
}