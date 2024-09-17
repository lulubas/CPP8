/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 01:52:51 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/17 15:47:24 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// MutantStack.hpp
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include<string>
#include<iostream>
#include<exception>
#include<deque>
#include<stack>

template <typename T, typename Container = std::deque<T> > class MutantStack : public std::stack<T, Container> {
    public:
        typedef typename Container::iterator iterator;
        typedef typename Container::reverse_iterator reverse_iterator;
    
        iterator begin() {
            return this->c.begin();
        }
        
        iterator end() {
            return this->c.end();
        }
        
        reverse_iterator rbegin() {
            return this->c.rbegin();
        }
        
        reverse_iterator rend() {
            return this->c.rend();
        }
};
#endif
