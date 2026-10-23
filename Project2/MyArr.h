#pragma once
#include <iostream>
using namespace std;

template <class T1, class T2>
class Pair {
private:
    T1 a;
    T2 b;

public:
    Pair();
    Pair(T1 first, T2 second);
    void show();
    T1 getFirst();
    T2 getSecond();
    void copyFrom(const Pair<T1, T2>& other);
    void clear();
};

template <class T1, class T2>
Pair<T1, T2>::Pair() : a(T1()), b(T2()) {}

template <class T1, class T2>
Pair<T1, T2>::Pair(T1 first, T2 second) : a(first), b(second) {}

template <class T1, class T2>
void Pair<T1, T2>::show() {
    cout << a << "  " << b << endl;
}

template <class T1, class T2>
T1 Pair<T1, T2>::getFirst() {
    return a;
}

template <class T1, class T2>
T2 Pair<T1, T2>::getSecond() {
    return b;
}

template <class T1, class T2>
void Pair<T1, T2>::copyFrom(const Pair<T1, T2>& other) {
    a = other.a;
    b = other.b;
}

template <class T1, class T2>
void Pair<T1, T2>::clear() {
    a = T1();
    b = T2();
}


