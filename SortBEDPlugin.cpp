#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "SortBEDPlugin.h"

void SortBEDPlugin::input(std::string file) {
 inputfile = file;
}

void SortBEDPlugin::run() {}

void SortBEDPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "sortBed -i";
myCommand += " ";
myCommand += inputfile + " ";
addRequiredParameter("-sizeA", ">&");
myCommand += " >& "+outputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<SortBEDPlugin> SortBEDPluginProxy = PluginProxy<SortBEDPlugin>("SortBED", PluginManager::getInstance());
