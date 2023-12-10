#include<iostream>
using namespace std;

int Hash(int key)
{
    return key%10;
}

void Insert(int H[],int key)
{
    int index=Hash(key);
    for(int i=0;i<9;i++)
    {
        if(H[index+i]==-1)
        {
            H[index]=key;
            break;
        }
    }
}

int Search(int H[],int key)
{
    int index=Hash(key);
    for(int i=0;i<9;i++)
    {
        if(H[index+i]==key)
            return 1;
        else if(H[index]==-1)
            break;
    }
    return 0;
}

int main()
{
    cout<<"This code implements linear probing using a hash table of size 10, so maximum number of elements to be entered are 5"<<endl;
    cout<<"Enter the number of elements to be entered in the array "<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements in the array : "<<endl;
    int H[10],A[10];
    for(int i=0;i<10;i++)
        H[i]=-1;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        Insert(H,A[i]);
    }
    cout<<"Enter the element to be searched from the array : "<<endl;
    int x;
    int b;
    cin>>x;
    b=Search(H,x);
    if(b)
        cout<<"The element "<<x<<" is present in the Array "<<endl;
    else
        cout<<"The element "<<x<<" is not present in the Array "<<endl;
    return 0;
}
