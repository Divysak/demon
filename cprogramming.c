// basics of c programming..........................................................................................................................
/*#include <stdio.h>
int main()
{ printf("hellw shoolini!");
return 0;
// creating a simple profile program.................................................................................................................

#include <stdio.h>
int main()
{
    printf("Shoolini university");
    printf("Adress: solan, himchal pradesh");
    printf("Pin code: 173229");
    printf("Student name: Divyansh");
    printf("course: Btech Ai"); 
    printf("Student id: GF2025");
    printf("section: 1");
    return 0;
}*/
//other way to write the same program.........................................................................................................
/*
#include <stdio.h>
int main()
{
    printf("Shoolini university\nAdress: solan himchal pradesh\n Pin code: 173229\nStudent name: Divyansh\n course: Btech AI\n Student id: GF2025\nsection: 1");
    return 0;
}
*//*// other way to write the same program.........................................................................................................
#include <stdio.h>
int main()
{
    printf("Shoolini university\n"
           "Address: Solan Himachal Pradesh\n"
           "Pin code: 173229\n"
           "Student name: Divyansh\n"
           "Course: Btech AI\n"
           "Student id: GF2025\n"
           "Section: 1");
    return 0;
}*//*
// creating a simple calculator program to do sum of two no .........................................................................................................
#include <stdio.h>
int main(){
int x ;
int y;
printf("enter two integer :");
scanf("%d %d", &x, &y);
int z=x+y;
printf("the sum of two no: %d\n", z);
return 0;
}*/// creating a simple calculator program to do all arithmetic operations.........................................................................................................
/*
#include <stdio.h>
int main(){
    int num1 ,num2 ,sum,diff,product,questient,remainder;
    printf("enter first interger:");
    scanf("%d", &num1);

    printf("enter second integer:");
    scanf("%d", &num2);

sum=num1+num2;
diff=num1-num2;
product=num1*num2;
questient=num1/num2;
remainder=num1%num2;
printf("the sum of two no: %d\n", sum);
printf("the difference of two no: %d\n", diff);
printf("the product of two no: %d\n", product);
printf("the questient of two no: %d\n", questient);
printf("the remainder of two no: %d\n", remainder);
return 0;
}*//*
//print the sum of first n natural numbers.........................................................................................................
#include <stdio.h>
    int main()
    {
        int n;
        printf("Enter the value of n:");
        scanf("%d",&n);
        int sum=n*(n+1)/2;
        printf("The sum of first %d natural numbers is: %d",n,sum);
        return 0;
    }*/
    //print the sum of first n even natural number using loop .........................................................................................................
