#ifndef BubbleSort_H
#define BubbleSort_H
#include<vector>


class BubbleSort
{
private:
	const int n = 10;
	unsigned int swap, minimal_element;
	std::vector<unsigned int> elements;
public:
	void rand_element()
	{
		for (int i = 0; i < n; i++)
		{
			elements.push_back(rand() % 100); //Заполняем рандомными числами от 0 до 100;
			std::cout << elements.at(i) << " ";
		}
		std::cout << " \n";


	}
	void SortMethod()
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n - 1; j++)
			{
				if (elements.at(j) > elements.at(j + 1))
				{
					swap = elements.at(j);
					elements.at(j) = elements.at(j + 1);
					elements.at(j + 1) = swap;
				}


			}
		}
	}
	void serch_Minimal()
	{
		minimal_element = elements.at(0);
		for (int i =0; i < n; i++)
		{
			if (minimal_element > elements.at(i)) 
			{
				minimal_element = elements.at(i);
			}
		}
		std::cout << minimal_element << " - is mininmal in Vector\n";
	}

	void show_result()
	{
		for (int i = 0; i < n; i++) {
			std::cout << elements.at(i) << " ";
		}
		std::cout << "\n";
	}
};
#endif // !"BubbleSort_H"


