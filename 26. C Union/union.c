// Structure vs Union 
// union is a part of structure 


// lets first see how we declare structure 

// in structure we can use many member at a time and it will get stored in the memory 
// In a structure, each member has its own separate memory location.
// Memory is allocated for each member individually, and the total memory occupied by the structure is the sum of the memory required for each member.
    // Structures are typically used when you want to group related data together, and each member of the structure represents a different aspect of the data.
    // Each member has a distinct memory location, and the size of the structure is the sum of the sizes of its members.

struct pokemon {
    int hp;            // 4 bytes
    int speed;          // 4 bytes
    int attack;         // 4 bytes
    char tier;          // 1 bytes
    char name[15];      // 15 bytes

    // It will take total of 28 bytes of memory space 
};

// ========================================================================================================


// now lets see union 

    // In a union, all members share the same memory location.
    // Only one member of the union can be active at any given time.
    // Unions are useful when you want to store different types of data in the same memory location, and only one of them is relevant at any given time.
    // The size of a union is determined by the largest member in terms of memory.

union pokemon {
    int hp;            // 4 bytes
    int speed;          // 4 bytes
    int attack;         // 4 bytes
    char tier;          // 1 bytes
    char name[15];      // 15 bytes

    // It will take total of 15 bytes of memory space 
};