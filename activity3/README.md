# Activities

## Task 1/3: Divide-and-conquer

The code in `./src/pow1.cpp` and `./src/pow2.cpp` compute the power `pow(x, n)` using iterative and recursive approaches respectively.

> Refer to the following [link](https://www.techiedelight.com/power-function-implementation-recursive-iterative/).

- What is the time complexity for both approaches?

## Task 2/3: Divide-and-conquer vs Decrease and conquer

- In many literature, Binary search is referred to use divide-and-conquer technique. Discuss in groups whether you agree or disagree and justify your answers. Refer to the the following thread: [Why Binary Search is not a divide and conquer algorithm?](https://stackoverflow.com/questions/8850447/why-is-binary-search-a-divide-and-conquer-algorithm)

Ans: Yes, binary search is often referred to as a divide-and-conquer technique. The reason for this is that the algorithm reduces the search space by half with each iteration by dividing the list of elements into two halves. The search continues in only one half of the list based on the comparison between the target value and the middle element of the current search space. 

## Task 3/3: Individual, at home

- Refactor the code in `./src/pow2.cpp` to optimize the time complexity of the recursive approach. Use `./src/pow3.cpp` as a starter.
- Refactor the code in `pow1.cpp` and `pow2.cpp`, as follows:
  - Replace `printf()` with` std::cout()`
  - Include the right headers e.g. `iostream`

## Links

- https://www.techiedelight.com/power-function-implementation-recursive-iterative/
- https://cpp.sh/
