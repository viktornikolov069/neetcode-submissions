class Solution {
   public:
    template <typename T>
    auto replaceElements(T& arr) {
        int size = arr.size() - 1;
        int max = arr[size];
        for (int i = size - 1; i >= 0; --i) {
            int temp = arr[i];
            arr[i] = max;
            if (temp > max) {
                max = temp;
            }
        }
        arr[size] = -1;
        return arr;
    }
};

// 2 4 5 3 1 2
// 5 5 3 2 2 2