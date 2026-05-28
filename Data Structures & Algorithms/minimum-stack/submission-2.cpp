class MinStack {
   public:
    MinStack() {}

    void push(int val) {
        if (!m_min_stack.empty()) {
            if (m_min_stack.back() >= val) {
                m_min_stack.push_back(val);
            }
        } else {
            m_min_stack.push_back(val);
        }
        m_collection.push_back(val);
    }

    void pop() {
        if (!m_min_stack.empty() && !m_collection.empty()) {
            if (m_min_stack.back() == m_collection.back()) {
                m_min_stack.pop_back();
            }
        }
        m_collection.pop_back();
    }

    int top() {
        return m_collection.back();
    }

    int getMin() {
        return m_min_stack.back();
    }

   private:
    std::vector<int> m_min_stack;
    std::vector<int> m_collection;
};
// 2 1 3 1 1 1 5 4 0 2 -1 2
// 2 1 1 1 1 0 -1