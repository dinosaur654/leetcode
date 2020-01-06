int removeDuplicates(int* nums, int numsSize){
    int index1=0;  //slow pointer
    int index2=0;  //fast pointer

    //if numsSize is less than 1, no need to remove duplicates 
    if(numsSize<=1){
        return numsSize;
    }

    //remove duplicates
    for(index2=1; index2<numsSize; index2++){
        if(nums[index1] != nums[index2]){
            index1++;
            nums[index1] = nums[index2];
        }
    }

    return index1+1;
}