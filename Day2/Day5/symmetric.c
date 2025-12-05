int countSymmetricIntegers(int low, int high) {
     int count=0;
      char s[20];  
    for(int num=low;num<=high;num++)
    {
        sprintf(s,"%d",num);
        int len=strlen(s);
        if(len%2==0)
        {   int sum1=0,sum2=0;
            int half=len/2;

               for(int j=0;j<half;j++)
                  sum1= sum1 + (s[j]-'0');

               for(int j=half;j<len;j++)
                  sum2= sum2 + (s[j]-'0');

            if(sum1==sum2)
               count++;

        }
    }
    return count;
 }