class Solution {
public:
    char findKthBit(int n, int k) {
        int invertCount = 0;
        
        while (n > 1) {
            int mid = 1 << (n - 1);
            
            if (k == mid) {
                return (invertCount % 2 == 0) ? '1' : '0';
            }
            
            if (k > mid) {
                k = (1 << n) - k;
                invertCount++;
            }
            n--;
        }
        
        return (invertCount % 2 == 0) ? '0' : '1';
    }
};