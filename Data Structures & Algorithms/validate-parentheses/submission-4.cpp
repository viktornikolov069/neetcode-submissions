class Solution {
   public:
    bool isValid(string s) {
        std::unordered_map<char, char> braquets{{')', '('}, {']', '['}, {'}', '{'}};

        std::vector<char> st;

        for (char br : s) {
            if (braquets.find(br) == braquets.end()) {
                st.push_back(br);
            } else if (!st.empty() && braquets.at(br) == st.back()) {
                st.pop_back();
            } else {
                return false;
            }
        }

        return st.empty();
    }
};
