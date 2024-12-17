#include <stdio.h>
#include <string.h>
#include <math.h>

// Function to convert a binary string to a decimal number
long long binaryToDecimal(const char* binary) {
    long long decimal = 0;
    int length = strlen(binary);

    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - 1 - i);
        }
    }

    return decimal;
}

// Function to convert a decimal number to a hexadecimal string
void decimalToHexadecimal(long long decimal, char* hexadecimal) {
    int index = 0;

    if (decimal == 0) {
        hexadecimal[index++] = '0'; // Handle the case for 0
    } else {
        while (decimal > 0) {
            int remainder = decimal % 16;

            if (remainder < 10) {
                hexadecimal[index++] = '0' + remainder; // Digits 0-9
            } else {
                hexadecimal[index++] = 'A' + (remainder - 10); // Letters A-F
            }

            decimal /= 16;
        }
    }

    hexadecimal[index] = '\0';

    // Reverse the string to get the correct hexadecimal number
    for (int i = 0; i < index / 2; i++) {
        char temp = hexadecimal[i];
        hexadecimal[i] = hexadecimal[index - 1 - i];
        hexadecimal[index - 1 - i] = temp;
    }
}

int main() {
    char binary[65];       // Input binary number (up to 64 bits)
    char hexadecimal[17];  // Output hexadecimal number (16 digits max for 64 bits)

    printf("Enter a binary number: ");
    scanf("%64s", binary);

    // Convert binary to decimal
    long long decimal = binaryToDecimal(binary);

    // Convert decimal to hexadecimal
    decimalToHexadecimal(decimal, hexadecimal);

    printf("Hexadecimal: %s\n", hexadecimal);

    return 0;
}
