// Multiple Inheritance

#include<iostream>

class base1{
    public:
        int a;
        void get_a_data(){
            std::cout<<"Enter value of a:";
            std::cin>>a;
        }
};

class base2{
    public:
        int b;
        void get_b_data(){
            std::cout<<"Enter value of b:";
            std::cin>>b;
        }
};

class sub: public base2, public base1{

    public:
        void sum(){
            std::cout<<"sum = "<<a+b;
        }
};

int main(){
    sub obj;
    obj.get_a_data();
    obj.get_b_data();
    obj.sum();
}