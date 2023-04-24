#include <iostream>
#include "Array1D.h"

using namespace std;
int main()
{
    Array1D arr(5);

    arr.AddItem(10);
    arr.AddItem(20);
    arr.AddItem(30);

    arr.DisplayElements();

    arr.InsertItem(1, 15);

    arr.DisplayElements();

    arr.AddItem(40);

    arr.DisplayElements();

    arr.AddItem(50);

    arr.RemoveItem(0);

    arr.DisplayElements();

    cout << "Array size: " << arr.GetSize() << endl;
    if (arr.isEmpty())
    {
        cout << "Array is empty!" << endl;
    }
    else
    {
        cout << "Array is not empty!" << endl;
    }


}


