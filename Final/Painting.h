#pragma once
#include "Exhibit.h"

class Painting : public Exhibit {
public:
    void Read(std::ostream& prompt, std::istream& input) override;
    void Write(std::ostream& output) const override;
    void Read(std::ifstream& input) override;
    void Write(std::ofstream& output) const override;
    eType GetType() const override;

private:
    std::string m_medium;
    int m_width = 0;
    int m_height = 0;
};
