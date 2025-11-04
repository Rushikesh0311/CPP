#include <iostream>
using namespace std;
bool Even_Odd(int x)
{
    if(x%2 == 0)
        return 1;
    else
        return 0;    
}
int main(){
    int x = 5;
    if(Even_Odd(x))
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;    
}