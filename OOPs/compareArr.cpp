#include <iostream>
using namespace std;
class Array 
{
    public:
        int size;
        int size2;
        int* ptr;
        int* str;

    public:
        Array(){
            size = 0;
            ptr = NULL;
            str = NULL;
        }
        void read_array1(){
            cout << "Enter The size of 1st arr: ";
            cin >> size;
            ptr = new int[size];
            for(int i=0;i<size;i++)
            {
                cin >> ptr[i];
            }
        }
        void read_array2(){
            cout << "Enter size for 2nd arr: ";
            cin >> size2;
            str = new int[size2];
            for(int i=0;i<size2;i++)
            {
                cin >> str[i];
            }
        }
        void print_array1(){
            cout << "Array1 Elements are: ";
            for(int i=0;i<size;i++)
            {
                cout << ptr[i] << " ";
            }
            cout << endl;
        }
        void print_array2(){
            cout << "Array2 Elements are: ";
            for(int i=0;i<size2;i++)
            {
                cout << str[i] << " ";
            }
            cout << endl;
        }
};
class compare
{
    public:
        void compare_arr(Array &arr)
        {
            if (arr.size != arr.size2)
            {
                cout << "Size is Not Equal" << endl;
                return;
            }

        
            for(int i = 0; i < arr.size; i++)
            {   
                if(arr.ptr[i] != arr.str[i])
                {
                    cout << "Array Not Equal" << endl;
                    return; 
                }
            }

       
            cout << "Array Are Equal" << endl;
        }
};
int main(){
    Array arr,brr;
    arr.read_array1();
    arr.read_array2();
    arr.print_array1();
    arr.print_array2();

    compare cmp;
    cmp.compare_arr(arr);
}