/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jpflegha <jpflegha@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 15:40:04 by Jpflegha          #+#    #+#             */
/*   Updated: 2026/06/10 15:41:01 by Jpflegha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>

class ScalarConverter
{
    public:
        static void convert(const std::string &literal);
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter &operator=(const ScalarConverter &other);
        ~ScalarConverter();
};

// class ScalarConverter
// {
// public:
// 	ScalarConverter() = delete;
// 	ScalarConverter(const ScalarConverter &) = delete;
// 	ScalarConverter &operator=(const ScalarConverter &) = delete;
// 	~ScalarConverter() = delete;
 
// 	static void convert(const std::string &literal);
// };
 

#endif