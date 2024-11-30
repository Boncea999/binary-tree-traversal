# binary-tree-traversal
Acest proiect implementează un arbore binar ordonat și include funcții de traversare în pre-ordine, in-ordine, post-ordine și pe nivel.

## Cum să rulezi proiectul

1. Clonarea proiectului:
   ```bash
   git clone https://github.com/username/binary_tree_project.git
   ```

2. Construirea aplicației:
   - Folosind Makefile:
     ```bash
     make
     ```
   - Sau manual:
     ```bash
     gcc -o binary_tree src/binary_tree.c
     ```

3. Rularea aplicației:
   ```bash
   ./binary_tree
   ```

4. Construirea imaginii Docker:
   ```bash
   docker build -t binary_tree_app .
   ```

5. Rularea containerului Docker:
   ```bash
   docker run binary_tree_app
   ```

## CI/CD

Acest proiect folosește GitHub Actions pentru a automatiza procesul de construire și testare. Orice modificare în codul sursă va fi automat testată.