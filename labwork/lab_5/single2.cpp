// single heritance
#include<iostream>
class num{
	public:
		int n;
		void setData(int a){
			this->n=a;
		}
		
};

class enroll: public num{
	int num2;
	public:
		void result(){
			num2=n+3;
			std::cout<<"You get enroll in "<<num2<<" days.";
		}
};

int main(){
	enroll choice;
	choice.setData(4);
	choice.result();
}
