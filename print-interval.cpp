#include <iostream>
using namespace std;

int main(){
  int L, U;
  cout << "Please enter L: ";
  cin >> L;
  cout << "Please enter U: ";
  cin >> U;
  for (int i = L; i < U; i++){
    L = i;
      cout << L << " ";
  }
  return 0;
}
