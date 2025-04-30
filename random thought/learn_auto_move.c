#include <stdio.h>
#include <unistd.h> // For sleep function

// Define the object structure
typedef struct {
    int x;
    int y;
    int directionX;
    int directionY;
} Object;

// Function to update the position of the object
void updatePosition(Object *obj) {
    // Update the position based on the direction
    obj->x += obj->directionX;
    obj->y += obj->directionY;
}

// Function to render the object on the screen
void render(Object obj) {
    printf("\033[H\033[J"); // Clear the screen
    printf("Object position: (%d, %d)\n", obj.x, obj.y);
}

int main() {
    // Initialize the object
    Object obj = {0, 0, 1, 1}; // Initial position (0, 0) and direction (1, 1)

    // Game loop
    while (1) {
        // Update the position of the object
        updatePosition(&obj);

        // Render the object on the screen
        render(obj);

        // Add a delay (in seconds) to control the speed of movement
        sleep(1); // Adjust the sleep duration as needed
    }

    return 0;
}
