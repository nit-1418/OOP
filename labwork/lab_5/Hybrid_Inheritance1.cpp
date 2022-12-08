// Hybrid Inheritance
// hierarchical and mutilevel 

#include<iostream>
using namespace std;

class shape{
    protected:
        int num;
    public:
        shape(int num):num(num){};
};

class triangle: public shape{
    public:
    triangle(int num):shape(num){};

    void triangle_print(){
        cout<<"The triangle has "<<num<<" lines."<<endl;


    }
};

class rectangle: public shape{
    public:
    rectangle(int num): shape(num){};

    void rectangle_print(){
            cout<<"The rectangle has "<<num<<" lines."<<endl;
    }
};

class square: public rectangle{
    public:
 square (int num): rectangle(num){};
   
    void square_print(){
        cout<<"The square has "<<num<<" lines."<<endl;
    }
};

int main(){
    triangle t(3);
    t.triangle_print();

    rectangle r(4);
    r.rectangle_print();

    square s(4);
    s.square_print();
}