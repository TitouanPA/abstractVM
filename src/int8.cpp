/*
** EPITECH PROJECT, 2022
** int8.cpp
** File description:
** Created by Ervin,
*/

#include "../include/int8.hpp"

Int8::Int8(std::string val)
{
    _value = std::stoi(val);
}

Int8::~Int8()
{
}

std::string Int8::toString() const
{
    std::ostringstream ss;
    ss << _value;
    std::string s(ss.str());
    return s;
}

eOperandType Int8::getType() const
{
    return INT8;
}

IOperand* Int8::operator-(const IOperand &rhs) const
{
    int8_t val = _value - std::stoi(rhs.toString());

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Int8(s);
}

IOperand* Int8::operator+(const IOperand &rhs) const
{
    int8_t val = _value + std::stoi(rhs.toString());

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Int8(s);
}

IOperand* Int8::operator*(const IOperand &rhs) const
{
    int8_t val = _value * std::stoi(rhs.toString());

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Int8(s);
}

IOperand* Int8::operator%(const IOperand &rhs) const
{
    int8_t val = _value % std::stoi(rhs.toString());

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Int8(s);
}

IOperand* Int8::operator/(const IOperand &rhs) const
{
    int8_t val = _value / std::stoi(rhs.toString());

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Int8(s);
}