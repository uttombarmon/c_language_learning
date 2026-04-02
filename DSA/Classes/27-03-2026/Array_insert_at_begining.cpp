#include <iostream>
using namespace std;
int main()
{
  // code write here
  int a[10], n, pos, newElement;

  cout << "How much do you insert initial elements : ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    /* code */
    cout << i << " th elment: ";
    cin >> a[i];
  }

  cout << "Enter new insert element at the beggining: ";
  cin >> newElement;
  if (n < 10)
  {
    /* code */
    for (int i = n; i > 0; i--)
    {
      /* code */
      a[i] = a[i - 1];
    }
    a[0] = newElement;
    n++;

    cout << "Updated array: " << endl;
    for (int i = 0; i < n; i++)
    {
      /* code */
      cout << i << " th element: " << a[i] << endl;
    }
  }
  else
  {
    cout << "Array is full!" << endl;
  }

  return 0;
}