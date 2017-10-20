//
//  DictionaryOutPutModelViewController.c
//  DictionaryOutPut
//
//  Created by Mewlan Musajan on 10/20/17.
//  Copyright (c) 2017 Mewlan Musajan. All rights reserved.
//

#include <stdio.h>

int main(int argc, char const *argv[])
{
	model();
	return 0;
}

void model()
{
	int r = 8;
	int c = 8;
	int a[8][8] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 24, 25, 26, 27, 28, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 24, 25, 26, 27, 28, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 24, 25, 26, 27, 28, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 24, 25, 26, 27, 28};
	int *dictionary;
	int *row;
	int *colum;
	dictionary = *a;
	row = &r;
	colum = &c;
	view(dictionary, r, c);
}

void view(int *dictionary, int *r, int *c)
{
	controller(dictionary, r, c);
}

void outPutView(int *dictionary)
{
	printf("%4d", *dictionary);
}

void newLine()
{
	putchar('\n');
}

void controller(int *dictionary, int *r, int *c)
{
	int *orginalAddress;
	orginalAddress = dictionary;
	for (; dictionary < orginalAddress + ((*r) * (*c)); ++dictionary)
	{
		if ((dictionary - orginalAddress) % *c == 0 && dictionary - orginalAddress != 0)
		{
			newLine();
		}
		outPutView(dictionary);
	}
	newLine();
}

