#include "Sculpture.h"

void Sculpture::Read(std::ostream& prompt, std::istream& input) {
    Exhibit::Read(prompt, input);
    prompt << "Enter material: ";
    input >> m_material;
    prompt << "Enter weight: ";
    input >> m_weight;
}

void Sculpture::Write(std::ostream& output) const {
    Exhibit::Write(output);
    output << m_material << "\n" << m_weight << "\n";
}

void Sculpture::Read(std::ifstream& input) {
    Exhibit::Read(input);
    input >> m_material >> m_weight;
}

void Sculpture::Write(std::ofstream& output) const {
    Exhibit::Write(output);
    output << m_material << "\n" << m_weight << "\n";
}

Exhibit::eType Sculpture::GetType() const {
    return Exhibit::eType::Sculpture;
}
