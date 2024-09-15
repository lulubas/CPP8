/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 23:58:25 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/16 01:14:48 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// EASYFIND.hpp

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include<string>
#include<iostream>
#include<vector>
#include<algorithm>

class CouldNotFindValue : public std::exception {
    public:
        const char *what() const throw() {
            return("Could not find te value");
        }
};

template<typename T> typename T::iterator easyfind(T& ctn, int toFind){
    typename T::iterator it = std::find(ctn.begin(), ctn.end(), toFind);
    if (it != ctn.end())
        return(it);
    else
        throw CouldNotFindValue();
}

#endif
