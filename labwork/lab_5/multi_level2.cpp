// multi_leve inheritance

#include<iostream>
class baseClass{
    public:
        int a;

        void get_a_data(){
            std::cout<<"Enter value of a:";
            std::cin>>a;
        }
};

class intmedClass: public baseClass{
    public:
        int b;

        void get_b_data(){
            std::cout<<"Enter value of b:";
            std::cin>>b;
        }
    
};

class subClass: public intmedClass{
    private:
        int c;

    public:

        void get_c_data(){
            std::cout<<"Enter value of c:";
            std::cin>>c;
        }

        void sum(){
            int ans= a+b+c;
            std::cout<<"Sum="<<ans;
        }
};

int main(){
    subClass obj;
    obj.get_a_data();
    obj.get_b_data();
    obj.get_c_data();
    obj.sum();
    return 0;
}