using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string b = s;
        reverse(s.begin(), s.end());
        if(b == s){
            return true;
        }
        else{
            return false;
        }
    }
};
