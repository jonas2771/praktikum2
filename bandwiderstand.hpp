#include <iostream>
#include <string.h>

enum color
{
    black = 1,
    brown = 2,
    red = 3,
    orange = 4,
    yellow = 5,
    green = 6,
    blue = 7,
    violet = 8,
    grey = 9,
    white = 10,
    gold = 11,
    silver = 12
};

class BandWiderstand
{
public:
    BandWiderstand(const std::string name, const double anzahlRinge, const color m_farbe1, const color m_farbe2, const color m_farbe3, const color m_farbe4, const color m_farbe5);
    BandWiderstand(const std::string name, const double anzahlRinge, const color m_farbe1, const color m_farbe2, const color m_farbe3, const color m_farbe4, const color m_farbe5, const color m_farbe6);
    void ausgabe() const;

private:
    const std::string m_name;
    const double m_anzahlRinge;
    const color m_farbe1;
    const color m_farbe2;
    const color m_farbe3;
    const color m_farbe4;
    const color m_farbe5;
    const color m_farbe6;
};
