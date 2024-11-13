// Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

// Input
// Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

// Output
// If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

#include <iostream>
#include <string>
#include <algorithm> // For transform
using namespace std;

int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);

    // Convert both strings to lowercase
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    // Perform lexicographical comparison
    if (a < b)
    {
        cout << -1 << endl;
    }
    else if (a > b)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}

// My approach which is not correct because :- 
//Notes for Lexicographical String Comparison
// Mistake: ASCII Summation

// Summing ASCII values of characters (valuea and valueb) does not work for lexicographical comparison.
// Example: "abc" and "acb" have the same sum but are different lexicographically.
// Correct Comparison in C++

// Use <, >, or == directly on strings for lexicographical comparison.
// Example: "apple" < "banana" evaluates to true.
// Converting to Lowercase: Use tolower and transform

// Instead of manual ASCII adjustments, use transform with tolower to convert strings to lowercase in one line.
// Example:
// transform(a.begin(), a.end(), a.begin(), ::tolower);





//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      string a, b;
//      getline(cin, a);
//      getline(cin, b);
//      int valuea = 0;
//      int valueb = 0;
//      int length = 0;
//      for (int i = 0; i < a.length(); i++)
//      {
//          if (a[i] >= 'A' && a[i] <= 'Z')
//          {
//              a[i] += 32;
//          }
//      }
//      for (int i = 0; i < b.length(); i++)
//      {
//          if (b[i] >= 'A' && b[i] <= 'Z')
//          {
//              b[i] += 32;
//          }
//      }
//      for (int i = 0; i < a.length(); i++)
//      {
//          if (a[i] != b[i])
//          {
//              break;
//          }
//          else
//          {
//              length++;
//          }
//      }

//     for (int i = 0; i < a.length(); i++)
//     {
//         valuea += (int)a[i];
//     }
//     for (int i = 0; i < b.length(); i++)
//     {
//         valueb += (int)b[i];
//     }
//     if (length == a.length())
//     {
//         cout << 0 << endl;
//     }
//     if (valuea > valueb)
//     {
//         cout << 1 << endl;
//     }
//     else if (valuea < valueb)
//     {
//         cout << -1 << endl;
//     }
//     else{

//     }
//     return 0;
// }