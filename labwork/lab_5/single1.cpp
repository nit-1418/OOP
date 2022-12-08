// single inheritance

#include<iostream>
class room{
	protected:
		int length, breadth, height;
	public:
		void setdata(int l, int b, int h){
			this->length=l;
			this->breadth=b;
			this->height=h;
		}
		
};

class bedRoom: public room{
	public:
		int volume;
		void calclateVolume(){
			volume=length*breadth*height;
		}
		void display(){
			std::cout<<"The volume is:"<<volume;
		}
};

int main(){
	bedRoom r;
	r.setdata(5,5,5);
	r.calclateVolume();
	r.display();
}
