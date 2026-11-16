#include<iostream>
using namespace std;


void merge(int arr[], int start , int mid , int end)
{
    int i = start;
    int result[end-start+1];
    int j = mid+1;
    int k =0;
    while (i<=mid && j<=end)
    {
        if(arr[i]<arr[j])
        {
            result[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            result[k]= arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        result[k] = arr[i];
        k++;
        i++;
    }
    
    while(j<=end)
    {
        result[k] = arr[j];
        j++;
        k++;
    }

    for(int x = 0; x < k; x++)
{
    arr[start + x] = result[x];
}
    
}


void mergeSort(int arr[], int start,int end)
{
    int mid = start + (end-start)/2;

    if(start<end)

    {
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }

}

int main()
{
    int arr[] = {4,1,3,2};
    int n = size(arr);
    mergeSort(arr,0,n-1);
    
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    };


}