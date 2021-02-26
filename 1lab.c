#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>


typedef struct base {
	char f_name[100];
	char l_name[100];
	char m_name[100];
	char post[100];
	int birth;
	int price;
} base;

void struct_out(struct base* arr, int i) {
	printf("\n Worker number: %d", i + 1);
	printf("\n First name: ");
	puts(arr[i].f_name);
	printf(" Last name: ");
	puts(arr[i].l_name);
	printf(" Middle name: ");
	puts(arr[i].m_name);
	printf(" Post: ");
	puts(arr[i].post);
	printf(" Birth year: %d", arr[i].birth);
	printf("\n Price: %d", arr[i].price);
	printf("\n");
}
void input(struct base* arr, int n) {
	for (int i = 0; i < n; i++) {
		rewind(stdin);
		printf("\n Worker number: %d", i + 1);
		printf("\n First name: ");
		gets_s(arr[i].f_name);
		printf(" Last name: ");
		gets_s(arr[i].l_name);
		printf(" Middle name: ");
		gets_s(arr[i].m_name);
		printf(" Post: ");
		gets_s(arr[i].post);
		printf(" Birth year: ");
		scanf_s("%d", &arr[i].birth);
		printf(" Price: ");
		scanf_s("%d", &arr[i].price);
	}
	printf("\n");
}
void output(struct base* arr, int n) {
	for (int i = 0; i < n; i++) {
		printf("\n Worker number: %d", i + 1);
		printf("\n First name: ");
		puts(arr[i].f_name);
		printf(" Last name: ");
		puts(arr[i].l_name);
		printf(" Middle name: ");
		puts(arr[i].m_name);
		printf(" Post: ");
		puts(arr[i].post);
		printf(" Birth year: %d", arr[i].birth);
		printf("\n Price: %d", arr[i].price);
		printf("\n");
	}
}

void struct_swap(struct base arr1, struct base arr2, struct base doubler) {

	doubler = arr1;
	arr1 = arr2;
	arr2 = doubler;
}
int struct_sort(char word1[100], char word2[100]) {
	int i = 0;
	int k = 0;
	while ((word1[i] != '\0') && (word2[i] != '\0')) {
		if (word1[i] > word2[i]) {
			return 2;
		}
		else if (word1[i] < word2[2]) {
			return 1;
		}
		i++;
	}

	if (strlen(word1) < strlen(word2)) {
		return 1;
	}
	else if (strlen(word2) < strlen(word1)) {
		return 2;
	}
	else {
		return 3;
	}
}
void int_swap(int a, int b) {
	int c;
	c = a; a = b; b = c;
}

