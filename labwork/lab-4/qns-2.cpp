/*Write a program that overload the following operators.
    a. Minus binary operator
    b. Post decrement operator
    c. Pre decrement operator*/

#include<iostream>
class overload{
	private:
		int a;
	public:
		void setData(int a){
			this->a=a;
		}
		overload operator+(const overload& obj2){
			overload temp;
			temp.a=a+obj2.a;
		}
		
		overload operator--(){
			a--;
		}
		overload operator--(int){
			--a;
		}
		void display(){
			std::cout<<a<<std::endl;
		}
};

int main(){
	overload obj1, obj2,result;
	obj1.setData(8);
	obj2.setData(9);
	result = obj1+obj2;
	result.display();
	obj1--;
	obj1.display();
	--obj2;
	obj2.display();
}

