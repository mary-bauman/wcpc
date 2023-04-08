// #include <iostream>
// #include <vector>
// #include <string>

// int main() {
//     std::cout << "hello" << std::endl;    
//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// #define nl '\n'

// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);
//   string txt;
//   getline(cin, txt);
//   cout << txt << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);
//   string txt;
//   getline(cin, txt);
//   cout << txt << endl;
// }





///////////////



// char * removeSpacesFromStr(char *string)
// {
//     // non_space_count to keep the frequency of non space characters
//     int non_space_count = 0;
 
//     // Traverse a string and if it is non space character then, place it at index non_space_count
//     for (int i = 0; string[i] != '\0'; i++)
//         if (string[i] != ' ')
//         {
//             string[non_space_count] = string[i];
//             non_space_count++; // non_space_count incremented
//         }    
    
//     // Finally placing final character at the string end
//     string[non_space_count] = '\0';
//     return string;
// }

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);
//   string txt;
//   getline(cin, txt);



//   // assigning value to string s
//     std::string s = txt;
 
//     const int length = s.length();
 
//     // declaring character array (+1 for null terminator)
//     char* char_array = new char[length + 1];
 
//     // copying the contents of the
//     // string to char array
//     strcpy(char_array, s.c_str());
 


 
//   //cout << char_array << "\n";
//   cout << removeSpacesFromStr(char_array);

//   //remove(txt.begin(), txt.end(), ' ');
//   // int num = stoi(txt);
//   int num;
//   // std::istringstream ( txt ) >> num;
  

//   //cout << txt << endl;


// }

// // input = input().replace(" ", "")
// // print(1+int(input))


// // g++-12 -o plusOneTax.o plusOneTax.cpp
// //  ./plusOneTax.o






#include <bits/stdc++.h>
#include <cctype>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string txt;
  getline(cin, txt);
  char spc = txt[0];

  txt.erase(std::remove_if(txt.begin(), txt.end(), ::isspace),
        txt.end());

  int temp = stoi(txt);
  temp = temp+1;

  cout<<temp;


}

// input = input().replace(" ", "")
// print(1+int(input))


