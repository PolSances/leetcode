# Optimal Solution for 1768. Merge Strings Alternately

This solutions is more efficient when using two pointers or even better one cause of the space complexity.


```c++
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        string result = "";

        for (int i = 0; i < max(m, n); i++) {
            if (i < m) {
                result.push_back(word1[i]);
            }
            if (i < n) {
                result.push_back(word2[i]);
            }
        }

        return result;
    }
};
```

The time complexity for this solution is $ O(M+N) $ and the space complexity is O(1).

 