## Trees

A tree is a connected, undirected graph with no cycles. A cycle is a path that starts and ends at the same node.

**Rooted trees:** trees with one node designated as the root, situated above the other nodes, and the pbranches descend into leaf nodes.

+ Trees are used in the DOM
+ The first node of a tree is the root
+ If the root node has child nodes, it becomes a parent
+ All tree nodes are linked by edges, which manage the relationship between nodes
+ Height of a tree is the depth of their children
+ Depth of a tree is the layers to the root
+ Forests are a collection of disjointed trees


### Binary Search Tree

+ a binary tree that can be used to search for the presence of a number in O(log(n))

### AVL Tree

+ (A)delson-(V)elsky and (L)andis Tree
+ Contains a balancing factor (-1, 0, +1) on each node.
+ balancing factor is the difference between the height of the left subtree and that of the right subtree of that node.
	+ balancing factor = height of left subtree - height of right subtree
	+ could also be backwards: height of right subtree - height left subtree
+ you can rotate positions on an AVL tree
+ 

## Testing

### **Source:** [Getting Started With Testing in Python - realpython.com](https://realpython.com/python-testing/)

**Exploratory Testing:** A form of manual testing where you check certain things out yourself.

Manual testing can be exhaustive as you try to go through every item on a list of exploratory inputs to see if it works. Automated testing fixes this.

#### Unit Tests

**Test step:** engaging in the action you want to test (independant variable)
**Test assertion:** the thing you check to see if it's working (dependant variable)
**Integration testing:** Testing  multiple components

An issue with integration testing is it's hard to see what causes the issue. Unit testing fixes this. 

**Unit test:** A unit test is a smaller test that checks to see if a single component operates in the right way. A unit test helps you isolate what is broken in your application and fixes it.

You can write both integration and unit tests in python. 

**Test case:** is an assertion, or a test that tests a single specific thing, it's in the name

You use `assert` to assert stuff like `assert func() == variable`, it'll throw an `AssertionError` if it comes out wrong.

#### Choosing a test runner

**Test runner:** special application designed for running tests, checking output, and giving debugging/diagnostic tools

three popular types of frameworks:

+ **unittest:** native to python, contains a testing framework and test runner
	+ requires you to put tests into classes as methods
	+ you use a series of special assertion methods built in to the TestCase class instead 
+ **nose:** compatibel with any tests written in unittest framework, and can be used as a drop-in replacement for the unittest test runner
+ **pytest:** pytest test cases are a series of functions in a python file starting with the name `test_`
	+ support for built-in assert statement
	+ support for filtering for test cases
	+ ability to rerun from the last failing test
	+ ecosystem for hundreds of plugins to extend functionality

...

### **Source:** [pytest: How to mock in Python](https://changhsinlee.com/pytest-mock/)

We sometimes want to mock services and libraries to make testing easier, and without any side effects. For example, using a computationally expensive method or making calls to APIs that do things like post on a social media website.

Shortens the feedback loop.

In python, for pytest, you use a library called `mock`. You mock where the object is imported into, not where the object is imported from.

### Monkey Patching

When you change code at runtime within local use, so any libraries are only affected by it within the program itself.

You do this by changing function addresses (library.func = func1)

## Python

### **Source:** [Mastering Dictionaries and Sets in Python](https://towardsdatascience.com/mastering-dictionaries-and-sets-in-python-6e30b0e2011f)

#### Sets

+ unordered and unindexed collection of UNIQUE elements, with no duplicaiton of elements
+ mutable (can add and remove after definition)

+ you can use a set function to create a set, or use curly braces:
	+ `s = set([1, 2, 3])`
	+ `s = {1, 2, 3}`
+ to add to set: `s.add(x)`
+ to remove: `s.remove(x)`

+ the cool stuff you can do with sets is set operations:
	+  union joins two sets into one, but keeping the elments unique; uses the | operator, or the union function
		+ `su = s1 | s2`
		+ `su = s1.union(s2)`
	+ intersection of a set finds the elements present in both sets and makes a new set out of them; uses the & operator, or the intersection function
		+ `si = s1 & s2`
		+ `si = s1.intersection(s2)`
	+ set differences finds elements only in set \#1 but not set \#2 
		+ `sd = s1 - s2`
		+ `sd = s1.difference(s2)`
	+ symmetric difference finds elements unique to both set1 and set2, and not common in both:
		+ `ssd = s1 ^ s2`
		+ `ssd = s1.symmetric_difference(s2)`
+ frozen sets are sets that can't be changed after they're set, and can only be created using the frozenset() function

#### Dictionaries

+ unordered collection of a pair of values: a key and its value
	+ created by using `x = {'key' : value}`
+ I already know how to add and remove
+ you should use dictionary comprehensions to create dictionaries concisely

### Mapping

+ Applying functions to all members of a list or similar struct
+ do it using `map(function, list)`

