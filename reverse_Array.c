// //Reverse of Array 
// #include<stdio.h>
// int main()
// {
//     int a[100],i,temp,n;
//     printf("Enter Array size : ");
//     scanf("%d",&n);
//     printf("Enter %d elements : ",n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Array before reversing : ");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }
//     printf("\nArray after reversing  : ");
//     for(i=0;i<n/2;i++)
//     {
//         temp=a[i];
//         a[i]=a[n-i-1];
//         a[n-i-1]=temp;
//     }
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }
//     return 0;
// }


//method 2 using another array
//Reverse of Array 
#include<stdio.h>
int main()
{
    int a[100],i,b[100],n;
    printf("Enter Array size : ");
    scanf("%d",&n);
    printf("Enter %d elements : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array before reversing : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nArray after reversing  : ");
    for(i=0;i<n;i++)        
    {
        b[i]=a[n-i-1];
    }
    //We can also use this loop for reversing elements of array 'a' in array 'b'
    // int j=0;
    // for(i=n-1;i>=0;i--)
    // {
    //    b[j]=a[i];
    //     j++;                                  
    // }
    for(i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }
    return 0;
}