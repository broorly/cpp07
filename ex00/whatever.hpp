/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 21:41:51 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/28 19:13:34 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>

template <typename T>
T max(T a, T b) {
    if(a > b)
		return (a);
	else
		return(b);
}

template <typename T>
T min(T a, T b) {
    if(a < b)
		return (a);
	else
		return(b);
}

template <typename T>
void swap(T &a, T &b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}