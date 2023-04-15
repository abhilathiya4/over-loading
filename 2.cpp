#include<iostream>

using namespace std;

class Cricket{
	public :
		
		void A(){
			cout<<"Number of Overs"<<endl;		
	}
};
class T20 : public Cricket{
	public : 
		void getTotalOvers(){
			cout<<"In T20 : 20"<<endl;
		}
};
class Test : public Cricket{
	public : 
		void getTotalOvers(){
			cout<<"In Test : 450"<<endl;
		}
};

int main(){
	T20 obj1;
	obj1.A();
	obj1.getTotalOvers();
	
	Test obj2;
	obj2.A();
	obj2.getTotalOvers();
	
	return 0;
}
