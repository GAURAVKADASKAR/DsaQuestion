#include<iostream>
#include<cmath>
using namespace std;
#include<string>

int main()
{
    int sum=0,num,count,tem,temNum;
    cout<<"Enter a number : ";
    cin>>num;
    temNum = num;
    count = to_string(num).length();
    while(num>0)
    {
        tem = num%10;
        sum += pow(tem,count);
        num = num/10;
    }
    if(temNum==sum)
    {
        cout<<"Yes";
    }

}