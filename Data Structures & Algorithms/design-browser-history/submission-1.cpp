class BrowserHistory {
   public:
    BrowserHistory(string homepage) : m_back_st{homepage} {}

    void visit(std::string url) {
        m_back_st.push_back(url);
        if (!m_forward_st.empty()) {
            m_forward_st.clear();
        }
    }

    string back(int steps) {
        const int x_steps = steps < m_back_st.size() ? steps : m_back_st.size() - 1;

        for (int idx = 0; idx < x_steps; ++idx) {
            if (!m_back_st.empty()) {
                m_forward_st.push_back((m_back_st.back()));
                m_back_st.pop_back();
            }
        }
        return m_back_st.back();
    }

    string forward(int steps) {
        const int x_steps = steps < m_forward_st.size() ? steps : m_forward_st.size();

        for (int idx = 0; idx < x_steps; ++idx) {
            if (!m_forward_st.empty()) {
                m_back_st.push_back((m_forward_st.back()));
                m_forward_st.pop_back();
            }
        }
        return m_back_st.back();
    }

   private:
    std::vector<std::string> m_back_st;
    std::vector<std::string> m_forward_st;
};

// When visiting a new URL
// 1. push onto the back stack
// 2. clear the forward stack

// When going back
// 1. we move pages into the forward stack
// 2.

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */