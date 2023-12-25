# NumberTheory

Elementary Number Theory programs (that helps me on assignments). 

[CayleyTable](#cayley-table) \
[CosetMultiplier](#coset-multiplier) \
[CyclicSubgroups](#cyclic-subgroups) \
[LagrangeTheorem](#lagranges-theorem) \
[MultiplicativeInverses](#multiplicative-inverses) \
[QuotientGroup](#quotient-group) \
[SubgroupCheck](#subgroup-check) 

---

### Makefile

To run the program, enter `make AA` while in the NumberTheory directory.

This will produce an executable named `main` using the gcc compiler and automatically run the program!

---

### Cayley Table

This program will ask you to input 2 sets of numbers and will return the corresponding Cayley Table.

### Coset Multiplier

This program will ask you to input n for integers modulo n, a set of numbers (H) for the original coset, the amount of cosets being multiplied (A), and the coefficient of each coset (C). The program will return the set of integers modulo n, the original coset, the multiplied cosets (modulo n), and the non-distinct equivalent cosets.

### Cyclic Subgroups

This program will ask you to input a set of numbers to represent a group (G) and return all cyclic subgroups of G, if they exist.

### Lagrange's Theorem

This program will ask you to input the order of group G and return all potential orders of subgroups.

### Multiplicative Inverses

This program will ask you to input n for integers modulo n and return all multiplicative inverses of n.

### Subgroup Check

This program will ask you to input a set of numbers (A) as the group along with its operation and another set of numbers (B) as the potential subgroup. The program will return whether the B is a subgroup of A. 

### Quotient Group

This program will ask you input a set of numbers (A) as a group along with its operation and another set of numbers (B) as a subgroup representative. The program will return whether A/B is a valid quotient group.