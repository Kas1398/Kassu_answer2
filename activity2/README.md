# Activities

## Task 1

Refer to the first [link](#links).

- Why is Algorithm Analysis Important?
Ans: Algorithm analysis is important because it allows us to determine the efficiency of an algorithm in terms of time and space complexity.
- Explain the Big $O$ notation
Ans: Big O notation is a way of describing the upper bound of an algorithm's time complexity.
- Compare `Linear`, `Logarithmic`, `Quadratic` and `Constant` complexities.
Ans: - Linear time complexity, O(n), means that the running time of the algorithm grows linearly with the size of the input.
 - Logarithmic time complexity, O(log n), means that the running time of the algorithm grows logarithmically with the size of the input. 
 - Quadratic time complexity, O(n^2), means that the running time of the algorithm grows quadratically with the size of the input.
 - Constant time complexity, O(1), means that the running time of the algorithm does not depend on the size of the input and is always the same.

## Task2

Refer to the first [link](#links).

- Write a simple algorithm in C++ that finds the square of the first item in a list and then prints it on the screen.
Ans: 
#include <iostream>
#include <vector>

int main() {
  std::vector<int> list = {1, 2, 3, 4, 5};
  int square = list[0] * list[0];
  std::cout << "The square of the first item is: " << square << std::endl;
  return 0;
}

- What is the complexity of the algorithm?
Ans: The time complexity of the algorithm is O(1), which means it takes constant time to execute.

## Task 3

Refer to the first [link](#links).

- Write a simple program that displays all items in a list to the console.
Ans:
#include <iostream>
#include <vector>

int main() {
  std::vector<int> list = {1, 2, 3, 4, 5};
  std::cout << "The list items are: ";
  for (int i = 0; i < list.size(); i++) {
    std::cout << list[i] << " ";
  }
  std::cout << std::endl;
  return 0;
}

- What is the complexity of the algorithm?

## Task 4: : Individual, at home

Refer to this [pdf](./big_o.pdf):

- What is the difference between complexity and performance:
Ans: Complexity refers to the measure of the amount of resources (such as time and memory) an algorithm requires to solve a problem. On the other hand Performance refers to how well the algorithm actually solves the problem.
- Does complexity affects performance bor is it the other way around?
Ans: Yes, Complexity affects performance because the more resources an algorithm requires, the slower it will be and the more memory it will consume, leading to decreased performance.
- Restate the formal definition of big $O$ in plain English
Ans: In plain English, it tells us how many steps the algorithm will take at most, as the input size grows larger and larger.

## Links

- [Big O Notation and Algorithm Analysis ](https://stackabuse.com/big-o-notation-and-algorithm-analysis-with-python-examples/)
- [Visualization](https://www.cs.usfca.edu/~galles/visualization/Search.html)
- [Big-O notation explained by a self-taught programmer](https://justin.abrah.ms/computer-science/big-o-notation-explained.html)
- [Big-O is easy to calculate, if you know how](https://justin.abrah.ms/computer-science/how-to-calculate-big-o.html)
- https://cpp.sh/
