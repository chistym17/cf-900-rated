#include <vector>
#include <unordered_set>
#include <queue>

using namespace std;

class Solution {
public:
    vector<long long> unmarkedSumArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int m = queries.size();

        unordered_set<int> marked;

        vector<long long> answer(m);

        for (int i = 0; i < m; ++i) {
            int id = queries[i][0];
            int k = queries[i][1];

            
            marked.insert(id);

            priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> unmarked;

            
            for (int j = 0; j < n; ++j) {
                if (!marked.count(j)) {
                    unmarked.push({nums[j], j});
                }
            }

            while (k > 0 && !unmarked.empty()) {
                auto [value, idx] = unmarked.top();
                unmarked.pop();
                marked.insert(idx);
                k--;
            }

            
            long long sum = 0;
            for (int j = 0; j < n; ++j) {
                if (!marked.count(j)) {
                    sum += nums[j];
                }
            }
            answer[i] = sum;
        }

        return answer;
    }
};
