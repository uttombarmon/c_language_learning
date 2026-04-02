#include <iostream>
using namespace std;

int main()
{
  // code write here
  int a[10], n, newElement, pos;
  cout << "How much do you want initial elemnts(1<10): ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    /* code */
    cout << i << " th element : ";
    cin >> a[i];
  }

  cout << "Enter which position to insert new element: ";
  cin >> pos;
  cout << "Enter new insert element at " << pos << ": ";
  cin >> newElement;

  if (n < 10 - 1)
  {
    // for (int i = n; i > pos - 1; i--) // insert before position
    // for (int i = n; i > pos + 1; i--) // insert after position
    for (int i = n; i > pos; i--)
    {
      a[i] = a[i - 1];
    }
    // a[pos - 1] = newElement; // insert before postion
    // a[pos + 1] = newElement; // insert after position
    a[pos] = newElement; // assign the newElement
    n++;                 // increament the elements size

    cout << "Updated array: " << endl;
    for (int i = 0; i < n; i++)
    {
      /* code */
      cout << i << " th element: " << a[i] << endl;
    }
  }
  else
  {
    cout << "Array is already full!" << endl;
  }

  return 0;
}