#include <iostream>
using namespace std;

int main () {
  long long int count{0}, i{0};
  cin>>count;
  long long int andrea[count], maria[count], sumAndrea{0}, sumMaria{0};
  for (int j{0}; j<count;j++) {
    cin>>andrea[j];
  }
  cin>>count;
  for (int j{0}; j<count;j++) {
    cin>>maria[j];
  }
  string callOut;
  cin>>callOut;
  if (callOut == "Even") {
    i = 0;
  } else if (callOut == "Odd") {
    i = 1;
  } else {
    cout<<"Something is not right in string input"<<endl;
  }

  int value{0};

  for (; i<count; i += 2) {
    value = andrea[i] - maria[i];
    sumAndrea += value;
    sumMaria += (value*(-1));
  }

  cout<<sumAndrea<<" "<<sumMaria<<endl;

  if (sumAndrea > sumMaria) {
    cout<<"Andrea"<<endl;
  } else if (sumMaria > sumAndrea) {
    cout<<"Maria"<<endl;
  } else {
    cout<<"Tie"<<endl;
  }

  return 0;
}