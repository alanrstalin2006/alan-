#include <stdio.h> 
int main() { 
    char s1[100], s2[100], s3[200]; 
    int i, j, len1 = 0, len2 = 0; 
 
    /* Input */ 
    printf("Enter first string: "); 
    scanf("%s", s1); 
 
    printf("Enter second string: "); 
    scanf("%s", s2); 
 
    /* Find length of s1 */ 
    i = 0; 
    while(s1[i] != '\0') { 
        len1++; 
        i++; 
    } 
 
    /* Find length of s2 */ 
    i = 0; 
    while(s2[i] != '\0') { 
        len2++; 
        i++; 
    } 
 
    printf("Length of first string = %d", len1); 
    printf(" Length of second string = %d", len2); 
 
    /* Copy s1 into s3 */ 
    i = 0; 
    while(s1[i] != '\0') { 
        s3[i] = s1[i]; 
        i++; 
    } 
    s3[i] = '\0'; 
 
    printf("Copied string = %s", s3); 
 
    /* Concatenate s2 to s1 */ 
    i = len1; 
    j = 0; 
    while(s2[j] != '\0') { 
        s1[i] = s2[j]; 
        i++; 
        j++; 
    } 
    s1[i] = '\0'; 
 
    printf(" Concatenated string = %s", s1); 
 
    /* Compare s1 and s2 */ 
    i = 0; 
    while(s1[i] != '\0' || s2[i] != '\0') { 
        if(s1[i] != s2[i]) { 
            printf("Strings are not equal"); 
            return 0; 
        } 
        i++; 
    } 
 
    printf("Strings are equal"); 
 
    return 0; 
} 