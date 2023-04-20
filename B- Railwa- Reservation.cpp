#include<iostream>
#include<string.h>

using namespace std;
class train  {
	private:
	
		char Train_Name[100];
		char Source[100];
		char Destination[100];
		char Train_Time[100];

	public: 
		int Train_Number;
        void setdata(){
        	cout<<endl<<"enter Train Number :  ";
        	cin>>Train_Number;
        	cout<<"enter Train Name :  ";
        	cin>>Train_Name;
        	cout<<"enter Source :  ";
        	cin>>Source;
        	cout<<"enter Destination :  ";
        	cin>>Destination;
        	cout<<"enter Train Time :  ";
        	cin>>Train_Time;
		}
		void getdata(){
			cout<<endl<<"enter Train Number :  "<<Train_Number<<endl;
        	cout<<"enter Train Name :  "<<Train_Name<<endl;
        	cout<<"enter Source  :  "<<Source<<endl;
        	cout<<"enter Destination  :  "<<Destination<<endl;
        	cout<<"enter Train Time  :  "<<Train_Time<<endl;
		}
};

int main(){
	int n;
	int tnumber;
	train arr[3];
	for(n=0;n<3;n++){
		arr[n].setdata();
	}
	cout<<endl<<"enter train number : ";
	cin>>tnumber;
	
	for(n=0;n<3;n++){
		if(arr[n].Train_Number == tnumber){
			arr[n].getdata();
			break;
		}
	};
	
	return 0;
}
