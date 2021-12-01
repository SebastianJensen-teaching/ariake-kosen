#include <stdio.h>
#include <stdbool.h>

typedef struct {
    float x;
    float y;
    int health;
    int attack;
    int defense;
} monster_t;

bool compare_monsters (monster_t a, monster_t b) {
    if (a.x != b.x) return false;
    if (a.y != b.y) return false;
    if (a.health != b.health) return false;
    if (a.attack != b.attack) return false;
    if (a.defense != b.defense) return false;
    return true;
}

bool compare_monster_pointers (monster_t* a, monster_t* b) {
    if (a->x != b->x) return false;
    if (a->y != b->y) return false;
    if (a->health != b->health) return false;
    if (a->attack != b->attack) return false;
    if (a->defense != b->defense) return false;
    return true;
}

int main (void) {
    // initialize all fields to zero
    monster_t greninja = { 0 };

    // initialize x to 32, attack to 16 everything else to zero
    monster_t arceus = { .x = 32, .attack = 16 };

    printf("Arceus X: %f \n", arceus.x);        // 32
    printf("Arceus Y: %f \n", arceus.y);        // 0
    printf("Arceus H: %d \n", arceus.health);   // 0
    printf("Arceus A: %d \n", arceus.attack);   // 16
    printf("Arceus D: %d \n", arceus.defense);  // 0

    // initialize everything in order
    monster_t mew = { 32, 32, 100, 16, 12 };

    // reference members using '.'
    monster_t pikachu = { 0 };
    pikachu.x = 5;
    pikachu.y = 10;

    // reference members of pointers using '->'
    monster_t* pointer_to_pikachu = &pikachu;
    pointer_to_pikachu->health = 100;
    pointer_to_pikachu->attack = 10;
    pointer_to_pikachu->defense = 5;

    printf("Pikachu X: %f \n", pikachu.x );         // 5
    printf("Pikachu Y: %f \n", pikachu.y );         // 10
    printf("Pikachu H: %d \n", pikachu.health );    // 100
    printf("Pikachu A: %d \n", pikachu.attack );    // 10
    printf("Pikachu D: %d \n", pikachu.defense );   // 5

    monster_t raichu = pikachu;

    if (compare_monsters(raichu, pikachu)) {
        printf("raichu and pikachu are the same! \n");
    }

    if (compare_monster_pointers(&raichu, &pikachu)) {
        printf("and we can validate that using pointers as well \n");
    }

    // should not print!
    if (compare_monsters(pikachu, greninja)) {
        printf("if this gets printed, something is wrong! \n");
    }

    return 0;
}
