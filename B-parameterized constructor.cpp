#include<iostream>

using namespace std;
class parameterized{
	private:
		int a;
		int b;
	public: parameterized(){
		cout<<"default";
	}
	
	parameterized (int x,int y){
		int p;
		p=x+y;
		cout<<"sum of two number : "<<p;
		
	}
};

int main(){
	parameterized obj;
	parameterized obj1(30,20);

	
	return 0;
}
