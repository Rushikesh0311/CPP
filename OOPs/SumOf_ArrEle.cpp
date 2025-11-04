#include <iostream>
using namespace std;
class Array
{
    int size;
    int* ptr;

    public:
        Array(){
            size = 0;
            ptr = NULL;
        }
        void read_ele(){
            cout << "Enter Array size: ";
            cin >> size;

            ptr = new int[size];
            cout << "Enter Array ele: ";
            for(int i=0;i<size;i++)
            {
                cin >> ptr[i];
            }
        }
        void print_ele()
        {
            cout << "Array ele are: ";
            for(int i=0;i<size;i++)
            {
                cout << ptr[i];
            }
            cout << endl;
        }
        int SumOfEle()
        {
            int sum = 0;
            //cout << "Sum of array elements are: ";
            for(int i=0;i<size;i++)
            {
                sum += ptr[i];
            }
            return sum;
        }
};
int main(){

    Array arr;
    arr.read_ele();
    arr.print_ele();
    cout << "Sum of ele: " << arr.SumOfEle() << endl;
}