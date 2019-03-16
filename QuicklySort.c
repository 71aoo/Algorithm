#include<stdio.h>

int main()
{



}

int quickly_sort(int *list,int left,int right)
{
    int i,j,tem;
    
    if(left == right)
        return 0;
    
    tem = list[left];
    i = left;
    j = right;
    
    while (left < right) 
    {
        
        while (list[left] < tem && left < right)
            left++;
        
        while (list[right] > tem && right > left)
            right--;

        swap(&list[left],&list[right]);



    }

    list[i] = list[left];
    list[left] = tem;

    quickly_sort(list,i,left-1);
    quickly_sort(list,right+1,j);


}

void swap(int *a,int *b)
{
    int tem;
    tem = *a;
    *a = *b;
    *b = tem;

}