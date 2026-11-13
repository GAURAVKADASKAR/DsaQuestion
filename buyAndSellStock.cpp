#include<iostream>
using namespace std;

int main()
{
    int stock[] = {7,1,5,3,6,4};
    int maxProfit = 0;
    int buyStock = stock[0];
    for(int i=1; i<size(stock); i++)
    {
        if(stock[i] > buyStock)
        {
            maxProfit = max(maxProfit,stock[i]-buyStock);
        }
        else
        {
            buyStock = stock[i];
        }
    }

    cout<<maxProfit;
}