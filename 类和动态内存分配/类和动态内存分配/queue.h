#ifndef QUEUE_H_
#define QUEUE_H_

class Customer
{
private:
    long arrive;
    int processtime;

public:
    Customer()
    {
        arrive = processtime = 0;
    }

public:
    void set(long when);
    long when() const
    {
        return arrive;
    }

    int ptime() const
    {
        return processtime;
    }
};

typedef Customer Item;

class Queue
{
private:
    struct Node
    {
        Item item;
        struct Node * next;
    };

    enum
    {
        Q_SIZE = 0
    };

    Node * front;
    Node * rear;
    int items;
    const int qsize;

private:
    Queue(const Queue & q) : qsize(0) {}
    Queue & operator=(const Queue & q)
    {
        return *this;
    }

public:
    Queue(int qs = Q_SIZE);
    ~Queue();

public:
    bool isEmpty() const;
    bool isFull() const;
    int queueCount() const;
    bool EnQueue(const Item & item);
    bool DeQueue(Item & item);
};

#endif