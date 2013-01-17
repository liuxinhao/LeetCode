///O(n^2)
class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> ans;
        if(numbers.size() <= 1) return ans;
        for(int i = 0; i < numbers.size(); i++)
        {
            for(int j = i + 1; j < numbers.size(); j++)
            {
                if(numbers[i] + numbers[j] == target)
                {
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                    return ans;
                }
            }
        }
    }
};

/// O(nlogn)
struct Node
 {
     int val;
     int index;
     Node(){}
     Node(int v, int idx):val(v), index(idx){}
 };
 
 bool compare(const Node &lhs, const Node &rhs)
 {
     return lhs.val < rhs.val;
 }
 
 class Solution {
 public:
     vector<int> twoSum(vector<int> &numbers, int target) {
         // Start typing your C/C++ solution below
         // DO NOT write int main() function
         vector<Node> a;
         for(int i = 0; i < numbers.size(); i++)
             a.push_back(Node(numbers[i], i + 1));
         sort(a.begin(), a.end(), compare);
         
         int i = 0;
         int j = numbers.size() - 1;
         while(i < j)
         {
             int sum = a[i].val + a[j].val;
             if (sum == target)
             {
                 vector<int> ret;
                 int minIndex = min(a[i].index, a[j].index);
                 int maxIndex = max(a[i].index, a[j].index);
                 ret.push_back(minIndex);
                 ret.push_back(maxIndex);
                 return ret;
             }
             else if (sum < target)
                 i++;
             else
                 j--;
         }
     }
 };
