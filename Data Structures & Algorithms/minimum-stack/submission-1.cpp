class MinStack {
   public:
    MinStack() {}

    void push(int val) {
        m_data.push_back(val);
    }

    void pop() {
        m_data.pop_back();
    }

    int top() {
        return m_data.back();
    }

    int getMin() {
        auto it = std::min_element(m_data.begin(), m_data.end());
        
        return it == m_data.end() ? -1 : *it;
    }

   private:
   std::vector<int> m_data;
};
