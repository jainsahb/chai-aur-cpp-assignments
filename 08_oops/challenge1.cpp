#include <iostream>
#include <string>

// using namespace std; // Not recommended for Professional Coding

class Biscuit {
public:
    std::string* biscuitName;
    int size;
    std::string baseType;


    Biscuit() {
        biscuitName = new std::string("Unknown Biscuit");
        size = 0;
        baseType = "Refined Wheat Flour";
        std::cout << "Default Constructor" << std::endl;

    }

    Biscuit(std::string name, int sizeInput, std::string base) {
        biscuitName = new std::string(name);
        size = sizeInput;
        baseType = base;
        std::cout << "Param Constructor" << std::endl;

    }

    // Copy Constructor
    Biscuit(const Biscuit& biskut) {
        biscuitName = new std::string(*biskut.biscuitName);
        size = biskut.size;
        baseType = biskut.baseType;
        std::cout << "Copy Constructor" << std::endl; 

    }

    // Destructor
    ~Biscuit() {
        delete biscuitName;
        std::cout << "Destructor called!" << std::endl;

    }

    void displayBiscuitDetails() {
        std::cout << "Name        : " << *biscuitName << std::endl;
        std::cout << "Size        : " << size << std::endl;
        std::cout << "Biscuit Base: " << baseType << std::endl;
        std::cout << "---------------------------------" << std::endl;
    }


};

int main() {
    Biscuit oreo("Oreo", 6, "Wheat Flour");
    oreo.displayBiscuitDetails();
    
    Biscuit bts_oreo = oreo;
    bts_oreo.displayBiscuitDetails();
    
    *bts_oreo.biscuitName = "BTS Oreo";
    
    oreo.displayBiscuitDetails();
    bts_oreo.displayBiscuitDetails();


    return 0;
}

// Expected Output:
// $ ./challenge1.exe
// Param Constructor
// Name        : Oreo
// Size        : 6
// Biscuit Base: Wheat Flour
// ---------------------------------
// Copy Constructor
// Name        : Oreo
// Size        : 6
// Biscuit Base: Wheat Flour
// ---------------------------------
// Name        : Oreo
// Size        : 6
// Biscuit Base: Wheat Flour
// ---------------------------------
// Name        : BTS Oreo
// Size        : 6
// Biscuit Base: Wheat Flour
// ---------------------------------
// Destructor called!
// Destructor called!


// Notes: 

//  Q. Biscuit(const Biscuit& biskut) <-- Why we put const here?
// Because, we don't want to modify the original obj. even by mistake,
// here const act as an prevention for such mistakes.