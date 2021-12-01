// struct initialization:

typedef struct {
    float x;
    float y;
    int health;
    int attack;
    int defense;
} monster_t;


// initialize all fields to zero
monster_t greninja = { 0 };

// initialize x to 32, attack to 16 everything else to zero
monster_t arceus = { .x = 32, .attack = 16 };

// initialize everything in order
monster_t mew = { 32, 32, 100, 16, 12 };

