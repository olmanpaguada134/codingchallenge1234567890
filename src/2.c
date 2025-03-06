int main() {
    int num = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num > 10) {
        printf("The number is greater than 10\n");
    } else if (num < 0) {
        printf("The number is negative\n");
    } else {
        printf("The number is between 0 and 10 inclusive\n");
    }
    return 0;
}
