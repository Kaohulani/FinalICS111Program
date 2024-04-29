#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>

namespace Library {
    std::string getString(const std::string& prompt);
    int getInt(const std::string& prompt);
    float getFloat(const std::string& prompt);
}

#endif // LIBRARY_H
