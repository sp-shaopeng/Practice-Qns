// Another solution
// Sort the list
// Get first K
class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector <int> res;
        if(k == 0 || k > input.size()) {
            return res;
        }
        priority_queue<int> pq;
        for(auto v : input) {
            if(pq.size() < k) {
                pq.push(v);
            } else {
                if(pq.top() > v) {
                    pq.pop();
                    pq.push(v);
                }
            }
        }
        
        while(!pq.empty()){
            res.push_back(pq.top());
            pq.pop();
        }
        return res;
    }
};