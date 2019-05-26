// Queue.h
// oberoi, sean
// ssoberoi

#ifndef QUEUE_H
#define QUEUE_H

#include "LinkedList.h"

template <typename T>
class Queue: public LinkedList<T>
{
    public:

        void display()
        {
            std::vector<T> list = this->toVector();

            cout << "\n--------\n";

            for (int i = 0; i < list.size(); i++)
            {
                cout << list[i] << endl;
            }

            cout << "Queue Size: " << list.size() << endl;
            cout << "--------" << endl;
        }

        void dequeue()
        {
            this->removeNode(this->getHead());
        }

        void enqueue(T data)
        {
            this->addNode(data);
        }
};

#endif
