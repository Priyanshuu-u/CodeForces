
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    string s;
    vector<int>arr;
 
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            arr.push_back(s[i] - '0');
          
        }
    }
    sort(arr.begin(),arr.end());
    int len = arr.size()-1;
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i];
        if(len>0){cout<<'+';
        len--;
           }   
           }
    

 return 0;
}


//Even better approach 
// #include<iostream>
// using namespace std;

// int main() {
//     string s;
//     getline(cin, s);

//     // Counters for each number
//     int count1 = 0, count2 = 0, count3 = 0;

//     // Count occurrences of '1', '2', '3'
//     for (char ch : s) {
//         if (ch == '1') count1++;
//         else if (ch == '2') count2++;
//         else if (ch == '3') count3++;
//     }

//     // Construct the result
//     bool first = true;
//     while (count1--) {
//         if (!first) cout << "+";
//         cout << "1";
//         first = false;
//     }
//     while (count2--) {
//         if (!first) cout << "+";
//         cout << "2";
//         first = false;
//     }
//     while (count3--) {
//         if (!first) cout << "+";
//         cout << "3";
//         first = false;
//     }

//     return 0;
// }
