int maxSubArray(int* nums, int numsSize){

    //贪心算法
    int max;
    for(int i=0; i<numsSize-1; i++){
        if(nums[i]>0){//如果前一个数字是大于零的，则对后一个数字有贡献，否则就不加给后一个数字
            nums[i+1] = nums[i+1] + nums[i];
        }
    }

    max = nums[0];
    for(int i=0; i<numsSize; i++){
        if(nums[i]>max)
            max = nums[i];
    }

    return max;

}
