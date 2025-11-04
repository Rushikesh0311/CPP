#include <iostream>
using namespace std;

void print_data(string name,string add,string mob,int sal)
{
    cout << "Name: " << name << endl;
    cout << "ADD: " << add << endl;
    cout << "MOB: " << mob << endl;
    cout << "sal: " << sal << endl;
    

}
int main(){
    string name;
    string add;
    string mob;
    int sal;

    cout << "Enter your name: ";
    getline(cin,name);
    cout << "Enter Add: " ;
    getline(cin,add);
    cout << "Mob: " ;
    getline(cin,mob);
    cout << "sal: ";
    cin >> sal;

    print_data(name,add,mob,sal);
    
}