# Data Structures & Algorithm Design Exercises

A collection of implementations and exercise solutions for the Data Structures & Algorithms course at Kharazmi University.

---

## Repository Structure

```text
dsa-exercises/
├── 01-recursion/
│   └── duplicate_string/
│       └── duplicate_string.cpp    # Recursive duplicate string checker
├── .gitignore
└── README.md
```

---

## Exercises

### 01. Recursion: Duplicate String

A string $s$ is defined as **Duplicate** if:
1. Strings of length 0 are Duplicate ($\varepsilon \in \text{Duplicate}$).
2. $s$ is of the form $s_1 s_1$ (formed by repeating a root substring $s_1$).
3. If the first character of $s_1$ is removed, the remainder of $s_1$ is also Duplicate.

#### Examples:
- **Duplicate:** `ALLALL`, `HTMMTMMHTMMTMM`
- **Not Duplicate:** `ALILIALILI`, `HPOPOHPOPO`, `POP`

---

## How to Compile & Run

Using standard `g++`:

```bash
cd 01-recursion/duplicate_string
g++ -std=c++17 -O2 duplicate_string.cpp -o duplicate_string
./duplicate_string
```

Example usage:

```bash
$ ./duplicate_string
Enter a string: ALLALL
Duplicate

$ ./duplicate_string
Enter a string: POP
Not Duplicate
```

