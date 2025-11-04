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

}