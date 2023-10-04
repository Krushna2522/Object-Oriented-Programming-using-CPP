//public, private and protected are the access specifiers in the oops
//Public : It defines the properties and function are accessible  all over the codecvt
//Private : It defines the properties and function are accessible only in class
//          outside class it is not accessible
//Protected : We will see later
#include <iostream>
using namespace std;
class student{
private:
    int rollNumber;
    int stdAge;
    int stdPRN;
public:
    void printStdInfo(){
        cout<<"Roll Number: "<<rollNumber<<endl;
        cout<<"Student Age: "<<stdAge<<endl;
        cout<<"Student PRN: "<<stdPRN<<endl;
    }
};

int main(){
    student s1;
    s1.printStdInfo();
    student* s2=new student;
    s2->printStdInfo();
    (*s2).printStdInfo();//Both statement are same
    //This program print the garbage values which are store in the variables when an object is created
    //As all the variables are under private scope we are not able to set values directly
    //If we try to do that then we will get an error
    //To access and set the private variables there is getter and setter concept.
}
