# Public transport recommendation program

There is an implementation of graph structure and the BFS algorithm to find the shortest path between two vertices in the graph.

### Input format:

  1. The first line contains the number of stops, n.
  2. In the following n lines, the names of the stops are listed (assuming that stop names do not contain spaces).
  3. The next line contains the number of lines, m.
  4. Each of the following m lines contains the name of a line (e.g., A100), followed by a sequence of stop names served by that line, separated by spaces (assuming that the line serves stops in both directions).
  5. The next line contains the names of the starting and ending stops, separated by a space.

### Output format:

  1. List of stops separated by spaces

###### Example input 1:

    8
    A
    B
    C
    D
    E
    F
    G
    H
    3
    A100 A C E G H
    A101 A D E F H
    A102 B G
    A B

###### Example Output 1:

    A C E G B

###### Example input 2:

    9
    A
    B
    C
    D
    E
    F
    G
    H
    Z
    3
    A100 A C E G H
    A101 A D E F H
    A102 B G
    A Z

###### Example Output 2:

    NO ROUTE

### How to run this program:

To run this program you have to insert 2 commands:

  1. $ make
  2. $ ./myapp
