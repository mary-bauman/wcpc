
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string txt;
  getline(cin, txt);
  int t = 0;
  int a = 0;
  int x = 0;
  for (int i = 0; i < txt.length(); i++){
    if(txt[i]=='t'){
        t=t+1;
    }
    else if(txt[i]=='a'){
        a=a+1;
    }
    else if(txt[i]=='x'){
        x=x+1;
    }
  }

  cout << std::min(t, std::min(a,x));

}

// g++-12 -o maxTax.o maxTax.cpp
//  ./maxTax.o < in.txt