#include <unordered_set>

using namespace std;
class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<int> set;
        int specials = 0;

        for (auto& l : word) {
            const int letter = +l;            
            if (l >= 65 && l <= 90 && set.find(l) == set.end()) {
                set.insert(l);
                if (set.find(l + 32) != set.end()) {
                    ++specials; continue;
                } 
            } else if (l >= 97 && l <= 122 && set.find(l) == set.end()) {
                set.insert(l);
                if (set.find(l - 32) != set.end()) {
                    ++specials; continue;
                }
            }
        }
        return specials;
    }
};