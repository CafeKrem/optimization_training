Knapsack Problem
=================

Overview
--------
The **Knapsack Problem** is a classical optimization problem, often encountered in fields like operations research, resource allocation, and combinatorial optimization. It involves selecting a subset of objects from a given set, where each object has both a value and a weight. The objective is to maximize the total value of the selected objects, while ensuring that the total weight does not exceed a predefined limit.

This problem can be thought of as a variant of the **Knapsack Problem**, which is commonly used to model situations where limited resources must be allocated efficiently.

Problem Description
-------------------
You are given a set of `n` objects, each defined by two attributes:
- **Value:** The value (or benefit) of the object.
- **Weight:** The weight (or cost) associated with the object.

The objective is to select a subset of these objects such that:
- The total value of the selected objects is maximized.
- The total weight of the selected objects does not exceed a given weight limit `W`.

Mathematically, the problem can be defined as follows:

.. math::

   \max \sum_{i=1}^{n} v_i x_i \quad \text{subject to} \quad \sum_{i=1}^{n} w_i x_i \leq W

Where:
- :math:`v_i` is the value of object `i`.
- :math:`w_i` is the weight of object `i`.
- :math:`W` is the maximum allowed total weight (capacity).
- :math:`x_i` is a binary variable, where:
  - :math:`x_i = 1` if object `i` is included in the subset,
  - :math:`x_i = 0` otherwise.

Input
-----
The input consists of:
- **A list of `n` objects**: Each object has a value and a weight.
- **Maximum weight limit (`W`)**: The total weight of the selected objects must not exceed this limit.

Example input:

.. code-block:: text

   Input:
   Number of objects: 4
   Object 1: Value = 3, Weight = 2
   Object 2: Value = 4, Weight = 3
   Object 3: Value = 5, Weight = 4
   Object 4: Value = 6, Weight = 5
   Max Weight: 10

Output
------
The output consists of:
- **The subset of objects selected**: The list of objects that maximize the total value without exceeding the weight limit.
- **The total value of the selected objects**: The sum of the values of the chosen objects.



References
----------

- [1] https://en.wikipedia.org/wiki/Knapsack_problem

