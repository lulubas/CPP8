/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:27:47 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/17 01:04:10 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

class Span {
    private:
        
        unsigned int        _maxSize;
        std::vector<int>    _intList;
        
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &other);
        Span& operator=(const Span &other);
        ~Span();

        void addNumber(int newInt);
        void addRange(std::vector<int>::iterator begin, unsigned int size);
        
        int shortestSpan(void);
        int longestSpan(void);
        std::vector<int>& getVector(void); 

    
    class MaxSizeReached : public std::exception {
        public:
            const char *what() const throw();
    };
        
};

#endif