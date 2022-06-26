#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class stackDynamicallyArr{
    int *data,capicity,nxtidx;
    //creating constructor
    public:
    stackDynamicallyArr(int totsize){
        data=new int[4];//let us firstly make an array of size 4
        nxtidx=0;
        capicity=4;
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
            int*newdata=new int[2*capicity];//doubling the capicity
            for(int i=0;i<capicity;i++){
                newdata[i]=data[i];//copiying values of prev array in new one
            }
            capicity*=2;//updating 
            delete []data;//deleting memory of prev array
            data=newdata;//assining the current array as a new array(doubled one)which we have formed
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
    stackDynamicallyArr s(4);
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