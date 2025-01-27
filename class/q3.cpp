#include<iostream>
using namespace std;
struct BA{
	string accholder;
	float balance;
	
	void insertHoldername(string name){
	accholder=name;
}
	void insertAmt(float bal){
	balance=bal;
}
	void deposit(float amt){
	if (amt>0){
	balance+=amt;
	cout<<"deposited balance"<<amt<<"balance in acc"<<balance<<endl;
	}else{
	cout<<"invalid amount"<<endl;
	}
}
void withdraw(float amt){
	if(amt>0 && amt<<balance){
	balance=amt;
	}
	else{
	cout<<"NO money available "<<endl;
	}
	}
void accountDetails(){
	cout<<"account holder "<<accholder<<endl;
	cout<<"balance"<<balance<endl;
	}
	};
int main(){
	Ba acc1;
	acc1.insertholdername("karan");
	acc1.insertAmt(800);
	acc1.deposit(100);
	}
