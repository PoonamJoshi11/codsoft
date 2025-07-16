#include <stdio.h>
#include <string.h>

// Simulated image feature extraction
const char* extractFeatures(const char* imageName) {
    if (strcmp(imageName, "dog.jpg") == 0) return "dog";
    else if (strcmp(imageName, "cat.jpg") == 0) return "cat";
    else if (strcmp(imageName, "car.jpg") == 0) return "car";
    else return "unknown";
}

// Simulated caption generation based on features
const char* generateCaption(const char* features) {
    if (strcmp(features, "dog") == 0) return "A cute dog is running in the park.";
    else if (strcmp(features, "cat") == 0) return "A sleepy cat is lying on the sofa.";
    else if (strcmp(features, "car") == 0) return "A red car is parked near the sidewalk.";
    else return "Sorry, I couldn't identify the image.";
}

int main() {
    char imageName[50];
    printf("Enter image file name (e.g., dog.jpg, cat.jpg, car.jpg): ");
    scanf("%s", imageName);

    const char* features = extractFeatures(imageName);
    const char* caption = generateCaption(features);

    printf("Caption: %s\n", caption);
    return 0;
}

