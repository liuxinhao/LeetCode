Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

Here are few examples.
[1,3,5,6], 5 → 2
[1,3,5,6], 2 → 1
[1,3,5,6], 7 → 4
[1,3,5,6], 0 → 0

class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int start = 0;
        int end = n;
       
        if(target > A[n-1])
        return n;
        if(target < A[0])
        return 0;
        while(start != end)
        {
            int mid = (start + end ) /2;
            if(A[mid] < target)
            {
                if(mid + 1 < n && A[mid+1] > target)
                {
                    return mid+1;
                }
                else
                {
                    start = mid + 1;

                }
            }
            else if (A[mid] > target)
            {
                 if(mid - 1 >= 0 && A[mid-1] < target)
                {
                    return mid;
                }
                else
                {
                    end = mid;

                }
                
               
            }
            else
            {
                return mid;
            }
            
        }
    
    }
};
