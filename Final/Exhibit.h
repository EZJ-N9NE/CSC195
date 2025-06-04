#pragma once
#include <iostream>
#include <fstream>
#include <string>

class Exhibit {
public:
    enum class eType {
        Painting = 1,
        Sculpture = 2
    };

    virtual ~Exhibit() {}

    virtual void Read(std::ostream& prompt, std::istream& input);
    virtual void Write(std::ostream& output) const;
    virtual void Read(std::ifstream& input);
    virtual void Write(std::ofstream& output) const;
    virtual eType GetType() const = 0;

    friend std::ostream& operator<<(std::ostream& os, const Exhibit& ex);
    friend std::istream& operator>>(std::istream& is, Exhibit& ex);
    friend std::ofstream& operator<<(std::ofstream& os, Exhibit& ex);
    friend std::ifstream& operator>>(std::ifstream& is, Exhibit& ex);

protected:
    std::string m_title;
    std::string m_artist;
    int m_year = 0;
};
