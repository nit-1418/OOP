#include<iostream>
using namespace std;


class father{
    public:
        father() {
        cout << "father was called" << endl;
     }
};

class mother
{
public:
mother() {
     cout << "mother was called" << endl; }
};

class child: public mother, public father // Note the order
{
public:
child() {
     cout << "child was called" << endl; }
};

int main()
{
	child obj;
	return 0;
}
