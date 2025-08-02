#include <queue>

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        queue<char> q1;
        queue<char> q2;
        string paraula = "";

        for(char aux1: word1){
            q1.push(aux1);
        }

        for(char aux2: word2){
            q2.push(aux2);
        }

        while(!q1.empty() && !q2.empty()){
            paraula += q1.front();
            q1.pop();

            paraula += q2.front();
            q2.pop();
        }

        if(!q1.empty()){
            while(!q1.empty()){
                paraula += q1.front();
                q1.pop();
            }
        }

        if(!q2.empty()){
            while(!q2.empty()){
                paraula += q2.front();
                q2.pop();
            }
        }

        return paraula;
    }
};
