#include <iostream>
using namespace std;
class Array
{
private:
    int *p;
    int size;

public:
    Array(int s)
    {
        size = s;
        p = new int[size];
    }
    int &operator[](int index)
    {
        if (index >= 0 && index < size)
        {
            return p[index];
        }
        cout << "Invalid array index";
        return p[0]; // this is not ideal but we have to return something of int& so in this we can do exception handling.
    }
    ~Array()
    {
        delete[] p;
    }
};
int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    Array arr(size);
    cout << "Enter " << size << " elements for the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}