/*
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=1;
        i<=n;
        i++)
        {
        sum+=i;
    }
        printf("the sum of first %d natural numbers is: %d",n,sum);
        return 0;
}
*///print the sum of first n even natural number using loop .........................................................................................................
/*
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += 2 * i/2;
    }
    printf("Sum of first %d even natural numbers is %d\n", n, sum);
    return 0;
}*/    
/*print the sum of first n natural number using loop .........................................................................................................
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += 2 * i/;
    }
    printf("Sum of first %d even natural numbers is %d\n", n, sum);
    return 0;
}*/// wap to check weather the no is positive or negative if positve multiply by 2 if negative multiply by 5 .......................................
/*#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("The number is positive. Multiplying by 2 gives: %d\n", num * 2);
    } else if (num < 0) {
        printf("The number is negative. Multiplying by 5 gives: %d\n", num * 5);
    } else {
        printf("The number is zero.\n");
    }
    return 0;
}*//*
//wap to check weather the no is even or odd if even multiply by 2 if odd multiply by 5 ........................................................... 
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("The number is even. Multiplying by 2 gives: %d\n", num * 2);
    } else {
        printf("The number is odd. Multiplying by 5 gives: %d\n", num * 5);
    }
    return 0;
}*/
//wap to check weather the no is even or odd.....................................................................................................
/*#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }
    return 0;
}*/
// wap to check weather the no is even or odd using loop.....................................................................................................
/*#include <stdio.h>
 int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d is even.\n", i);
        } else {
            printf("%d is odd.\n", i);
        }
    }
    return 0;
}
// wap to check the alphabet is vowel or consonant.....................................................................................................
#include <stdio.h>
int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is a consonant.\n", ch);
    }
    return 0;
}*//*

//wap syntax of for loop......................................................................................................
#include <stdio.h>
int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
    return 0;
}
//wap syntax of while loop......................................................................................................
#include <stdio.h>
int main() {
    int i = 1;
    while (i <= 10) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
//wap syntax of do while loop......................................................................................................
#include <stdio.h>
int main() {
    int i = 1;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 10);
    return 0;
}
// wap to print pattern of right angle triangle......................................................................................................
#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
// wap to print pattern fo right angle triangle but as 1 12 123 1234......................................................................................................
#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
// wap to print pattern fo right angle triangle but as 1 22 333 4444......................................................................................................
#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
// wap to print first and last digit of a user inputed number......................................................................................................
#include <stdio.h>
int main() {
    int num, firstDigit, lastDigit;
    printf("Enter an integer: ");
    scanf("%d", &num);
    lastDigit = num % 10;
    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }
    printf(" the First digit is : %d\n", firstDigit);
    printf("the Last digit is : %d\n", lastDigit);
    return 0;
}/*nnnnnhli
// wap to print first and last digit of a user inputed number......................................................................................................
#include <stdio.h>
#include <math.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int n = num;
    int temp = num;
    int count = 0;
    int firstdigit;
    int lastdigit;
    lastdigit = temp % 10;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    firstdigit = (int)(temp / pow(10, count - 1));
    printf("the first digit is : %d\n", firstdigit);
    printf("the last digit is : %d\n", lastdigit);
    printf("the sum of first and last digit is : %d\n", firstdigit + lastdigit);
    return 0;
}
//wap to print the no is armstrong or not......................................................................................................
#include <stdio.h>
#include <math.h>
int main() {
    int num, originalNum, remainder, n = 0;
    float result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}
//wap to print the no is palindrome or not......................................................................................................
#include <stdio.h>
int main() {
    int num, originalNum, reversedNum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        reversedNum = reversedNum * 10 + remainder;
        originalNum /= 10;
    }
    if (reversedNum == num)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);
    return 0;
}
// wap to print all the armstrong no is between two intervals......................................................................................................
#include <stdio.h>
int main() {
    int low, high;
    printf("Enter two integers (intervals): ");
    scanf("%d %d", &low, &high);
    printf("Armstrong numbers between %d and %d are: ", low, high);
    for (int num = low + 1; num < high; ++num) {
        int originalNum, remainder, n = 0;
        float result = 0.0;
        originalNum = num;
        while (originalNum != 0) {
            originalNum /= 10;
            ++n;
        }
        originalNum = num;
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }
        if ((int)result == num) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}
// wap to check all the pelindrome no is between two intervals......................................................................................................
#include <stdio.h>
int main() {
    int low, high;
    printf("Enter two integers (intervals): ");
    scanf("%d %d", &low, &high);
    printf("Palindrome numbers between %d and %d are: ", low, high);
    for (int num = low + 1; num < high; ++num) {
        int originalNum, reversedNum = 0, remainder;
        originalNum = num;
        while (originalNum != 0) {
            remainder = originalNum % 10;
            reversedNum = reversedNum * 10 + remainder;
            originalNum /= 10;
        }
        if (reversedNum == num) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}*//*
//wap to check the range of all the no inputed by user......................................................................................................
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int numbers[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    int min = numbers[0];
    int max = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    printf("The range is: %d\n", max - min);
    return 0;
}*/
// wap to print count the no of digits entered by user......................................................................................................
/*
#include <stdio.h>
int main() {
    int num, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num == 0) {
        count = 1;
    } else {
        while (num != 0) {
            num /= 10;
            ++count;
        }
    }
    printf("The number of digits is: %d\n", count);
    return 0;
}*/
// wap to print reverse 123 tp 321......................................................................................................
/*#include <stdio.h>
int main() {
    int num, reversedNum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    printf("Reversed Number: %d\n", reversedNum);
    return 0;
}
*/
// wap to print pattern of right angle triangle......................................................................................................
/*
#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");   
    }
    return 0;
}
*/
// wap to print the no.1 is the first digit after swapping the value is the no.6 is the last digit the no 123456 has total digit the sum of the first and last digit is 
//the product of the first and last digit is

