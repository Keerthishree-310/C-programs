/*include <stdio.h>

// Function to calculate the length of a string
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to copy one string to another
void stringCopy(char destination[], char source[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';  // Null-terminate the destination string
}

// Function to compare two strings
int stringCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;  // Strings are not equal
        }
        i++;
    }
    // Check if both strings ended at the same time
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 1;  // Strings are equal
    }
    return 0;  // Strings are not equal
}

// Function to reverse a string
void stringReverse(char str[]) {
    int length = stringLength(str);
    int start = 0;
    int end = length - 1;
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Function to convert a string to lowercase
void stringToLower(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // Convert to lowercase
        }
        i++;
    }
}

// Function to convert a string to uppercase
void stringToUpper(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Convert to uppercase
        }
        i++;
    }
}

// Function to concatenate two strings
void stringConcatenate(char str1[], char str2[]) {
    int i = 0;
    int j = 0;

    // Find the end of the first string
    while (str1[i] != '\0') {
        i++;
    }

    // Append the second string to the first string
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';  // Null-terminate the concatenated string
}

int main() {
    char str1[100], str2[100], copyStr[100];
    int choice;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[stringLength(str1) - 1] = '\0';  // Remove newline character from fgets

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[stringLength(str2) - 1] = '\0';  // Remove newline character from fgets

    do {
        printf("\nChoose an operation:\n");
        printf("1. String Length\n");
        printf("2. String Copy\n");
        printf("3. String Compare\n");
        printf("4. String Reverse\n");
        printf("5. String to Lowercase\n");
        printf("6. String to Uppercase\n");
        printf("7. String Concatenation\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // To consume the leftover newline character after scanf

        switch (choice) {
            case 1:
                printf("Length of first string: %d\n", stringLength(str1));
                printf("Length of second string: %d\n", stringLength(str2));
                break;
            case 2:
                stringCopy(copyStr, str1);
                printf("Copy of first string: %s\n", copyStr);
                break;
            case 3:
                if (stringCompare(str1, str2)) {
                    printf("Strings are equal.\n");
                } else {
                    printf("Strings are not equal.\n");
                }
                break;
            case 4:
                stringReverse(str1);
                printf("Reversed first string: %s\n", str1);
                stringReverse(str1);  // Re-reverse to restore the original string
                break;
            case 5:
                stringToLower(str1);
                printf("First string in lowercase: %s\n", str1);
                break;
            case 6:
                stringToUpper(str1);
                printf("First string in uppercase: %s\n", str1);
                break;
            case 7:
                stringConcatenate(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;
            case 8:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 8);

    return 0;
}
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    printf("enter two strings\n");
    scanf("%s %s",a,b)
        char a+=b;
    printf("%s",c);
}
