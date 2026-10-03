class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        if (s.size()!= goal.size()){
            return false ;
        }
        string temp = s + s ;
           if (temp.find(goal)!=string::npos) {
            return true ;
           }
        return false ;
    }
};