/*
#include <stdio.h>
#include<math.h>

int main()
{
    int n=123456;
    int n2=n;
    int temp=n;
    int count=0;
    int first;
    int last ,sum,product,p,count1,n1;
    n1=n;
   int n3=n;
    last=temp%10;
    while(n!=0)
    {
     
        n=n/10;
         count++;
        
}
count1=count;
first=n2/(pow(10,count-1));
printf ("the no.%d is the first digit",first);
printf("\n");
p=pow(10,count1-1);
temp=last;
temp=temp*p;
temp= temp+n3%p;
temp=temp-last;
temp=temp+first;
printf("after swapping the value is %d",temp);
printf("\n");
printf ("the no.%d is the last digit",last);
printf("\n");
printf("the no %d has total digit=%d",n1,count);
printf("\n");
sum= last+first;
product= last*first;
printf ("the sum of the first and last digit is %d",sum);
printf("\n");
printf ("the product of the first and last digit is %d",product);

    return 0;
}
*/
/*
#include <stdio.h>

int main() {
    int n, first, last, temp, pow = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;         
    last = n % 10;    


    while (n >= 10) {
        n = n / 10;
        pow = pow * 10;
    }
    first = n;      

    
    int swapped = (temp % pow) / 10;      
    swapped = last * pow + swapped * 10 + first;

    printf("Number after swapping first and last digits: %d\n", swapped);

    return 0;
}
    */


// wap to print the code usimg function......................................................................................................
/*
#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
    */
// write a program to swap to no using function (call by value)......................................................................................................
/*
#include <stdio.h>
void swap(int x, int y) {
printf("Before swapping inside function: x = %d, y = %d\n", x, y);
    int temp = x;   
    x = y;
    y = temp;
    printf("Inside swap function: x = %d, y = %d\n", x, y);
}

int main() {    
    int a = 5, b = 10;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("After swapping (in main): a = %d, b = %d\n", a, b);
    return 0;
}
*/
// write a program to swap to no using function (call by reference)......................................................................................................
/*#include <stdio.h>
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int a = 5, b = 10;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
   */ 
   /*
// wap to swap a no to be multiplied by each other using function (call by reference)......................................................................................................
#include <stdio.h>
void multiply(int *x, int *y) {
    int temp = *x;
    *x = (*x) * (*y);
    *y = temp * temp;
}   
int main() {
    int a = 5, b = 10;
    printf("Before multiplication: a = %d, b = %d\n", a, b);
    multiply(&a, &b);
    printf("After multiplication: a = %d, b = %d\n", a, b);
    return 0;
}*/
/*
// wap to swap a no to be multiplied by each other using function (call by value)......................................................................................................
#include <stdio.h>
void multiply(int x, int y) {
    printf("Inside multiply function before multiplication: x = %d, y = %d\n", x, y);
    x = x * y;
    y = x * x;
    printf("Inside multiply function after multiplication: x = %d, y = %d\n", x, y);
}
int main() {
    int a = 5, b = 10;
    printf("Before multiplication: a = %d, b = %d\n", a, b);
    multiply(a, b);
    printf("After multiplication (in main): a = %d, b = %d\n", a, b);
    return 0;
}
*/
// write a program to swap to no using function (call   by reference)...................................................................................................... 

#include <stdio.h>
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int a = 5, b = 10;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;}

//wap to print the palindrome no using function......................................................................................................
#include <stdio.h>
int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0, remainder;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        reversedNum = reversedNum * 10 + remainder;
        originalNum /= 10;
    }
    return (reversedNum == num);
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (isPalindrome(num))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);
    return 0;
}

