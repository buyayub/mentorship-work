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

(**Source** [Getting Started With Testing in Python - realpython.com](https://realpython.com/python-testing/))

**Exploratory Testing:** A form of manual testing where you check certain things out yourself.

Manual testing can be exhaustive as you try to go through every item on a list of exploratory inputs to see if it works. Automated testing fixes this.

### Unit Tests

**Test step:** engaging in the action you want to test (independant variable)
**Test assertion:** the thing you check to see if it's working (dependant variable)
**Integration testing:** Testing  multiple components

An issue with integration testing is it's hard to see what causes the issue. Unit testing fixes this. 

**Unit test:** A unit test is a smaller test that checks to see if a single component operates in the right way. A unit test helps you isolate what is broken in your application and fixes it.

You can write both integration and unit tests in python. 

**Test case:** is an assertion, or a test that tests a single specific thing, it's in the name

You use `assert` to assert stuff like `assert func() == variable`, it'll throw an `AssertionError` if it comes out wrong.

### Choosing a test runner

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

+ variable: 
