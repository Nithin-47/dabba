int* canSeePersonsCount(int* heights, int heightsSize, int* returnSize){
int i,j,k,count=0;

int* array=(int*)malloc(sizeof(int)*heightsSize);

*returnSize=heightsSize;

for(i=0;i<sizeof(int)*heightsSize;i++)
{
    array[i]=0;
}

for(i=0;i<sizeof(int)*heightsSize;i++)
{
    for(j=i+1;i<j;j++)
    {
       if(heights[i]<heights[j])
        {
            for(k=i+1;k<j;k++)
            {
                
                if((heights[k]<heights[j])&&(heights[k]<heights[k+1]))
                     (array[i])++;   

            }

        }

    }

}

// for(i=0;i<heightsSize;i++)
// {

//     printf("%d",returnSize[i]);
// }


return(array);
}
