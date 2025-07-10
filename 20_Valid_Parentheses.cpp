#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> oberts;

        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                oberts.push(c);
            } else {
                if (oberts.empty()){
                    return false;
                }

                if ((c == ')' && oberts.top() != '(') ||
                    (c == ']' && oberts.top() != '[') ||
                    (c == '}' && oberts.top() != '{')) {
                    return false;
                }

                oberts.pop();
            }
        }

        return oberts.empty();
    }
};

