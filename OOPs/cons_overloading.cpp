#include <iostream>
using namespace std;
class student
{
    private:
        string name,add,mob;
        int sal;
    public:
        student(string n,string m,string a,int s)
        {
            name = n;
            add = a;
            mob = m;
            sal = s;
        }
        student()
        {
            cout << "Defalut Const: " << endl;
            name = "none";

            add = "noe";
            mob = "none";
            sal = 0; 

        }
        student(string n,string a,string m) // same constr with diff parameters
        {
            cout << "3 pra" << endl;
            name = n;
            add = a;
            mob = m;
            sal = 100;
        }
        void display(){
            cout << "Name: " << name << endl;
            cout << "Add: " << add << endl;
            cout << "MOb: " << mob << endl;
            cout << "Sal: " << sal << endl;
         }
};
int main(){
    student s1("Rushi","MGROAD","123456",123);
    s1.display();
    student s2;
    s2.display();

    student s3("Rushiiiii","MG","12345");
    s3.display();

}