#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;


int main()
{
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    vector<string> words;
    stringstream ss(str);
    string word;
    while(ss >> word)
    {
        words.push_back(word);
    }

    for(int i=words.size()-1; i>=0; i--)
    {
        cout<<words[i]<<" ";
    }
    
}