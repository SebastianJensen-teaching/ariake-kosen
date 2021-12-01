// using structs, we can create a template for our own type
// struct を使って、テンプレートを作ることができます。

typedef struct {
    float x;
    float y;
    int health;
    int attack;
    int defense;
} monster_t;

// we can use that template to create many similair things
// そのテンプレートを使って、似たようなものをたくさん作ることができます。

monster_t greninja;
monster_t arceus;
monster_t mew;

// of course, we commonly use an array ...

monster_t monsters[256];

// the above array can store 256 monsters, each with a different
// position, health, attack and defense