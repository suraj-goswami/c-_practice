#include <iostream>

using namespace std;

class Base{

private:
     int a;
     int b;
     int c;

public:
     Base(){
          cout << "This is constructor"<<endl;
     }
     void set_dimentions(int first, int second, int third){
          a = first;
          b = second;
          c = third;
     }

     void show_data(){
          cout << "a: "<<a << "\nb: "<<b << "\nc: "<< c << endl;

     }
     Base(Base& sample){ //Parameterized constructor for deep copy
          cout<< "Deep Copy constructor " << endl;
          a = sample.a;
          b = sample.b;
          c = sample.c;
     }

     ~Base(){
          cout << "This is Destructor"<<endl; 
     }
};

int main(){

     Base b1;
     b1.set_dimentions(12,13,14);
     b1.show_data();

     //Data copied
     Base b2 = b1;
     b2.show_data();
}