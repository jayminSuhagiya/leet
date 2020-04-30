class Solution {
public:
    int hashfunc(string s){
        int a = 0;
	for(char c : s){
		a ^= c;
	}
	return a;
    }
        
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<int,vector<string>> a;
        vector<vector<string>> result;
        hash<string> h;
        int j=0;
        string s;
        for(int i=0; i < strs.size(); i++){
            //sortString(strs[i]);
            s = strs[i];
            sort(s.begin(), s.end()); 
            j = h(s);
            a[j].push_back(strs[i]);
        }
        for(auto i=a.begin(); i!=a.end(); i++){
            result.push_back(i->second);
        }
        
    return result;
    }
};