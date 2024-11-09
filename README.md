# Sem08-ParallelProgramming

### Course Overview
This repository contains assignments from the **Parallel Programming** course taken in my eighth semester. The course focused on the principles of parallelism, including shared memory models, OpenMP, distributed systems, CUDA for GPU programming, and an understanding of how caches work. Each assignment explores a different aspect of parallel programming, from memory management and optimization to GPU-based computations.

### Learning Outcomes
Through this course, I developed skills in:
- Implementing and optimizing parallel algorithms for performance gains using OpenMP, CUDA, and other parallelism techniques.
- Understanding memory access patterns, including cache behavior, and how they affect performance.
- Developing applications for shared memory and distributed environments, applying concepts like barriers, threading, and block-based processing.

### Repository Structure

#### 1. Paralela_memoria_compartida_main
This directory includes implementations and tests of algorithms using shared memory techniques in C++.

   - **Barriers**: Demonstrates the use of barriers in synchronization to ensure certain stages are completed before moving to the next.
   - **Lista enlazada ordenada**: Implements a parallel, ordered linked list to test data structure management and manipulation in a multi-threaded environment.
   - **OpenMP ordenamiento**: A sorting algorithm implementation that utilizes OpenMP to perform sorting in parallel, optimizing for speed on multi-core processors.

#### 2. Paralela_matrices-main
This directory contains tests for matrix multiplication algorithms optimized for parallelism.

   - **Matrix Multiplication Tests**:
     - Implements two matrix multiplication approaches:
       - **Classic Matrix Multiplication**: Performs matrix multiplication in the standard nested loop approach.
       - **Blocked Matrix Multiplication**: Divides matrices into blocks and multiplies them to reduce cache misses, optimizing performance.
     - The program tests both methods with matrices of varying sizes to observe differences in performance.
   - **Usage**: Compile and run the program to test both multiplication approaches on different matrix sizes:
     ```bash
     g++ -o MatrixTest Paralela_matrices-main.cpp
     ./MatrixTest
     ```

#### 3. First_homework.cpp
This file contains the first homework assignment, which explores cache behavior by comparing two methods of iterating through an array. It demonstrates how cache memory optimizations can significantly impact runtime.

   - **Objective**: Explains why accessing array elements in a specific order can lead to faster execution due to cache-friendly access patterns.
   - **Usage**: Compile and run:
     ```bash
     g++ -o FirstHomework First_homework.cpp
     ./FirstHomework
     ```

#### 4. ParalelaMatrices.ipynb
This Jupyter Notebook performs matrix multiplication using two approaches:
   - **Standard Matrix Multiplication**: A basic, element-wise multiplication.
   - **CUDA Multiplication**: Executes the multiplication on the GPU using CUDA for improved performance on large matrices.

   - **Usage**: Open in Jupyter Notebook and execute each cell to observe and compare CPU vs. GPU performance.

#### 5. Paralela_cuda_mult.ipynb
This Jupyter Notebook implements matrix multiplication using CUDA with **tiling** to optimize memory access patterns on the GPU.
   - **Objective**: Demonstrates how dividing the matrix into tiles improves performance by reducing global memory accesses and leveraging shared memory.
   - **Usage**: Open in Jupyter Notebook and execute each cell to observe the optimized GPU performance with tiling.
