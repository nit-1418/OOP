#include<iostream>
class vector{
   private:
   int x;
   int y;
   int z;
   public:
   vector(){
   	std::cout<<"Enter the vector a = [x y z]"<<std::endl;
   	std::cin>>x>>y>>z;
   }	
   void operator --(int ){
   	x= -x;
   	y= -y;
   	z= -z;
   }
   void display(){
   	std::cout<<"vector -a= "<<"["<<x<<" "<<y<<" "<<z<<"]";
   	
   }
};

int main(){
	vector a;
	a--;
	a.display();
	return 0;
}
