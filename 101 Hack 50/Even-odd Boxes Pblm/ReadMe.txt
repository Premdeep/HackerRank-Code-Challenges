Lucy has an array of  boxes. The boxes are arranged in a straight line numbered  to  from left to right. Box contains  chocolates.

Lucy thinks the arrangement looks beautiful if the boxes follow an even-odd repetitive pattern. That means the first box contains an even number of chocolates, the second box contains an odd number, the third box contains even, and so on. Here's a beautiful even-odd arrangement:

image

Lucy is asking you to make beautiful even-odd arrangements from her arrays of boxes. You are allowed to move some chocolates from one box to another. But you are not allowed to swap the boxes. In the final arrangement, every box must contain at least one chocolate.

Calculate the minimum number of chocolates you need to move to get an even-odd repetitive pattern. If it's not possible to get the desired pattern, print -1.

Input Format

The first line contains an integer  denoting the number of queries. 
The first line of each query contains an integer  denoting the number of boxes. 
The second line of each query contains  space-separated integers  describing the number of chocolates in each box.

Constraints

Subtask

 for  of the maximum score
Output Format

Print an integer describing the minimum number of chocolates you need to transfer to get the even-odd repetitive pattern. If it's not possible to get the desired pattern, print .

Sample Input 0

3
6
6 8 3 1 1 4
5
3 1 1 1 1
3
14 3 10
Sample Output 0

2
-1
0
Explanation 0

Query :
We have to transfer two chocolates to maintain the pattern. One possible way to transfer chocolates is shown below.

image

Query :
We can only transfer one chocolate from the first box. No matter what we do, we cannot get the even-odd pattern.

image

Query :
The boxes are already in the even-odd pattern so we don't need to transfer any chocolate.