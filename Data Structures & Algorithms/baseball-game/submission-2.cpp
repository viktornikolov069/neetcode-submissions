class Solution {
   public:
    enum class Op : char { Plus = '+', Mult = 'D', Drop = 'C' };

    int calPoints(vector<string>& operations) {
        std::vector<int> scores;
        int res{0};

        for (const std::string& op : operations) {
            switch (op[0]) {
                case static_cast<char>(Op::Plus): {
                    const int new_score = scores[scores.size() - 1] + scores[scores.size() - 2];
                    scores.push_back(new_score);
                    res += new_score;
                    break;
                }
                case static_cast<char>(Op::Mult): {
                    const int new_score = scores.back() * 2;
                    scores.push_back(new_score);
                    res += new_score;
                    break;
                }
                case static_cast<char>(Op::Drop): {
                    res -= scores.back();
                    scores.pop_back();
                    break;
                }
                default: {
                    const int val = std::stoi(op);
                    scores.push_back(val);
                    res += val;
                }
            }
        }
        return res;
    }
};

// temp {1, 2, }
// res {}
