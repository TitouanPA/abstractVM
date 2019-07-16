/*
** EPITECH PROJECT, 2022
** bigDecimal.hpp
** File description:
** Created by tpautier,
*/

#ifndef BIGDECIMAL_HPP
#define BIGDECIMAL_HPP

#include "IOperand.hpp"

class BigDecimal : public IOperand
{
    public:

    BigDecimal(std::string);
    ~BigDecimal() override = default;
    std::string toString() const;
    eOperandType getType() const;
    IOperand* operator+(const IOperand &rhs) const override;
    IOperand* operator-(const IOperand &rhs) const override;
    IOperand* operator*(const IOperand &rhs) const override;
    IOperand* operator/(const IOperand &rhs) const override;
    IOperand* operator%(const IOperand &rhs) const override;
};

#endif