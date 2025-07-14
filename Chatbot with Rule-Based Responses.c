#include <stdio.h>
#include <string.h>

int main() {
    char input[100];

    printf("Chatbot: Hello! How can I help you today?\n");

    while (1) {
        printf("You: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';

        if (strcmp(input, "bye") == 0 || strcmp(input, "exit") == 0) {
            printf("Chatbot: Goodbye! Have a great day!\n");
            break;
        }
        else if (strcmp(input, "hi") == 0 || strcmp(input, "hello") == 0) {
            printf("Chatbot: Hello! Nice to meet you.\n");
        }
        else if (strstr(input, "how are you") != NULL) {
            printf("Chatbot: I'm just a bot, but I'm doing great! How about you?\n");
        }
        else if (strstr(input, "your name") != NULL) {
            printf("Chatbot: I'm ChatBot3000. What's yours?\n");
        }
        else if (strstr(input, "help") != NULL || strstr(input, "support") != NULL) {
            printf("Chatbot: Sure, I'm here to help! Tell me your problem.\n");
        }
        else {
            printf("Chatbot: Sorry, I didn't understand that.\n");
        }
    }

    return 0;
}
