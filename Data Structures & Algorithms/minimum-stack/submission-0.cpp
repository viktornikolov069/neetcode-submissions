class MinStack {
public:
    MinStack() = default;

    void push(int val) {
        m_data.push_back(val);
        if (m_minData.empty() || val <= m_minData.back()) {
            m_minData.push_back(val);
        }
    }
    
    void pop() {
        if (m_data.back() == m_minData.back()) {
            m_minData.pop_back();
        }
        m_data.pop_back();
    }
    
    int top() {
        return m_data.back();
    }
    
    int getMin() {
        // if (m_data.empty()) {
        //     return -1;
        // }

        // int minElement = *(m_data.begin());
        // for (auto it = std::next(m_data.begin()); it != m_data.end(); ++it) {
        //     if (*it < minElement) {
        //         minElement = *it;
        //     }
        // }
        return m_minData.back();
    }
private:
    std::vector<int> m_data;
    std::vector<int> m_minData;
};
