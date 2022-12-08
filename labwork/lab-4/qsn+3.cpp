//write a program showing the use of friend function in overloading binary operator

#include<iostream>

class overload{
	private:
		int a;
		friend overload operator +(overload, overload);
	public:
		void getData(int a){
			this->a=a;
		}
		
		void display(){
			std::cout<<"the value is:"<<a;
		}
};

overload operator +(overload obj1, overload obj2){
			overload temp;
			temp.a=obj1.a+obj2.a;
		//	return temp;
		}
		

int main(){
	overload obj1, obj2, result;
	obj1.getData(5);
	obj2.getData(19);
	result = obj1+obj2;
	result.display();
	return 0;
}
