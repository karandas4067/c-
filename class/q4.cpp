#include<iostream>
using namespace std;
namespace sec28{
	void assignment1(){
	cout<<"Done"<<endl;
	}
	void assignment2(){
	cout<<"not done"<<endl;
	}
};
namespace sec29{
	void assignment1(){
	cout<<"Done"<<endl;
	}
	void assignment2(){
	cout<<"not done"<<endl;
	}
};
int main(){
	sec28::assignment1();
	sec28::assignment2();
	sec29::assignment1();
	sec29::assignment2();
	}
