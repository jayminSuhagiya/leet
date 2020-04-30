class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_set <int> hash;
        int key;
        //vector<int>::iterator it;
        int count = 0;
        for(int i=0;i<arr.size();i++){
            hash.insert(arr[i]);
        }
        for(int i=0;i<arr.size();i++)
        {
            key = arr[i] + 1;
            if(hash.find(key) != hash.end()){
                count++;
            }
        }
     return count;   
    }
};