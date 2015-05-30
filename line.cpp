#include "line.h"

line::line()
{
}

void line::start()
{
    for(int i=1;i<17;i++)
        l[i]=0;
    srand((unsigned)time(NULL));
    l[rand()%16]=2;

    l[rand()%16]=2;

    l[rand()%16]=4;

    for(int i=1;i<17;i++)
        cout<<l[i]<<endl;
}
