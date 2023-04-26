/* 
* C++ performs a left shift on a 1 byte address and then 
* converts the hex value to binary
* Code written by U. T. Otite
*/

#include <iostream>
#include <sstream>
#include <unordered_map>

using namespace std;
 
 
std::string hex_to_bin(std::string hex_num) {
    std::unordered_map<char, std::string> hex_to_bin_dict {
        {'0', "0000"}, {'1', "0001"}, {'2', "0010"}, {'3', "0011"},
        {'4', "0100"}, {'5', "0101"}, {'6', "0110"}, {'7', "0111"},
        {'8', "1000"}, {'9', "1001"}, {'A', "1010"}, {'B', "1011"},
        {'C', "1100"}, {'D', "1101"}, {'E', "1110"}, {'F', "1111"}
    };

    std::string bin_num;
    for (char digit : hex_num) {
        bin_num += hex_to_bin_dict[std::toupper(digit)];
    }
    return bin_num;
}
 
int main() {
    unsigned int idx; 
    unsigned char b;
    std::stringstream ss;
     
    // Port 0 address from a microcontroller      
    uint8_t Port0 = 0x01; // 00000001
    b = Port0; 
     
    cout << "HEX   BINARY" << endl;
    
    for( idx = 0; idx < 8; idx++ ) 
    { 
        // empty the string stream
        ss.str("");
        
        cout << std::hex << (uint16_t)b;
        ss << std::hex << (uint16_t)b;
        
        if(ss.str().size() > 1)
        {
            cout << " -> "  << hex_to_bin(ss.str()) << endl;
        }
        else
        {
            cout << "  -> 0000"  << hex_to_bin(ss.str()) << endl;
        }
        
        b = b << 1;  // left shift b by 1 bit.
        Port0 = b; 
    } 
    
    // can convert any string of Hex like this
    cout << "EF1 -> " << std::hex << hex_to_bin("EF1") ;
 
    return 0;
}