void search(struct base *arr, int n) {
	//switch
	int search_num, searching_int, i;
	char searching_string[100];

	rewind(stdin);
	printf("\n Print position of searchable parameter: ");
	scanf_s("%d", &search_num);
	rewind(stdin);
	if (search_num < 5) {
		printf("\n Print searchable parameter: ");
		gets_s(searching_string);
		switch (search_num) {
		case 1: {
			i = 0;
			while (i < n) {
				if (!strcmp(searching_string, arr[i].f_name)) {
					struct_out(arr, i);
				}
				i++;
			}
			break;
		}
		case 2: {
			i = 0;
			while (i < n) {
				if (!strcmp(searching_string, arr[i].l_name)) {
					struct_out(arr, i);
				}
				i++;
			}
			break;
		}
		case 3: {
			i = 0;
			while (i < n) {
				if (!strcmp(searching_string, arr[i].m_name)) {
					struct_out(arr, i);
				}
				i++;
			}
			break;
		}
		case 4: {
			i = 0;
			while (i < n) {
				if (!strcmp(searching_string, arr[i].post)) {
					struct_out(arr, i);
				}
				i++;
			}
			break;
		}
		}
	}
	else if (search_num > 4 && search_num < 7) {
		printf("\n Print searchable parameter: ");
		scanf_s("%d", &searching_int);
		switch (search_num) {
		case 5: {
			i = 0;
			while (i < n) {
				if (searching_int == arr[i].birth) {
					struct_out(arr, i);
				}
				i++;
			}
			break;
		}
		case 6: {
			i = 0;
			while (i < n) {
				if (searching_int == arr[i].price) {
					struct_out(arr, i);
				}
				i++;
			}
			break;
		}
		}
	}
	else {
		printf("\n Nothing was searched.");
	}
	//
}
void sort(struct base* arr, int n, struct base doubler) {
	int search_num,i,j;
	printf("\n Print position of searchable parameter to sort: ");
	scanf_s("%d", &search_num);
	//


	//sort
	if (search_num < 5) {
		switch (search_num) {
		case 1: {
			for (i = 0; i < n; i++) {
				for (j = 0; j < n - 1; j++) {
					if (strcmp(arr[j].f_name, arr[j + 1].f_name) == 1) {
						doubler = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = doubler;
					}
				}
			}
			break;
		}
		case 2: {
			for (i = 0; i < n; i++) {
				for (j = 0; j < n - 1; j++) {
					if (strcmp(arr[j].l_name, arr[j + 1].l_name) == 1) {
						doubler = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = doubler;
					}
				}
			}
			break;
		}
		case 3: {
			for (i = 0; i < n; i++) {
				for (j = 0; j < n - 1; j++) {
					if (strcmp(arr[j].m_name, arr[j + 1].m_name) == 1) {
						doubler = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = doubler;
					}
				}
			}
			break;
		}
		case 4: {
			for (i = 0; i < n; i++) {
				for (j = 0; j < n - 1; j++) {
					if (strcmp(arr[j].post, arr[j + 1].post) == 1) {
						doubler = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = doubler;
					}
				}
			}
			break;
		}
		}
	}
	else if ((search_num > 4) && (search_num < 7)) {
		switch (search_num) {
		case 5: {
			for (i = 0; i < n; i++) {
				for (j = 0; j < n - 1; j++) {
					if (arr[j].birth > arr[j + 1].birth) {
						doubler = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = doubler;
					}
				}
			}
			break;
		}
		case 6: {
			for (i = 0; i < n; i++) {
				for (j = 0; j < n - 1; j++) {
					if (arr[j].price > arr[j + 1].price) {
						doubler = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = doubler;
					}
				}
			}
			break;
		}
		}
	}
}
void deleting (struct base *arr, struct base doubler, int search_num,int n) {
	// Deleting.
	rewind(stdin);
	printf("\n Print position of parameter to deleting: ");
	fflush(stdin);
	rewind(stdin);
	scanf_s("%d", &search_num);
	struct_swap(arr[n - 1], arr[search_num], doubler);
	
}

void psearch(struct base* arr, int n, int *match_num) {
	//switch
	int search_num, searching_int, i,j ;
	char searching_string[100];

	rewind(stdin);
	printf("\n Print position of searchable parameter: ");
	scanf_s("%d", &search_num);
	rewind(stdin);
	if (search_num < 5) {
		printf("\n Print searchable parameter to find match: ");
		gets_s(searching_string);
		switch (--search_num) {
		case 0: {
			for (i = 0; i < n; i++) {
				j = 0;
				while ((arr[i].f_name[j] != '\0') && (searching_string[j] != '\0')) {
					if (arr[i].f_name[j] == searching_string[j]) {
						match_num[i]++;
					}
					j++;
				}
				if (match_num[i]!=0) {
					struct_out(arr, i);
				}
			}
		break;		
		}
		case 1: {
			for (i = 0; i < n; i++) {
				j = 0;
				while ((arr[i].l_name[j] != '\0') && (searching_string[j] != '\0')) {
					if (arr[i].l_name[j] == searching_string[j]) {
						
						match_num[i]++;
					}
					j++;
				}
				if (match_num[i]!=0) {
					struct_out(arr, i);
				}
			}
			break;
		}
		case 2: {
			for (i = 0; i < n; i++) {
				j = 0;
				while ((arr[i].m_name[j] != '\0') && (searching_string[j] != '\0')) {
					if (arr[i].m_name[j] == searching_string[j]) {
						j++;
						match_num[i]++;
					}
					j++;
				}
				if (match_num[i]!=0) {
					struct_out(arr, i);
				}
			}
			break;
		}
		case 3: {
			for (i = 0; i < n; i++) {
				j = 0;
				while ((arr[i].post[j] != '\0') && (searching_string[j] != '\0')) {
					if (arr[i].post[j] == searching_string[j]) {
						j++;
						match_num[i]++;
					}
					j++;
				}
				if (match_num[i]!=0) {
					struct_out(arr, i);
				}
			}
			break;
		}
		}
	}
	else if (search_num > 4 && search_num < 7) {
		printf("\n Print searchable parameter: ");
		scanf_s("%d", &searching_int);
		switch (search_num) {
		case 5: {
			i = 0;
			while (i < n) {
				if (searching_int == arr[i].birth) {
					struct_out(arr, i);
				}
				i++;
			}
			break;
		}
		case 6: {
			i = 0;
			while (i < n) {
				if (searching_int == arr[i].price) {
					struct_out(arr, i);
				}
				i++;
			}
			break;
		}
		}
	}
	else {
		printf("\n Nothing was searched.");
	}
	//
	
}

