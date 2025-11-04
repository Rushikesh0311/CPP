#include <iostream>
using namespace std;
class Emp
{
    public:
        string name,mob,add;
        float* sal;
    Emp(string n,string a,string m,float* s): name(a),add(a),mob(m),sal(s){};    

    void display(){
        cout << "Emp Data: " << endl;
        cout << "Name: " << name << endl;
        cout << "Add: " << add << endl;
        cout << "Mob: " << mob << endl;
        cout << "sal: " << *sal << endl;
    }    
    Emp(Emp& ref)
    {
        name = ref.name;
        add = ref.add;
        mob = ref.mob;
        sal = new float;
        *sal =  *(ref.sal);
    }
    ~Emp()
    {
        delete sal;
    }
};
int main(){
    Emp ob1("Rushi","Mg","12345",0);

    ob1.display();
    Emp ob2 = ob1;

    ob1.display();
    ob2.display();

    *(ob2.sal) = 0;

    ob1.display();
    ob2.display();


}