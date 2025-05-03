/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_binarySearch.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:12:45 by faaraujo          #+#    #+#             */
/*   Updated: 2024/09/03 18:34:00 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/**
* @brief A função binarySearch pega um array ordenado e um item. Se o item
* está no array, a função retorna a sua posição. Dessa maneira, você é capaz de
* saber por qual ponto do array deve continuar procurando.
*/
void	binarySearch(int *array, int element, int len)
{
	int low = 0;
	int high = len;

	while (low <= high)
	{
		int middle = (low + high) / 2;
		int guess = array[middle]; // guess = chute (resultado)
		if (guess == element)
		{
			std::cout << "Element found at index: " << middle << std::endl;
			return ;
		}
		else if (guess > element)
			high = middle - 1;
		else
			low = middle + 1;
	}
	std::cout << "Element not found" << std::endl;
	return ;
}

int main(void)
{
	int list[] = {1, 3, 5, 7, 9};
	int length = sizeof(list) / sizeof(int);

	binarySearch(list, 10, length);
	binarySearch(list, 7, length);
	binarySearch(list, 3, length);

	return (0);
}