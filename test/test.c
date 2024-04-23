int main() {
    int a = 5;
    int b = 7;
    int result;

    // Perform multiplication
    result = a * b;

    // Use the result in a way that prevents optimization
    if(result < 5) {
        return -1;
    } else {
        return 0;
    }
}
