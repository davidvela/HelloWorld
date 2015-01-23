/* 
 * Author: David Vela Tirado
 * Software Developer
 * email:  david.vela.tirado@gmail.com
 * 
 *  */

#include <iostream>

int main(int argc, char**argv) {
    std::cout << "Hello World ..." << std::endl;

    // Prints arguments...
    if (argc > 1) {
        std::cout << std::endl << "Arguments:" << std::endl;
        for (int i = 1; i < argc; i++) {
            std::cout << i << ": " << argv[i] << std::endl;
        }
    }
    
    return 0;
}
