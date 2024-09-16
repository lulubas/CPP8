/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:27:47 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/16 18:01:17 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Span.hpp
#ifndef SPAN_HPP
#define SPAN_HPP

#include<string>
#include<iostream>

class Span {
    private:
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &other);
        Span& operator=(const Span &other);
        ~Span();

        addNumber
};

#endif

// Span.cpp
#include "Span.hpp"

Span::Span() {
    std::cout << "Span default constructor called" << std::endl;
}

Span::Span(std::string& type) {
    std::cout << "Span parameterized constructor called" << std::endl;
}

Span::Span(const Span& other) {
    std::cout << "Span copy constructor called" << std::endl;
}

Span& Span::operator=(const Span &other) {
    std::cout << "Span copy assignement operator called" << std::endl;
    if (this != &other) {}
    return *this;
}

Span::~Span(){
    std::cout << "Span destructor called" << std::endl;
}