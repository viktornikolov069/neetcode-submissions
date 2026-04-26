class Solution {
public:
    bool isValid(string s) {
        std::unordered_map<char, char> matching = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        std::stack<char> st;

        for (char c : s) {
            if (matching.find(c) == matching.end()) 
            {
                // It is an opening bracket
                st.push(c);
            } 
            else 
            {
                // It is a closing bracket, now check the stack
                if (st.empty() || st.top() != matching[c]) 
                    return false;
                st.pop();
            }
        }
        return st.empty();
    }
};

// "()", "[]", "({})"

// [[]{({})}]
// })({][

// [
