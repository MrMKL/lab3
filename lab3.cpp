#include<iostream>
#include<fstream>
#include <vector>
#include<cstdlib>
#include <algorithm>

using namespace std;

int main() {
  vector<int> v;
  int k, n;
  ifstream infile("file.in",  ios::in);
  if(!infile) {
   cerr << "Failed opening" << endl;
   exit(1); 
  }
  infile >> k;
  for(int p = 0; p < k; ++p) {
    infile >> n;
    v.push_back(n);
  }
  sort(v.begin(), v.end());
  cout << v[k - 1] + v[k - 2] + v[k - 3] + v[k - 4] + v[k - 5] << endl;

}
