# Folosim o imagine de bază pentru compilare C
FROM gcc:latest

# Setăm directorul de lucru
WORKDIR /usr/src/app

# Copiem sursa în container
COPY . .

# Compilăm aplicația
RUN gcc -o binary_tree src/binary_tree.c

# Comandă de rulare
CMD ["./binary_tree"]
