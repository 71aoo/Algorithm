#include<stdio.h>
// int one(int a[],int len);
// int two(int b[],int len);
int three(int a[],int len);

int main()
{
    int list[100000] ;
    int len_list;
    int result;
    int i;
    scanf("%d",&len_list);
    for(i = 0;i < len_list;i++)
    {
        scanf("%d",&list[i]);


    }
    // result = one(list,len_list);
    // result = two(list,len_list);
    result = three(list,len_list);
    printf("%d",result);
    return 0;

}

// int one(int a[],int len)    //O(N^3)
// {
//     int max_sum;
//     int cur_sum;
//     int i , j, k;
//     for(i = 0;i < len;i++)
//     {
//         for(j = i;j < len;j++)
//         {
//             cur_sum = 0;
//             for(k = i;k <= j;k++)
//             {
//                 cur_sum += a[k];
//             }

//             if(cur_sum > max_sum)
//             {
//                 max_sum = cur_sum;
//             }

//         }




//     }
//     return max_sum;


// }


// int two(int b[],int len)   // O(N^2)
// {
//     int max_sum;
//     int cur_sum;
//     int i , j;
//     for(i = 0;i < len;i++)
//     {
//         cur_sum = 0;
//         for(j = i;j < len;j++)
//         {
//             cur_sum += b[j];

//             if(cur_sum > max_sum)
//             {
//                 max_sum = cur_sum;
//             }


//         }

//     }

//     return max_sum;


// }

int three(int a[],int len)      //O(N)
{
    int cur_sum , max_sum;
    int i ;
    cur_sum = max_sum = 0;
    for(i = 0;i < len;i++)
    {
        cur_sum += a[i];

        if(cur_sum > max_sum)
        {
            max_sum = cur_sum;

        }
        else if(cur_sum < 0)
        {
            cur_sum = 0;
        }


    }

    return max_sum;

}