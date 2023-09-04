// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string::iterator f=s.begin();
//         string::iterator l=s.end()-1;
//         while(f<=l)
//         {
//             if(!isalnum(*f))
//             {
//                 f++;
//                 continue;
//             }
//             else if(!isalnum(*l))
//             {
//                 l--;
//                 continue;
//             }
//             else if(tolower(*f)!=tolower(*l))
//             {
//                 return false;
//             }
//             f++;
//             l--;
            
//         }
//         return true;
//     }
// };