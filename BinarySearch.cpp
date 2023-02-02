#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key)
{
    int start =0;
    int end = n-1;
    int mid = (start+end)/2;
    while(start<end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start = mid+1;
        }
        else
        {
        end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[100];
    cout<<"enter the element in given array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key to search"<<endl;
    cin>>key;
    int index;
    index = BinarySearch(arr,n,key);
    cout<<"index of "<< key <<" is " << index;
    return 0;
}