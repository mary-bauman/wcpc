
#include <bits/stdc++.h>
#include <cctype>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string txt;
  getline(cin, txt);

  txt.erase(std::remove_if(txt.begin(), txt.end(), ::isspace),txt.end());
  cout<<stoi(txt)+1;


}

// g++-12 -o plusOneTax.o plusOneTax.cpp
//  ./plusOneTax.o