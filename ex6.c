// we cannot directly compare two structures:

// syntax error!
if (monster1 == monster2) {
    // this is not possible!
}

// instead, we must make custom comparison functions:

bool compare_monsters (monster_t a, monster_t b) {
    if (a.x != b.x) return false;
    if (a.y != b.y) return false;
    if (a.health != b.health) return false;
    if (a.attack != b.attack) return false;
    if (a.defense != b.defense) return false;
    return true;
}

// if the struct is big, it might be more efficient to use pointers:

bool compare_monster_pointers (monster_t* a, monster_t* b) {
    if (a->x != b->x) return false;
    if (a->y != b->y) return false;
    if (a->health != b->health) return false;
    if (a->attack != b->attack) return false;
    if (a->defense != b->defense) return false;
    return true;
}