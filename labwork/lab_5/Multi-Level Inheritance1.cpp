//Multi-Level Inheritance
#include<iostream>

class batch{
	protected:
		int batchNo;
	public:
		void getData(int a){
			batchNo=a;
		}
};
class roll: public batch{
	protected:
		int rollNo;
	public:
		void data(int b){
			rollNo=b;
		}
};
class person : public roll{
	private:
		std::string name;
	public:
		person(){
		}
		person(std::string name, int rollNo, int batchNo){
			this->name = name;
			this->rollNo = rollNo;
			this->batchNo = batchNo;
		}
		void display(){
			std::cout<<"Student name:"<<name<<std::endl;
			std::cout<<"Student roll no:"<<rollNo<<std::endl;
			std::cout<<"Student batch:"<<batchNo<<std::endl;
		}
};

int main(){
	person p("Nitesh",25,2021);
	p.display();
	return 0;
}
