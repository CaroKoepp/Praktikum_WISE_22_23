#ifndef BLATT10_SAFEARRAY_H
#define BLATT10_SAFEARRAY_H


class SafeArray {
public:
    bool setAt(int pos, int val);
    int getAt(int pos);
    int getMinimum();
    bool setAt(int val, int p1, int p2);
    SafeArray(int y);
private:
    int arr[100];
};


#endif //BLATT10_SAFEARRAY_H
