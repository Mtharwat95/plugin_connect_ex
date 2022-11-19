#include "PCSCLib.h"
#include <vector>
#include <string>
std::string get_string()
{

    return "Funcky  4";
}

int Plugin_ListReadersEx(unsigned char ** reader_list,unsigned int * num_bytes)
{
//    std::vector<std::string> port;
//    port.push_back("Device One");
    * reader_list= (unsigned  char *) new unsigned  char [10];
    std::string s="Heaven";
    for(int iter=0;iter<s.size();iter++)
        (*reader_list)[iter]=s.at(iter);
//    int iter=0;
//    for(auto port1:port) {
//        for (auto char_: port1) {
//        *reader_list[iter] = char_;
//        iter++;
//    }
//    }
    *num_bytes=10;
    return  0;
}
