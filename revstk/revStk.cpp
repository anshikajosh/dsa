#include <iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>s;
    int arr[s.size()];
    s.push(90);
    s.push(80);
    s.push(70);
    s.push(60);
    
/*while(!s.empty()){
       cout<<s.top()<<endl;
       s.pop();
    }*/
    int i=0;
    while(!s.empty()){
       arr[i]=s.top();
        s.pop();
        i++;
        
    }
    
   for(int i=0;i<s.size();i++){
       s.push(arr[i]);
       
   }
   while(!s.empty()){
       cout<<s.top()<<endl;
       s.pop();
       cout<<"jj";
    }
}
