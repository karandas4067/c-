//constructor in private and public
#include<iostream>
using namespace std;
class  Line{
  public:
    void setlength(double len);
    double getLength();
    line();//constructor
    
   public:
    double length;
 };
//member function definition including consructors
Line::Line(void){
  cout<<"object is created"<<endl;
  }
  void Line::setLength(double len){
    length=len;
    }
    
   double Line::getLength(){
      return length;
      }
int main(){
line line;
line.setlengt(6.0);
cout<<"length of the line:"<<line.getLength()<<endl;

return 0;
}
