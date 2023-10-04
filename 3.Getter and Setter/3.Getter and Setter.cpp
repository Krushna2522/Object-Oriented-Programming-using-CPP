#include <iostream>
using namespace std;

class student{
private:
    int rollNum;
    int stdAge;
    int stdPRN;
public:
    //Getter functions are the functions through which we are able to access the Private Variable Value.
    void getRollNum(){
        cout<<"Student Roll Number: "<<rollNum<<endl;
    }
    void getStdAge(){
        cout<<"Student Age: "<<stdAge<<endl;
    }
    void getStdPRN(){
        cout<<"Student PRN: "<<stdPRN<<endl;
    }
    //Setter functions are the functions through which we are able to set the Private Variable Value.
    void setRollNum(int value){
        rollNum=value;
        return;
    }
    void setStdAge(int age){
        stdAge=age;
        return;
    }
    void setStdPRN(int PRN){
        stdPRN=PRN;
        return;
    }
};


int main()
{
    //Statically created Student
    cout<<"Student 1:"<<endl;
    student s1;
    //Setting the student properties values
    s1.setRollNum(104);
    s1.setStdAge(21);
    s1.setStdPRN(43256);
    //Getting the student properties values
    s1.getRollNum();
    s1.getStdAge();
    s1.getStdPRN();
    //Dynamically Created Student
    cout<<"Student 2:"<<endl;
    student* s2=new student;
    //Setting the student properties values
    s2->setRollNum(145);
    s2->setStdAge(23);
    s2->setStdPRN(434366);
    //Getting the student properties values
    s2->getRollNum();
    s2->getStdAge();
    s2->getStdPRN();

}
