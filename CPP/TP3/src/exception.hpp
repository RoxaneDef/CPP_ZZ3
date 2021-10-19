//
// Created by roxan on 10/19/2021.
//

#ifndef TP3_EXCEPTION_H
#define TP3_EXCEPTION_H

#include <exception>
#include <typeinfo>

class ExceptionChaine : public std::exception {
public:
    ExceptionChaine(std::string const &type) : msg("Conversion en chaine impossible pour '" + type + "'") {}

    virtual const char *what() const noexcept { return msg.c_str(); }

private:
    std::string msg;
};

#endif //TP3_EXCEPTION_H