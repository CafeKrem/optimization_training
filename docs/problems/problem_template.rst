Knockback Problem
=================

Overview
--------
The **Knockback Problem** is a classic optimization problem involving [insert a brief overview of the problem here]. This problem is commonly encountered in [mention the relevant field, such as algorithm design, operations research, etc.].

Problem Description
-------------------
Provide a detailed description of the Knockback Problem here. Explain the goal of the problem, the context in which it is applied, and any important considerations. You may include the following:

- What the problem is trying to achieve (e.g., minimize/maximize a certain value, optimize a process).
- Constraints that need to be respected.
- Any assumptions about the input data.

For example:



Mathematical Formulation
------------------------
If applicable, provide a mathematical representation of the Knockback Problem. You can use Sphinx's math directive for equations.

Example:

.. math::

   \max \sum_{i=1}^{n} v_i x_i \quad \text{subject to} \quad \sum_{i=1}^{n} w_i x_i \leq W

Where:

- :math:`v_i` is the value of item `i`
- :math:`w_i` is the weight of item `i`
- :math:`W` is the maximum allowed weight
- :math:`x_i` is a binary variable (1 if item `i` is selected, 0 otherwise)

Input
-----
- **List of objects**: Each object has a value and a weight.
- **Maximum weight (W)**: The total weight limit that cannot be exceeded.

You can include a sample input here:

```text
Input:
Number of objects: 4
Object 1: Value = 3, Weight = 2
Object 2: Value = 4, Weight = 3
Object 3: Value = 5, Weight = 4
Object 4: Value = 6, Weight = 5
Max Weight: 10
