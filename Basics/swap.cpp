#include <iostream>
using namespace std;
void swap(int& r1,int& r2)
{
    r1 = r1 ^ r2;
    r2 = r1 ^ r2;
    r1 = r1 ^ r2;
    
}
int main(){
    int x = 5,y = 10;
    cout << x << " " << y << endl;
    swap(x,y);
    cout << x << " " << y << endl;
}