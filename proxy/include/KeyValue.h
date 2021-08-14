#ifndef KEYVALUE
#define KEYVALUE

class KeyValue {
public:
    virtual int getValue(int key) = 0;
    virtual void setValue(int key, int value) = 0;
};

#endif

