#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#include <iostream>
#include <string>
#include "Database.h"

int main() {
    Database* database = new Database;
    int choice = 0;

    do {
        std::cout << "\n=== Digital Museum Exhibit Manager ===\n";
        std::cout << "1) Add\n";
        std::cout << "2) Display All\n";
        std::cout << "3) Save\n";
        std::cout << "4) Load\n";
        std::cout << "5) Quit\n";
        std::cout << "Choose an option: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            std::cout << "Select exhibit type:\n";
            std::cout << "1) Painting\n";
            std::cout << "2) Sculpture\n";
            std::cout << "Enter choice: ";
            int typeInt;
            std::cin >> typeInt;

            if (typeInt == 1 || typeInt == 2) {
                database->Add(static_cast<Exhibit::eType>(typeInt));
            }
            else {
                std::cout << "Invalid type selected.\n";
            }
            break;
        }

        case 2:
            database->DisplayAll();
            break;

        case 3: {
            std::cout << "Enter filename to save: ";
            std::string filename;
            std::cin >> filename;
            database->Save(filename);
            break;
        }

        case 4: {
            std::cout << "Enter filename to load: ";
            std::string filename;
            std::cin >> filename;
            database->Load(filename);
            break;
        }

        case 5:
            std::cout << "Exiting program...\n";
            break;

        default:
            std::cout << "Invalid option. Please choose again.\n";
            break;
        }

    } while (choice != 5);

    delete database;
    _CrtDumpMemoryLeaks();

    return 0;
}
