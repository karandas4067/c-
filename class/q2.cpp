	/*same function name is executed in c++*/
#include<iostream>
using namespace std;
namespace l1{
        void print(){
        cout<<"hello!"<<endl;
        }
};
namespace l2{
        void print(){
        cout<<"world"<<endl;
        }
};
int main(){
        l1::print();
        l2::print();

        }
                   
