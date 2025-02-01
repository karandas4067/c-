//protected amd public
#include<iostream>
using namespace std;

class Box {
  protected:
    double width;
};

class SmallBox : public Box { 
  public:
    void setWidth(double width); 
    double getWidth();          
};

void SmallBox::setWidth(double w) {
    width = w; 
}

double SmallBox::getWidth() {
    return width; 
}

int main() {
    SmallBox box;
    box.setWidth(5.0); 
    cout << box.getWidth() << endl; 
    return 0;
}
