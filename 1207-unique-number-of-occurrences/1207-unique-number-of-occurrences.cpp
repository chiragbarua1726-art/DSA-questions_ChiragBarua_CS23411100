class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        unordered_set<int>s;

        for(auto x : arr)
        {
            m[x]++;
        }
        for(auto i : m)
        {
            s.insert(i.second);
        }

        return m.size() == s.size();
    }
};