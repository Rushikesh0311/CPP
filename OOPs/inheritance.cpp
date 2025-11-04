#include <iostream>
using namespace std;
class Emertxe
{
    public:
        string name,add,mob;
        Emertxe(string n,string a,string m) : name(n),add(a),mob(m) {};

};
class Mentor : public Emertxe
{
    private: 
        string rank;
        float sal;
    public:
        Mentor(string n,string a,string m,string r,float s):Emertxe(n,a,m),rank(r),sal(s){};
        void print(){
            cout << "Name: " << name << endl;
            cout << "Add: " << add << endl;
            cout << "Mob: " << mob << endl;
            cout << "rank: " << rank << endl;
            cout << "Sal: " << sal << endl;
        }    
};
int main(){
    Mentor obj("Rushi","Mg","1234567","junior",0);
    obj.print();
}