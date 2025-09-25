# Laplace Jacobi Solver

## Overview
This program solves **Laplace’s equation** on a square 2-D grid using a **Jacobi iterative method**.  
It numerically models the steady-state heat distribution on a metal plate whose bottom-left corner is held at a high temperature while the other boundaries are cooler.

The algorithm repeatedly updates each inner grid point based on the average of its four neighbors until the field approaches a steady state.  
Periodic snapshots of the field can be plotted and combined into an animated `.gif` to visualize the evolution of the heat flow.

---

## Background

Laplace’s equation describes the behavior of scalar potentials (e.g., electrostatic potential, steady-state heat).  

$$\nabla^2 \phi = 0$$

This project discretizes the equation on an evenly spaced square grid and applies a Jacobi scheme:

$$\phi_{i,j}^{(n+1)} = \frac{1}{4}\left[\phi_{i+1,j}^{(n)} + \phi_{i-1,j}^{(n)} +\phi_{i,j+1}^{(n)} + \phi_{i,j-1}^{(n)}\right]$$

Boundary conditions:
- Bottom-left corner fixed at a user-defined temperature (default `100.0`).
- Values decrease linearly to zero toward the other corners.
- All other borders are zero.
- Interior initialized to `0.5` by default.

---

## Repository Layout
We implement threes version of the implementaions and each have the following layout.
```bash 
.
├── build
│   ├── debug
│   └── release
├── data
│   ├── 00000.dat
│   ├── 00025.dat
│   ├── 00050.dat
│   ├── 00075.dat
│   ├── gif.gp
│   ├── jacobi.gif
│   └── run.sh
├── include
│   ├── BoundCond.hpp
│   ├── CMesh.hpp
│   └── CSolver.hpp
├── main.cpp
├── Makefile
└── run.sh

6 directories, 13 files
``` 

To compile the program, 
```bash 
make clean 
make 
``` 

To run the program, 
```bash
./run.sh
cd data
./run.sh
```
