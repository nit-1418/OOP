// Multiple Inheritance

#include<iostream>

class father{
    public:
        father(){
            std::cout<<"father has called."<<std::endl;
        }
};

class mother{
    public:
   
    mother(){
        std::cout<<"mother has called."<<std::endl;
    }
};

class childs: public mother, public father{
    public:
        childs(){
            std::cout<<"child has called."<<std::endl;
        }
};

int main(){
    childs obj;
    return 0;
}