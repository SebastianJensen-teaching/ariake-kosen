// struct member reference:

typedef struct {
    float x;
    float y;
    int health;
    int attack;
    int defense;
} monster_t;

// reference members using '.'
monster_t pikachu = { 0 };
pikachu.x = 5;
pikachu.y = 10;

// reference members of pointers using '->'
monster_t* pointer_to_pikachu = &pikachu;
pointer_to_pikachu->health = 100;
pointer_to_pikachu->attack = 10;
pointer_to_pikachu->defense = 5;