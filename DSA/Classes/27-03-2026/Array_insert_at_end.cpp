#include <iostream>
using namespace std;
int main() {
  //code write here
  int a[10], n, i, newElement;
  cout << "Enter size of array(Input elemnts must 0<10) : ";
  cin >> n;

  for(i = 0; i<n; i++){
    cout << "Enter " << i << " position element: ";
    cin>> a[i]; 
  }
  
  for(i = 0; i<n; i++){
    cout << i << " nth number element is " << a[i] << endl;
  }

  cout <<"Enter the inserting new element: ";
  cin >> newElement;

  if(n<10){
    a[n] = newElement;
    n++;
  }else{
    cout << "Array is full!" << endl;
    return 0;
  }
  // for(i=0; i==pos; i++){
  //   cout << "Enter the element: ";
  //   cin>> arr
  // }
  cout << "\nUpdated Array:" << endl;
  for(i = 0; i<n; i++){
    cout << i << " th number element is " << a[i] << endl;
  }
  return 0;
}