#include <iostream>
using namespace std;
template<typename t,typename v>
class Pair{
    private:
    t x;
    v y;
    public:
    void setx(t x){
        this-> x=x;
    }
    t getx(){
        return x;
    }
    void sety(v y){
        this-> y=y;
    }
    v gety(){
        return y;
    }
    
};
int main()
{
    Pair <int,double> p1;
    p1.setx(10);
    p1.sety(20.67);
    cout<<p1.getx()<<"     "<<p1.gety()<<endl;
    
    Pair <double,int> p2;
    p2.setx(10.01);
    p2.sety(20);
    cout<<p2.getx()<<" "<<p2.gety()<<endl;
    
}