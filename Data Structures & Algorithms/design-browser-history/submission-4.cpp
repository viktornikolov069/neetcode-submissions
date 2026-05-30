class BrowserHistory {
private:
    vector<string> history;
    int cur;

public:
    BrowserHistory(string homepage) {
        history.push_back(homepage);
        cur = 0;
    }

    void visit(string url) {
        cur++;
        history.resize(cur);
        history.push_back(url);
    }

    string back(int steps) {
        cur = max(0, cur - steps);
        return history[cur];
    }

    string forward(int steps) {
        cur = min((int)history.size() - 1, cur + steps);
        return history[cur];
    }
};