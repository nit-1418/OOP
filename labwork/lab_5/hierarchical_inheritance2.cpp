// Hierarchical Inheritance

#include<iostream>
using namespace std;
class programmer{
    protected:
        string name;
    public:
        programmer(string name):name(name){}

        void namedetails(){
            cout<<"Name of programmer: "<<name<<endl;;
        }
};

class java: public programmer{
    private:
        int salary;
    public:
        java(string name, int salary):programmer(name),salary(salary){};

        void javadetails(){
            cout<<"He/she is JAVA programmer."<<endl;
            cout<<"His/her salary is "<<salary<<endl;
        }

};

class ml: public programmer{
    private:
        int salary;
    public:
        ml(string name, int salary):programmer(name),salary(salary){};

        void mldetails(){
            cout<<"He/she is ML programmer."<<endl;
            cout<<"His/her salary is "<<salary<<endl;
        }
};

int main(){
    java person1("Rojna",87000);
    person1.namedetails();
    person1.javadetails();
    cout<<endl;
    ml person2("Yagya",115000);
    person2.namedetails();
    person2.mldetails();

}