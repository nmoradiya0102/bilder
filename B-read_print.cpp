#include<iostream>
using namespace std;

class read{
	public:
	int role;
	char name[100];
	int marks;

	void setData(){
		cout << "Enter student Roll no : ";
		cin >> role;
		cout << "Enter student Name : ";
		cin >> name;
		cout << "Enter student Marks :";
		cin >>marks; 
	}
};

class print{
	public:
		read n;
		void getData(){
		    
		    cout <<endl<< "Student Details" <<endl;
			cout << "Roll no : " <<n.role <<endl;
			cout << "Name : " <<n.name <<endl;
			cout << "Marks : " <<n.marks <<endl;	
		}
	
};

int main(){
	print x;
	x.n.setData();
	x.getData();
	return 0;
}

