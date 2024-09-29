#ifndef SORTBEDPLUGIN_H
#define SORTBEDPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class SortBEDPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "SortBED";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
