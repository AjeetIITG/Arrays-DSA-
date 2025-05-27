// 7. Write a program in C to count the frequency of each element of an array.

//     Test Data :

//     Input the number of elements to be stored in the array : 3

//     Input 3 elements in the array :

//     element -
//     0 : 25

//     element -
//     1 : 12

//     element -
//     2 : 43

//     Expected Output :

//     The frequency of all elements of an array :

//     25 occurs 1 times

//     12 occurs 1 times

//     43 occurs 1 times

#include <stdio.h>

int main()
{
    int a, i, j, count = 1;
    printf("Input the number of elements to store in the array :");
    scanf("%d", &a);
    int arr[a];
    printf("Input %d number of elements in the array :\n", a);
    for (int i = 0; i < a; i++)
    {
        printf("element - %d :", i);
        scanf("%d", &arr[i]);
    }
    printf("The frequency of all elements of an array : \n");
    for(int i = 0; i < a; i++){
        if(arr[i] == arr[i+1]){
            count++;
        
            printf("%d occurs %d times\n", arr[i], count);
        }
    }
    return 0;
}
