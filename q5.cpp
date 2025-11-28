#include <stdio.h>
#include <string.h>

struct Player {
    char name[30];
    int age;
    char position[20];
};

struct Team {
    char name[30];
    char sport[20];
    struct Player players[20];
    int count;
};

void addPlayer(struct Team *t) {
    printf("Player name: "); scanf(" %[^\n]", t->players[t->count].name);
    printf("Age: "); scanf("%d", &t->players[t->count].age);
    printf("Position: "); scanf(" %[^\n]", t->players[t->count].position);
    t->count++;
}

void search(struct Team t, char pos[]) {
    for(int i = 0; i < t.count; i++)
        if(strcmp(t.players[i].position, pos) == 0)
            printf("%s\n", t.players[i].name);
}

void display(struct Team t) {
    printf("\nTeam: %s (%s)\n", t.name, t.sport);
    for (int i = 0; i < t.count; i++) {
        printf("%s - %s (%d)\n", t.players[i].name, t.players[i].position, t.players[i].age);
    }
}

int main() {
    struct Team t = {"Tigers", "Football", 0};
    addPlayer(&t);
    addPlayer(&t);
    display(t);
    search(t, "Forward");
    return 0;
}

