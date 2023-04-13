0x1E. C - Search Algorithms
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
General
What is a search algorithm
What is a linear search
What is a binary search
What is the best search algorithm to use depending on your needs

TasksFilesDescription
0. Linear search0-linear.cWrite a function that searches for a value in an array of integers using the Linear search algorithm.
Prototype : int linear_search(int *array, size_t size, int value);
1. Binary search1-binary.cWrite a function that searches for a value in a sorted array of integers using the Binary search algorithm.
Prototype : int binary_search(int *array, size_t size, int value);
2. Big O #02-OWhat is the time complexity (worst case) of a linear search in an array of size n?
3. Big O #13-OWhat is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?
4. Big O #24-OWhat is the time complexity (worst case) of a binary search in an array of size n?
Big O #35-OWhat is the space complexity (worst case) of a binary search in an array of size n?
6. Big O #46-OWhat is the space complexity of this function / algorithm
7. Jump search100-jump.cWrite a function that searches for a value in a sorted array of integers using the Jump search algorithm.
Prototype : int jump_search(int *array, size_t size, int value);
8. Big O #5101-OWhat is the time complexity (average case) of a jump search in an array of size n, using step = sqrt(n)?
9. Interpolation search102-interpolation.cWrite a function that searches for a value in a sorted array of integers using the Interpolation search algorithm.
Prototype : int interpolation_search(int *array, size_t size, int value);
10. Exponential search103-exponential.cWrite a function that searches for a value in a sorted array of integers using the Exponential search algorithm.
Prototype : int exponential_search(int *array, size_t size, int value);
11. Advanced binary search104-advanced_binary.cWrite a function that searches for a value in a sorted array of integers.
Prototype : int advanced_binary(int *array, size_t size, int value);
12. Jump search in a singly linked list105-jump_list.cPlease define the following data structure in your search_algos.h header file: Write a function that searches for a value in a sorted list of integers using the Jump search algorithm.
Prototype : listint_t *jump_list(listint_t *list, size_t size, int value)
13. Linear search in a skip list106-linear_skip.cPlease define the following data structure in your search_algos.h header file: Write a function that searches for a value in a sorted skip list of integers.
Prototype : skiplist_t *linear_skip(skiplist_t *list, int value);
14. Big O #6107-OWhat is the time complexity (average case) of a jump search in a singly linked list of size n, using step = sqrt(n)?
15. Big O #7108-OWhat is the time complexity (average case) of a jump search in a skip list of size n, with an express lane using step = sqrt(n)?
