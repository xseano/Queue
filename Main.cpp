// Main .cpp
// oberoi, sean
// ssoberoi

#include "Queue.h"
typedef float type;

int main()
{
    Queue<type>* QQ = new Queue<type>();

    QQ->enqueue(1.87);
    QQ->enqueue(2.52);
    QQ->enqueue(2.94);
    QQ->enqueue(3.17);
    QQ->enqueue(3.64);

    QQ->display();

    QQ->remove(2.94);
    QQ->remove(3.17);

    QQ->display();

    return 0;
}