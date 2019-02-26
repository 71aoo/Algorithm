#oython3
# arr 必须是有序的，有序的，有序的数组

def half_interval_search(arr,item): # item要查找的数字

    high = len(arr)  - 1
    low = 0

    while low <= high:

        mid = int((high + low) / 2) #保证 mid 为整数，python默认向下取整

        if item < arr[mid]:
            high = mid -1

        elif item > arr[mid]:
            low = mid + 1

        else :
            return arr[mid]

    return "Didn't_find"

if __name__ == '__main__':

    b = [1,2,3,4,5,6,7,8,9]  #测试数组，必须有序
    item = 0

    result = half_interval_search(b,item)

    print(result)