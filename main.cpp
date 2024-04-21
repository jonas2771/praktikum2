#include "bandwiderstand.hpp"
#include <vector>

/*
void printBandwiderstand(const std::vector<BandWiderstand>& bandwiderstand)
{
    for(const BandWiderstand& b : bandwiderstand)
    {
        b.ausgabe();
    } 
} */


int main()
{
    //BandWiderstand b1{"R1", brown, red, green, gold};
    //BandWiderstand b2{"R2", brown, black, black, red, brown};
    BandWiderstand b3{"R3", red, violet, yellow, black, red, black};

    //std::vector<BandWiderstand>b_all{};
    //b_all.push_back(b1);
    //b2.ausgabe();
    b3.ausgabe();
    //printBandwiderstand(b_all);
}