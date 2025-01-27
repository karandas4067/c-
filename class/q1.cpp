#include<iostream>
using namespace std;
class box{
	public:
	double lenght;
	double breadth;
	double height;
	
	public:
	void insertDetails(double 1, double b, double h){
	length=l;
	width=b;
	height=h;
	}
	double calculateVol(){
		return length*width*height;
		}
	};
int main(){
	Box box1;
	Box box2;
	double volume=0.0;
	double l,b,h;
	cout<<"enter the length ,width and height of the box:"<<endl;
	cin>>l>>b>>h;
	box1.insertDetails(l,b,h);
	volume=box1.calculateVol();
	cout<<"volume is:"<<volume<<endl;
	
	
	return 0;
	
	
	}
