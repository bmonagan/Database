typedef struct Node {
    int key;
    int value;
    struct Node* next;
} Node;

typedef struct HashMap {
    int capacity;        
    Node** buckets;     
} HashMap;