// Hierarchical Inheritance

#include<iostream>
using namespace std;
class A{
  public:
    void show_A(){
        cout<<"class A printed"<<endl;
    }  
};

class B: public A{
    public:
        void show_B(){
            cout<<"class B printed"<<endl;
        }
};

class C: public A{
    public:
        void show_c(){
            cout<<"class C printed"<<endl;
        }
};
int main(){
    B obj1;
    cout<<"calling from class B"<<endl;
    obj1.show_A();
    obj1.show_B();

    C obj2;
    cout<<"calling from class C"<<endl;
    obj2.show_A();
    obj2.show_c();
    return 0;
}