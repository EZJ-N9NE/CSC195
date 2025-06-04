#pragma once
#include "Exhibit.h"

class Sculpture : public Exhibit {
public:
    void Read(std::ostream& prompt, std::istream& input) override;
    void Write(std::ostream& output) const override;
    void Read(std::ifstream& input) override;
    void Write(std::ofstream& output) const override;
    eType GetType() const override;

private:
    std::string m_material;
    float m_weight = 0.0f;
};
