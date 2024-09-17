/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 23:05:43 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/17 01:28:52 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _maxSize(0) {
    std::cout << "Span default constructor called" << std::endl;
}

Span::Span(unsigned int N) : _maxSize(N) {
    std::cout << "Span parameterized constructor called" << std::endl;
}

Span::Span(const Span& other) : _maxSize(other._maxSize), _intList(other._intList) {
    std::cout << "Span copy constructor called" << std::endl;
}

Span& Span::operator=(const Span &other) {
    std::cout << "Span copy assignement operator called" << std::endl;
    if (this != &other) {
        _maxSize = other._maxSize;
        _intList = other._intList;
    }
    return *this;
}

Span::~Span(){
    std::cout << "Span destructor called" << std::endl;
}

void Span::addNumber(int newInt) {
    if (_intList.size() < _maxSize)
        _intList.push_back(newInt);
    else
        throw MaxSizeReached();
}

void Span::addRange(std::vector<int>::iterator it, unsigned int size) {
    if ((_intList.size() + size) <= _maxSize)
        _intList.insert(_intList.end(), it, it + size);
    else
        throw MaxSizeReached();
}

int Span::shortestSpan(void) {
    std::vector<int> sorted = _intList;
    std::vector<int> difference = _intList;
    
    std::sort(sorted.begin(), sorted.end());
    std::adjacent_difference(sorted.begin(), sorted.end(), difference.begin());
    int smallest = *std::min_element(difference.begin() + 1, difference.end());

    return (smallest);
}

int Span::longestSpan(void) {
    int smallest = *std::min_element(_intList.begin(), _intList.end());
    int biggest = *std::max_element(_intList.begin(), _intList.end());
    
    return (biggest - smallest);
}

std::vector<int>& Span::getVector(void) {
    return(_intList);
}


const char* Span::MaxSizeReached::what() const throw() {
    return("Can't add number: Max vector size reached");
}