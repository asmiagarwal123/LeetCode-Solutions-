int majorityElement(int* nums, int numsSize) {
    int count=0;
    int element;
    for( int i=0;i<numsSize;i++){
        if(count==0){
            count=1;
            element=nums[i];
        }
        else if(nums[i]==element){
            count++;
        }
        else{
            count--;
        }
    }

//to check if the element we have found is actually majority element 
int count_el=0;
for( int i =0;i<numsSize ;i++){
    if(nums[i]==element){
        count_el++;
    }
}

if(count_el > (numsSize/2)){
    return element;
}
return -1;

}

