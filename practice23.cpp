#include <iostream>

using namespace std;

class Array{

private:
     int *data;
     int size;
     int capacity;

public:
     Array(){

          int capacity = 5;
          data = new int[capacity];
     }
     ~Array(){
          delete [] data;
     }
     
     int array_size(){
          return capacity;
     }
     
     void add_new_Array(){
          
          cout << "Enter size of element less than 10:";
          cin >> size;
          if (size <= capacity){
               for (int i=0;i<size;i++){
                    cout << "Enter the values: " <<endl;
                    cin >> *(data+i);
               }
          }
          cout << "Its working";
          // size=capacity; // 10
          // capacity = 0;
          //size=0;
          
     }
     void append(int val){
          int *pdata;
          if (size==capacity){
               capacity = capacity + 10;
               
               pdata = new int[capacity];
               for(int i=0;i<size ; i++){
                    pdata[i] = data[i];
               }
               for (int j=size; j < capacity; j++){
                    pdata[j] = 0;
               }

               delete [] data;
               data = pdata;

          }
          data[size++] = val;
          cout << "\nAppend working";
     }
     int &operator[](int index){
          int *pdata;
          if (index>=capacity){
               pdata = new int[index+10];
               for(int i=0;i<size ; i++){
                    pdata[i] = data[i];
               }
               for (int j=size; j < index+10; j++){
                    pdata[j] = 0;
               }
               capacity = index+10;
               delete [] data;
               data = pdata;

          }
          if (index > size) {
               size = index + 1;
          }
          
          
          // cout << "\n Operator[] working\n";
          return *(data + index); 
          
       }
};

int main(){

     Array lst;
     lst.add_new_Array();
     lst.append(1);
     lst.append(2);
     lst.append(3);
     
     lst[2] = 5;
     
     for(int i=0 ; i< 7 ; i++){
          cout << lst[i] << endl;
     }
     // lst[2] = 2;
     // for(int i=0 ; i< lst.array_size(); i++){
     //      cout << lst[i] << endl;
     // }   

     return 0;
}