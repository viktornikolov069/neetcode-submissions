class MinStack {
   public:
    MinStack() {}

    void push(int val) {
        m_data.push_back(val);

        if (m_min_data.empty() || m_min_data.back() >= val) {
            m_min_data.push_back(val);
        }
    }

    void pop() {
        if (!m_min_data.empty() && !m_data.empty()) {
            if (m_min_data.back() == m_data.back()) {
                m_min_data.pop_back();
            }
        }
        m_data.pop_back();
    }

    int top() { return m_data.back(); }

    int getMin() { return m_min_data.back(); }

   private:
    std::vector<int> m_min_data;
    std::vector<int> m_data;
};
// 2 1 3 1 1 1 5 4 0 2 -1 2
// 2 1 1 1 1 0 -1