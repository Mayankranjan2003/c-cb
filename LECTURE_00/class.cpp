#include <iostream>  
using namespace std;  
class Student {  
   public:  
      int id;     
      string name;      
};  
int main() {  
    Student m1;
    m1.id = 412;    
    m1.name = "Mayank Ranjan";   
    cout<<m1.id<<endl;  
    cout<<m1.name<<endl;  
    return 0;  
}  ;