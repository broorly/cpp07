/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 21:41:42 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/27 21:41:43 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>


template <typename T>
void iter(const T *s, int lenght, void (*function)(const T&))
{
	for(int i = 0; i < lenght ; i++)
		function(s[i]);
	return;
}

template <typename T>
void iter(T *s, int lenght, void (*function)( T&))
{
	for(int i = 0; i < lenght ; i++)
		function(s[i]);
	return;
}