#include <stdio.h>

int trap(int height[], int n) {
    if (n <= 2) {
        return 0; // Not enough walls to trap water.
    }

    int left = 0; // Pointer for the left wall.
    int right = n - 1; // Pointer for the right wall.
    int leftMax = 0; // Maximum height of walls to the left.
    int rightMax = 0; // Maximum height of walls to the right.
    int waterTrapped = 0;

    while (left < right) {
        if (height[left] < height[right]) {
            if (height[left] > leftMax) {
                leftMax = height[left];
            } else {
                waterTrapped += leftMax - height[left];
            }
            left++;
        } else {
            if (height[right] > rightMax) {
                rightMax = height[right];
            } else {
                waterTrapped += rightMax - height[right];
            }
            right--;
        }
    }

    return waterTrapped;
}

int main() {
    int height[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = sizeof(height) / sizeof(height[0]);
    int result = trap(height, n);

    printf("Trapped rainwater: %d units\n", result);

    return 0;
}
