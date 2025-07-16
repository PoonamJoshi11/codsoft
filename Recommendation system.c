#include <stdio.h>
#include <string.h>

#define MAX 5

struct Movie {
    char title[50];
    char genre[20];
};

int main() {
    struct Movie movies[MAX] = {
        {"Inception", "Sci-Fi"},
        {"Titanic", "Romance"},
        {"Avengers", "Action"},
        {"Interstellar", "Sci-Fi"},
        {"The Notebook", "Romance"}
    };

    char userPreference[20];
    printf("Enter your favorite genre (e.g. Sci-Fi, Romance, Action): ");
    scanf("%s", userPreference);

    printf("\nRecommended Movies in %s genre:\n", userPreference);
    int found = 0;
    for (int i = 0; i < MAX; i++) {
        if (strcmp(movies[i].genre, userPreference) == 0) {
            printf("- %s\n", movies[i].title);
            found = 1;
        }
    }

    if (!found) {
        printf("No movies found in your preferred genre.\n");
    }

    return 0;
}
