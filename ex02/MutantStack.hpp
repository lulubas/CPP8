/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 01:52:51 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/17 02:54:53 by lbastien         ###   ########.fr       */
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
    private:
        typename Container::iterator it;
        
    public:
        typedef typename Container::iterator iterator;
    
        typename Container::iterator begin() {
            return (std::stack<T, Container>::c.begin());
        }
        typename Container::iterator end() {
            return (std::stack<T, Container>::c.end());
        }
};
#endif
