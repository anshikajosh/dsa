#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class stackArray{
    int *data,capicity,totsize,nxtidx;
    //creating constructor
    public:
    stackArray(int totsize){
        data=new int[totsize];//doubt
        nxtidx=0;
        capicity=totsize;
    }
    //using functions
    //i)size()
    int size(){
        return nxtidx;
    }
    //2)is empty()
    bool isEmpty(){
        if(nxtidx==0){
            return true;
        }
        else{
            return false;
        }
    }
    //3)inserting
    void push(int element){
        if(nxtidx==capicity){
            cout<<"stack is full"<<endl;
            return;
        }
        data[nxtidx]=element;
        nxtidx++;
    }
    //3)deleting
    int pop(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return INT_MIN;
        }
        nxtidx--;
        return data[nxtidx];
    }
    int top(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return INT_MIN;
        }
        return data[nxtidx-1];
    }
};
int main()
{
    stackArray s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
    
                
    
}