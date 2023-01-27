/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 21:41:39 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/27 21:41:40 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>

template <typename T>
class Array
{
private:
	T *_tab;
	unsigned int _n;
public:
	Array(){
		_tab = NULL;
		_n = 0;
	}
	Array( unsigned int n){
		this->_tab = new T[n];
		this->_n = n;
	}
	Array(const Array &Array):_tab(NULL){
		*this = Array;
	}
  	Array &operator=(const Array& Array){
		if(this->_tab)
		{
			delete[] this->_tab;
			this->_tab = NULL;
		}
		if(Array._tab)
		{
			this->_tab = new T[Array._n];
			for(unsigned int i=0; i < Array._n ; i++)
			{
				this->_tab[i] = Array._tab[i];
			}
		}
		this->_n = Array._n;
		return(*this);
	}
	unsigned int size() const {
		return(_n);
	};
	class NOTFOUND : public std::exception {
		public:
    	virtual const char* what() const throw(){
			return"exception : OUT OF BOUNDS";
		}
	};
	T &operator[](unsigned int index)
	{
		if(this->_n <= index)
			throw NOTFOUND();
		return _tab[index];
	}
	const T &operator[](unsigned int index) const
	{
		if(this->_n <= index)
			throw NOTFOUND();
		return _tab[index];
	}
	~Array(){
		delete [] _tab;
		_n = 0;
	}
};

