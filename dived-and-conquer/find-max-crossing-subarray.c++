#include <stdio.h>
// Finding the max sub array
// to find this  solution we can use the brute force using somenthing similar to the
// The naives algortihm , but this will throug up an algorithm of O(n^2) solution
// neverless if we use the tecnic of Dived and conquer we can get a O(nlog n )  algorithm
// Question to understand , Why does it start from the middle?
using namespace std;
void find_max_cross_sub_array(){
    // we init the array
    // int array[] = {13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7};
    int array[] ={2,3,-2,4};
    // we are supposed to use minus inf , but we dont hace this function in c++ so we are going to use 
    // a really small number


    int left_sum = -10000;
    int sum = 0;
    int size_of_array = sizeof(array)/sizeof(array[0]);
    int half  = size_of_array/2;
    int maxL;
    // For the first part we are going to use the half of the array in order to find the max left sum
    //  and find the start from the max sub array
    for(int i = half ; i>=0;i--){
        // we are saying that the sum is going to be 
        // The actual sum plus the value of the array
        sum = sum+ array[i];
        // If the sum si grater , we assigned the value of the sum to the maxL and left sum
        if(sum > left_sum){
            left_sum = sum;
            maxL = i;
        }
    }
//  Know we do the same but with the other size
    int right_sum  = -10000;
    sum = 0;
    int maxR = 0 ;
    for(int j = half+1  ; j <=size_of_array-1;j++ ){
        sum = sum + array[j];
        if(sum > right_sum){
            right_sum = sum;
            maxR = j;
        }

    }
    printf("%d \n",(left_sum+right_sum));
    printf("%d \t %d",maxL,maxR);
}
int main (){
    find_max_cross_sub_array();
    return 0 ;
}