#include <iostream>
#include <cmath>
using namespace std;

class Array{

private:
     
     
     int new_size=0;
     int size=0; // default size
     int *p = new int [4];
     int *q = new int [8];
     

public:
     void num(){
          cout << "\nEnter number of elements want to add, not greater than 4:" ;
          cin >> size ;
          new_size = new_size + size;
          if (new_size > size){
               // cout << "printing loop "<<new_size-size<<endl;
               for (int i=0;i<new_size-size;i++){
                    q[i] = p[i];
               }

               delete []p;
               p = q; // Assign the pointer of q into p
               q = NULL; // delete the location of pointer q
               
               // cout<< "Done till here"<<endl;
          }
         
     }


     void add_values(){
          
          // cout<< "Add values " << (size-new_size) <<endl;
          if (new_size>size){
               cout<< "old_size: "<< new_size-size << " new_size: "<<new_size <<endl;
               // cout << "new_Size>size"<<endl;
               for (int i=new_size-size;i<new_size;i++){
                    cout << "Enter the values: " <<endl;
                    cin >> *(p+i);
               }
               size = new_size;
          }
          else{
               for (int i=0;i<size;i++){
                    cout << "Enter the values: " <<endl;
                    cin >> *(p+i);

               }
          }
          
     }
     
     void print_values(){
          cout<<" Print values" << endl;

          for (int i=0;i<size;i++){
               cout << " " <<*(p+i);
          }
          
     }

};

int main(){

     Array a;
     a.num();
     a.add_values();
     a.print_values();

     a.num();
     a.add_values();
     a.print_values();

     
     return 0;
}
