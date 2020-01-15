#include <cstdlib>
#include <iostream> // for std::cout , etc.
#include <iomanip>  // additional formatting for cout
#include <cstdint>  // standard int types like uint64_t 
#include <stdio.h> // in case you want to use printf
#include "Tools.h" // Tools function declarations


using namespace std;
using namespace Tools;  

int main(int argc, char *argv[])
{
// Example test code for a single getBits test. 
   uint64_t x = 0x00000000000000f0;
   uint64_t r = getBits(4,7,x);
   printf("%.16lx\n",r);
}



