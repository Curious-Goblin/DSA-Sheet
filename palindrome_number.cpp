// class Solution {
// public:
//     bool isPalindrome(int x) {
//         int a=x;
//         if(a<0)
//         {
//             return false;
//         }
//             string s=to_string(a);
//             std::string::iterator f = s.begin();
//             std::string::iterator l = s.end() - 1;
//             while(f<=l)
//             {
//                 if(*f!=*l)
//                 {
//                     return false;
//                 }
//                 f++;
//                 l--;
//             }
//             return true;
//     }
// };

//time complexity=o(n)
//space complexity=o(n)