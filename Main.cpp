// Main .cpp
// oberoi, sean
// ssoberoi

#include "Queue.h"
typedef float type;

int main()
{
    Queue<type>* QQ = new Queue<type>();

    if (QQ->isEmpty())
    {
        cout << "\n--------\nNew Queue\n";
    }

    QQ->enqueue(1.87);
    QQ->enqueue(2.52);
    QQ->enqueue(2.94);
    QQ->enqueue(3.17);
    QQ->enqueue(3.64);
    QQ->display();

    cout << "Removing 2.94 and 3.17 from the queue..";

    QQ->remove(2.94);
    QQ->remove(3.17);
    QQ->display();

    cout << "Lets add another 1.87..";
    QQ->enqueue(1.87);
    QQ->display();

    cout << "Wait.. how many times is 1.87 referenced in the queue?" << endl;
    cout << "Looks like 1.87 has " << QQ->getFrequencyOf(1.87) << " occurences in the queue!" << endl;

    return 0;
}