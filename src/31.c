// Solution to codingchallenge1234567890

// Function to check if a number is even or odd
int is_even(int num) {
    return (num % 2 == 0);
}

// Main function for the code challenge
int main() {
    int num = 10;
    if (is_even(num)) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }
    return 0;
}
