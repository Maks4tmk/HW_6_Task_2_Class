#include "Counter.h"

void Counter :: set(int val) { value = val; };
int Counter :: get() { return value; };
void Counter :: inc() { value++; };
void Counter :: dec() { value--; };