class Solution {
   public:
    int calcTime(vector<int>& piles, int k) {
        int time = 0;
        for (int pile : piles) {
            time += pile % k == 0 ? pile / k : (pile / k) + 1;
        }
        return time;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        auto max_it = std::max_element(piles.begin(), piles.end());
        int upper = *max_it;
        int lower = 1;
        int mid = lower + (upper - lower) / 2;
        while (lower < upper) {
            int mid = lower + (upper - lower) / 2;
            int time = calcTime(piles, mid);
            if (time <= h) {
                upper = mid;
            } else {
                lower = mid + 1;
            }
        }
        return lower;
    }
};

// 25 10 23 4, h = 4

// 0. D(k) -> returns hours it took to eat all bananas with eating rate k

// 1. Determine lower and upper bound of eating rate k
//  - The maximum eating rate we can have per pile
//    is the size of the largest pile
//  - The minimum eating rate would be 1 banana per hour
// 2. Create a loop
//  - condition D(k) <= h
// 3. Adjust k
// 4. Run D(k)
// 5. Return last k which satisfied loop condition
