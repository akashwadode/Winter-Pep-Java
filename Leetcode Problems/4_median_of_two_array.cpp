// 4. Median of Two Sorted Arrays

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size();
        int len2 = nums2.size();
        vector<int>mergeArr(len1+len2);
        int i=0,j=0,k=0;
        while(i<len1 && j<len2){
            if(nums1[i] > nums2[j]){
                mergeArr[k++] = nums2[j++];
            }else{
                mergeArr[k++] = nums1[i++];
            }
        }
        while(i<len1){
            mergeArr[k++] = nums1[i++];
        }
        while(j<len2){
            mergeArr[k++] = nums2[j++];
        }
        int len = mergeArr.size();
        if(len%2==0){
            double sum = (mergeArr[len/2-1] + mergeArr[len/2]) / 2.0  ;
            cout << sum << endl;
            return sum;
        }
        return mergeArr[len/2];

    }

};