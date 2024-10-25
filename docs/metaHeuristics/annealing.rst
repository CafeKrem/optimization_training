Simulated Annealing Algorithm
=============================

Simulated Annealing is a probabilistic optimization algorithm used for finding the global optimum of a function. It is particularly useful in scenarios where the search space is large and has multiple local optima.

Overview
--------

The algorithm is inspired by the physical process of annealing in metallurgy, where a material is heated and then slowly cooled to form a crystal structure with the minimum energy state. In the context of optimization, this involves exploring the solution space and gradually refining the search towards a global optimum.

Algorithm Steps
---------------

1. **Initialization**:
    * Set an initial solution, `x`, at random.
    * Define an initial temperature, `T`.
    * Set cooling schedule parameters, such as cooling rate.

2. **Iteration**:
    * Generate a neighboring solution, `x'`, from the current solution.
    * Calculate the energy difference, `ΔE = f(x') - f(x)`.
    * If the new solution is better (i.e., `ΔE < 0`), accept `x'` as the new solution.
    * If the new solution is worse, accept `x'` with a probability proportional to the current temperature: `P(accept) = exp(-ΔE / T)`.

3. **Cooling**:
    * Gradually reduce the temperature `T` according to a predefined cooling schedule.

4. **Termination**:
    * Stop when the temperature reaches a minimum threshold or after a set number of iterations.

Pseudocode
----------

.. code-block:: python

    def simulated_annealing(f, initial_solution, initial_temperature, cooling_rate, min_temperature):
        current_solution = initial_solution
        current_temperature = initial_temperature

        while current_temperature > min_temperature:
            new_solution = generate_neighbor(current_solution)
            delta_e = f(new_solution) - f(current_solution)

            if delta_e < 0 or random.random() < exp(-delta_e / current_temperature):
                current_solution = new_solution

            current_temperature *= cooling_rate  # Update temperature

        return current_solution

Parameters
----------

- **f**: The objective function to minimize or maximize.
- **initial_solution**: The starting point in the search space.
- **initial_temperature**: The starting temperature of the system.
- **cooling_rate**: A factor between 0 and 1 used to reduce the temperature over time.
- **min_temperature**: The threshold temperature at which to stop the algorithm.

Advantages
----------

- **Global Optimization**: Unlike gradient descent, simulated annealing is less likely to get stuck in local optima.
- **Simple Implementation**: The algorithm is relatively easy to implement and tune.

Disadvantages
-------------

- **Slow Convergence**: Simulated annealing can take a long time to converge, especially if the cooling schedule is too slow.
- **Sensitivity to Parameters**: The performance is sensitive to the choice of parameters like initial temperature and cooling rate.

Applications
------------

- **Traveling Salesman Problem**: Simulated annealing is often used to find near-optimal solutions for the Traveling Salesman Problem (TSP).
- **VLSI Design**: It is used in circuit design to optimize layouts.
- **Machine Learning**: Sometimes used for hyperparameter optimization.

Conclusion
----------

Simulated Annealing is a powerful optimization technique for problems where the search space is large and complex. Though sensitive to parameter tuning, it is widely applicable and can be used effectively in many fields, from machine learning to logistics.

References
----------

- Kirkpatrick, S., Gelatt, C. D., & Vecchi, M. P. (1983). Optimization by simulated annealing. *Science*, 220(4598), 671-680.
