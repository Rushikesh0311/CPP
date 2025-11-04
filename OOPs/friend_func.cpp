#include <iostream>
using namespace std;

class Base
{
    protected:
        string name; //  Protected -->accessible by child classes and friend functions
        
        string add;
        string mob;

    public:
        Base(string n, string a, string m) // Constructor to initialize base class members
        {
            name = n; 
            add = a;
            mob = m;
        }
};

class Emp : public Base // // Emp inherits from Base class
{
    private:
        float sal; // // Private -- >accessible only inside Emp or by friend
        string rank;

    public:
        // Parameterized constructor for Emp
        // Uses initializer list to call Base class constructor
        Emp(string n, string a, string m, float s, string r) : Base(n, a, m) 
        // Base(n,a,m) --> Calls parent class constructor before child constructor body executes
        {
            sal = s;
            rank = r;
        }

    // Friend function declaration
    // Allows 'printer' to access private & protected members
    friend void printer(Emp &);
};

// Friend function definition
void printer(Emp &o)
{
    cout << "Name: " << o.name << endl;
    cout << "Address: " << o.add << endl;
    cout << "Mobile: " << o.mob << endl;
    cout << "Salary: " << o.sal << endl;
    cout << "Rank: " << o.rank << endl;
}

int main()
{
    Emp ob("Rushi", "MG Road", "123456", 30000, "Junior");
    printer(ob);
}



/*
    parent class                        child class
+-------------------+           +---------------------------+
|       Base        |           |           Emp             |
|-------------------|           |---------------------------|
| name  (protected) | <-------- | sal   (private)           |
| add   (protected) |           | rank  (private)           |
| mob   (protected) |           |                           |
+-------------------+           +---------------------------+
         ^                                   ^
         |                                   |
         |      Inheritance (Emp : Base)     |
         +-----------------------------------+
                          |
                          |
             +----------------------------+
             |     Friend Function        |
             |     void printer(Emp&)     |
             |----------------------------|
             |  Accesses name, add, mob   |
             |  Accesses sal, rank        |
             +----------------------------+

*/