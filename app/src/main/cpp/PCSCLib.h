//
// Created by Tharwat on 19/11/2022.
//

#ifndef PLUGIN_CONNECT_EX_PCSCLIB_H
#define PLUGIN_CONNECT_EX_PCSCLIB_H
#include <string>
#include <iostream>

extern "C" std::string get_string();
extern "C" int Plugin_ListReadersEx(unsigned char ** reder_list,unsigned int * num_bytes);
#endif //PLUGIN_CONNECT_EX_PCSCLIB_H