int main() {
	int n, i, j, ch, search_num = 0;
	int counter;
	int oper;
	int n_start=0;
	char searching_string[100];
	int searching_int;
	base doubler;

	printf("Print number of structs: ");
	scanf_s("%d", &n);
	base* arr = (struct base*)malloc(n * sizeof(struct base));
	int* match_num = (int*)calloc(n, sizeof(int));
	doubler = arr[0];
	rewind(stdin);
	do {
		if (n_start == 0) {
			printf("\nPrint number of nessesary operation.");
			printf("\n1 - to struct input.");
			printf("\n2 - to struct output.");
			printf("\n3 - to struct change.");
			printf("\n4 - to struct search (one parameter).");
			printf("\n5 - to struct sort.");
			printf("\n6 - to struct search (all parameters).");
			printf("\n7 - to struct search (matches).");
			printf("\n0 - to exit.\n>>>");
		}
		else {
			printf("\nPrint number of nessesary operation.");
			printf("\n1 - input.");
			printf("\t2 - output.");
			printf("\n3 -  change.");
			printf("\t4 - search .");
			printf("\n5 - sort.");
			printf("\t6 - search allpick.");
			printf("\n7 - matches.");
			printf("\t0 -  exit.\n>>>");
		}
		scanf_s("%d", &oper);
		switch (oper) {
		case 1: {input(arr, n); break;  }
		case 2: {output(arr, n); break; }
		case 3: {
			//making changes on price
			for (i = 0; i < n; i++) {
				printf("\n Changes in price of %d worker: ", i + 1);
				scanf_s("%d", &ch);
				arr[i].price += ch;
			}
			//

			//new price output
			for (i = 0; i < n; i++) {
				printf("\n New price of %d worker: %d", i + 1, arr[i].price);
			}
			//
			break;
		}
		case 4: {search(arr, n); break; }
		case 5: {sort(arr, n, doubler); }
		case 6: {//All parameters search.
			printf("\nPrint all parameters to search.");
			input(&doubler, 1);
			j = 0;
			for (i = 0; i < n; i++) {
				if ((strcmp(doubler.f_name, arr[i].f_name) == 0) &&
					(strcmp(doubler.l_name, arr[i].l_name) == 0) &&
					(strcmp(doubler.m_name, arr[i].m_name) == 0) &&
					(doubler.birth == arr[i].birth) && (doubler.price == arr[i].price)) {
					printf("\nMatch is found.");
					struct_out(arr, i);
				}
				else {
					j++;
				}
			}
			if (j == n) {
				printf("Employee does not exist.");
			}
			break; }
		case 7: {psearch(arr, n, match_num); break; }
		case 0: break;
		default: printf("Error. :|");
		}
		n_start++;
	} while (oper != 0);
		/*
		input(arr, n);
		output(arr, n);
		doubler = arr[0];

		//making changes on price
		for (i = 0; i < n; i++) {
			printf("\n Changes in price of %d worker: ", i + 1);
			scanf_s("%d", &ch);
			arr[i].price += ch;
		}
		//

		//new price output
		for (i = 0; i < n; i++) {
			printf("\n New price of %d worker: %d", i + 1, arr[i].price);
		}
		//


		search(arr, n);
		psearch(arr, n, match_num);
		sort(arr, n, doubler);

		//
		printf("Sort result: \n");
		output(arr, n);
		//

		//All parameters search.
		printf("\nPrint all parameters to search.");
		input(&doubler, 1);
		j = 0;
		for (i = 0; i < n; i++) {
			if ((strcmp(doubler.f_name, arr[i].f_name) == 0) &&
				(strcmp(doubler.l_name, arr[i].l_name) == 0) &&
				(strcmp(doubler.m_name, arr[i].m_name) == 0) &&
				(doubler.birth == arr[i].birth) && (doubler.price == arr[i].price)) {
				printf("\nMatch is found.");
				struct_out(arr, i);
			}
			else {
				j++;
			}
		}
		if (j == n) {
			printf("Employee does not exist.");
		}
		//

		deleting(arr, doubler, search_num, n);
		struct_swap(arr[n - 1], arr[search_num], doubler);

		output(arr, --n);

		psearch(arr, n, match_num);

		*/
		return 0;

	}
