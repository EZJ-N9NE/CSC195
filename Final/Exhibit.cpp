#include "Exhibit.h"

void Exhibit::Read(std::ostream& prompt, std::istream& input) {
    prompt << "Enter title: ";
    input >> m_title;
    prompt << "Enter artist: ";
    input >> m_artist;
    prompt << "Enter year: ";
    input >> m_year;
}

void Exhibit::Write(std::ostream& output) const {
    output << m_title << "\n" << m_artist << "\n" << m_year << "\n";
}

void Exhibit::Read(std::ifstream& input) {
    input >> m_title >> m_artist >> m_year;
}

void Exhibit::Write(std::ofstream& output) const {
    output << m_title << "\n" << m_artist << "\n" << m_year << "\n";
}

std::ostream& operator<<(std::ostream& os, const Exhibit& ex) {
    ex.Write(os);
    return os;
}

std::istream& operator>>(std::istream& is, Exhibit& ex) {
    ex.Read(std::cout, is);
    return is;
}

std::ofstream& operator<<(std::ofstream& os, Exhibit& ex) {
    ex.Write(os);
    return os;
}

std::ifstream& operator>>(std::ifstream& is, Exhibit& ex) {
    ex.Read(is);
    return is;
}
