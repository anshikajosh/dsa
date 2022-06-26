#include <iostream>
using namespace std;
template<typename t>
class Pair{
    private:
    t x;
    t y;
    public:
    void setx(t x){
        this-> x=x;
    }
    t getx(){
        return x;
    }
    void sety(t y){
        this-> y=y;
    }
    t gety(){
        return y;
    }
    
};
int main()
{
    Pair <int> p1;
    p1.setx(10);
    p1.sety(20);
    cout<<p1.getx()<<" "<<p1.gety()<<endl;
    
    Pair <double> p2;
    p2.setx(10.01);
    p2.sety(20.02);
    cout<<p2.getx()<<" "<<p2.gety()<<endl;
    
}