// wap to print the palindrome no using void function......................................................................................................
#include <stdio.h>
void checkPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0, remainder;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        reversedNum = reversedNum * 10 + remainder;
        originalNum /= 10;
    }
    if (reversedNum == num)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);
}
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    checkPalindrome(num);
    return 0;
}
// wap to print the armstrong no using function......................................................................................................
#include <stdio.h>
#include <math.h>
void checkArmstrong(int num) {
    int originalNum = num, remainder, n = 0;
    float result = 0.0;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
}
// wap to print the armstrong no using void function......................................................................................................
#include <stdio.h>
void checkArmstrong(int num) {
    int originalNum = num, remainder, n = 0;
    float result = 0.0;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
}
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    checkArmstrong(num);
    return 0;
}
// wap to print the factorial of a no using  void function......................................................................................................
#include <stdio.h>
void factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    printf("Factorial of %d is %d\n", num, fact);
}
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    factorial(num);
    return 0;
}
// wap to print the palindrome using recursion......................................................................................................
#include <stdio.h>
int reverse(int num, int rev) {
    if (num == 0)
        return rev;
    rev = rev * 10 + num % 10;
    return reverse(num / 10, rev);
}
int isPalindrome(int num) {
    int rev = reverse(num, 0);
    return (rev == num);
}
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (isPalindrome(num))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);
    return 0;
}
// wap to print the armstrong using recursion without math function...................................................................................................... 
#include <stdio.h>
int power(int base, int exp) {
    if (exp == 0)
        return 1;
    return base * power(base, exp - 1);
}
int countDigits(int num) {
    if (num == 0)
        return 0;
    return 1 + countDigits(num / 10);
}
int isArmstrong(int num, int originalNum, int n) {
    if (originalNum == 0)
        return 0;
    int remainder = originalNum % 10;
    return power(remainder, n) + isArmstrong(num, originalNum / 10, n);
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int n = countDigits(num);
    if (isArmstrong(num, num, n) == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}
// wap to print the palindrome using recursion ......................................................................................................
#include <stdio.h>
int reverse(int num, int rev) {
    if (num == 0)
        return rev;
    rev = rev * 10 + num % 10;
    return reverse(num / 10, rev);
}
int isPalindrome(int num) {
    int rev = reverse(num, 0);
    return (rev == num);
}
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (isPalindrome(num))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);
    return 0;
}
// wap to print the palindrome using recursion void function......................................................................................................
#include <stdio.h>
void checkPalindrome(int num, int rev) {
    if (num == 0) {
        if (rev == 0)
            printf("The number is a palindrome.\n");
        else
            printf("The number is not a palindrome.\n");
        return;
    }
    rev = rev * 10 + num % 10;
    checkPalindrome(num / 10, rev);
}
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    checkPalindrome(num, 0);
    return 0;
}
// wap to print n number in reverse order using recursion...................................................................................................... 
#include <stdio.h>
void printReverse(int n) {

    if (n < 1)
        return;
    printf("%d\n", n);
    printReverse(n - 1);
}
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printReverse(n);
    return 0;
}
// wap to print n number in reverse order uing for loop......................................................................................................
#include <stdio.h>
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) {
        printf("%d\n", i);
    }
    return 0;
}
// wap to print a number in revers order using recurtion but easy and simple......................................................................................................
#include <stdio.h>
void reverse(int n) {
    if (n < 10) {
        printf("%d", n);
        return;
    }
    printf("%d", n % 10);
    reverse(n / 10);
}
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    reverse(n);
    printf("\n");
    return 0;
}
/*
//wap to print the factorial of a no using for loop ......................................................................................................
#include <stdio.h>
int main(){
    int n,fact=1;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("Factorial of %d is %d\n",n,fact);
    return 0;
}
*/

// wap to print the factorial of a no using recurtion......................................................................................................
#include <stdio.h>
void factorial(int num, int fact) {
    if (num == 0 || num == 1) {
        printf("Factorial is %d\n", fact);
        return;
    } else {
        return factorial(num - 1, fact * num);
    }
}
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    factorial(num, 1);
    return 0;
}
/*#include <stdio.h>
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


}*/
#include <stdio.h>

int main() {
    int year;

    // Prompt the user to enter a year
    printf("Enter a year: ");
    // Read the year entered by the user
    scanf("%d", &year);

    // Check for leap year conditions
    // A year is a leap year if it is divisible by 400
    // OR if it is divisible by 4 but not by 100
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
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
// wap to delete an element at a specifc position......................................................................................................
#include <stdio.h>
#define MAXSIZE 100
int main() {
    
    int size, i, position;
    
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    if (size <= 0 || size > MAXSIZE) {
        printf("Invalid size! Must be between 1 and %d\n", MAXSIZE);
        return 1;
    }
    int arr[MAXSIZE];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input!\n");
            return 1;
        }
    }       
    printf("Enter the position to delete the element (0 to %d): ", size - 1);
    scanf("%d", &position);
    if (position < 0 || position >= size) {
        printf("Invalid position!\n");
        return 1;
    }   
}

