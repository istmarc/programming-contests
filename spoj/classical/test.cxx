#include <iostream>

using namespace std;

int main(){
  cin.tie(0);
  int x;
  while (cin >> x) {
    if (x == 42) break;
    cout << x << std::endl;
  }
}
