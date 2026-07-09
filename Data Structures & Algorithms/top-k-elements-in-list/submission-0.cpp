class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map <int, int> freq;
        for(int x : nums) {
            freq[x]++;
        }
        priority_queue<pair<int, int>> pq; // frequency, number
        for(auto x : freq){
            pq.push({x.second, x.first});
        }

        vector <int> answer;
        int size = pq.size();
        for(int i = 0; i < size; i++){
            int element = pq.top().second; pq.pop();
            cout << element << " ";
            if(i < k) answer.push_back(element); 
        }
        return answer;
    }
};
