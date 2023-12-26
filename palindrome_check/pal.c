#include<stdio.h>
#include<string.h>

int isPal(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right])
            return 0;
        left++;
        right--;
    }
    return 1;
}

int main() {
    char str[] = "level";
    if (isPal(str))
        printf("%s is a palindrome\n", str);
    else
        printf("%s is not a palindrome\n", str);
    return 0;
}
