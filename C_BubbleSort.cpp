// BubbleSoort1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "BubbleSort.h"
#include <time.h>
int main()
{
	srand(time(0));
	BubbleSort var;
	var.rand_element();
	var.SortMethod();
	var.show_result();
	var.serch_Minimal();

}




