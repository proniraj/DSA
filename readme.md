# Data Structures and Algorithms (DSA)

Data Structures and Algorithms (DSA) is a fundamental part of Computer Science that teaches you how to think and solve complex problems systematically.

- **Data Structures** is about how data can be stored in different structures.

- **Algorithms** is about how to solve different problems, often by searching through and manipulating data structures.

Data structures give us the possibility to manage large amounts of data efficiently for uses such as large databases and internet indexing services.

Data structures are essential ingredients in creating fast and powerful algorithms. They help in managing and organizing data, reduce complexity, and increase efficiency.

# In Computer Science there are two different kinds of data structures.

- **Primitive Data Structures** are basic data structures provided by programming languages to represent single values, such as integers, floating-point numbers, characters, and booleans.

- **Abstract Data Structures** are higher-level data structures that are built using primitive data types and provide more complex and specialized operations. Some common examples of abstract data structures include arrays, linked lists, stacks, queues, trees, and graphs.

**Algorithm examples:**

- Finding the fastest route in a GPS navigation system
- Navigating an airplane or a car (cruise control)
- Finding what users search for (search engine)
- Sorting, for example sorting movies by rating

DSA is about finding efficient ways to store and retrieve data, to perform operations on data, and to solve specific problems.

# Data Structures and their Advantages and Disadvantages

<!-- prettier-ignore-start -->
| Data Structure | Advantages | Disadvantages |
| --- | --- | --- |
| Array | Quick insertion, very fast access if you know the index | Slow search, slow deletion, fixed size |
| Ordered Array | Quicker search than unsorted array | Slow insertion, slow deletion, fixed size |
| Stack | Provides last-in, first-out access | Slow access to other items |
| Queue | Provides first-in, first-out access | Slow access to other items |
| Linked List | Quick insertion, quick deletion | Slow search |
| Binary Tree | Quick search, insertion, deletion (if balanced) | Deletion is complex |
| Hash Table | Very quick search, insertion, deletion | Slow deletion, accessw slow if key not known, inefficient memory usage |
| Heap | Quick insertion, deletion, access to max/min | Slow access to other items |
| Graph | Models real-world situations | Can be complex to implement |
<!-- prettier-ignore-end -->

# Abstract Data Structures

An abstract data structure is a high-level model that specifies the properties of the data and the operations that can be performed on the data. It does not specify how the data is stored or how the operations are implemented.

Abstract data structures are used to represent and manipulate data in a way that is independent of the underlying implementation. This allows us to focus on the logical properties of the data and the operations that can be performed on it, rather than the details of how the data is stored and how the operations are implemented.

**Some common abstract data structures include:**

- **Arrays** are a collection of elements stored in contiguous memory locations. They are used to store multiple items of the same type together.

- **Linked Lists** are a collection of elements stored in non-contiguous memory locations. Each element in a linked list is called a node. Each node contains data and a reference to the next node in the sequence.

- **Stacks** are a collection of elements with two main operations: push, which adds an element to the collection, and pop, which removes the most recently added element.

- **Queues** are a collection of elements with two main operations: enqueue, which adds an element to the collection, and dequeue, which removes the least recently added element.

- **Trees** are a collection of elements stored in a hierarchical structure. Each element in a tree is called a node. The top node is called the root node. Each node can have zero or more child nodes.

- **Graphs** are a collection of elements stored in a non-hierarchical structure. Each element in a graph is called a vertex. Vertices are connected by edges.

**Abstract data structures are used to solve a wide variety of problems in computer science, such as:**

- Searching and sorting data
- Representing and manipulating complex data structures
- Implementing algorithms and data structures
- Modeling real-world systems and processes

**Advantages of Abstract Data Structures:**

- **Modularity:** Abstract data structures allow us to separate the logical properties of the data from the details of how the data is stored and how the operations are implemented. This makes it easier to understand and maintain the code.

- **Reusability:** Abstract data structures can be reused in different programs and applications. This saves time and effort by allowing us to build on existing data structures rather than starting from scratch.

- **Efficiency:** Abstract data structures are designed to be efficient for specific operations. This allows us to perform common operations quickly and easily, without having to worry about the underlying implementation.

- **Precise specification:** Abstract data structures provide a precise specification of the properties of the data and the operations that can be performed on it. This makes it easier to reason about the behavior of the data structure and to verify that it is correct.

- **Information hiding:** Abstract data structures hide the details of how the data is stored and how the operations are implemented. This allows us to focus on the logical properties of the data and the operations that can be performed on it, rather than the details of how they are implemented.

- **Simplicity:** Abstract data structures provide a simple and intuitive way to represent and manipulate data. This makes it easier to understand and work with the data structure, even for complex problems.

- **Integrity:** Abstract data structures provide a way to enforce integrity constraints on the data. This ensures that the data is always in a consistent and valid state, even when multiple operations are performed on it simultaneously.

- **Implementation independence:** Abstract data structures are independent of the underlying implementation. This allows us to change the implementation of the data structure without affecting the code that uses it. This makes it easier to optimize the data structure for different use cases and environments.

# Algorithm Analysis

Algorithm analysis is an important part of computer science that studies the performance and efficiency of algorithms. It helps us understand how algorithms work, how they can be improved, and how they compare to other algorithms. Algorithm analysis is used to evaluate the time and space complexity of algorithms, which are important factors in determining the efficiency of an algorithm. Once an algorithm given for a problem and determined to be correct, the next step is to determine the amount of resources it requires to execute. The resources can be the amount of time, memory, disk space, etc. The analysis of an algorithm is to determine the resources that the algorithm requires.

**Computational and Asymptotic Complexity**

Whenerer we analyze an algorithm, we are mostly interested in the time and space complexity of the algorithm. The time complexity of an algorithm is the amount of time it takes to run as a function of the size of the input data. The space complexity of an algorithm is the amount of memory it requires as a function of the size of the input data.

Complexity analysis of an algorithm is very hard if we consider each and every statement of the code to determine the complexity. So, we use the concept of asymptotic analysis to determine the complexity of an algorithm. Asymptotic analysis is the process of determining the time and space complexity of an algorithm as the input size approaches infinity. It is a way to describe the limiting behavior of a function as the input size grows very large.

**Big O Notation**
