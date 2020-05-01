// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
#include <cstdlib>
typedef long long ll;
class Solution {
public:
   
    int firstBadVersion(ll n) {
        int low = 1;
        int high = n;
        int mid = low + (high - low) / 2;
        while(low <= high){
            if(isBadVersion(mid)){
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
            mid = low + (high - low)/2;
        }
        return low;
    }
};