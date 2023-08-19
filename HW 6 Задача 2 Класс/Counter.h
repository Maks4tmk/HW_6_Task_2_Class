#pragma once

class Counter {
private:
    int value = 1;

public:
    void set(int val);
    int get();
    void inc();
    void dec();
};
