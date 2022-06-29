#include <iostream>
#include<stack>
using namespace std;

int main()
{
    string str="tara";
    
    //int length=3;
    stack<char>s;
    for(int i=0;i<str.length();i++){
        s.push(str[i]);
      
    }
    while(!s.empty()){
        int i=0;
        str[i]=s.top();
        s.pop();
        cout<<str[i];
        
    }
}
    