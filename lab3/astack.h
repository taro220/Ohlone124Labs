struct STACK {

    int size;
    int *buf;
    int sp;

};

enum STATUS {FAILED,OK};

STATUS Create(STACK &stack, int size);
STATUS Push(STACK &stack, int item);
STATUS Pop(STACK &stack, int &item);
void Destroy(STACK &stack);

inline bool TrueIfEmpty(STACK &stack){
    return bool(stack.sp == 0);
}

inline bool TrueIfFull(STACK &stack){
    return bool(stack.sp == stack.size);
}

inline int NoElements(STACK &stack){
    return stack.sp;
}
