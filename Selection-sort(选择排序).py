#python3


def find_smallest(arr):

    smallest = arr[0]
    s_index = 0         #数组下标

    for i in range(0,len(arr)):
        if arr[i] < smallest:
            smallest = arr[i]
            s_index = i
        
    return s_index



def selection_sort(arr):

    new_arr = []
    
    for i in range(0,len(arr)):
        s_index = find_smallest(arr)
        new_arr.append(arr.pop(s_index))
    
    return new_arr


if __name__ == '__main__':

    b = [1,3,2,45,2,5,2,4,6] #测试数组

    list = selection_sort(b)

    print(list)