#include "bandwiderstand.hpp"

BandWiderstand::BandWiderstand(const std::string name, const double anzahlRinge, const color farbe1, const color farbe2, const color farbe3, const color farbe4, const color farbe5) : m_name(name), m_anzahlRinge(anzahlRinge), m_farbe1(farbe1), m_farbe2(farbe2), m_farbe3(farbe3), m_farbe4(farbe4), m_farbe5(farbe5), m_farbe6(empty) {}
BandWiderstand::BandWiderstand(const std::string name, const double anzahlRinge, const color farbe1, const color farbe2, const color farbe3, const color farbe4, const color farbe5, const color farbe6) : m_name(name), m_anzahlRinge(anzahlRinge), m_farbe1(farbe1), m_farbe2(farbe2), m_farbe3(farbe3), m_farbe4(farbe4), m_farbe5(farbe5), m_farbe6(farbe6) {}

std::string farbe(color c)
{
    switch(c)
    {
        //case color::test: return "1";
        case color::black: return "schwarz ";
        case color::brown: return "braun ";
        case color::red: return "rot ";
        case color::orange: return "orange ";
        case color::yellow: return "gelb ";
        case color::green: return "grün ";
        case color::blue: return "blau ";
        case color::violet: return "lila ";
        case color::grey: return "grau ";
        case color::white: return "weiß ";
        case color::gold: return "gold ";
        case color::silver: return "silber ";
    } 
    return "Fehler";
} 

void BandWiderstand::ausgabe() const
{
    std::cout << "Name: " << m_name << "     Anzahl der Ringe: " << m_anzahlRinge << "      Bandfarben: ";
    std::cout << farbe(m_farbe1);
    std::cout << farbe(m_farbe2);
    std::cout << farbe(m_farbe3);
    std::cout << farbe(m_farbe4);
    std::cout << farbe(m_farbe5);
    //std::cout << farbe(m_farbe6) << std::endl;
}
