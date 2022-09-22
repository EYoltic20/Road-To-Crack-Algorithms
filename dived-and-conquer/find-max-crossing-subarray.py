from cmath import inf
from turtle import right

def main():
    array = [13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7]
    
    sum = 0
    maxl = 0
    left_sum = -inf
    array_size = len(array)
    mid = array_size//2
    for i in range(mid , 0,-1):
        sum =sum + array[i]
        if(sum > left_sum ):
            left_sum = sum
            maxl = i
    sum = 0 
    maxR = 0 
    sum_right = -inf
    for i in range(mid+1 , array_size-1):
        sum =sum +array[i]
        if(sum > sum_right):
            sum_right = sum
            maxR = i
    return (maxl,maxR,(sum_right+left_sum))
        
        

if __name__ == '__main__':
    print(main())