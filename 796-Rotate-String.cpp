class Solution {
public:
    bool rotateString(string s, string goal) {

        if (s.size() == goal.size() and (s+s).find(goal) != string::npos) {
            return true;
        } else
            return false;
    }
};