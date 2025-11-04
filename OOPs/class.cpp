#include <iostream>
using namespace std;

class Emp
{
    public:
        string name;
        string add;
        string mob;
        int sal;
    public:
        void get_data()
        {
            cout << "Enter Name: ";
            cin >> name;

            cout << "Enter Add: ";
            cin >> add;

            cout << "Enter MOb: ";
            cin >> mob;

            cout << "Enter Sal: ";
            cin >> sal;
        }   
        void print_data(){
            cout << "Name is: " << name << endl;
            cout << "Add: " << add << endl;
            cout << "Mob: " << mob << endl;
            cout << "Sal: " << sal << endl;
        } 
};
class Printer
{
    public:
        void display(Emp& O)
        {
            cout << "Name: " << O.name << endl;
            cout << "Add: " << O.add << endl;
            cout << "Mob: " << O.mob << endl;
        }
};
int main(){
    Emp obj;

    obj.get_data();
    obj.print_data();

    Printer p;
    p.display(obj);
}