// #include<iostream>
// using namespace std;

// class Teacher{

// private:
//     double salary;

//   public:
//     string name;
//     string dept;
//     string subject;
//     //double salary;

//     void changeDept(string newDept){
//         dept = newDept;
//     }

//     void setSal(double s){
//         salary = s;
//     }

//     double getSalary(){
//         return salary;
//     }

// };

// int main() {
//     Teacher t1;
//     t1.name = "Aman";
//     t1.dept = "ECM";
//     t1.subject = "OOPS";
//     t1.setSal(25000);
//     //t1.salary = 10000;

//     cout<<t1.name<<endl;
//     cout<<t1.getSalary()<<endl;
//     return 0;
// }




// CONSTRUCTOR: Special method invoked automatically at time of object creation
// Same name as class. Doesn't have any return type. Only called once(automatically), at object creation


// #include<iostream>
// using namespace std;

// class Teacher{

// private:
//     double salary;

//   public:

//     Teacher(){
//         cout<<"I am a Constructor\n" <<endl;
//         dept = "Web Programming";
//     }
//     string name;
//     string dept;
//     string subject;
//     //double salary;

//     void changeDept(string newDept){
//         dept = newDept;
//     }

//     void setSal(double s){
//         salary = s;
//     }

//     double getSalary(){
//         return salary;
//     }

// };

// int main() {
//     Teacher t1;
//     Teacher t2;
//     t1.name = "Aman";
//     // t1.dept = "ECM";
//     t1.subject = "OOPS";
//     t1.setSal(25000);
//     //t1.salary = 10000;

//     cout<<t1.name<<endl;
//     cout<<t1.dept<<endl;
//     cout<<t1.getSalary()<<endl;
//     return 0;
// }




// #include<iostream>
// using namespace std;

// class Teacher{

// private:
//     double salary;

//   public:
//     Teacher(string n,string d,string s,double sal){
//         name = n;
//         dept = d;
//         subject = s;
//         salary = sal;
//     }
    
//     string name;
//     string dept;
//     string subject;
//     //double salary;

//     void changeDept(string newDept){
//         dept = newDept;
//     }

//     void setSal(double s){
//         salary = s;
//     }

//     double getSalary(){
//         return salary;
//     }

//     void getInfo(){
//         cout<<"name: "<<name<<endl;
//         cout<<"subject: "<<subject<<endl;
//     }

// };

// int main() {
//     Teacher t1("Aman","ECM","C",25000);
//     t1.getInfo();
//     // Teacher t2;
//     // t1.name = "Aman";
//     // // t1.dept = "ECM";
//     // t1.subject = "OOPS";
//     // t1.setSal(25000);
//     // //t1.salary = 10000;

//     // cout<<t1.name<<endl;
//     // cout<<t1.dept<<endl;
//     // cout<<t1.getSalary()<<endl;
//     return 0;
// }


// this pointer : is a special pointer in C++ that points to the current object

// #include<iostream>
// using namespace std;

// class Teacher{

// private:
//     double salary;

//   public:
//     Teacher(string name,string dept,string subject,double salary){
//         this->name = name;
//         this->dept = dept;
//         this->subject = subject;
//         this->salary = salary;
//     }
    
//     string name;
//     string dept;
//     string subject;
//     //double salary;

//     void changeDept(string newDept){
//         dept = newDept;
//     }

//     void setSal(double s){
//         salary = s;
//     }

//     double getSalary(){
//         return salary;
//     }

//     void getInfo(){
//         cout<<"name: "<<name<<endl;
//         cout<<"subject: "<<subject<<endl;
//     }

// };

// int main() {
//     Teacher t1("Aman","ECM","C",25000);
//     t1.getInfo();
//     // Teacher t2;
//     // t1.name = "Aman";
//     // // t1.dept = "ECM";
//     // t1.subject = "OOPS";
//     // t1.setSal(25000);
//     // //t1.salary = 10000;

//     // cout<<t1.name<<endl;
//     // cout<<t1.dept<<endl;
//     // cout<<t1.getSalary()<<endl;
//     return 0;
// }


// COPY Constructor

// #include<iostream>
// using namespace std;

// class Teacher{

// private:
//     double salary;

//   public:
//     Teacher(string n,string d,string s,double sal){
//         name = n;
//         dept = d;
//         subject = s;
//         salary = sal;
//     }
    
//     string name;
//     string dept;
//     string subject;
//     //double salary;

//     void changeDept(string newDept){
//         dept = newDept;
//     }

//     void setSal(double s){
//         salary = s;
//     }

//     double getSalary(){
//         return salary;
//     }

//     void getInfo(){
//         cout<<"name: "<<name<<endl;
//         cout<<"subject: "<<subject<<endl;
//     }

// };

// int main() {
//     Teacher t1("Aman","ECM","C",25000);
//     //t1.getInfo();

//     Teacher t2(t1);
//     t2.getInfo();
    
//     return 0;
// }


// SHALLOW VS DEEP COPY
// A shallow copy of an object copies all of the memeber vlaues from one object to another
// a deep copy, not only copies the member values but also makes copies of any dynamically allocated memory that the members point to.




// #include<iostream>
// #include<string>
// using namespace std;

// class Student{
//   public:
//     string name;
//     // double cgpa;
//     double* cgpaPtr;

//     Student(string name,double cgpa){
//         this->name = name;
//         // this-> cgpa =cgpa;
//         cgpaPtr = new double;
//         *cgpaPtr = cgpa;
//     }

//     Student(Student &obj){
//         this->name = obj.name;
//         // this->cgpaPtr = obj.cgpaPtr;
//         cgpaPtr = new double;
//         *cgpaPtr = *obj.cgpaPtr;
//     }

//     void getInfo(){
//         cout<<"name : "<< name<<endl;
//         cout<<"cgpa : "<< *cgpaPtr<<endl;
//     }
// };

// int main() {

//     Student s1("aman",9.9);
//     Student s2(s1);
//     s1.getInfo();
//     *(s2.cgpaPtr) = 9.2;
//     s1.getInfo();
//     s2.name="shraddha";
//     s2.getInfo();

    
//     return 0;
// }



//   INHERITANCE: When properties and member function of base class are passed on to the derived class

// #include<iostream>
// #include<string>
// using namespace std;

// class Person{
//     public:
//     string name;
//     int age;

//     Person(){

//     }

// };

// class Student : public Person{
//     public:
//         int rollno;

//         void getInfo(){
//             cout<<"name : "<<name<<endl;
//             cout<<"age : "<<age<<endl;
//             cout<<"roll_no : "<<rollno<<endl;
//         }
// };

// int main() {
//     Student s1;
//     s1.name= "aman";
//     s1.age = 21;
//     s1.rollno = 21;

//     s1.getInfo();
    
//     return 0;
// }



// POLYMORPHISM: is the ability of objects to take on different forms or behave in different ways depending on the context in which they are used

// POLYMORPHISM are of two types: Compile Time and Run Time


// Compile Time : one is constructor overloading and one is function overloading and one is operator overloading

// #include<iostream>
// using namespace std;

// class Print{
//     public:
//         void show(int x){
//             cout<<"int : "<<x<<endl;
//         }

//         void show(char x){
//             cout<<"char : "<<x<<endl;
//         }
// };

// int main() {
//     Print p1;
//     p1.show(1);
//     p1.show('a');
    
//     return 0;
// }


// RUN TIME polymorphism or dynamic polymorphism

// best example is function overriding : generally in inheritance
// virtual func: is a memeber function that you expect to be redefined in derived class




// ABSTRACTION :  hiding all unnecessary details and showing only the important parts
