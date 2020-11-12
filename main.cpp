#include <iostream>
#include "http.hpp"
#include "server.hpp"
using namespace std;

int main()
{
    Server srv;
    srv.Start(8888); 
    return 0;
}
