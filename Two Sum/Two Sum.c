#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    assert(nums);
    int i = 0;
    for(i=0 ; i<numsSize ; ++i)
    {
        int j = 0;
        for(j=i+1 ; j<numsSize ; ++j)
        {
            if(nums[i]+nums[j]==target)
            {
                int* arr = malloc(sizeof(int)*2) ;
                arr[0]=i;
                arr[1]=j;
                *returnSize=2;
                return arr;
            }
        }
    }
    return returnSize;
}
int main()
{
    int nums[]={1,2,7,11,15};
    int target = 9;
    int numsSize = sizeof(nums)/sizeof(nums[1]);
    int arr[10]={0};
    int* tep = twoSum(nums,numsSize,target,arr);
    printf("%d %d",tep[0],tep[1]);
    return 0;
}