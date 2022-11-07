#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

int main() {
  vector<int> a;
  vector<int> b;
  int cashiersnum ;
  int clientsnum;
  cin >> cashiersnum ;
  int test ;
  for (int i=0; i<cashiersnum; i++) {   
    cin >> test ;
    a.push_back(test);
    b.push_back(0);
  }

  cin >> clientsnum;
  int s;
  for (int i=0; i<clientsnum; i++) {
    cin >> s;
    if ((s>0) && (s<(b.size()+1)) && (b.size()==a.size())) {
      b[s-1]=b[s-1]+ a[s-1] ; }
  }
  int duration = *min_element(b.begin(), b.end());
  for (int i=0; i<b.size(); i++){
    if (b[i]==duration) {
      cout << i+1 << " " << duration ;
      return 0;
    }
  }
  return 0;
}
