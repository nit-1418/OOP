/*3. Write a program showing the use of friend function in overloading binary
operator.*/
#include<iostream>

using namespace std;

class Opoverloading{
    int a;
    friend Opoverloading operator +(Opoverloading obj1, Opoverloading obj2);
    public:
        void setData(int a){
            this->a = a;
        }
        void display(){
            cout<<a;
        }

};

Opoverloading operator +(Opoverloading obj1, Opoverloading obj2){
    Opoverloading temp;
        temp.a = obj1.a + obj2.a;
        return temp;
}

int main(){
    Opoverloading x, y, z;
    x.setData(7);
    y.setData(9);
    z = x+y;
    z.display();
    return 0;
}
