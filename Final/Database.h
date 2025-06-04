#pragma once
#include <vector>
#include <memory>
#include <string>
#include "Exhibit.h"

class Database {
public:
    void Add(Exhibit::eType type);
    void DisplayAll() const;
    void Load(const std::string& filename);
    void Save(const std::string& filename);

private:
    Exhibit* Create(Exhibit::eType type);
    std::vector<std::unique_ptr<Exhibit>> m_exhibits;
};
