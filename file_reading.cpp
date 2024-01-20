#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

int main() {
    int frequency = 0;
    std::ifstream inputFile("1_in.txt");
    std::vector<int> storedFreqs;

    if (inputFile.is_open()) {
        std::string line;
        while (std::getline(inputFile, line)) {
            std::stringstream ss(line);
            int num;
            if (ss >> num) {
                frequency += num;
                storedFreqs.push_back(frequency);
            } else {
                std::cerr << "Invalid input: " << line << std::endl;
            }
        }

        inputFile.close();

        // Print final frequency and each iteration
        std::cout << "Freq Final: " << frequency << std::endl;
        std::cout << "Cada iteracao: ";
        for (int i : storedFreqs) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cerr << "Unable to open file" << std::endl;
    }

    return 0;
}
