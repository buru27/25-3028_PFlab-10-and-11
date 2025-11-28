#include <stdio.h>
#include <string.h>

struct Movie {
    char title[50];
    char genre[20];
    char director[30];
    int year;
    float rating;
};

int main() {
    struct Movie m[100];
    int count = 0;
    int choice;
    char searchGenre[20];

    do {
        printf("\n1. Add Movie\n2. Search by Genre\n3. Display All\n4. Exit\n");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Title: "); scanf(" %[^\n]", m[count].title);
            printf("Genre: "); scanf(" %[^\n]", m[count].genre);
            printf("Director: "); scanf(" %[^\n]", m[count].director);
            printf("Year: "); scanf("%d", &m[count].year);
            printf("Rating: "); scanf("%f", &m[count].rating);
            count++;
        }

        else if (choice == 2) {
            printf("Enter Genre: "); 
            scanf(" %[^\n]", searchGenre);

            for (int i = 0; i < count; i++) {
                if (strcmp(m[i].genre, searchGenre) == 0) {
                    printf("%s (%d)\n", m[i].title, m[i].year);
                }
            }
        }

        else if (choice == 3) {
            for (int i = 0; i < count; i++) {
                printf("\nTitle: %s\nGenre: %s\nDirector: %s\nYear: %d\nRating: %.1f\n",
                       m[i].title, m[i].genre, m[i].director, m[i].year, m[i].rating);
            }
        }

    } while (choice != 4);

    return 0;
}

