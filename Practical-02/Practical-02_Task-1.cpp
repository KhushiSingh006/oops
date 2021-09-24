#include <iostream>
#include<math.h>
using namespace std;
int main() {
  int n, i, flag = 0;
  cout<<"Enter a positive integer: "<<endl;
  cin>>n;

  for (i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  if (n == 1) {
    cout<<"1 is neither prime nor composite.";
  } 
  else {
    if (flag == 0)
      cout<<n<<" is a prime number."<<endl;
    else
      cout<<n<<" is not a prime number."<<endl;
  }

  return 0;
}
