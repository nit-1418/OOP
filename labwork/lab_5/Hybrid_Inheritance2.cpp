// Hybrid Inheritance
// hierarcial and multiple 

#include<iostream>
using namespace std;

class ku{
    protected:
        int num;
    public:
      ku(int num):num(num){}
};

class students: public ku{
    public:
    students(int a):ku(num){}
    
};

class teachers: public ku{
    public:
    teachers(int b):ku(num){}
    
};

class people: public teachers, public students{
    public:
        people(int num1, int num2):teachers(num1),students(num2){
            cout<<"The number of teacher in AI is "<<num1<<endl;
            cout<<"The number of students in AI is "<<num2<<endl;

        }
};

int main(){
    people p(6,28);
}