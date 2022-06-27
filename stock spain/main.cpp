#include <iostream>
using namespace std;
#include<stack>

void printNGE(int arr[],int arr2[], int n)
{
    stack<int> s;
    arr2[0]=1;
    s.push(0);
    
    for(int i=1;i<n;i++){
         while(!s.empty() && arr[s.top()]<arr[i]){
                 s.pop();
             }
             
             if(s.empty()){
                 arr2[i]=i+1;
             }
             else{
                 
                 arr2[i]=i-s.top();
             }
             s.push(i);
         }
         
         
}

int main()
{
    int arr[]={10, 4, 5, 90, 120, 80 };

     int n = sizeof(arr)/sizeof(arr[0]);
     int arr2[n];
    printNGE(arr,arr2, n);
    for(int i=0;i<n;i++){
         cout<<arr2[i]<<" ";
     }
}

