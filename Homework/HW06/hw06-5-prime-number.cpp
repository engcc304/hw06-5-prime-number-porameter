/*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดงจำนวนเฉพาะตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)
    
    Test case:
        Enter number :
            10
    Output:
        7 5 3 2

    Test case:
        Enter number :
            100
    Output:
        97 89 83 79 73 71 67 61 59 53 47 43 41 37 31 29 23 19 17 13 11 7 5 3 2
*/

#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main() {
    int endNum ;
    
    printf( "Enter number: ") ;
    scanf( "%d", &endNum) ;

    printf( "Output:\n") ;
   
    for (int currentNum = endNum; currentNum >= 2 ; currentNum--) { //Loop from endNum to 2 (inclusive), decreasing by 1 at each turn of the loop.
        if (is_prime(currentNum)) { //Call the is_prime function to check if currentNum is prime.
            printf( "%d ", currentNum) ;
        }//end if
    }//end for

    printf("\n") ;

    return 0 ;
}//end main fuction
