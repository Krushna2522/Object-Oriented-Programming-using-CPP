//Create an Class student
//Student have the properties like Roll Number, Student Age, Student PRN
//Class is an template or the blueprint of an object
//Class specifies the properties and the function the object have
class Student{
    int rollNumber;
    int stdAge;
    int stdPRN;
};
//Object is an Instance of an Class
int main(){
    //Static Object Creation
    Student s1;
    Student s2;
    Student s3;
    //Dynamically Object Creation
    Student* s4=new Student;
    Student* s5=new Student;
    Student* s6=new Student;
}
