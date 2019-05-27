// Queue.h
// oberoi, sean
// ssoberoi

#ifndef QUEUE_H
#define QUEUE_H

#include "LinkedList.h"

template <typename T>
class Queue: protected LinkedList<T>
{
    public:

        T peekFront()
        {
            std::vector<T> list = this->toVector();
            T top = list[0];

            return top;
        }

        bool isEmpty()
        {
            return this->LinkedList<T>::isEmpty();
        }

        int getFrequencyOf(T data)
        {
            return this->LinkedList<T>::getFrequencyOf(data);
        }

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
            std::vector<T> list = this->toVector();
            T top = list[0];

            this->removeNode(top);
        }

        void enqueue(T data)
        {
            this->addNode(data);
        }
};

#endif
