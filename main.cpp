#include"ipheader.h"

int main()
{
    IPAddress ip1;
    IPAddress ip2(192,168,72,25);
    IPAddress ip3("192.168.72.25");

    ip1.display();
    ip2.display();
    ip3.display();

    return 0;
}