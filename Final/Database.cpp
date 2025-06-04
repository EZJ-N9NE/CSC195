#include "Database.h"
#include "Exhibit.h"
#include "Painting.h"
#include "Sculpture.h"

void Database::Add(Exhibit::eType type) {
    Exhibit* exhibit = Create(type);
    if (exhibit) {
        std::cin >> *exhibit;
        m_exhibits.push_back(std::unique_ptr<Exhibit>(exhibit));
    }
}

void Database::DisplayAll() const {
    for (const auto& exhibit : m_exhibits) {
        std::cout << *exhibit << "\n";
    }
}

void Database::Load(const std::string& filename) {
    std::ifstream input(filename);
    if (input.is_open()) {
        m_exhibits.clear();
        while (!input.eof()) {
            int type;
            input >> type;
            if (input.fail()) break;

            Exhibit* exhibit = Create(static_cast<Exhibit::eType>(type));
            if (exhibit) {
                input >> *exhibit;
                m_exhibits.push_back(std::unique_ptr<Exhibit>(exhibit));
            }
        }
    }
    else {
        std::cerr << "Failed to open file: " << filename << "\n";
    }
}

void Database::Save(const std::string& filename) {
    std::ofstream output(filename);
    if (output.is_open()) {
        for (const auto& exhibit : m_exhibits) {
            output << static_cast<int>(exhibit->GetType()) << "\n";
            output << *exhibit;
        }
    }
    else {
        std::cerr << "Failed to save to file: " << filename << "\n";
    }
}

Exhibit* Database::Create(Exhibit::eType type) {
    switch (type) {
    case Exhibit::eType::Painting:
        return new Painting;
    case Exhibit::eType::Sculpture:
        return new Sculpture;
    default:
        return nullptr;
    }
}
