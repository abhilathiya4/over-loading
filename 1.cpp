#include<iostream>

using namespace std;

class math{
	
	public:
		void div(int a, int b){
			cout<<"Division : "<<a/b<<endl;
		}
		void div(int a, int b, int c){
			cout<<"Sub : "<<a-b-c<<endl;
		}
		void div(int a, int b,int c,int d){
			cout<<"Multi : "<<a*b*c*d<<endl;
		}
		void div(int a, int b,int c,int d,int e){
			cout<<"Add : "<<a+b+c+d+e<<endl;
		}
};
class Calculate : public math{
	
	public : 
	 void Math(){
	 
	 	div(  20 , 10 );
		div(2 , 3 , 4 );
		div(9 , 4 , 3 , 2);
		div(1, 2 , 3 , 4 , 5);
	}
};

int main(){
	
	Calculate obj;
	obj.Math();
	

	
	return 0;
}