// wap to count the even and odd no in array......................................................................................................
#include <stdio.h>
int main() {
    int size, i, evenCount = 0, oddCount = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter the elements of the array:\n");
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

    printf("Number of even elements: %d\n", evenCount);
    printf("Number of odd elements: %d\n", oddCount);

    return 0;
}




#include <stdio.h>
#define MAXSIZE 100

int main() {
    int arr[MAXSIZE];
    int size, i, evenCount = 0, oddCount = 0;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    if (size < 0 || size > MAXSIZE) {
        printf("Invalid size! Must be between 0 and %d\n", MAXSIZE);
        return 1;
    }
    
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    printf("Number of even elements: %d\n", evenCount);
    printf("Number of odd elements: %d\n", oddCount);
    
    return 0;
}



// wap to insert an element at specifc position........................................................................................................4
#include <stdio.h>
#define MAXSIZE 100
int main() {
    
    int size, i, element, position;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    if (size < 0 || size >= MAXSIZE) {
        printf("Invalid size! Must be between 0 and %d\n", MAXSIZE - 1);
        return 1;
    }
    int arr[MAXSIZE]; // use fixed buffer
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size && scanf("%d", &arr[i]) == 1; ++i);
    if (i != size) {
        printf("Invalid input!\n");
        return 1;
    }
    printf("Enter the element to insert: ");
    if (scanf("%d", &element) != 1) {
        printf("Invalid input!\n");
        return 1;
    }
    printf("Enter the position to insert the element (0 to %d): ", size);
    scanf("%d", &position);
    
    if (position < 0 || position > size) {
        printf("Invalid position!\n");
        return 1;
    }
    
    // Shift elements to the right to make space for the new element
    for (i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    
    // Insert the new element
    arr[position] = element;
    size++; // Increase the size of the array
    
    printf("Array after insertion:\n");
    for (i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}
#include <stdio.h>
#define MAXSIZE 100

int main() {
    int arr[MAXSIZE];
    int size, i, evenCount = 0, oddCount = 0;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    if (size < 0 || size > MAXSIZE) {
        printf("Invalid size! Must be between 0 and %d\n", MAXSIZE);
        return 1;
    }
    
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    printf("Number of even elements: %d\n", evenCount);
    printf("Number of odd elements: %d\n", oddCount);
    
    return 0;
}
   
// wap to to mutiply 2 matrix and then add them......................................................................................................
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
    // multiplication

    for (i=0;i<rows;i++){
        for (j=0;j<cols;j++){
            product[i][j]=arr1[i][j]*arr2[i][j];
        }
    }
    // addition
    for (i=0;i<rows;i++){
        for (j=0;j<cols;j++){
            sum[i][j]=product[i][j]+arr2[i][j];
        }
        
    }
    printf("resultant matrix after multiplication and addition is:\n");
    for (i=0;i<rows;i++){
        for (j=0;j<cols;j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

    return 0;




}


// wap tp convert the string into uper case to lower case and vice versa......................................................................................................
//wap to convert number of vowel and consonent in string......................................................................................................
//wap to reverse the string & check if it is palindrome or not......................................................................................................

// wap to count teh size of string using inbuilt function using for loop ......................................................................................................
/*#include <stdio.h>
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
*/
#include <stdio.h>
int main(){
    char arr[20];
    int count=0;
    printf("enter a string:");
    fgets(arr,sizeof(arr),stdin);
    for (int i=0;arr[i]!='\0';i++);
        {count++;
        printf("the size of string is %d\n",count-1);
    }return 0;
    }

    
#include <stdio.h>
int main(){
    char arr[20];
    int count=0;
    printf("enter a string:");
    fgets(arr,sizeof(arr),stdin);
    for (int i=0;arr[i]!='\0';i++){ 
        count++;
    }
    printf("the size of string is %d\n",count-1);

        
    
    return 0;
  
    

}