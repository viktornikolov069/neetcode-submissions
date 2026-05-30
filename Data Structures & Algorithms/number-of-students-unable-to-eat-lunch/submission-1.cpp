class Solution {
   public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        std::queue<int> q_stud{students.begin(), students.end()};
        std::queue<int> q_san{sandwiches.begin(), sandwiches.end()};

        size_t r_count = 0;
        while (!q_stud.empty() && r_count < q_stud.size()) {
            if (q_stud.front() == q_san.front()) {
                q_stud.pop();
                q_san.pop();
                r_count = 0;
            } else {
                r_count++;
                q_stud.push(std::move(q_stud.front()));
                q_stud.pop();
            }
        }

        return q_stud.size();
    }
};

// 1 1 1 0 0 1 -> 1 1 0 0 1 -> 1 0 0 1 -> 0 0 1 1 -> 0 1 1 -> 1 1
// 1 0 0 0 1 1 -> 1 0 0 0 1 -> 1 0 0 0 -> 1 0 0 0 -> 1 0 0 -> 1 0

// 1 1 0 0 -> 1 0 0 1 -> 0 0 1 1 -> 0 1 1 -> 1 1 0 -> 1 0 -> 0 1 -> 1 ->
// 0 1 0 1 -> 0 1 0 1 -> 0 1 0 1 -> 1 0 1 -> 1 0 1 -> 0 1 -> 0 1 -> 1 ->
