class Solution {
   public:
    bool isValid(string s) {
        unordered_map<char, char> matching{{')', '('}, {']', '['}, {'}', '{'}};

        stack<char> st;

        for (char ch : s) {
            if (matching.find(ch) == matching.end()) {
                st.push(ch);
            } else if (!st.empty() && matching.at(ch) == st.top()) {
                st.pop();
            } else {
                return false;
            }
        }
        return st.empty();
    }
};