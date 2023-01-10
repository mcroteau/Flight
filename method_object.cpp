//
// Created by mcroteau on 1/10/23.
//

#include <string>
#include <map>
#include "variable_definition.h"

class method_object {
    std::string name;
    std::map<std::string, variable_definition> variables;
};
