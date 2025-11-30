// 2d  array
/*#include <stdio.h>
int main(){
    int rows,cols,i,j;
    printf("enter the no of rows and columns");
    scanf("%d%d",&rows,&cols);
    int arr[rows][cols];
    printf("enter the elements of array");
    for (i=0;i<rows;i++){
        for (j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("array elements are:\n");
    for (i=0;i<rows;i++){
        for (j=0;j<cols;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// wap to multiply any sacalar with a matrix......................................................................................................
#include <stdio.h>
int main(){
    int rows,cols,i,j,scalar;
    printf("enter the no of rows and columns");
    scanf("%d%d",&rows,&cols);
    int arr[rows][cols];
    printf("enter the elements of array");
    for (i=0;i<rows;i++){
        for (j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter the scalar value to multiply with matrix");
    scanf("%d",&scalar);
    printf("resultant matrix after multiplication is:\n");
    for (i=0;i<rows;i++){
        for (j=0;j<cols;j++){
            printf("%d\t",arr[i][j]*scalar);
        }
        printf("\n");
    }
    return 0;
}*/
// wap to multiply and add two matrix  ......................................................................................................
#include <stdio.h>
int main(){
    int rows,cols,i,j;
    printf("enter the no of rows and columns");
    scanf("%d%d",&rows,&cols);
    int arr1[rows][cols], arr2[rows][cols], sum[rows][cols], product[rows][cols];
    printf("enter the elements of first matrix");
    for (i=0;i<rows;i++){
        for (j=0;j<cols;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("enter the elements of second matrix");
    for (i=0;i<rows;i++){
        for (j=0;j<cols;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    // addition
    for (i=0;i<rows;i++){
        for (j=0;j<cols;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    // multiplication
    for (i=0;i<rows;i++){
        for (j=0;j<cols;j++){
            product[i][j]=arr1[i][j]*arr2[i][j];
        }
    }
    printf("sum of two matrix is:\n");
    for (i=0;i<rows;i++){
        for (j=0;j<cols;j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    printf("product of two matrix is:\n");
    for (i=0;i<rows;i++){
        for (j=0;j<cols;j++){
            printf("%d\t",product[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*#include <stdio.h>
#define MAXSIZE 100

int main() {
    int arr[MAXSIZE];   // fixed maximum size of array
    int size, i, element, position;

    // Input size
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size < 0 || size > MAXSIZE) {
        printf("Invalid size! Must be between 0 and %d\n", MAXSIZE);
        return 1;
    }

    // Input array elements
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to insert and position
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position to insert (1 to %d): ", size + 1);
    scanf("%d", &position);

    // Validate position
    if (position < 1 || position > size + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right
    for (i = size; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new element
    arr[position - 1] = element;
    size++;  // increase array size

    // Display updated array
    printf("\nArray after insertion:\n");
    for (i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}

#include <stdio.h>
#define MAXSIZE 100
int main(){
    
    int size,i;
    
    printf("enter the size");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of array");
    for (i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array elements are:");
    for (i=0;i<size;i++){
        printf("%d\t",arr[i]);

    }
    return 0;
}
    */

// wap to count number of even and odd no in an aray......................................................................................................
#include <stdio.h>
#define MAXSIZE 100
int main() {
    int arr[MAXSIZE];
    int size, i, evenCount = 0, oddCount = 0;

    // Input size 
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size < 0 || size > MAXSIZE) {
        printf("Invalid size! Must be between 0 and %d\n", MAXSIZE);
        return 1;
    }


    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    
    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

    return 0;
}
// wap to print the min and max element in an array....................................................................................................

#include <stdio.h>

#define MAXSIZE 100
int main() {
    int arr[MAXSIZE];
    int size, i;
    int min, max;

    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0 || size > MAXSIZE) {
        printf("Invalid size! Must be between 1 and %d\n", MAXSIZE);
        return 1;
    }

    
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
    min = arr[0];
    max = arr[0];

    
    for (i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);

    return 0;
}


// wap tp search an element in an array .........................................................................................................

#include <stdio.h>

#define MAXSIZE 100

int main() {
    int arr[MAXSIZE];
    int size, i, element, found = 0;

    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0 || size > MAXSIZE) {
        printf("Invalid size! Must be between 1 and %d\n", MAXSIZE);
        return 1;
    }

    
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the element to search: ");
    scanf("%d", &element);

    
    for (i = 0; i < size; i++) {
        if (arr[i] == element) {
            found = 1;
            break;
        }
    }

    
    if (found) {
        printf("Element %d found in the array.\n", element);
    } else {
        printf("Element %d not found in the array.\n", element);
    }

    return 0;
}

/*#include <stdio.h>
int main(){
    char arr[20];
    printf("Enter a string: ");
    fgets(arr, sizeof(arr), stdin);
    puts(arr);
    return 0;

}

// wap to count teh size of string using inbuilt function using for loop ......................................................................................................
#include <stdio.h>
int main(){
    char arr[20];
    int count=0;
    printf("Enter a string: ");
    fgets(arr, sizeof(arr), stdin);
    for (int i=0;arr[i]!='\0';i++){
        count++;
    }
    printf("The size of string is: %d\n",count-1);
    return 0;
}
// wap to convert the string into uppercase and vice versa ......................................................................................................
#include <stdio.h>
int main(){
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A'); 
        }
    }
    printf("Converted string: %s", str);
    return 0;
}
   
//wap to count no of vowels and consonants in a string......................................................................................................
#include <stdio.h>
int main(){
    char str[100];
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;


}
*/
// wap to reverse a string and check if is palindrome or not......................................................................................................
#include <stdio.h>
int 
main(){
    char str[100], reversed[100];
    int i, j = 0, length = 0, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate length
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }
    length--; // Exclude null terminator

    // Reverse the string
    for (i = length - 1; i >= 0; i--) {
        reversed[j++] = str[i];
    }
    reversed[j] = '\0';

    // Check for palindrome
    for (i = 0; i < length; i++) {
        if (str[i] != reversed[i]) {
            isPalindrome = 0;
            break;
        }
    }

    printf("Reversed string: %s", reversed);
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
