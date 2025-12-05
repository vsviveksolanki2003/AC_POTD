int findGCD(int* nums, int numsSize) {
    int i,j,temp,min,max,gcd;
    for(i=0;i<numsSize;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[i]>nums[j])
            {
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
    }
    min=nums[0];
    max=nums[numsSize-1];
     
    for(gcd=min<max?min:max;gcd>=1;gcd--)
    {
        if(min%gcd==0 && max%gcd==0)
             return gcd;
    }

 return 1;
}