#include "Painting.h"

void Painting::Read(std::ostream& prompt, std::istream& input) {
    Exhibit::Read(prompt, input);
    prompt << "Enter medium: ";
    input >> m_medium;
    prompt << "Enter width: ";
    input >> m_width;
    prompt << "Enter height: ";
    input >> m_height;
}

void Painting::Write(std::ostream& output) const {
    Exhibit::Write(output);
    output << m_medium << "\n" << m_width << "\n" << m_height << "\n";
}

void Painting::Read(std::ifstream& input) {
    Exhibit::Read(input);
    input >> m_medium >> m_width >> m_height;
}

void Painting::Write(std::ofstream& output) const {
    Exhibit::Write(output);
    output << m_medium << "\n" << m_width << "\n" << m_height << "\n";
}

Exhibit::eType Painting::GetType() const {
    return Exhibit::eType::Painting;
}
